
#include <stdlib.h>
#include <GL/glx.h>
#include <X11/Xlib.h>
#include <axl.glfl/Dummy.hpp>

namespace axl {
namespace glfl {

typedef struct {
	Display *display;
	Window window;
	GLXContext context;
} DummyData;

Dummy::Dummy(bool init)
{
	reserved = (void*)new DummyData;
	DummyData* data = ((DummyData*)this->reserved);
	data->display = NULL;
	data->window = 0;
	data->context = NULL;
	if(init) this->init();
}
Dummy::~Dummy()
{
	this->destroy();
	delete ((DummyData*)this->reserved);
	this->reserved = (void*)0;
}
Dummy::InitError Dummy::init()
{
	if(!this->reserved) this->reserved = (void*)new DummyData;
	DummyData* data = ((DummyData*)this->reserved);
	bool init = false;
	if(init == true && data->display && data->window && data->context) return InitError::NONE;
	Display                 *dpy;
	Window                  root;
	GLint                   att[] = { GLX_RGBA, GLX_DEPTH_SIZE, 24, GLX_DOUBLEBUFFER, None };
	XVisualInfo             *vi;
	Colormap                cmap;
	XSetWindowAttributes    swa;
	Window                  win;
	GLXContext             	glc;
	data->display = NULL;
	data->window = 0;
	data->context = NULL;

	dpy = XOpenDisplay(NULL);
	if(!dpy) return InitError::DISPLAY;
	root = DefaultRootWindow(dpy);
	vi = glXChooseVisual(dpy, 0, att);
	if(!vi) return InitError::CONFIG;
	cmap = XCreateColormap(dpy, root, vi->visual, AllocNone);
	if(!cmap) return InitError::CONFIG;
	swa.colormap = cmap;
	swa.event_mask = ExposureMask | KeyPressMask;
	win = XCreateWindow(dpy, root, 0, 0, 100, 100, 0, vi->depth, InputOutput, vi->visual, CWColormap | CWEventMask, &swa);
	if(!win) return InitError::WINDOW;
	// XMapWindow(dpy, win);
	glc = glXCreateContext(dpy, vi, NULL, GL_TRUE);
	if(!glc) return InitError::CONTEXT;
	data->display = dpy;
	data->window = win;
	data->context = glc;
	init = true;
	return InitError::NONE;
}
bool Dummy::isInitialized() const
{
	return this->reserved && ((DummyData*)this->reserved)->display && ((DummyData*)this->reserved)->window && ((DummyData*)this->reserved)->context;
}
bool Dummy::isCurrent() const
{
	return this->reserved && this->isInitialized() && ((DummyData*)this->reserved)->context && ((DummyData*)this->reserved)->context == glXGetCurrentContext();
}
bool Dummy::makeCurrent() const
{
	return this->reserved && this->isInitialized() && True == glXMakeCurrent(((DummyData*)this->reserved)->display, ((DummyData*)this->reserved)->window, ((DummyData*)this->reserved)->context);
}
bool Dummy::clearCurrent()
{
	return True == glXMakeCurrent(XOpenDisplay(NULL), None, NULL);
}
void Dummy::destroy()
{
	if(!this->reserved) return;
	DummyData* data = ((DummyData*)this->reserved);
	if(data->display && data->window && data->context)
	{
		glXMakeCurrent(data->display, None, NULL);
		glXDestroyContext(data->display, data->context);
	}
	if(data->window) XDestroyWindow(data->display, data->window);
	data->display = NULL;
	data->window = 0;
	data->context = NULL;
}

Dummy GLOBAL_DUMMY(true);

} // namespace axl::glfl
} // namespace axl