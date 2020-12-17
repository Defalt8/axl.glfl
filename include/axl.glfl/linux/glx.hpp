#pragma once
#include "../lib.hpp"
#include "../gl.hpp"
#include <X11/Xlib.h>
#include <X11/Xutil.h>

namespace axl {
namespace glfl {
namespace GLX {

extern "C" {

const static char*const GLX_EXTENSION_NAME = "GLX";

const bool GLX_VERSION_1_1 = true;
const bool GLX_VERSION_1_2 = true;

// Tokens for glXChooseVisual and glXGetConfig:
AXLGLFLCONSTMODIFIER GLconstant GLX_USE_GL = 1;
AXLGLFLCONSTMODIFIER GLconstant GLX_BUFFER_SIZE = 2;
AXLGLFLCONSTMODIFIER GLconstant GLX_LEVEL = 3;
AXLGLFLCONSTMODIFIER GLconstant GLX_RGBA = 4;
AXLGLFLCONSTMODIFIER GLconstant GLX_DOUBLEBUFFER = 5;
AXLGLFLCONSTMODIFIER GLconstant GLX_STEREO = 6;
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX_BUFFERS = 7;
AXLGLFLCONSTMODIFIER GLconstant GLX_RED_SIZE = 8;
AXLGLFLCONSTMODIFIER GLconstant GLX_GREEN_SIZE = 9;
AXLGLFLCONSTMODIFIER GLconstant GLX_BLUE_SIZE = 10;
AXLGLFLCONSTMODIFIER GLconstant GLX_ALPHA_SIZE = 11;
AXLGLFLCONSTMODIFIER GLconstant GLX_DEPTH_SIZE = 12;
AXLGLFLCONSTMODIFIER GLconstant GLX_STENCIL_SIZE = 13;
AXLGLFLCONSTMODIFIER GLconstant GLX_ACCUM_RED_SIZE = 14;
AXLGLFLCONSTMODIFIER GLconstant GLX_ACCUM_GREEN_SIZE = 15;
AXLGLFLCONSTMODIFIER GLconstant GLX_ACCUM_BLUE_SIZE = 16;
AXLGLFLCONSTMODIFIER GLconstant GLX_ACCUM_ALPHA_SIZE = 17;

// Error codes returned by glXGetConfig:
AXLGLFLCONSTMODIFIER GLconstant GLX_BAD_SCREEN = 1;
AXLGLFLCONSTMODIFIER GLconstant GLX_BAD_ATTRIBUTE = 2;
AXLGLFLCONSTMODIFIER GLconstant GLX_NO_EXTENSION = 3;
AXLGLFLCONSTMODIFIER GLconstant GLX_BAD_VISUAL = 4;
AXLGLFLCONSTMODIFIER GLconstant GLX_BAD_CONTEXT = 5;
AXLGLFLCONSTMODIFIER GLconstant GLX_BAD_VALUE = 6;
AXLGLFLCONSTMODIFIER GLconstant GLX_BAD_ENUM = 7;

// GLX 1.1 and later:
AXLGLFLCONSTMODIFIER GLconstant GLX_VENDOR = 1;
AXLGLFLCONSTMODIFIER GLconstant GLX_VERSION = 2;
AXLGLFLCONSTMODIFIER GLconstant GLX_EXTENSIONS = 3;

///////////////////////////////////////////
typedef struct __GLXcontextRec *GLXContext;
typedef XID GLXPixmap;
typedef XID GLXDrawable;
typedef struct __GLXFBConfigRec *GLXFBConfig;
typedef XID GLXFBConfigID;
typedef XID GLXContextID;
typedef XID GLXWindow;
typedef XID GLXPbuffer;

/*
 * Events.
 * __GLX_NUMBER_EVENTS is set to 17 to account for the BufferClobberSGIX
 *  event - this helps initialization if the server supports the pbuffer
 *  extension and the client doesn't.
*/
AXLGLFLCONSTMODIFIER GLconstant GLX_PbufferClobber = 0;
AXLGLFLCONSTMODIFIER GLconstant GLX_BufferSwapComplete = 1;
AXLGLFLCONSTMODIFIER GLconstant __GLX_NUMBER_EVENTS = 17;
extern XVisualInfo* glXChooseVisual( Display *dpy, int screen, int *attribList );
extern GLXContext glXCreateContext( Display *dpy, XVisualInfo *vis, GLXContext shareList, Bool direct );
extern void glXDestroyContext( Display *dpy, GLXContext ctx );
extern Bool glXMakeCurrent( Display *dpy, GLXDrawable drawable, GLXContext ctx);
extern void glXCopyContext( Display *dpy, GLXContext src, GLXContext dst, unsigned long mask );
extern void glXSwapBuffers( Display *dpy, GLXDrawable drawable );
extern GLXPixmap glXCreateGLXPixmap( Display *dpy, XVisualInfo *visual, Pixmap pixmap );
extern void glXDestroyGLXPixmap( Display *dpy, GLXPixmap pixmap );
extern Bool glXQueryExtension( Display *dpy, int *errorb, int *event );
extern Bool glXQueryVersion( Display *dpy, int *maj, int *min );
extern Bool glXIsDirect( Display *dpy, GLXContext ctx );
extern int glXGetConfig( Display *dpy, XVisualInfo *visual, int attrib, int *value );
extern GLXContext glXGetCurrentContext( void );
extern GLXDrawable glXGetCurrentDrawable( void );
extern void glXWaitGL( void );
extern void glXWaitX( void );
extern void glXUseXFont( Font font, int first, int count, int list );

// GLX 1.1 and later
extern const char *glXQueryExtensionsString( Display *dpy, int screen );
extern const char *glXQueryServerString( Display *dpy, int screen, int name );
extern const char *glXGetClientString( Display *dpy, int name );

// GLX 1.2 and later
extern Display *glXGetCurrentDisplay( void );

// GLX_NV_vertex_array_range
extern void *glXAllocateMemoryNV(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
extern void glXFreeMemoryNV(GLvoid *pointer);
AXLGLFLAPI bool GLX_NV_vertex_array_range;
//^ GLX_NV_vertex_array_range

// GLX_ARB_render_texture
extern Bool glXBindTexImageARB(Display *dpy, GLXPbuffer pbuffer, int buffer);
extern Bool glXReleaseTexImageARB(Display *dpy, GLXPbuffer pbuffer, int buffer);
extern Bool glXDrawableAttribARB(Display *dpy, GLXDrawable draw, const int *attribList);
AXLGLFLAPI bool GLX_ARB_render_texture;
//^ GLX_ARB_render_texture

// GLX_MESA_swap_frame_usage
extern int glXGetFrameUsageMESA(Display *dpy, GLXDrawable drawable, float *usage);
extern int glXBeginFrameTrackingMESA(Display *dpy, GLXDrawable drawable);
extern int glXEndFrameTrackingMESA(Display *dpy, GLXDrawable drawable);
extern int glXQueryFrameTrackingMESA(Display *dpy, GLXDrawable drawable, int64_t *swapCount, int64_t *missedFrames, float *lastMissedUsage);
AXLGLFLAPI bool GLX_MESA_swap_frame_usage;
//^ GLX_MESA_swap_frame_usage

typedef struct {
    int event_type;		// GLX_DAMAGED or GLX_SAVED
    int draw_type;		// GLX_WINDOW or GLX_PBUFFER
    unsigned long serial;	// # of last request processed by server
    Bool send_event;		// true if this came for SendEvent request
    Display *display;		// display the event was read from
    GLXDrawable drawable;	// XID of Drawable
    unsigned int buffer_mask;	// mask indicating which buffers are affected
    unsigned int aux_buffer;	// which aux buffer was affected
    int x, y;
    int width, height;
    int count;			// if nonzero, at least this many more
} GLXPbufferClobberEvent;

typedef struct {
    int type;
    unsigned long serial;	// # of last request processed by server
    Bool send_event;		// true if this came from a SendEvent request
    Display *display;		// Display the event was read from
    GLXDrawable drawable;	// drawable on which event was requested in event mask
    int event_type;
    int64_t ust;
    int64_t msc;
    int64_t sbc;
} GLXBufferSwapComplete;

typedef union __GLXEvent {
    GLXPbufferClobberEvent glxpbufferclobber;
    GLXBufferSwapComplete glxbufferswapcomplete;
    long pad[24];
} GLXEvent;

} // extern "C"

} // axl::glfl::GLX
} // axl::glfl
} // axl
