#pragma once
#include "../lib.hpp"
#include "glx.hpp"

namespace axl {
namespace glfl {
namespace GLX {

AXLGLFLCONSTMODIFIER GLconstant GLX_GLXEXT_VERSION = 20200929;

// GLX_VERSION_1_3
AXLGLFLCONSTMODIFIER GLconstant GLX_CONFIG_CAVEAT = 0x20;
AXLGLFLCONSTMODIFIER GLconstant GLX_DONT_CARE = 0xFFFFFFFF;
AXLGLFLCONSTMODIFIER GLconstant GLX_X_VISUAL_TYPE = 0x22;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_TYPE = 0x23;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_INDEX_VALUE = 0x24;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_RED_VALUE = 0x25;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_GREEN_VALUE = 0x26;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_BLUE_VALUE = 0x27;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_ALPHA_VALUE = 0x28;
AXLGLFLCONSTMODIFIER GLconstant GLX_WINDOW_BIT = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_PIXMAP_BIT = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_PBUFFER_BIT = 0x00000004;
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX_BUFFERS_BIT = 0x00000010;
AXLGLFLCONSTMODIFIER GLconstant GLX_FRONT_LEFT_BUFFER_BIT = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_FRONT_RIGHT_BUFFER_BIT = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_BACK_LEFT_BUFFER_BIT = 0x00000004;
AXLGLFLCONSTMODIFIER GLconstant GLX_BACK_RIGHT_BUFFER_BIT = 0x00000008;
AXLGLFLCONSTMODIFIER GLconstant GLX_DEPTH_BUFFER_BIT = 0x00000020;
AXLGLFLCONSTMODIFIER GLconstant GLX_STENCIL_BUFFER_BIT = 0x00000040;
AXLGLFLCONSTMODIFIER GLconstant GLX_ACCUM_BUFFER_BIT = 0x00000080;
AXLGLFLCONSTMODIFIER GLconstant GLX_NONE = 0x8000;
AXLGLFLCONSTMODIFIER GLconstant GLX_SLOW_CONFIG = 0x8001;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRUE_COLOR = 0x8002;
AXLGLFLCONSTMODIFIER GLconstant GLX_DIRECT_COLOR = 0x8003;
AXLGLFLCONSTMODIFIER GLconstant GLX_PSEUDO_COLOR = 0x8004;
AXLGLFLCONSTMODIFIER GLconstant GLX_STATIC_COLOR = 0x8005;
AXLGLFLCONSTMODIFIER GLconstant GLX_GRAY_SCALE = 0x8006;
AXLGLFLCONSTMODIFIER GLconstant GLX_STATIC_GRAY = 0x8007;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_RGB = 0x8008;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_INDEX = 0x8009;
AXLGLFLCONSTMODIFIER GLconstant GLX_VISUAL_ID = 0x800B;
AXLGLFLCONSTMODIFIER GLconstant GLX_SCREEN = 0x800C;
AXLGLFLCONSTMODIFIER GLconstant GLX_NON_CONFORMANT_CONFIG = 0x800D;
AXLGLFLCONSTMODIFIER GLconstant GLX_DRAWABLE_TYPE = 0x8010;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDER_TYPE = 0x8011;
AXLGLFLCONSTMODIFIER GLconstant GLX_X_RENDERABLE = 0x8012;
AXLGLFLCONSTMODIFIER GLconstant GLX_FBCONFIG_ID = 0x8013;
AXLGLFLCONSTMODIFIER GLconstant GLX_RGBA_TYPE = 0x8014;
AXLGLFLCONSTMODIFIER GLconstant GLX_COLOR_INDEX_TYPE = 0x8015;
AXLGLFLCONSTMODIFIER GLconstant GLX_MAX_PBUFFER_WIDTH = 0x8016;
AXLGLFLCONSTMODIFIER GLconstant GLX_MAX_PBUFFER_HEIGHT = 0x8017;
AXLGLFLCONSTMODIFIER GLconstant GLX_MAX_PBUFFER_PIXELS = 0x8018;
AXLGLFLCONSTMODIFIER GLconstant GLX_PRESERVED_CONTENTS = 0x801B;
AXLGLFLCONSTMODIFIER GLconstant GLX_LARGEST_PBUFFER = 0x801C;
AXLGLFLCONSTMODIFIER GLconstant GLX_WIDTH = 0x801D;
AXLGLFLCONSTMODIFIER GLconstant GLX_HEIGHT = 0x801E;
AXLGLFLCONSTMODIFIER GLconstant GLX_EVENT_MASK = 0x801F;
AXLGLFLCONSTMODIFIER GLconstant GLX_DAMAGED = 0x8020;
AXLGLFLCONSTMODIFIER GLconstant GLX_SAVED = 0x8021;
AXLGLFLCONSTMODIFIER GLconstant GLX_WINDOW = 0x8022;
AXLGLFLCONSTMODIFIER GLconstant GLX_PBUFFER = 0x8023;
AXLGLFLCONSTMODIFIER GLconstant GLX_PBUFFER_HEIGHT = 0x8040;
AXLGLFLCONSTMODIFIER GLconstant GLX_PBUFFER_WIDTH = 0x8041;
AXLGLFLCONSTMODIFIER GLconstant GLX_RGBA_BIT = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_COLOR_INDEX_BIT = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_PBUFFER_CLOBBER_MASK = 0x08000000;
namespace PFN {
typedef GLXFBConfig *( *glXGetFBConfigs) (Display *dpy, int screen, int *nelements);
typedef GLXFBConfig *( *glXChooseFBConfig) (Display *dpy, int screen, const int *attrib_list, int *nelements);
typedef int ( *glXGetFBConfigAttrib) (Display *dpy, GLXFBConfig config, int attribute, int *value);
typedef XVisualInfo *( *glXGetVisualFromFBConfig) (Display *dpy, GLXFBConfig config);
typedef GLXWindow ( *glXCreateWindow) (Display *dpy, GLXFBConfig config, Window win, const int *attrib_list);
typedef void ( *glXDestroyWindow) (Display *dpy, GLXWindow win);
typedef GLXPixmap ( *glXCreatePixmap) (Display *dpy, GLXFBConfig config, Pixmap pixmap, const int *attrib_list);
typedef void ( *glXDestroyPixmap) (Display *dpy, GLXPixmap pixmap);
typedef GLXPbuffer ( *glXCreatePbuffer) (Display *dpy, GLXFBConfig config, const int *attrib_list);
typedef void ( *glXDestroyPbuffer) (Display *dpy, GLXPbuffer pbuf);
typedef void ( *glXQueryDrawable) (Display *dpy, GLXDrawable draw, int attribute, unsigned int *value);
typedef GLXContext ( *glXCreateNewContext) (Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
typedef Bool ( *glXMakeContextCurrent) (Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef GLXDrawable ( *glXGetCurrentReadDrawable) (void);
typedef int ( *glXQueryContext) (Display *dpy, GLXContext ctx, int attribute, int *value);
typedef void ( *glXSelectEvent) (Display *dpy, GLXDrawable draw, unsigned long event_mask);
typedef void ( *glXGetSelectedEvent) (Display *dpy, GLXDrawable draw, unsigned long *event_mask);
}
AXLGLFLAPI PFN::glXGetFBConfigs glXGetFBConfigs;
AXLGLFLAPI PFN::glXChooseFBConfig glXChooseFBConfig;
AXLGLFLAPI PFN::glXGetFBConfigAttrib glXGetFBConfigAttrib;
AXLGLFLAPI PFN::glXGetVisualFromFBConfig glXGetVisualFromFBConfig;
AXLGLFLAPI PFN::glXCreateWindow glXCreateWindow;
AXLGLFLAPI PFN::glXDestroyWindow glXDestroyWindow;
AXLGLFLAPI PFN::glXCreatePixmap glXCreatePixmap;
AXLGLFLAPI PFN::glXDestroyPixmap glXDestroyPixmap;
AXLGLFLAPI PFN::glXCreatePbuffer glXCreatePbuffer;
AXLGLFLAPI PFN::glXDestroyPbuffer glXDestroyPbuffer;
AXLGLFLAPI PFN::glXQueryDrawable glXQueryDrawable;
AXLGLFLAPI PFN::glXCreateNewContext glXCreateNewContext;
AXLGLFLAPI PFN::glXMakeContextCurrent glXMakeContextCurrent;
AXLGLFLAPI PFN::glXGetCurrentReadDrawable glXGetCurrentReadDrawable;
AXLGLFLAPI PFN::glXQueryContext glXQueryContext;
AXLGLFLAPI PFN::glXSelectEvent glXSelectEvent;
AXLGLFLAPI PFN::glXGetSelectedEvent glXGetSelectedEvent;
AXLGLFLAPI const bool& GLX_VERSION_1_3;
//^ GLX_VERSION_1_3

// GLX_VERSION_1_4
AXLGLFLCONSTMODIFIER GLconstant GLX_SAMPLE_BUFFERS = 0x186a0; // 100000
AXLGLFLCONSTMODIFIER GLconstant GLX_SAMPLES = 0x186a1; // 100001
typedef void ( *__GLXextFuncPtr)(void);
namespace PFN {
typedef __GLXextFuncPtr ( *glXGetProcAddress) (const GLubyte *procName);
}
AXLGLFLAPI PFN::glXGetProcAddress glXGetProcAddress;
AXLGLFLAPI const bool& GLX_VERSION_1_4;
//^ GLX_VERSION_1_4

// GLX_ARB_context_flush_control
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_RELEASE_BEHAVIOR_ARB = 0x2097;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB = 0;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB = 0x2098;
AXLGLFLAPI const bool& GLX_ARB_context_flush_control;
//^ GLX_ARB_context_flush_control

// GLX_ARB_create_context
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_DEBUG_BIT_ARB = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_MAJOR_VERSION_ARB = 0x2091;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_MINOR_VERSION_ARB = 0x2092;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_FLAGS_ARB = 0x2094;
namespace PFN {
typedef GLXContext ( *glXCreateContextAttribsARB) (Display *dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int *attrib_list);
}
AXLGLFLAPI PFN::glXCreateContextAttribsARB glXCreateContextAttribsARB;
AXLGLFLAPI const bool& GLX_ARB_create_context;
//^ GLX_ARB_create_context

// GLX_ARB_create_context_no_error
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_OPENGL_NO_ERROR_ARB = 0x31B3;
AXLGLFLAPI const bool& GLX_ARB_create_context_no_error;
//^ GLX_ARB_create_context_no_error

// GLX_ARB_create_context_profile
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_CORE_PROFILE_BIT_ARB = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_PROFILE_MASK_ARB = 0x9126;
AXLGLFLAPI const bool& GLX_ARB_create_context_profile;
//^ GLX_ARB_create_context_profile

// GLX_ARB_create_context_robustness
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB = 0x00000004;
AXLGLFLCONSTMODIFIER GLconstant GLX_LOSE_CONTEXT_ON_RESET_ARB = 0x8252;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB = 0x8256;
AXLGLFLCONSTMODIFIER GLconstant GLX_NO_RESET_NOTIFICATION_ARB = 0x8261;
AXLGLFLAPI const bool& GLX_ARB_create_context_robustness;
//^ GLX_ARB_create_context_robustness

// GLX_ARB_fbconfig_float
AXLGLFLCONSTMODIFIER GLconstant GLX_RGBA_FLOAT_TYPE_ARB = 0x20B9;
AXLGLFLCONSTMODIFIER GLconstant GLX_RGBA_FLOAT_BIT_ARB = 0x00000004;
AXLGLFLAPI const bool& GLX_ARB_fbconfig_float;
//^ GLX_ARB_fbconfig_float

// GLX_ARB_framebuffer_sRGB
AXLGLFLCONSTMODIFIER GLconstant GLX_FRAMEBUFFER_SRGB_CAPABLE_ARB = 0x20B2;
AXLGLFLAPI const bool& GLX_ARB_framebuffer_sRGB;
//^ GLX_ARB_framebuffer_sRGB

// GLX_ARB_get_proc_address
namespace PFN {
typedef __GLXextFuncPtr ( *glXGetProcAddressARB) (const GLubyte *procName);
}
AXLGLFLAPI PFN::glXGetProcAddressARB glXGetProcAddressARB;
AXLGLFLAPI const bool& GLX_ARB_get_proc_address;
//^ GLX_ARB_get_proc_address

// GLX_ARB_multisample
AXLGLFLCONSTMODIFIER GLconstant GLX_SAMPLE_BUFFERS_ARB = 100000;
AXLGLFLCONSTMODIFIER GLconstant GLX_SAMPLES_ARB = 100001;
AXLGLFLAPI const bool& GLX_ARB_multisample;
//^ GLX_ARB_multisample

// GLX_ARB_robustness_application_isolation
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_RESET_ISOLATION_BIT_ARB = 0x00000008;
AXLGLFLAPI const bool& GLX_ARB_robustness_application_isolation;
//^ GLX_ARB_robustness_application_isolation

// GLX_ARB_robustness_share_group_isolation
AXLGLFLAPI const bool& GLX_ARB_robustness_share_group_isolation;
//^ GLX_ARB_robustness_share_group_isolation


// GLX_ARB_vertex_buffer_object
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_ALLOW_BUFFER_BYTE_ORDER_MISMATCH_ARB = 0x2095;
AXLGLFLAPI const bool& GLX_ARB_vertex_buffer_object;
//^ GLX_ARB_vertex_buffer_object

// GLX_3DFX_multisample
AXLGLFLCONSTMODIFIER GLconstant GLX_SAMPLE_BUFFERS_3DFX = 0x8050;
AXLGLFLCONSTMODIFIER GLconstant GLX_SAMPLES_3DFX = 0x8051;
AXLGLFLAPI const bool& GLX_3DFX_multisample;
//^ GLX_3DFX_multisample

// GLX_AMD_gpu_association
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_VENDOR_AMD = 0x1F00;
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_RENDERER_STRING_AMD = 0x1F01;
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_OPENGL_VERSION_STRING_AMD = 0x1F02;
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_FASTEST_TARGET_GPUS_AMD = 0x21A2;
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_RAM_AMD = 0x21A3;
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_CLOCK_AMD = 0x21A4;
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_NUM_PIPES_AMD = 0x21A5;
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_NUM_SIMD_AMD = 0x21A6;
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_NUM_RB_AMD = 0x21A7;
AXLGLFLCONSTMODIFIER GLconstant GLX_GPU_NUM_SPI_AMD = 0x21A8;
namespace PFN {
typedef unsigned int ( *glXGetGPUIDsAMD) (unsigned int maxCount, unsigned int *ids);
typedef int ( *glXGetGPUInfoAMD) (unsigned int id, int property, GLenum dataType, unsigned int size, void *data);
typedef unsigned int ( *glXGetContextGPUIDAMD) (GLXContext ctx);
typedef GLXContext ( *glXCreateAssociatedContextAMD) (unsigned int id, GLXContext share_list);
typedef GLXContext ( *glXCreateAssociatedContextAttribsAMD) (unsigned int id, GLXContext share_context, const int *attribList);
typedef Bool ( *glXDeleteAssociatedContextAMD) (GLXContext ctx);
typedef Bool ( *glXMakeAssociatedContextCurrentAMD) (GLXContext ctx);
typedef GLXContext ( *glXGetCurrentAssociatedContextAMD) (void);
typedef void ( *glXBlitContextFramebufferAMD) (GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
}
AXLGLFLAPI PFN::glXGetGPUIDsAMD glXGetGPUIDsAMD;
AXLGLFLAPI PFN::glXGetGPUInfoAMD glXGetGPUInfoAMD;
AXLGLFLAPI PFN::glXGetContextGPUIDAMD glXGetContextGPUIDAMD;
AXLGLFLAPI PFN::glXCreateAssociatedContextAMD glXCreateAssociatedContextAMD;
AXLGLFLAPI PFN::glXCreateAssociatedContextAttribsAMD glXCreateAssociatedContextAttribsAMD;
AXLGLFLAPI PFN::glXDeleteAssociatedContextAMD glXDeleteAssociatedContextAMD;
AXLGLFLAPI PFN::glXMakeAssociatedContextCurrentAMD glXMakeAssociatedContextCurrentAMD;
AXLGLFLAPI PFN::glXGetCurrentAssociatedContextAMD glXGetCurrentAssociatedContextAMD;
AXLGLFLAPI PFN::glXBlitContextFramebufferAMD glXBlitContextFramebufferAMD;
AXLGLFLAPI const bool& GLX_AMD_gpu_association;
//^ GLX_AMD_gpu_association

// GLX_EXT_buffer_age
AXLGLFLCONSTMODIFIER GLconstant GLX_BACK_BUFFER_AGE_EXT = 0x20F4;
AXLGLFLAPI const bool& GLX_EXT_buffer_age;
//^ GLX_EXT_buffer_age

// GLX_EXT_context_priority
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_PRIORITY_LEVEL_EXT = 0x3100;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_PRIORITY_HIGH_EXT = 0x3101;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_PRIORITY_MEDIUM_EXT = 0x3102;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_PRIORITY_LOW_EXT = 0x3103;
AXLGLFLAPI const bool& GLX_EXT_context_priority;
//^ GLX_EXT_context_priority

// GLX_EXT_create_context_es2_profile
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_ES2_PROFILE_BIT_EXT = 0x00000004;
AXLGLFLAPI const bool& GLX_EXT_create_context_es2_profile;
//^ GLX_EXT_create_context_es2_profile

// GLX_EXT_create_context_es_profile
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_ES_PROFILE_BIT_EXT = 0x00000004;
AXLGLFLAPI const bool& GLX_EXT_create_context_es_profile;
//^ GLX_EXT_create_context_es_profile

// GLX_EXT_fbconfig_packed_float
AXLGLFLCONSTMODIFIER GLconstant GLX_RGBA_UNSIGNED_FLOAT_TYPE_EXT = 0x20B1;
AXLGLFLCONSTMODIFIER GLconstant GLX_RGBA_UNSIGNED_FLOAT_BIT_EXT = 0x00000008;
AXLGLFLAPI const bool& GLX_EXT_fbconfig_packed_float;
//^ GLX_EXT_fbconfig_packed_float

// GLX_EXT_framebuffer_sRGB
AXLGLFLCONSTMODIFIER GLconstant GLX_FRAMEBUFFER_SRGB_CAPABLE_EXT = 0x20B2;
AXLGLFLAPI const bool& GLX_EXT_framebuffer_sRGB;
//^ GLX_EXT_framebuffer_sRGB

// GLX_EXT_get_drawable_type
AXLGLFLAPI const bool& GLX_EXT_get_drawable_type;
//^ GLX_EXT_get_drawable_type


// GLX_EXT_import_context
AXLGLFLCONSTMODIFIER GLconstant GLX_SHARE_CONTEXT_EXT = 0x800A;
AXLGLFLCONSTMODIFIER GLconstant GLX_VISUAL_ID_EXT = 0x800B;
AXLGLFLCONSTMODIFIER GLconstant GLX_SCREEN_EXT = 0x800C;
namespace PFN {
typedef Display *( *glXGetCurrentDisplayEXT) (void);
typedef int ( *glXQueryContextInfoEXT) (Display *dpy, GLXContext context, int attribute, int *value);
typedef GLXContextID ( *glXGetContextIDEXT) (const GLXContext context);
typedef GLXContext ( *glXImportContextEXT) (Display *dpy, GLXContextID contextID);
typedef void ( *glXFreeContextEXT) (Display *dpy, GLXContext context);
}
AXLGLFLAPI PFN::glXGetCurrentDisplayEXT glXGetCurrentDisplayEXT;
AXLGLFLAPI PFN::glXQueryContextInfoEXT glXQueryContextInfoEXT;
AXLGLFLAPI PFN::glXGetContextIDEXT glXGetContextIDEXT;
AXLGLFLAPI PFN::glXImportContextEXT glXImportContextEXT;
AXLGLFLAPI PFN::glXFreeContextEXT glXFreeContextEXT;
AXLGLFLAPI const bool& GLX_EXT_import_context;
//^ GLX_EXT_import_context

// GLX_EXT_libglvnd
AXLGLFLCONSTMODIFIER GLconstant GLX_VENDOR_NAMES_EXT = 0x20F6;
AXLGLFLAPI const bool& GLX_EXT_libglvnd;
//^ GLX_EXT_libglvnd

// GLX_EXT_no_config_context
AXLGLFLAPI const bool& GLX_EXT_no_config_context;
//^ GLX_EXT_no_config_context

// GLX_EXT_stereo_tree
typedef struct {
    int type;
    unsigned long serial;
    Bool send_event;
    Display *display;
    int extension;
    int evtype;
    GLXDrawable window;
    Bool stereo_tree;
} GLXStereoNotifyEventEXT;
AXLGLFLCONSTMODIFIER GLconstant GLX_STEREO_TREE_EXT = 0x20F5;
AXLGLFLCONSTMODIFIER GLconstant GLX_STEREO_NOTIFY_MASK_EXT = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_STEREO_NOTIFY_EXT = 0x00000000;
AXLGLFLAPI const bool& GLX_EXT_stereo_tree;
//^ GLX_EXT_stereo_tree

// GLX_EXT_swap_control
AXLGLFLCONSTMODIFIER GLconstant GLX_SWAP_INTERVAL_EXT = 0x20F1;
AXLGLFLCONSTMODIFIER GLconstant GLX_MAX_SWAP_INTERVAL_EXT = 0x20F2;
namespace PFN {
typedef void ( *glXSwapIntervalEXT) (Display *dpy, GLXDrawable drawable, int interval);
}
AXLGLFLAPI PFN::glXSwapIntervalEXT glXSwapIntervalEXT;
AXLGLFLAPI const bool& GLX_EXT_swap_control;
//^ GLX_EXT_swap_control

// GLX_EXT_swap_control_tear
AXLGLFLCONSTMODIFIER GLconstant GLX_LATE_SWAPS_TEAR_EXT = 0x20F3;
AXLGLFLAPI const bool& GLX_EXT_swap_control_tear;
//^ GLX_EXT_swap_control_tear

// GLX_EXT_texture_from_pixmap
AXLGLFLCONSTMODIFIER GLconstant GLX_BIND_TO_TEXTURE_RGB_EXT = 0x20D0;
AXLGLFLCONSTMODIFIER GLconstant GLX_BIND_TO_TEXTURE_RGBA_EXT = 0x20D1;
AXLGLFLCONSTMODIFIER GLconstant GLX_BIND_TO_MIPMAP_TEXTURE_EXT = 0x20D2;
AXLGLFLCONSTMODIFIER GLconstant GLX_BIND_TO_TEXTURE_TARGETS_EXT = 0x20D3;
AXLGLFLCONSTMODIFIER GLconstant GLX_Y_INVERTED_EXT = 0x20D4;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_FORMAT_EXT = 0x20D5;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_TARGET_EXT = 0x20D6;
AXLGLFLCONSTMODIFIER GLconstant GLX_MIPMAP_TEXTURE_EXT = 0x20D7;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_FORMAT_NONE_EXT = 0x20D8;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_FORMAT_RGB_EXT = 0x20D9;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_FORMAT_RGBA_EXT = 0x20DA;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_1D_BIT_EXT = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_2D_BIT_EXT = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_RECTANGLE_BIT_EXT = 0x00000004;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_1D_EXT = 0x20DB;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_2D_EXT = 0x20DC;
AXLGLFLCONSTMODIFIER GLconstant GLX_TEXTURE_RECTANGLE_EXT = 0x20DD;
AXLGLFLCONSTMODIFIER GLconstant GLX_FRONT_LEFT_EXT = 0x20DE;
AXLGLFLCONSTMODIFIER GLconstant GLX_FRONT_RIGHT_EXT = 0x20DF;
AXLGLFLCONSTMODIFIER GLconstant GLX_BACK_LEFT_EXT = 0x20E0;
AXLGLFLCONSTMODIFIER GLconstant GLX_BACK_RIGHT_EXT = 0x20E1;
AXLGLFLCONSTMODIFIER GLconstant GLX_FRONT_EXT = GLX_FRONT_LEFT_EXT;
AXLGLFLCONSTMODIFIER GLconstant GLX_BACK_EXT = GLX_BACK_LEFT_EXT;
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX0_EXT = 0x20E2;
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX1_EXT = 0x20E3; 
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX2_EXT = 0x20E4; 
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX3_EXT = 0x20E5; 
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX4_EXT = 0x20E6; 
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX5_EXT = 0x20E7; 
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX6_EXT = 0x20E8;
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX7_EXT = 0x20E9; 
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX8_EXT = 0x20EA; 
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX9_EXT = 0x20EB;
namespace PFN {
typedef void ( *glXBindTexImageEXT) (Display *dpy, GLXDrawable drawable, int buffer, const int *attrib_list);
typedef void ( *glXReleaseTexImageEXT) (Display *dpy, GLXDrawable drawable, int buffer);
}
AXLGLFLAPI PFN::glXBindTexImageEXT glXBindTexImageEXT;
AXLGLFLAPI PFN::glXReleaseTexImageEXT glXReleaseTexImageEXT;
AXLGLFLAPI const bool& GLX_EXT_texture_from_pixmap;
//^ GLX_EXT_texture_from_pixmap

// GLX_EXT_visual_info
AXLGLFLCONSTMODIFIER GLconstant GLX_X_VISUAL_TYPE_EXT = 0x22;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_TYPE_EXT = 0x23;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_INDEX_VALUE_EXT = 0x24;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_RED_VALUE_EXT = 0x25;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_GREEN_VALUE_EXT = 0x26;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_BLUE_VALUE_EXT = 0x27;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_ALPHA_VALUE_EXT = 0x28;
AXLGLFLCONSTMODIFIER GLconstant GLX_NONE_EXT = 0x8000;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRUE_COLOR_EXT = 0x8002;
AXLGLFLCONSTMODIFIER GLconstant GLX_DIRECT_COLOR_EXT = 0x8003;
AXLGLFLCONSTMODIFIER GLconstant GLX_PSEUDO_COLOR_EXT = 0x8004;
AXLGLFLCONSTMODIFIER GLconstant GLX_STATIC_COLOR_EXT = 0x8005;
AXLGLFLCONSTMODIFIER GLconstant GLX_GRAY_SCALE_EXT = 0x8006;
AXLGLFLCONSTMODIFIER GLconstant GLX_STATIC_GRAY_EXT = 0x8007;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_RGB_EXT = 0x8008;
AXLGLFLCONSTMODIFIER GLconstant GLX_TRANSPARENT_INDEX_EXT = 0x8009;
AXLGLFLAPI const bool& GLX_EXT_visual_info;
//^ GLX_EXT_visual_info

// GLX_EXT_visual_rating
AXLGLFLCONSTMODIFIER GLconstant GLX_VISUAL_CAVEAT_EXT = 0x20;
AXLGLFLCONSTMODIFIER GLconstant GLX_SLOW_VISUAL_EXT = 0x8001;
AXLGLFLCONSTMODIFIER GLconstant GLX_NON_CONFORMANT_VISUAL_EXT = 0x800D;
AXLGLFLAPI const bool& GLX_EXT_visual_rating;
//^ GLX_EXT_visual_rating

// GLX_INTEL_swap_event
AXLGLFLCONSTMODIFIER GLconstant GLX_BUFFER_SWAP_COMPLETE_INTEL_MASK = 0x04000000;
AXLGLFLCONSTMODIFIER GLconstant GLX_EXCHANGE_COMPLETE_INTEL = 0x8180;
AXLGLFLCONSTMODIFIER GLconstant GLX_COPY_COMPLETE_INTEL = 0x8181;
AXLGLFLCONSTMODIFIER GLconstant GLX_FLIP_COMPLETE_INTEL = 0x8182;
AXLGLFLAPI const bool& GLX_INTEL_swap_event;
//^ GLX_INTEL_swap_event

// GLX_MESA_agp_offset
namespace PFN {
typedef unsigned int ( *glXGetAGPOffsetMESA) (const void *pointer);
}
AXLGLFLAPI PFN::glXGetAGPOffsetMESA glXGetAGPOffsetMESA;
AXLGLFLAPI const bool& GLX_MESA_agp_offset;
//^ GLX_MESA_agp_offset

// GLX_MESA_copy_sub_buffer
namespace PFN {
typedef void ( *glXCopySubBufferMESA) (Display *dpy, GLXDrawable drawable, int x, int y, int width, int height);
}
AXLGLFLAPI PFN::glXCopySubBufferMESA glXCopySubBufferMESA;
AXLGLFLAPI const bool& GLX_MESA_copy_sub_buffer;
//^ GLX_MESA_copy_sub_buffer

// GLX_MESA_pixmap_colormap
namespace PFN {
typedef GLXPixmap ( *glXCreateGLXPixmapMESA) (Display *dpy, XVisualInfo *visual, Pixmap pixmap, Colormap cmap);
}
AXLGLFLAPI PFN::glXCreateGLXPixmapMESA glXCreateGLXPixmapMESA;
AXLGLFLAPI const bool& GLX_MESA_pixmap_colormap;
//^ GLX_MESA_pixmap_colormap

// GLX_MESA_query_renderer
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_VENDOR_ID_MESA = 0x8183;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_DEVICE_ID_MESA = 0x8184;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_VERSION_MESA = 0x8185;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_ACCELERATED_MESA = 0x8186;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_VIDEO_MEMORY_MESA = 0x8187;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_UNIFIED_MEMORY_ARCHITECTURE_MESA = 0x8188;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_PREFERRED_PROFILE_MESA = 0x8189;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_OPENGL_CORE_PROFILE_VERSION_MESA = 0x818A;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_OPENGL_COMPATIBILITY_PROFILE_VERSION_MESA = 0x818B;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_OPENGL_ES_PROFILE_VERSION_MESA = 0x818C;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDERER_OPENGL_ES2_PROFILE_VERSION_MESA = 0x818D;
namespace PFN {
typedef Bool ( *glXQueryCurrentRendererIntegerMESA) (int attribute, unsigned int *value);
typedef const char *( *glXQueryCurrentRendererStringMESA) (int attribute);
typedef Bool ( *glXQueryRendererIntegerMESA) (Display *dpy, int screen, int renderer, int attribute, unsigned int *value);
typedef const char *( *glXQueryRendererStringMESA) (Display *dpy, int screen, int renderer, int attribute);
}
AXLGLFLAPI PFN::glXQueryCurrentRendererIntegerMESA glXQueryCurrentRendererIntegerMESA;
AXLGLFLAPI PFN::glXQueryCurrentRendererStringMESA glXQueryCurrentRendererStringMESA;
AXLGLFLAPI PFN::glXQueryRendererIntegerMESA glXQueryRendererIntegerMESA;
AXLGLFLAPI PFN::glXQueryRendererStringMESA glXQueryRendererStringMESA;
AXLGLFLAPI const bool& GLX_MESA_query_renderer;
//^ GLX_MESA_query_renderer

// GLX_MESA_release_buffers
namespace PFN {
typedef Bool ( *glXReleaseBuffersMESA) (Display *dpy, GLXDrawable drawable);
}
AXLGLFLAPI PFN::glXReleaseBuffersMESA glXReleaseBuffersMESA;
AXLGLFLAPI const bool& GLX_MESA_release_buffers;
//^ GLX_MESA_release_buffers

// GLX_MESA_set_3dfx_mode
AXLGLFLCONSTMODIFIER GLconstant GLX_3DFX_WINDOW_MODE_MESA = 0x1;
AXLGLFLCONSTMODIFIER GLconstant GLX_3DFX_FULLSCREEN_MODE_MESA = 0x2;
namespace PFN {
typedef GLboolean ( *glXSet3DfxModeMESA) (GLint mode);
}
AXLGLFLAPI PFN::glXSet3DfxModeMESA glXSet3DfxModeMESA;
AXLGLFLAPI const bool& GLX_MESA_set_3dfx_mode;
//^ GLX_MESA_set_3dfx_mode

// GLX_MESA_swap_control
namespace PFN {
typedef int ( *glXGetSwapIntervalMESA) (void);
typedef int ( *glXSwapIntervalMESA) (unsigned int interval);
}
AXLGLFLAPI PFN::glXGetSwapIntervalMESA glXGetSwapIntervalMESA;
AXLGLFLAPI PFN::glXSwapIntervalMESA glXSwapIntervalMESA;
AXLGLFLAPI const bool& GLX_MESA_swap_control;
//^ GLX_MESA_swap_control

// GLX_NV_copy_buffer
namespace PFN {
typedef void ( *glXCopyBufferSubDataNV) (Display *dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void ( *glXNamedCopyBufferSubDataNV) (Display *dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
}
AXLGLFLAPI PFN::glXCopyBufferSubDataNV glXCopyBufferSubDataNV;
AXLGLFLAPI PFN::glXNamedCopyBufferSubDataNV glXNamedCopyBufferSubDataNV;
AXLGLFLAPI const bool& GLX_NV_copy_buffer;
//^ GLX_NV_copy_buffer

// GLX_NV_copy_image
namespace PFN {
typedef void ( *glXCopyImageSubDataNV) (Display *dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
}
AXLGLFLAPI PFN::glXCopyImageSubDataNV glXCopyImageSubDataNV;
AXLGLFLAPI const bool& GLX_NV_copy_image;
//^ GLX_NV_copy_image

// GLX_NV_delay_before_swap
namespace PFN {
typedef Bool ( *glXDelayBeforeSwapNV) (Display *dpy, GLXDrawable drawable, GLfloat seconds);
}
AXLGLFLAPI PFN::glXDelayBeforeSwapNV glXDelayBeforeSwapNV;
AXLGLFLAPI const bool& GLX_NV_delay_before_swap;
//^ GLX_NV_delay_before_swap

// GLX_NV_float_buffer
AXLGLFLCONSTMODIFIER GLconstant GLX_FLOAT_COMPONENTS_NV = 0x20B0;
AXLGLFLAPI const bool& GLX_NV_float_buffer;
//^ GLX_NV_float_buffer

// GLX_NV_multigpu_context
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_MULTIGPU_ATTRIB_NV = 0x20AA;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_MULTIGPU_ATTRIB_SINGLE_NV = 0x20AB;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_MULTIGPU_ATTRIB_AFR_NV = 0x20AC;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_MULTIGPU_ATTRIB_MULTICAST_NV = 0x20AD;
AXLGLFLCONSTMODIFIER GLconstant GLX_CONTEXT_MULTIGPU_ATTRIB_MULTI_DISPLAY_MULTICAST_NV = 0x20AE;
AXLGLFLAPI const bool& GLX_NV_multigpu_context;
//^ GLX_NV_multigpu_context

// GLX_NV_multisample_coverage
AXLGLFLCONSTMODIFIER GLconstant GLX_COVERAGE_SAMPLES_NV = 100001;
AXLGLFLCONSTMODIFIER GLconstant GLX_COLOR_SAMPLES_NV = 0x20B3;
AXLGLFLAPI const bool& GLX_NV_multisample_coverage;
//^ GLX_NV_multisample_coverage

// GLX_NV_present_video
AXLGLFLCONSTMODIFIER GLconstant GLX_NUM_VIDEO_SLOTS_NV = 0x20F0;
namespace PFN {
typedef unsigned int *( *glXEnumerateVideoDevicesNV) (Display *dpy, int screen, int *nelements);
typedef int ( *glXBindVideoDeviceNV) (Display *dpy, unsigned int video_slot, unsigned int video_device, const int *attrib_list);
}
AXLGLFLAPI PFN::glXEnumerateVideoDevicesNV glXEnumerateVideoDevicesNV;
AXLGLFLAPI PFN::glXBindVideoDeviceNV glXBindVideoDeviceNV;
AXLGLFLAPI const bool& GLX_NV_present_video;
//^ GLX_NV_present_video

// GLX_NV_robustness_video_memory_purge
AXLGLFLCONSTMODIFIER GLconstant GLX_GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV = 0x20F7;
AXLGLFLAPI const bool& GLX_NV_robustness_video_memory_purge;
//^ GLX_NV_robustness_video_memory_purge

// GLX_NV_swap_group
namespace PFN {
typedef Bool ( *glXJoinSwapGroupNV) (Display *dpy, GLXDrawable drawable, GLuint group);
typedef Bool ( *glXBindSwapBarrierNV) (Display *dpy, GLuint group, GLuint barrier);
typedef Bool ( *glXQuerySwapGroupNV) (Display *dpy, GLXDrawable drawable, GLuint *group, GLuint *barrier);
typedef Bool ( *glXQueryMaxSwapGroupsNV) (Display *dpy, int screen, GLuint *maxGroups, GLuint *maxBarriers);
typedef Bool ( *glXQueryFrameCountNV) (Display *dpy, int screen, GLuint *count);
typedef Bool ( *glXResetFrameCountNV) (Display *dpy, int screen);
}
AXLGLFLAPI PFN::glXJoinSwapGroupNV glXJoinSwapGroupNV;
AXLGLFLAPI PFN::glXBindSwapBarrierNV glXBindSwapBarrierNV;
AXLGLFLAPI PFN::glXQuerySwapGroupNV glXQuerySwapGroupNV;
AXLGLFLAPI PFN::glXQueryMaxSwapGroupsNV glXQueryMaxSwapGroupsNV;
AXLGLFLAPI PFN::glXQueryFrameCountNV glXQueryFrameCountNV;
AXLGLFLAPI PFN::glXResetFrameCountNV glXResetFrameCountNV;
AXLGLFLAPI const bool& GLX_NV_swap_group;
//^ GLX_NV_swap_group

// GLX_NV_video_capture
typedef XID GLXVideoCaptureDeviceNV;
AXLGLFLCONSTMODIFIER GLconstant GLX_DEVICE_ID_NV = 0x20CD;
AXLGLFLCONSTMODIFIER GLconstant GLX_UNIQUE_ID_NV = 0x20CE;
AXLGLFLCONSTMODIFIER GLconstant GLX_NUM_VIDEO_CAPTURE_SLOTS_NV = 0x20CF;
namespace PFN {
typedef int ( *glXBindVideoCaptureDeviceNV) (Display *dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
typedef GLXVideoCaptureDeviceNV *( *glXEnumerateVideoCaptureDevicesNV) (Display *dpy, int screen, int *nelements);
typedef void ( *glXLockVideoCaptureDeviceNV) (Display *dpy, GLXVideoCaptureDeviceNV device);
typedef int ( *glXQueryVideoCaptureDeviceNV) (Display *dpy, GLXVideoCaptureDeviceNV device, int attribute, int *value);
typedef void ( *glXReleaseVideoCaptureDeviceNV) (Display *dpy, GLXVideoCaptureDeviceNV device);
}
AXLGLFLAPI PFN::glXBindVideoCaptureDeviceNV glXBindVideoCaptureDeviceNV;
AXLGLFLAPI PFN::glXEnumerateVideoCaptureDevicesNV glXEnumerateVideoCaptureDevicesNV;
AXLGLFLAPI PFN::glXLockVideoCaptureDeviceNV glXLockVideoCaptureDeviceNV;
AXLGLFLAPI PFN::glXQueryVideoCaptureDeviceNV glXQueryVideoCaptureDeviceNV;
AXLGLFLAPI PFN::glXReleaseVideoCaptureDeviceNV glXReleaseVideoCaptureDeviceNV;
AXLGLFLAPI const bool& GLX_NV_video_capture;
//^ GLX_NV_video_capture

// GLX_NV_video_out
typedef unsigned int GLXVideoDeviceNV;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_COLOR_NV = 0x20C3;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_ALPHA_NV = 0x20C4;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_DEPTH_NV = 0x20C5;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_COLOR_AND_ALPHA_NV = 0x20C6;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_COLOR_AND_DEPTH_NV = 0x20C7;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_FRAME_NV = 0x20C8;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_FIELD_1_NV = 0x20C9;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_FIELD_2_NV = 0x20CA;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_STACKED_FIELDS_1_2_NV = 0x20CB;
AXLGLFLCONSTMODIFIER GLconstant GLX_VIDEO_OUT_STACKED_FIELDS_2_1_NV = 0x20CC;
namespace PFN {
typedef int ( *glXGetVideoDeviceNV) (Display *dpy, int screen, int numVideoDevices, GLXVideoDeviceNV *pVideoDevice);
typedef int ( *glXReleaseVideoDeviceNV) (Display *dpy, int screen, GLXVideoDeviceNV VideoDevice);
typedef int ( *glXBindVideoImageNV) (Display *dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
typedef int ( *glXReleaseVideoImageNV) (Display *dpy, GLXPbuffer pbuf);
typedef int ( *glXSendPbufferToVideoNV) (Display *dpy, GLXPbuffer pbuf, int iBufferType, unsigned long *pulCounterPbuffer, GLboolean bBlock);
typedef int ( *glXGetVideoInfoNV) (Display *dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo);
}
AXLGLFLAPI PFN::glXGetVideoDeviceNV glXGetVideoDeviceNV;
AXLGLFLAPI PFN::glXReleaseVideoDeviceNV glXReleaseVideoDeviceNV;
AXLGLFLAPI PFN::glXBindVideoImageNV glXBindVideoImageNV;
AXLGLFLAPI PFN::glXReleaseVideoImageNV glXReleaseVideoImageNV;
AXLGLFLAPI PFN::glXSendPbufferToVideoNV glXSendPbufferToVideoNV;
AXLGLFLAPI PFN::glXGetVideoInfoNV glXGetVideoInfoNV;
AXLGLFLAPI const bool& GLX_NV_video_out;
//^ GLX_NV_video_out

// GLX_OML_swap_method
AXLGLFLCONSTMODIFIER GLconstant GLX_SWAP_METHOD_OML = 0x8060;
AXLGLFLCONSTMODIFIER GLconstant GLX_SWAP_EXCHANGE_OML = 0x8061;
AXLGLFLCONSTMODIFIER GLconstant GLX_SWAP_COPY_OML = 0x8062;
AXLGLFLCONSTMODIFIER GLconstant GLX_SWAP_UNDEFINED_OML = 0x8063;
AXLGLFLAPI const bool& GLX_OML_swap_method;
//^ GLX_OML_swap_method

// GLX_OML_sync_control
// GLEXT_64_TYPES_DEFINED
/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
/* (as used in the GLX_OML_sync_control extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#   include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#   include <inttypes.h>
#elif defined(__STDC__)
#   if defined(__arch64__) || defined(_LP64)
typedef long int int64_t;
typedef unsigned long int uint64_t;
#   else
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
AXLGLFLAPI const bool& GLX_OML_sync_control;
#   endif /* __STDC__ */
#elif defined( __VMS ) || defined(__sgi)
#   include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#   include <cstdint>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
typedef long int int32_t;
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#   include <cstdint>
#elif defined(_WIN32)
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
/* Fallback if nothing above works */
#   include <inttypes.h>
#endif
AXLGLFLAPI const bool& GLEXT_64_TYPES_DEFINED;
// GLEXT_64_TYPES_DEFINED
namespace PFN {
typedef Bool ( *glXGetSyncValuesOML) (Display *dpy, GLXDrawable drawable, int64_t *ust, int64_t *msc, int64_t *sbc);
typedef Bool ( *glXGetMscRateOML) (Display *dpy, GLXDrawable drawable, int32_t *numerator, int32_t *denominator);
typedef int64_t ( *glXSwapBuffersMscOML) (Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
typedef Bool ( *glXWaitForMscOML) (Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t *ust, int64_t *msc, int64_t *sbc);
typedef Bool ( *glXWaitForSbcOML) (Display *dpy, GLXDrawable drawable, int64_t target_sbc, int64_t *ust, int64_t *msc, int64_t *sbc);
}
AXLGLFLAPI PFN::glXGetSyncValuesOML glXGetSyncValuesOML;
AXLGLFLAPI PFN::glXGetMscRateOML glXGetMscRateOML;
AXLGLFLAPI PFN::glXSwapBuffersMscOML glXSwapBuffersMscOML;
AXLGLFLAPI PFN::glXWaitForMscOML glXWaitForMscOML;
AXLGLFLAPI PFN::glXWaitForSbcOML glXWaitForSbcOML;
AXLGLFLAPI const bool& GLX_OML_sync_control;
//^ GLX_OML_sync_control

// GLX_SGIS_blended_overlay
AXLGLFLCONSTMODIFIER GLconstant GLX_BLENDED_RGBA_SGIS = 0x8025;
AXLGLFLAPI const bool& GLX_SGIS_blended_overlay;
//^ GLX_SGIS_blended_overlay

// GLX_SGIS_multisample
AXLGLFLCONSTMODIFIER GLconstant GLX_SAMPLE_BUFFERS_SGIS = 100000;
AXLGLFLCONSTMODIFIER GLconstant GLX_SAMPLES_SGIS = 100001;
AXLGLFLAPI const bool& GLX_SGIS_multisample;
//^ GLX_SGIS_multisample

// GLX_SGIS_shared_multisample
AXLGLFLCONSTMODIFIER GLconstant GLX_MULTISAMPLE_SUB_RECT_WIDTH_SGIS = 0x8026;
AXLGLFLCONSTMODIFIER GLconstant GLX_MULTISAMPLE_SUB_RECT_HEIGHT_SGIS = 0x8027;
AXLGLFLAPI const bool& GLX_SGIS_shared_multisample;
//^ GLX_SGIS_shared_multisample

// GLX_SGIX_dmbuffer
typedef XID GLXPbufferSGIX;
#ifdef _DM_BUFFER_H_
AXLGLFLCONSTMODIFIER GLconstant GLX_DIGITAL_MEDIA_PBUFFER_SGIX = 0x8024;
namespace PFN {
typedef Bool (*glXAssociateDMPbufferSGIX) (Display *dpy, GLXPbufferSGIX pbuffer, DMparams *params, DMbuffer dmbuffer);
}
AXLGLFLAPI PFN::glXAssociateDMPbufferSGIX glXAssociateDMPbufferSGIX;
#endif // _DM_BUFFER_H_
AXLGLFLAPI const bool& GLX_SGIX_dmbuffer;
//^ GLX_SGIX_dmbuffer

// GLX_SGIX_fbconfig
typedef struct __GLXFBConfigRec *GLXFBConfigSGIX;
AXLGLFLCONSTMODIFIER GLconstant GLX_WINDOW_BIT_SGIX = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_PIXMAP_BIT_SGIX = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_RGBA_BIT_SGIX = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_COLOR_INDEX_BIT_SGIX = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_DRAWABLE_TYPE_SGIX = 0x8010;
AXLGLFLCONSTMODIFIER GLconstant GLX_RENDER_TYPE_SGIX = 0x8011;
AXLGLFLCONSTMODIFIER GLconstant GLX_X_RENDERABLE_SGIX = 0x8012;
AXLGLFLCONSTMODIFIER GLconstant GLX_FBCONFIG_ID_SGIX = 0x8013;
AXLGLFLCONSTMODIFIER GLconstant GLX_RGBA_TYPE_SGIX = 0x8014;
AXLGLFLCONSTMODIFIER GLconstant GLX_COLOR_INDEX_TYPE_SGIX = 0x8015;
namespace PFN {
typedef int ( *glXGetFBConfigAttribSGIX) (Display *dpy, GLXFBConfigSGIX config, int attribute, int *value);
typedef GLXFBConfigSGIX *( *glXChooseFBConfigSGIX) (Display *dpy, int screen, int *attrib_list, int *nelements);
typedef GLXPixmap ( *glXCreateGLXPixmapWithConfigSGIX) (Display *dpy, GLXFBConfigSGIX config, Pixmap pixmap);
typedef GLXContext ( *glXCreateContextWithConfigSGIX) (Display *dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
typedef XVisualInfo *( *glXGetVisualFromFBConfigSGIX) (Display *dpy, GLXFBConfigSGIX config);
typedef GLXFBConfigSGIX ( *glXGetFBConfigFromVisualSGIX) (Display *dpy, XVisualInfo *vis);
}
AXLGLFLAPI PFN::glXGetFBConfigAttribSGIX glXGetFBConfigAttribSGIX;
AXLGLFLAPI PFN::glXChooseFBConfigSGIX glXChooseFBConfigSGIX;
AXLGLFLAPI PFN::glXCreateGLXPixmapWithConfigSGIX glXCreateGLXPixmapWithConfigSGIX;
AXLGLFLAPI PFN::glXCreateContextWithConfigSGIX glXCreateContextWithConfigSGIX;
AXLGLFLAPI PFN::glXGetVisualFromFBConfigSGIX glXGetVisualFromFBConfigSGIX;
AXLGLFLAPI PFN::glXGetFBConfigFromVisualSGIX glXGetFBConfigFromVisualSGIX;
AXLGLFLAPI const bool& GLX_SGIX_fbconfig;
//^ GLX_SGIX_fbconfig

// GLX_SGIX_hyperpipe
typedef struct {
    char    pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int     networkId;
} GLXHyperpipeNetworkSGIX;
typedef struct {
    char    pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int     channel;
    unsigned int participationType;
    int     timeSlice;
} GLXHyperpipeConfigSGIX;
typedef struct {
    char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int srcXOrigin, srcYOrigin, srcWidth, srcHeight;
    int destXOrigin, destYOrigin, destWidth, destHeight;
} GLXPipeRect;
typedef struct {
    char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int XOrigin, YOrigin, maxHeight, maxWidth;
} GLXPipeRectLimits;
AXLGLFLCONSTMODIFIER GLconstant GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX = 80;
AXLGLFLCONSTMODIFIER GLconstant GLX_BAD_HYPERPIPE_CONFIG_SGIX = 91;
AXLGLFLCONSTMODIFIER GLconstant GLX_BAD_HYPERPIPE_SGIX = 92;
AXLGLFLCONSTMODIFIER GLconstant GLX_HYPERPIPE_DISPLAY_PIPE_SGIX = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_HYPERPIPE_RENDER_PIPE_SGIX = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_PIPE_RECT_SGIX = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_PIPE_RECT_LIMITS_SGIX = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_HYPERPIPE_STEREO_SGIX = 0x00000003;
AXLGLFLCONSTMODIFIER GLconstant GLX_HYPERPIPE_PIXEL_AVERAGE_SGIX = 0x00000004;
AXLGLFLCONSTMODIFIER GLconstant GLX_HYPERPIPE_ID_SGIX = 0x8030;
namespace PFN {
typedef GLXHyperpipeNetworkSGIX *( *glXQueryHyperpipeNetworkSGIX) (Display *dpy, int *npipes);
typedef int ( *glXHyperpipeConfigSGIX) (Display *dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX *cfg, int *hpId);
typedef GLXHyperpipeConfigSGIX *( *glXQueryHyperpipeConfigSGIX) (Display *dpy, int hpId, int *npipes);
typedef int ( *glXDestroyHyperpipeConfigSGIX) (Display *dpy, int hpId);
typedef int ( *glXBindHyperpipeSGIX) (Display *dpy, int hpId);
typedef int ( *glXQueryHyperpipeBestAttribSGIX) (Display *dpy, int timeSlice, int attrib, int size, void *attribList, void *returnAttribList);
typedef int ( *glXHyperpipeAttribSGIX) (Display *dpy, int timeSlice, int attrib, int size, void *attribList);
typedef int ( *glXQueryHyperpipeAttribSGIX) (Display *dpy, int timeSlice, int attrib, int size, void *returnAttribList);
}
AXLGLFLAPI PFN::glXQueryHyperpipeNetworkSGIX glXQueryHyperpipeNetworkSGIX;
AXLGLFLAPI PFN::glXHyperpipeConfigSGIX glXHyperpipeConfigSGIX;
AXLGLFLAPI PFN::glXQueryHyperpipeConfigSGIX glXQueryHyperpipeConfigSGIX;
AXLGLFLAPI PFN::glXDestroyHyperpipeConfigSGIX glXDestroyHyperpipeConfigSGIX;
AXLGLFLAPI PFN::glXBindHyperpipeSGIX glXBindHyperpipeSGIX;
AXLGLFLAPI PFN::glXQueryHyperpipeBestAttribSGIX glXQueryHyperpipeBestAttribSGIX;
AXLGLFLAPI PFN::glXHyperpipeAttribSGIX glXHyperpipeAttribSGIX;
AXLGLFLAPI PFN::glXQueryHyperpipeAttribSGIX glXQueryHyperpipeAttribSGIX;
AXLGLFLAPI const bool& GLX_SGIX_hyperpipe;
//^ GLX_SGIX_hyperpipe

// GLX_SGIX_pbuffer
AXLGLFLCONSTMODIFIER GLconstant GLX_PBUFFER_BIT_SGIX = 0x00000004;
AXLGLFLCONSTMODIFIER GLconstant GLX_BUFFER_CLOBBER_MASK_SGIX = 0x08000000;
AXLGLFLCONSTMODIFIER GLconstant GLX_FRONT_LEFT_BUFFER_BIT_SGIX = 0x00000001;
AXLGLFLCONSTMODIFIER GLconstant GLX_FRONT_RIGHT_BUFFER_BIT_SGIX = 0x00000002;
AXLGLFLCONSTMODIFIER GLconstant GLX_BACK_LEFT_BUFFER_BIT_SGIX = 0x00000004;
AXLGLFLCONSTMODIFIER GLconstant GLX_BACK_RIGHT_BUFFER_BIT_SGIX = 0x00000008;
AXLGLFLCONSTMODIFIER GLconstant GLX_AUX_BUFFERS_BIT_SGIX = 0x00000010;
AXLGLFLCONSTMODIFIER GLconstant GLX_DEPTH_BUFFER_BIT_SGIX = 0x00000020;
AXLGLFLCONSTMODIFIER GLconstant GLX_STENCIL_BUFFER_BIT_SGIX = 0x00000040;
AXLGLFLCONSTMODIFIER GLconstant GLX_ACCUM_BUFFER_BIT_SGIX = 0x00000080;
AXLGLFLCONSTMODIFIER GLconstant GLX_SAMPLE_BUFFERS_BIT_SGIX = 0x00000100;
AXLGLFLCONSTMODIFIER GLconstant GLX_MAX_PBUFFER_WIDTH_SGIX = 0x8016;
AXLGLFLCONSTMODIFIER GLconstant GLX_MAX_PBUFFER_HEIGHT_SGIX = 0x8017;
AXLGLFLCONSTMODIFIER GLconstant GLX_MAX_PBUFFER_PIXELS_SGIX = 0x8018;
AXLGLFLCONSTMODIFIER GLconstant GLX_OPTIMAL_PBUFFER_WIDTH_SGIX = 0x8019;
AXLGLFLCONSTMODIFIER GLconstant GLX_OPTIMAL_PBUFFER_HEIGHT_SGIX = 0x801A;
AXLGLFLCONSTMODIFIER GLconstant GLX_PRESERVED_CONTENTS_SGIX = 0x801B;
AXLGLFLCONSTMODIFIER GLconstant GLX_LARGEST_PBUFFER_SGIX = 0x801C;
AXLGLFLCONSTMODIFIER GLconstant GLX_WIDTH_SGIX = 0x801D;
AXLGLFLCONSTMODIFIER GLconstant GLX_HEIGHT_SGIX = 0x801E;
AXLGLFLCONSTMODIFIER GLconstant GLX_EVENT_MASK_SGIX = 0x801F;
AXLGLFLCONSTMODIFIER GLconstant GLX_DAMAGED_SGIX = 0x8020;
AXLGLFLCONSTMODIFIER GLconstant GLX_SAVED_SGIX = 0x8021;
AXLGLFLCONSTMODIFIER GLconstant GLX_WINDOW_SGIX = 0x8022;
AXLGLFLCONSTMODIFIER GLconstant GLX_PBUFFER_SGIX = 0x8023;
namespace PFN {
typedef GLXPbufferSGIX ( *glXCreateGLXPbufferSGIX) (Display *dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int *attrib_list);
typedef void ( *glXDestroyGLXPbufferSGIX) (Display *dpy, GLXPbufferSGIX pbuf);
typedef void ( *glXQueryGLXPbufferSGIX) (Display *dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int *value);
typedef void ( *glXSelectEventSGIX) (Display *dpy, GLXDrawable drawable, unsigned long mask);
typedef void ( *glXGetSelectedEventSGIX) (Display *dpy, GLXDrawable drawable, unsigned long *mask);
}
AXLGLFLAPI PFN::glXCreateGLXPbufferSGIX glXCreateGLXPbufferSGIX;
AXLGLFLAPI PFN::glXDestroyGLXPbufferSGIX glXDestroyGLXPbufferSGIX;
AXLGLFLAPI PFN::glXQueryGLXPbufferSGIX glXQueryGLXPbufferSGIX;
AXLGLFLAPI PFN::glXSelectEventSGIX glXSelectEventSGIX;
AXLGLFLAPI PFN::glXGetSelectedEventSGIX glXGetSelectedEventSGIX;
AXLGLFLAPI const bool& GLX_SGIX_pbuffer;
//^ GLX_SGIX_pbuffer

// GLX_SGIX_swap_barrier
namespace PFN {
typedef void ( *glXBindSwapBarrierSGIX) (Display *dpy, GLXDrawable drawable, int barrier);
typedef Bool ( *glXQueryMaxSwapBarriersSGIX) (Display *dpy, int screen, int *max);
}
AXLGLFLAPI PFN::glXBindSwapBarrierSGIX glXBindSwapBarrierSGIX;
AXLGLFLAPI PFN::glXQueryMaxSwapBarriersSGIX glXQueryMaxSwapBarriersSGIX;
AXLGLFLAPI const bool& GLX_SGIX_swap_barrier;
//^ GLX_SGIX_swap_barrier

// GLX_SGIX_swap_group
namespace PFN {
typedef void ( *PFNGLXJOINSWAPGROUPSGIXPROC) (Display *dpy, GLXDrawable drawable, GLXDrawable member);
}
void glXJoinSwapGroupSGIX (Display *dpy, GLXDrawable drawable, GLXDrawable member);
AXLGLFLAPI const bool& GLX_SGIX_swap_group;
//^ GLX_SGIX_swap_group

// GLX_SGIX_video_resize
AXLGLFLCONSTMODIFIER GLconstant GLX_SYNC_FRAME_SGIX = 0x00000000;
AXLGLFLCONSTMODIFIER GLconstant GLX_SYNC_SWAP_SGIX = 0x00000001;
namespace PFN {
typedef int ( *glXBindChannelToWindowSGIX) (Display *display, int screen, int channel, Window window);
typedef int ( *glXChannelRectSGIX) (Display *display, int screen, int channel, int x, int y, int w, int h);
typedef int ( *glXQueryChannelRectSGIX) (Display *display, int screen, int channel, int *dx, int *dy, int *dw, int *dh);
typedef int ( *glXQueryChannelDeltasSGIX) (Display *display, int screen, int channel, int *x, int *y, int *w, int *h);
typedef int ( *glXChannelRectSyncSGIX) (Display *display, int screen, int channel, GLenum synctype);
}
AXLGLFLAPI PFN::glXBindChannelToWindowSGIX glXBindChannelToWindowSGIX;
AXLGLFLAPI PFN::glXChannelRectSGIX glXChannelRectSGIX;
AXLGLFLAPI PFN::glXQueryChannelRectSGIX glXQueryChannelRectSGIX;
AXLGLFLAPI PFN::glXQueryChannelDeltasSGIX glXQueryChannelDeltasSGIX;
AXLGLFLAPI PFN::glXChannelRectSyncSGIX glXChannelRectSyncSGIX;
AXLGLFLAPI const bool& GLX_SGIX_video_resize;
//^ GLX_SGIX_video_resize

// GLX_SGIX_video_source
typedef XID GLXVideoSourceSGIX;
#ifdef _VL_H
namespace PFN {
typedef GLXVideoSourceSGIX ( *glXCreateGLXVideoSourceSGIX) (Display *display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
typedef void ( *glXDestroyGLXVideoSourceSGIX) (Display *dpy, GLXVideoSourceSGIX glxvideosource);
}
AXLGLFLAPI PFN::glXCreateGLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX;
AXLGLFLAPI PFN::glXDestroyGLXVideoSourceSGIX glXDestroyGLXVideoSourceSGIX;
#endif // _VL_H
AXLGLFLAPI const bool& GLX_SGIX_video_source;
//^ GLX_SGIX_video_source

// GLX_SGIX_visual_select_group
AXLGLFLCONSTMODIFIER GLconstant GLX_VISUAL_SELECT_GROUP_SGIX = 0x8028;
AXLGLFLAPI const bool& GLX_SGIX_visual_select_group;
//^ GLX_SGIX_visual_select_group

// GLX_SGI_cushion
namespace PFN {
typedef void ( *glXCushionSGI) (Display *dpy, Window window, float cushion);
}
AXLGLFLAPI PFN::glXCushionSGI glXCushionSGI;
AXLGLFLAPI const bool& GLX_SGI_cushion;
//^ GLX_SGI_cushion

// GLX_SGI_make_current_read
namespace PFN {
typedef Bool ( *glXMakeCurrentReadSGI) (Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef GLXDrawable ( *glXGetCurrentReadDrawableSGI) (void);
}
AXLGLFLAPI PFN::glXMakeCurrentReadSGI glXMakeCurrentReadSGI;
AXLGLFLAPI PFN::glXGetCurrentReadDrawableSGI glXGetCurrentReadDrawableSGI;
AXLGLFLAPI const bool& GLX_SGI_make_current_read;
//^ GLX_SGI_make_current_read

// GLX_SGI_swap_control
namespace PFN {
typedef int ( *glXSwapIntervalSGI) (int interval);
}
AXLGLFLAPI PFN::glXSwapIntervalSGI glXSwapIntervalSGI;
AXLGLFLAPI const bool& GLX_SGI_swap_control;
//^ GLX_SGI_swap_control

// GLX_SGI_video_sync
namespace PFN {
typedef int ( *glXGetVideoSyncSGI) (unsigned int *count);
typedef int ( *glXWaitVideoSyncSGI) (int divisor, int remainder, unsigned int *count);
}
AXLGLFLAPI PFN::glXGetVideoSyncSGI glXGetVideoSyncSGI;
AXLGLFLAPI PFN::glXWaitVideoSyncSGI glXWaitVideoSyncSGI;
AXLGLFLAPI const bool& GLX_SGI_video_sync;
//^ GLX_SGI_video_sync

// GLX_SUN_get_transparent_index
namespace PFN {
typedef Status ( *glXGetTransparentIndexSUN) (Display *dpy, Window overlay, Window underlay, unsigned long *pTransparentIndex);
}
AXLGLFLAPI PFN::glXGetTransparentIndexSUN glXGetTransparentIndexSUN;
AXLGLFLAPI const bool& GLX_SUN_get_transparent_index;
//^ GLX_SUN_get_transparent_index

AXLGLFLAPI bool load();
AXLGLFLAPI bool checkExtension(const char* extension_name);

} // axl::glfl::GLX
} // axl::glfl
} // axl
