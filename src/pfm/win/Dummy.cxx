
#include <cstdlib>
#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>
#include <axl.glfl/Dummy.hpp>

namespace axl {
namespace glfl {

typedef struct {
	HWND hwnd;
	HDC hdc;	
	HGLRC context;
} DummyData;

Dummy::Dummy(bool init)
{
	reserved = (void*)calloc(1, sizeof(DummyData));
	if(init) this->init();
}
Dummy::~Dummy()
{
	this->destroy();
	free(this->reserved);
	this->reserved = (void*)0;
}
Dummy::InitError Dummy::init()
{
	const static char* DUMMY_CLASSNAME = "ALXGLW_DUMMY_WINDOW_CLASS";
	if(!this->reserved) this->reserved = (void*)calloc(1, sizeof(DummyData));
	DummyData* data = ((DummyData*)this->reserved);
	BOOL init = FALSE;
	if(init == TRUE && data->hwnd && data->hdc && data->context) return IERR_NONE;
	HINSTANCE hinst = GetModuleHandle(0);
	static BOOL registered = FALSE;
	if(!registered)
	{
		WNDCLASSA wc;
		ZeroMemory(&wc, sizeof(WNDCLASSA));
		wc.lpszClassName = DUMMY_CLASSNAME;
		wc.style = CS_OWNDC;
		wc.hInstance = hinst;
		wc.lpfnWndProc = DefWindowProc;
		wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
		registered = (0 != RegisterClassA(&wc));
	}
	if(!registered) return IERR_WINDOW_CLASS;
	if(!data->hwnd)
	{
		data->hwnd = CreateWindowA(DUMMY_CLASSNAME,"",0,0,0,0,0,NULL,NULL, hinst, 0);
		if(!data->hwnd) return IERR_WINDOW;
		data->hdc = GetDC(data->hwnd);
	}
	PIXELFORMATDESCRIPTOR pfd;
	ZeroMemory(&pfd, sizeof(PIXELFORMATDESCRIPTOR));
	pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
	pfd.nVersion = 1;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW|PFD_SUPPORT_OPENGL|PFD_DOUBLEBUFFER;
	pfd.cColorBits = 32;
	pfd.cDepthBits = 24;
	pfd.cStencilBits = 8;
	if(!SetPixelFormat(data->hdc, ChoosePixelFormat(data->hdc, &pfd), &pfd)) return IERR_PIXEL_FORMAT;
	if(!data->context) wglDeleteContext(data->context);
	data->context = wglCreateContext(data->hdc);
	if(!data->context) return IERR_CONTEXT;
	init = TRUE;
	return IERR_NONE;
}
bool Dummy::isInitialized() const
{
	return this->reserved && ((DummyData*)this->reserved)->hwnd && ((DummyData*)this->reserved)->hdc && ((DummyData*)this->reserved)->context;
}
bool Dummy::isCurrent() const
{
	return this->reserved && ((DummyData*)this->reserved)->context && ((DummyData*)this->reserved)->context == wglGetCurrentContext();
}
bool Dummy::makeCurrent() const
{
	if(!this->reserved) return false;
	return wglMakeCurrent(((DummyData*)this->reserved)->hdc, ((DummyData*)this->reserved)->context) == TRUE;
}
bool Dummy::clearCurrent()
{
	return wglMakeCurrent(NULL, NULL) == TRUE;
}
void Dummy::destroy()
{
	if(!this->reserved) return;
	DummyData* data = ((DummyData*)this->reserved);
	if(data->hwnd && data->hdc && data->context)
	{
		wglMakeCurrent(data->hdc, NULL);
		wglDeleteContext(data->context);
		ReleaseDC(data->hwnd, data->hdc);
	}
	if(data->hwnd) DestroyWindow(data->hwnd);
	data->hwnd = NULL;
	data->hdc = NULL;
	data->context = NULL;
}

Dummy GLOBAL_DUMMY(true);

} // namespace axl::glfl
} // namespace axl