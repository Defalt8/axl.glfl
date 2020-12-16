#pragma once
#include <windows.h>
#include "../lib.hpp"
#include "../gl.hpp"

namespace axl {
namespace glfl {
namespace WGL {

AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_WGLEXT_VERSION = 20200813;

AXLGLFLAPI const bool& WGL_ARB_buffer_region;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_FRONT_COLOR_BUFFER_BIT_ARB = 0x00000001;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BACK_COLOR_BUFFER_BIT_ARB = 0x00000002;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DEPTH_BUFFER_BIT_ARB = 0x00000004;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_STENCIL_BUFFER_BIT_ARB = 0x00000008;
namespace PFN {
typedef HANDLE (WINAPI * wglCreateBufferRegionARB) (HDC hDC, int iLayerPlane, UINT uType);
typedef VOID (WINAPI * wglDeleteBufferRegionARB) (HANDLE hRegion);
typedef BOOL (WINAPI * wglSaveBufferRegionARB) (HANDLE hRegion, int x, int y, int width, int height);
typedef BOOL (WINAPI * wglRestoreBufferRegionARB) (HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);
}
AXLGLFLAPI PFN::wglCreateBufferRegionARB wglCreateBufferRegionARB;
AXLGLFLAPI PFN::wglDeleteBufferRegionARB wglDeleteBufferRegionARB;
AXLGLFLAPI PFN::wglSaveBufferRegionARB wglSaveBufferRegionARB;
AXLGLFLAPI PFN::wglRestoreBufferRegionARB wglRestoreBufferRegionARB;
// WGL_ARB_buffer_region

AXLGLFLAPI const bool& WGL_ARB_context_flush_control;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_RELEASE_BEHAVIOR_ARB = 0x2097;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB = 0;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB = 0x2098;
// WGL_ARB_context_flush_control

AXLGLFLAPI const bool& WGL_ARB_create_context;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_DEBUG_BIT_ARB = 0x00000001;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB = 0x00000002;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_MAJOR_VERSION_ARB = 0x2091;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_MINOR_VERSION_ARB = 0x2092;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_LAYER_PLANE_ARB = 0x2093;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_FLAGS_ARB = 0x2094;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant ERROR_INVALID_VERSION_ARB = 0x2095;
namespace PFN {
typedef HGLRC (WINAPI * wglCreateContextAttribsARB) (HDC hDC, HGLRC hShareContext, const int *attribList);
}
AXLGLFLAPI PFN::wglCreateContextAttribsARB wglCreateContextAttribsARB;
// WGL_ARB_create_context

AXLGLFLAPI const bool& WGL_ARB_create_context_no_error;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_OPENGL_NO_ERROR_ARB = 0x31B3;
// WGL_ARB_create_context_no_error

AXLGLFLAPI const bool& WGL_ARB_create_context_profile;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_PROFILE_MASK_ARB = 0x9126;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_CORE_PROFILE_BIT_ARB = 0x00000001;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB = 0x00000002;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant ERROR_INVALID_PROFILE_ARB = 0x2096;
// WGL_ARB_create_context_profile

AXLGLFLAPI const bool& WGL_ARB_create_context_robustness;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB = 0x00000004;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_LOSE_CONTEXT_ON_RESET_ARB = 0x8252;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB = 0x8256;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NO_RESET_NOTIFICATION_ARB = 0x8261;
// WGL_ARB_create_context_robustness

AXLGLFLAPI const bool& WGL_ARB_extensions_string;
namespace PFN {
typedef const char *(WINAPI * wglGetExtensionsStringARB) (HDC hdc);
}
AXLGLFLAPI PFN::wglGetExtensionsStringARB wglGetExtensionsStringARB;
// WGL_ARB_extensions_string

AXLGLFLAPI const bool& WGL_ARB_framebuffer_sRGB;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB = 0x20A9;
// WGL_ARB_framebuffer_sRGB

AXLGLFLAPI const bool& WGL_ARB_make_current_read;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant ERROR_INVALID_PIXEL_TYPE_ARB = 0x2043;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant ERROR_INCOMPATIBLE_DEVICE_CONTEXTS_ARB = 0x2054;
namespace PFN {
typedef BOOL (WINAPI * wglMakeContextCurrentARB) (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
typedef HDC (WINAPI * wglGetCurrentReadDCARB) (void);
}
AXLGLFLAPI PFN::wglMakeContextCurrentARB wglMakeContextCurrentARB;
AXLGLFLAPI PFN::wglGetCurrentReadDCARB wglGetCurrentReadDCARB;
// WGL_ARB_make_current_read

AXLGLFLAPI const bool& WGL_ARB_multisample;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SAMPLE_BUFFERS_ARB = 0x2041;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SAMPLES_ARB = 0x2042;
// WGL_ARB_multisample

AXLGLFLAPI const bool& WGL_ARB_pbuffer;
DECLARE_HANDLE(HPBUFFERARB);
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DRAW_TO_PBUFFER_ARB = 0x202D;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_MAX_PBUFFER_PIXELS_ARB = 0x202E;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_MAX_PBUFFER_WIDTH_ARB = 0x202F;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_MAX_PBUFFER_HEIGHT_ARB = 0x2030;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_PBUFFER_LARGEST_ARB = 0x2033;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_PBUFFER_WIDTH_ARB = 0x2034;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_PBUFFER_HEIGHT_ARB = 0x2035;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_PBUFFER_LOST_ARB = 0x2036;
namespace PFN {
typedef HPBUFFERARB (WINAPI * wglCreatePbufferARB) (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList);
typedef HDC (WINAPI * wglGetPbufferDCARB) (HPBUFFERARB hPbuffer);
typedef int (WINAPI * wglReleasePbufferDCARB) (HPBUFFERARB hPbuffer, HDC hDC);
typedef BOOL (WINAPI * wglDestroyPbufferARB) (HPBUFFERARB hPbuffer);
typedef BOOL (WINAPI * wglQueryPbufferARB) (HPBUFFERARB hPbuffer, int iAttribute, int *piValue);
}
AXLGLFLAPI PFN::wglCreatePbufferARB wglCreatePbufferARB;
AXLGLFLAPI PFN::wglGetPbufferDCARB wglGetPbufferDCARB;
AXLGLFLAPI PFN::wglReleasePbufferDCARB wglReleasePbufferDCARB;
AXLGLFLAPI PFN::wglDestroyPbufferARB wglDestroyPbufferARB;
AXLGLFLAPI PFN::wglQueryPbufferARB wglQueryPbufferARB;
// WGL_ARB_pbuffer

AXLGLFLAPI const bool& WGL_ARB_pixel_format;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NUMBER_PIXEL_FORMATS_ARB = 0x2000;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DRAW_TO_WINDOW_ARB = 0x2001;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DRAW_TO_BITMAP_ARB = 0x2002;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCELERATION_ARB = 0x2003;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NEED_PALETTE_ARB = 0x2004;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NEED_SYSTEM_PALETTE_ARB = 0x2005;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_LAYER_BUFFERS_ARB = 0x2006;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_METHOD_ARB = 0x2007;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NUMBER_OVERLAYS_ARB = 0x2008;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NUMBER_UNDERLAYS_ARB = 0x2009;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TRANSPARENT_ARB = 0x200A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TRANSPARENT_RED_VALUE_ARB = 0x2037;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TRANSPARENT_GREEN_VALUE_ARB = 0x2038;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TRANSPARENT_BLUE_VALUE_ARB = 0x2039;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TRANSPARENT_ALPHA_VALUE_ARB = 0x203A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TRANSPARENT_INDEX_VALUE_ARB = 0x203B;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SHARE_DEPTH_ARB = 0x200C;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SHARE_STENCIL_ARB = 0x200D;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SHARE_ACCUM_ARB = 0x200E;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SUPPORT_GDI_ARB = 0x200F;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SUPPORT_OPENGL_ARB = 0x2010;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DOUBLE_BUFFER_ARB = 0x2011;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_STEREO_ARB = 0x2012;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_PIXEL_TYPE_ARB = 0x2013;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_COLOR_BITS_ARB = 0x2014;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_RED_BITS_ARB = 0x2015;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_RED_SHIFT_ARB = 0x2016;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GREEN_BITS_ARB = 0x2017;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GREEN_SHIFT_ARB = 0x2018;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BLUE_BITS_ARB = 0x2019;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BLUE_SHIFT_ARB = 0x201A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ALPHA_BITS_ARB = 0x201B;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ALPHA_SHIFT_ARB = 0x201C;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_BITS_ARB = 0x201D;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_RED_BITS_ARB = 0x201E;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_GREEN_BITS_ARB = 0x201F;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_BLUE_BITS_ARB = 0x2020;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_ALPHA_BITS_ARB = 0x2021;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DEPTH_BITS_ARB = 0x2022;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_STENCIL_BITS_ARB = 0x2023;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX_BUFFERS_ARB = 0x2024;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NO_ACCELERATION_ARB = 0x2025;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENERIC_ACCELERATION_ARB = 0x2026;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_FULL_ACCELERATION_ARB = 0x2027;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_EXCHANGE_ARB = 0x2028;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_COPY_ARB = 0x2029;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_UNDEFINED_ARB = 0x202A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TYPE_RGBA_ARB = 0x202B;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TYPE_COLORINDEX_ARB = 0x202C;
namespace PFN {
typedef BOOL (WINAPI * wglGetPixelFormatAttribivARB) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, int *piValues);
typedef BOOL (WINAPI * wglGetPixelFormatAttribfvARB) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, FLOAT *pfValues);
typedef BOOL (WINAPI * wglChoosePixelFormatARB) (HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
}
AXLGLFLAPI PFN::wglGetPixelFormatAttribivARB wglGetPixelFormatAttribivARB;
AXLGLFLAPI PFN::wglGetPixelFormatAttribfvARB wglGetPixelFormatAttribfvARB;
AXLGLFLAPI PFN::wglChoosePixelFormatARB wglChoosePixelFormatARB;
// WGL_ARB_pixel_format

AXLGLFLAPI const bool& WGL_ARB_pixel_format_float;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TYPE_RGBA_FLOAT_ARB = 0x21A0;
// WGL_ARB_pixel_format_float

AXLGLFLAPI const bool& WGL_ARB_render_texture;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_RGB_ARB = 0x2070;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_RGBA_ARB = 0x2071;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_FORMAT_ARB = 0x2072;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_TARGET_ARB = 0x2073;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_MIPMAP_TEXTURE_ARB = 0x2074;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_RGB_ARB = 0x2075;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_RGBA_ARB = 0x2076;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NO_TEXTURE_ARB = 0x2077;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_CUBE_MAP_ARB = 0x2078;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_1D_ARB = 0x2079;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_2D_ARB = 0x207A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_MIPMAP_LEVEL_ARB = 0x207B;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CUBE_MAP_FACE_ARB = 0x207C;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB = 0x207D;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB = 0x207E;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB = 0x207F;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB = 0x2080;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB = 0x2081;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB = 0x2082;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_FRONT_LEFT_ARB = 0x2083;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_FRONT_RIGHT_ARB = 0x2084;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BACK_LEFT_ARB = 0x2085;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BACK_RIGHT_ARB = 0x2086;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX0_ARB = 0x2087;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX1_ARB = 0x2088;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX2_ARB = 0x2089;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX3_ARB = 0x208A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX4_ARB = 0x208B;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX5_ARB = 0x208C;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX6_ARB = 0x208D;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX7_ARB = 0x208E;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX8_ARB = 0x208F;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX9_ARB = 0x2090;
namespace PFN {
typedef BOOL (WINAPI * wglBindTexImageARB) (HPBUFFERARB hPbuffer, int iBuffer);
typedef BOOL (WINAPI * wglReleaseTexImageARB) (HPBUFFERARB hPbuffer, int iBuffer);
typedef BOOL (WINAPI * wglSetPbufferAttribARB) (HPBUFFERARB hPbuffer, const int *piAttribList);
}
AXLGLFLAPI PFN::wglBindTexImageARB wglBindTexImageARB;
AXLGLFLAPI PFN::wglReleaseTexImageARB wglReleaseTexImageARB;
AXLGLFLAPI PFN::wglSetPbufferAttribARB wglSetPbufferAttribARB;
// WGL_ARB_render_texture

AXLGLFLAPI const bool& WGL_ARB_robustness_application_isolation;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_RESET_ISOLATION_BIT_ARB = 0x00000008;
// WGL_ARB_robustness_application_isolation

AXLGLFLAPI const bool& WGL_ARB_robustness_share_group_isolation;
// WGL_ARB_robustness_share_group_isolation

AXLGLFLAPI const bool& WGL_3DFX_multisample;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SAMPLE_BUFFERS_3DFX = 0x2060;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SAMPLES_3DFX = 0x2061;
// WGL_3DFX_multisample

AXLGLFLAPI const bool& WGL_3DL_stereo_control;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_STEREO_EMITTER_ENABLE_3DL = 0x2055;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_STEREO_EMITTER_DISABLE_3DL = 0x2056;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_STEREO_POLARITY_NORMAL_3DL = 0x2057;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_STEREO_POLARITY_INVERT_3DL = 0x2058;
namespace PFN {
typedef BOOL (WINAPI * wglSetStereoEmitterState3DL) (HDC hDC, UINT uState);
}
AXLGLFLAPI PFN::wglSetStereoEmitterState3DL wglSetStereoEmitterState3DL;
// WGL_3DL_stereo_control

AXLGLFLAPI const bool& WGL_AMD_gpu_association;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_VENDOR_AMD = 0x1F00;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_RENDERER_STRING_AMD = 0x1F01;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_OPENGL_VERSION_STRING_AMD = 0x1F02;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_FASTEST_TARGET_GPUS_AMD = 0x21A2;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_RAM_AMD = 0x21A3;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_CLOCK_AMD = 0x21A4;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_NUM_PIPES_AMD = 0x21A5;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_NUM_SIMD_AMD = 0x21A6;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_NUM_RB_AMD = 0x21A7;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GPU_NUM_SPI_AMD = 0x21A8;
namespace PFN {
typedef UINT (WINAPI * wglGetGPUIDsAMD) (UINT maxCount, UINT *ids);
typedef INT (WINAPI * wglGetGPUInfoAMD) (UINT id, INT property, GLenum dataType, UINT size, void *data);
typedef UINT (WINAPI * wglGetContextGPUIDAMD) (HGLRC hglrc);
typedef HGLRC (WINAPI * wglCreateAssociatedContextAMD) (UINT id);
typedef HGLRC (WINAPI * wglCreateAssociatedContextAttribsAMD) (UINT id, HGLRC hShareContext, const int *attribList);
typedef BOOL (WINAPI * wglDeleteAssociatedContextAMD) (HGLRC hglrc);
typedef BOOL (WINAPI * wglMakeAssociatedContextCurrentAMD) (HGLRC hglrc);
typedef HGLRC (WINAPI * wglGetCurrentAssociatedContextAMD) (void);
typedef VOID (WINAPI * wglBlitContextFramebufferAMD) (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
}
AXLGLFLAPI PFN::wglGetGPUIDsAMD wglGetGPUIDsAMD;
AXLGLFLAPI PFN::wglGetGPUInfoAMD wglGetGPUInfoAMD;
AXLGLFLAPI PFN::wglGetContextGPUIDAMD wglGetContextGPUIDAMD;
AXLGLFLAPI PFN::wglCreateAssociatedContextAMD wglCreateAssociatedContextAMD;
AXLGLFLAPI PFN::wglCreateAssociatedContextAttribsAMD wglCreateAssociatedContextAttribsAMD;
AXLGLFLAPI PFN::wglDeleteAssociatedContextAMD wglDeleteAssociatedContextAMD;
AXLGLFLAPI PFN::wglMakeAssociatedContextCurrentAMD wglMakeAssociatedContextCurrentAMD;
AXLGLFLAPI PFN::wglGetCurrentAssociatedContextAMD wglGetCurrentAssociatedContextAMD;
AXLGLFLAPI PFN::wglBlitContextFramebufferAMD wglBlitContextFramebufferAMD;
// WGL_AMD_gpu_association

AXLGLFLAPI const bool& WGL_ATI_pixel_format_float;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TYPE_RGBA_FLOAT_ATI = 0x21A0;
// WGL_ATI_pixel_format_float

AXLGLFLAPI const bool& WGL_ATI_render_texture_rectangle;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_RECTANGLE_ATI = 0x21A5;
// WGL_ATI_render_texture_rectangle

AXLGLFLAPI const bool& WGL_EXT_colorspace;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_COLORSPACE_EXT = 0x309D;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_COLORSPACE_SRGB_EXT = 0x3089;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_COLORSPACE_LINEAR_EXT = 0x308A;
// WGL_EXT_colorspace

AXLGLFLAPI const bool& WGL_EXT_create_context_es2_profile;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_ES2_PROFILE_BIT_EXT = 0x00000004;
// WGL_EXT_create_context_es2_profile

AXLGLFLAPI const bool& WGL_EXT_create_context_es_profile;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_ES_PROFILE_BIT_EXT = 0x00000004;
// WGL_EXT_create_context_es_profile

AXLGLFLAPI const bool& WGL_EXT_depth_float;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DEPTH_FLOAT_EXT = 0x2040;
// WGL_EXT_depth_float

AXLGLFLAPI const bool& WGL_EXT_display_color_table;
namespace PFN {
typedef GLboolean (WINAPI * wglCreateDisplayColorTableEXT) (GLushort id);
typedef GLboolean (WINAPI * wglLoadDisplayColorTableEXT) (const GLushort *table, GLuint length);
typedef GLboolean (WINAPI * wglBindDisplayColorTableEXT) (GLushort id);
typedef VOID (WINAPI * wglDestroyDisplayColorTableEXT) (GLushort id);
}
AXLGLFLAPI PFN::wglCreateDisplayColorTableEXT wglCreateDisplayColorTableEXT;
AXLGLFLAPI PFN::wglLoadDisplayColorTableEXT wglLoadDisplayColorTableEXT;
AXLGLFLAPI PFN::wglBindDisplayColorTableEXT wglBindDisplayColorTableEXT;
AXLGLFLAPI PFN::wglDestroyDisplayColorTableEXT wglDestroyDisplayColorTableEXT;
// WGL_EXT_display_color_table

AXLGLFLAPI const bool& WGL_EXT_extensions_string;
namespace PFN {
typedef const char *(WINAPI * wglGetExtensionsStringEXT) (void);
}
AXLGLFLAPI PFN::wglGetExtensionsStringEXT wglGetExtensionsStringEXT;
// WGL_EXT_extensions_string

AXLGLFLAPI const bool& WGL_EXT_framebuffer_sRGB;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT = 0x20A9;
// WGL_EXT_framebuffer_sRGB

AXLGLFLAPI const bool& WGL_EXT_make_current_read;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant ERROR_INVALID_PIXEL_TYPE_EXT = 0x2043;
namespace PFN {
typedef BOOL (WINAPI * wglMakeContextCurrentEXT) (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
typedef HDC (WINAPI * wglGetCurrentReadDCEXT) (void);
}
AXLGLFLAPI PFN::wglMakeContextCurrentEXT wglMakeContextCurrentEXT;
AXLGLFLAPI PFN::wglGetCurrentReadDCEXT wglGetCurrentReadDCEXT;
// WGL_EXT_make_current_read

AXLGLFLAPI const bool& WGL_EXT_multisample;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SAMPLE_BUFFERS_EXT = 0x2041;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SAMPLES_EXT = 0x2042;
// WGL_EXT_multisample

AXLGLFLAPI const bool& WGL_EXT_pbuffer;
DECLARE_HANDLE(HPBUFFEREXT);
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DRAW_TO_PBUFFER_EXT = 0x202D;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_MAX_PBUFFER_PIXELS_EXT = 0x202E;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_MAX_PBUFFER_WIDTH_EXT = 0x202F;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_MAX_PBUFFER_HEIGHT_EXT = 0x2030;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_OPTIMAL_PBUFFER_WIDTH_EXT = 0x2031;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_OPTIMAL_PBUFFER_HEIGHT_EXT = 0x2032;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_PBUFFER_LARGEST_EXT = 0x2033;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_PBUFFER_WIDTH_EXT = 0x2034;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_PBUFFER_HEIGHT_EXT = 0x2035;
namespace PFN {
typedef HPBUFFEREXT (WINAPI * wglCreatePbufferEXT) (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList);
typedef HDC (WINAPI * wglGetPbufferDCEXT) (HPBUFFEREXT hPbuffer);
typedef int (WINAPI * wglReleasePbufferDCEXT) (HPBUFFEREXT hPbuffer, HDC hDC);
typedef BOOL (WINAPI * wglDestroyPbufferEXT) (HPBUFFEREXT hPbuffer);
typedef BOOL (WINAPI * wglQueryPbufferEXT) (HPBUFFEREXT hPbuffer, int iAttribute, int *piValue);
}
AXLGLFLAPI PFN::wglCreatePbufferEXT wglCreatePbufferEXT;
AXLGLFLAPI PFN::wglGetPbufferDCEXT wglGetPbufferDCEXT;
AXLGLFLAPI PFN::wglReleasePbufferDCEXT wglReleasePbufferDCEXT;
AXLGLFLAPI PFN::wglDestroyPbufferEXT wglDestroyPbufferEXT;
AXLGLFLAPI PFN::wglQueryPbufferEXT wglQueryPbufferEXT;
// WGL_EXT_pbuffer

AXLGLFLAPI const bool& WGL_EXT_pixel_format;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NUMBER_PIXEL_FORMATS_EXT = 0x2000;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DRAW_TO_WINDOW_EXT = 0x2001;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DRAW_TO_BITMAP_EXT = 0x2002;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCELERATION_EXT = 0x2003;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NEED_PALETTE_EXT = 0x2004;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NEED_SYSTEM_PALETTE_EXT = 0x2005;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_LAYER_BUFFERS_EXT = 0x2006;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_METHOD_EXT = 0x2007;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NUMBER_OVERLAYS_EXT = 0x2008;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NUMBER_UNDERLAYS_EXT = 0x2009;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TRANSPARENT_EXT = 0x200A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TRANSPARENT_VALUE_EXT = 0x200B;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SHARE_DEPTH_EXT = 0x200C;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SHARE_STENCIL_EXT = 0x200D;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SHARE_ACCUM_EXT = 0x200E;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SUPPORT_GDI_EXT = 0x200F;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SUPPORT_OPENGL_EXT = 0x2010;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DOUBLE_BUFFER_EXT = 0x2011;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_STEREO_EXT = 0x2012;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_PIXEL_TYPE_EXT = 0x2013;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_COLOR_BITS_EXT = 0x2014;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_RED_BITS_EXT = 0x2015;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_RED_SHIFT_EXT = 0x2016;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GREEN_BITS_EXT = 0x2017;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GREEN_SHIFT_EXT = 0x2018;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BLUE_BITS_EXT = 0x2019;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BLUE_SHIFT_EXT = 0x201A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ALPHA_BITS_EXT = 0x201B;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ALPHA_SHIFT_EXT = 0x201C;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_BITS_EXT = 0x201D;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_RED_BITS_EXT = 0x201E;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_GREEN_BITS_EXT = 0x201F;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_BLUE_BITS_EXT = 0x2020;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCUM_ALPHA_BITS_EXT = 0x2021;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DEPTH_BITS_EXT = 0x2022;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_STENCIL_BITS_EXT = 0x2023;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_AUX_BUFFERS_EXT = 0x2024;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NO_ACCELERATION_EXT = 0x2025;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENERIC_ACCELERATION_EXT = 0x2026;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_FULL_ACCELERATION_EXT = 0x2027;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_EXCHANGE_EXT = 0x2028;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_COPY_EXT = 0x2029;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_SWAP_UNDEFINED_EXT = 0x202A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TYPE_RGBA_EXT = 0x202B;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TYPE_COLORINDEX_EXT = 0x202C;
namespace PFN {
typedef BOOL (WINAPI * wglGetPixelFormatAttribivEXT) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues);
typedef BOOL (WINAPI * wglGetPixelFormatAttribfvEXT) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues);
typedef BOOL (WINAPI * wglChoosePixelFormatEXT) (HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
}
AXLGLFLAPI PFN::wglGetPixelFormatAttribivEXT wglGetPixelFormatAttribivEXT;
AXLGLFLAPI PFN::wglGetPixelFormatAttribfvEXT wglGetPixelFormatAttribfvEXT;
AXLGLFLAPI PFN::wglChoosePixelFormatEXT wglChoosePixelFormatEXT;
// WGL_EXT_pixel_format

AXLGLFLAPI const bool& WGL_EXT_pixel_format_packed_float;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TYPE_RGBA_UNSIGNED_FLOAT_EXT = 0x20A8;
// WGL_EXT_pixel_format_packed_float

AXLGLFLAPI const bool& WGL_EXT_swap_control;
namespace PFN {
typedef BOOL (WINAPI * wglSwapIntervalEXT) (int interval);
typedef int (WINAPI * wglGetSwapIntervalEXT) (void);
}
AXLGLFLAPI PFN::wglSwapIntervalEXT wglSwapIntervalEXT;
AXLGLFLAPI PFN::wglGetSwapIntervalEXT wglGetSwapIntervalEXT;
// WGL_EXT_swap_control

AXLGLFLAPI const bool& WGL_EXT_swap_control_tear;
// WGL_EXT_swap_control_tear

AXLGLFLAPI const bool& WGL_I3D_digital_video_control;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D = 0x2050;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D = 0x2051;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DIGITAL_VIDEO_CURSOR_INCLUDED_I3D = 0x2052;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DIGITAL_VIDEO_GAMMA_CORRECTED_I3D = 0x2053;
namespace PFN {
typedef BOOL (WINAPI * wglGetDigitalVideoParametersI3D) (HDC hDC, int iAttribute, int *piValue);
typedef BOOL (WINAPI * wglSetDigitalVideoParametersI3D) (HDC hDC, int iAttribute, const int *piValue);
}
AXLGLFLAPI PFN::wglGetDigitalVideoParametersI3D wglGetDigitalVideoParametersI3D;
AXLGLFLAPI PFN::wglSetDigitalVideoParametersI3D wglSetDigitalVideoParametersI3D;
// WGL_I3D_digital_video_control

AXLGLFLAPI const bool& WGL_I3D_gamma;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GAMMA_TABLE_SIZE_I3D = 0x204E;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GAMMA_EXCLUDE_DESKTOP_I3D = 0x204F;
namespace PFN {
typedef BOOL (WINAPI * wglGetGammaTableParametersI3D) (HDC hDC, int iAttribute, int *piValue);
typedef BOOL (WINAPI * wglSetGammaTableParametersI3D) (HDC hDC, int iAttribute, const int *piValue);
typedef BOOL (WINAPI * wglGetGammaTableI3D) (HDC hDC, int iEntries, USHORT *puRed, USHORT *puGreen, USHORT *puBlue);
typedef BOOL (WINAPI * wglSetGammaTableI3D) (HDC hDC, int iEntries, const USHORT *puRed, const USHORT *puGreen, const USHORT *puBlue);
}
AXLGLFLAPI PFN::wglGetGammaTableParametersI3D wglGetGammaTableParametersI3D;
AXLGLFLAPI PFN::wglSetGammaTableParametersI3D wglSetGammaTableParametersI3D;
AXLGLFLAPI PFN::wglGetGammaTableI3D wglGetGammaTableI3D;
AXLGLFLAPI PFN::wglSetGammaTableI3D wglSetGammaTableI3D;
// WGL_I3D_gamma

AXLGLFLAPI const bool& WGL_I3D_genlock;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENLOCK_SOURCE_MULTIVIEW_I3D = 0x2044;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENLOCK_SOURCE_EXTERNAL_SYNC_I3D = 0x2045;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENLOCK_SOURCE_EXTERNAL_FIELD_I3D = 0x2046;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENLOCK_SOURCE_EXTERNAL_TTL_I3D = 0x2047;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENLOCK_SOURCE_DIGITAL_SYNC_I3D = 0x2048;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENLOCK_SOURCE_DIGITAL_FIELD_I3D = 0x2049;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENLOCK_SOURCE_EDGE_FALLING_I3D = 0x204A;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENLOCK_SOURCE_EDGE_RISING_I3D = 0x204B;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_GENLOCK_SOURCE_EDGE_BOTH_I3D = 0x204C;
namespace PFN {
typedef BOOL (WINAPI * wglEnableGenlockI3D) (HDC hDC);
typedef BOOL (WINAPI * wglDisableGenlockI3D) (HDC hDC);
typedef BOOL (WINAPI * wglIsEnabledGenlockI3D) (HDC hDC, BOOL *pFlag);
typedef BOOL (WINAPI * wglGenlockSourceI3D) (HDC hDC, UINT uSource);
typedef BOOL (WINAPI * wglGetGenlockSourceI3D) (HDC hDC, UINT *uSource);
typedef BOOL (WINAPI * wglGenlockSourceEdgeI3D) (HDC hDC, UINT uEdge);
typedef BOOL (WINAPI * wglGetGenlockSourceEdgeI3D) (HDC hDC, UINT *uEdge);
typedef BOOL (WINAPI * wglGenlockSampleRateI3D) (HDC hDC, UINT uRate);
typedef BOOL (WINAPI * wglGetGenlockSampleRateI3D) (HDC hDC, UINT *uRate);
typedef BOOL (WINAPI * wglGenlockSourceDelayI3D) (HDC hDC, UINT uDelay);
typedef BOOL (WINAPI * wglGetGenlockSourceDelayI3D) (HDC hDC, UINT *uDelay);
typedef BOOL (WINAPI * wglQueryGenlockMaxSourceDelayI3D) (HDC hDC, UINT *uMaxLineDelay, UINT *uMaxPixelDelay);
}
AXLGLFLAPI PFN::wglEnableGenlockI3D wglEnableGenlockI3D;
AXLGLFLAPI PFN::wglDisableGenlockI3D wglDisableGenlockI3D;
AXLGLFLAPI PFN::wglIsEnabledGenlockI3D wglIsEnabledGenlockI3D;
AXLGLFLAPI PFN::wglGenlockSourceI3D wglGenlockSourceI3D;
AXLGLFLAPI PFN::wglGetGenlockSourceI3D wglGetGenlockSourceI3D;
AXLGLFLAPI PFN::wglGenlockSourceEdgeI3D wglGenlockSourceEdgeI3D;
AXLGLFLAPI PFN::wglGetGenlockSourceEdgeI3D wglGetGenlockSourceEdgeI3D;
AXLGLFLAPI PFN::wglGenlockSampleRateI3D wglGenlockSampleRateI3D;
AXLGLFLAPI PFN::wglGetGenlockSampleRateI3D wglGetGenlockSampleRateI3D;
AXLGLFLAPI PFN::wglGenlockSourceDelayI3D wglGenlockSourceDelayI3D;
AXLGLFLAPI PFN::wglGetGenlockSourceDelayI3D wglGetGenlockSourceDelayI3D;
AXLGLFLAPI PFN::wglQueryGenlockMaxSourceDelayI3D wglQueryGenlockMaxSourceDelayI3D;
// WGL_I3D_genlock

AXLGLFLAPI const bool& WGL_I3D_image_buffer;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_IMAGE_BUFFER_MIN_ACCESS_I3D = 0x00000001;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_IMAGE_BUFFER_LOCK_I3D = 0x00000002;
namespace PFN {
typedef LPVOID (WINAPI * wglCreateImageBufferI3D) (HDC hDC, DWORD dwSize, UINT uFlags);
typedef BOOL (WINAPI * wglDestroyImageBufferI3D) (HDC hDC, LPVOID pAddress);
typedef BOOL (WINAPI * wglAssociateImageBufferEventsI3D) (HDC hDC, const HANDLE *pEvent, const LPVOID *pAddress, const DWORD *pSize, UINT count);
typedef BOOL (WINAPI * wglReleaseImageBufferEventsI3D) (HDC hDC, const LPVOID *pAddress, UINT count);
}
AXLGLFLAPI PFN::wglCreateImageBufferI3D wglCreateImageBufferI3D;
AXLGLFLAPI PFN::wglDestroyImageBufferI3D wglDestroyImageBufferI3D;
AXLGLFLAPI PFN::wglAssociateImageBufferEventsI3D wglAssociateImageBufferEventsI3D;
AXLGLFLAPI PFN::wglReleaseImageBufferEventsI3D wglReleaseImageBufferEventsI3D;
// WGL_I3D_image_buffer

AXLGLFLAPI const bool& WGL_I3D_swap_frame_lock;
namespace PFN {
typedef BOOL (WINAPI * wglEnableFrameLockI3D) (void);
typedef BOOL (WINAPI * wglDisableFrameLockI3D) (void);
typedef BOOL (WINAPI * wglIsEnabledFrameLockI3D) (BOOL *pFlag);
typedef BOOL (WINAPI * wglQueryFrameLockMasterI3D) (BOOL *pFlag);
}
AXLGLFLAPI PFN::wglEnableFrameLockI3D wglEnableFrameLockI3D;
AXLGLFLAPI PFN::wglDisableFrameLockI3D wglDisableFrameLockI3D;
AXLGLFLAPI PFN::wglIsEnabledFrameLockI3D wglIsEnabledFrameLockI3D;
AXLGLFLAPI PFN::wglQueryFrameLockMasterI3D wglQueryFrameLockMasterI3D;
// WGL_I3D_swap_frame_lock

AXLGLFLAPI const bool& WGL_I3D_swap_frame_usage;
namespace PFN {
typedef BOOL (WINAPI * wglGetFrameUsageI3D) (float *pUsage);
typedef BOOL (WINAPI * wglBeginFrameTrackingI3D) (void);
typedef BOOL (WINAPI * wglEndFrameTrackingI3D) (void);
typedef BOOL (WINAPI * wglQueryFrameTrackingI3D) (DWORD *pFrameCount, DWORD *pMissedFrames, float *pLastMissedUsage);
}
AXLGLFLAPI PFN::wglGetFrameUsageI3D wglGetFrameUsageI3D;
AXLGLFLAPI PFN::wglBeginFrameTrackingI3D wglBeginFrameTrackingI3D;
AXLGLFLAPI PFN::wglEndFrameTrackingI3D wglEndFrameTrackingI3D;
AXLGLFLAPI PFN::wglQueryFrameTrackingI3D wglQueryFrameTrackingI3D;
// WGL_I3D_swap_frame_usage

AXLGLFLAPI const bool& WGL_NV_DX_interop;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCESS_READ_ONLY_NV = 0x00000000;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCESS_READ_WRITE_NV = 0x00000001;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_ACCESS_WRITE_DISCARD_NV = 0x00000002;
namespace PFN {
typedef BOOL (WINAPI * wglDXSetResourceShareHandleNV) (void *dxObject, HANDLE shareHandle);
typedef HANDLE (WINAPI * wglDXOpenDeviceNV) (void *dxDevice);
typedef BOOL (WINAPI * wglDXCloseDeviceNV) (HANDLE hDevice);
typedef HANDLE (WINAPI * wglDXRegisterObjectNV) (HANDLE hDevice, void *dxObject, GLuint name, GLenum type, GLenum access);
typedef BOOL (WINAPI * wglDXUnregisterObjectNV) (HANDLE hDevice, HANDLE hObject);
typedef BOOL (WINAPI * wglDXObjectAccessNV) (HANDLE hObject, GLenum access);
typedef BOOL (WINAPI * wglDXLockObjectsNV) (HANDLE hDevice, GLint count, HANDLE *hObjects);
typedef BOOL (WINAPI * wglDXUnlockObjectsNV) (HANDLE hDevice, GLint count, HANDLE *hObjects);
}
AXLGLFLAPI PFN::wglDXSetResourceShareHandleNV wglDXSetResourceShareHandleNV;
AXLGLFLAPI PFN::wglDXOpenDeviceNV wglDXOpenDeviceNV;
AXLGLFLAPI PFN::wglDXCloseDeviceNV wglDXCloseDeviceNV;
AXLGLFLAPI PFN::wglDXRegisterObjectNV wglDXRegisterObjectNV;
AXLGLFLAPI PFN::wglDXUnregisterObjectNV wglDXUnregisterObjectNV;
AXLGLFLAPI PFN::wglDXObjectAccessNV wglDXObjectAccessNV;
AXLGLFLAPI PFN::wglDXLockObjectsNV wglDXLockObjectsNV;
AXLGLFLAPI PFN::wglDXUnlockObjectsNV wglDXUnlockObjectsNV;
// WGL_NV_DX_interop

AXLGLFLAPI const bool& WGL_NV_DX_interop2;
// WGL_NV_DX_interop2

AXLGLFLAPI const bool& WGL_NV_copy_image;
namespace PFN {
typedef BOOL (WINAPI * wglCopyImageSubDataNV) (HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
}
AXLGLFLAPI PFN::wglCopyImageSubDataNV wglCopyImageSubDataNV;
// WGL_NV_copy_image

AXLGLFLAPI const bool& WGL_NV_delay_before_swap;
namespace PFN {
typedef BOOL (WINAPI * wglDelayBeforeSwapNV) (HDC hDC, GLfloat seconds);
}
AXLGLFLAPI PFN::wglDelayBeforeSwapNV wglDelayBeforeSwapNV;
// WGL_NV_delay_before_swap

AXLGLFLAPI const bool& WGL_NV_float_buffer;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_FLOAT_COMPONENTS_NV = 0x20B0;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_R_NV = 0x20B1;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RG_NV = 0x20B2;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGB_NV = 0x20B3;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGBA_NV = 0x20B4;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_FLOAT_R_NV = 0x20B5;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_FLOAT_RG_NV = 0x20B6;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_FLOAT_RGB_NV = 0x20B7;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_FLOAT_RGBA_NV = 0x20B8;
// WGL_NV_float_buffer

AXLGLFLAPI const bool& WGL_NV_gpu_affinity;
DECLARE_HANDLE(HGPUNV);
struct _GPU_DEVICE {
    DWORD  cb;
    CHAR   DeviceName[32];
    CHAR   DeviceString[128];
    DWORD  Flags;
    RECT   rcVirtualScreen;
};
typedef struct _GPU_DEVICE *PGPU_DEVICE;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant ERROR_INCOMPATIBLE_AFFINITY_MASKS_NV = 0x20D0;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant ERROR_MISSING_AFFINITY_MASK_NV = 0x20D1;
namespace PFN {
typedef BOOL (WINAPI * wglEnumGpusNV) (UINT iGpuIndex, HGPUNV *phGpu);
typedef BOOL (WINAPI * wglEnumGpuDevicesNV) (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
typedef HDC (WINAPI * wglCreateAffinityDCNV) (const HGPUNV *phGpuList);
typedef BOOL (WINAPI * wglEnumGpusFromAffinityDCNV) (HDC hAffinityDC, UINT iGpuIndex, HGPUNV *hGpu);
typedef BOOL (WINAPI * wglDeleteDCNV) (HDC hdc);
}
AXLGLFLAPI PFN::wglEnumGpusNV wglEnumGpusNV;
AXLGLFLAPI PFN::wglEnumGpuDevicesNV wglEnumGpuDevicesNV;
AXLGLFLAPI PFN::wglCreateAffinityDCNV wglCreateAffinityDCNV;
AXLGLFLAPI PFN::wglEnumGpusFromAffinityDCNV wglEnumGpusFromAffinityDCNV;
AXLGLFLAPI PFN::wglDeleteDCNV wglDeleteDCNV;
// WGL_NV_gpu_affinity

AXLGLFLAPI const bool& WGL_NV_multigpu_context;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_MULTIGPU_ATTRIB_NV = 0x20AA;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_MULTIGPU_ATTRIB_SINGLE_NV = 0x20AB;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_MULTIGPU_ATTRIB_AFR_NV = 0x20AC;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_MULTIGPU_ATTRIB_MULTICAST_NV = 0x20AD;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_CONTEXT_MULTIGPU_ATTRIB_MULTI_DISPLAY_MULTICAST_NV = 0x20AE;
// WGL_NV_multigpu_context

AXLGLFLAPI const bool& WGL_NV_multisample_coverage;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_COVERAGE_SAMPLES_NV = 0x2042;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_COLOR_SAMPLES_NV = 0x20B9;
// WGL_NV_multisample_coverage

AXLGLFLAPI const bool& WGL_NV_present_video;
DECLARE_HANDLE(HVIDEOOUTPUTDEVICENV);
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NUM_VIDEO_SLOTS_NV = 0x20F0;
namespace PFN {
typedef int (WINAPI * wglEnumerateVideoDevicesNV) (HDC hDc, HVIDEOOUTPUTDEVICENV *phDeviceList);
typedef BOOL (WINAPI * wglBindVideoDeviceNV) (HDC hDc, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int *piAttribList);
typedef BOOL (WINAPI * wglQueryCurrentContextNV) (int iAttribute, int *piValue);
}
AXLGLFLAPI PFN::wglEnumerateVideoDevicesNV wglEnumerateVideoDevicesNV;
AXLGLFLAPI PFN::wglBindVideoDeviceNV wglBindVideoDeviceNV;
AXLGLFLAPI PFN::wglQueryCurrentContextNV wglQueryCurrentContextNV;
// WGL_NV_present_video

AXLGLFLAPI const bool& WGL_NV_render_depth_texture;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_DEPTH_NV = 0x20A3;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_RECTANGLE_DEPTH_NV = 0x20A4;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DEPTH_TEXTURE_FORMAT_NV = 0x20A5;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_DEPTH_COMPONENT_NV = 0x20A6;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_DEPTH_COMPONENT_NV = 0x20A7;
// WGL_NV_render_depth_texture

AXLGLFLAPI const bool& WGL_NV_render_texture_rectangle;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_RECTANGLE_RGB_NV = 0x20A0;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_TEXTURE_RECTANGLE_RGBA_NV = 0x20A1;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_TEXTURE_RECTANGLE_NV = 0x20A2;
// WGL_NV_render_texture_rectangle

AXLGLFLAPI const bool& WGL_NV_swap_group;
namespace PFN {
typedef BOOL (WINAPI * wglJoinSwapGroupNV) (HDC hDC, GLuint group);
typedef BOOL (WINAPI * wglBindSwapBarrierNV) (GLuint group, GLuint barrier);
typedef BOOL (WINAPI * wglQuerySwapGroupNV) (HDC hDC, GLuint *group, GLuint *barrier);
typedef BOOL (WINAPI * wglQueryMaxSwapGroupsNV) (HDC hDC, GLuint *maxGroups, GLuint *maxBarriers);
typedef BOOL (WINAPI * wglQueryFrameCountNV) (HDC hDC, GLuint *count);
typedef BOOL (WINAPI * wglResetFrameCountNV) (HDC hDC);
}
AXLGLFLAPI PFN::wglJoinSwapGroupNV wglJoinSwapGroupNV;
AXLGLFLAPI PFN::wglBindSwapBarrierNV wglBindSwapBarrierNV;
AXLGLFLAPI PFN::wglQuerySwapGroupNV wglQuerySwapGroupNV;
AXLGLFLAPI PFN::wglQueryMaxSwapGroupsNV wglQueryMaxSwapGroupsNV;
AXLGLFLAPI PFN::wglQueryFrameCountNV wglQueryFrameCountNV;
AXLGLFLAPI PFN::wglResetFrameCountNV wglResetFrameCountNV;
// WGL_NV_swap_group

AXLGLFLAPI const bool& WGL_NV_vertex_array_range;
namespace PFN {
typedef void *(WINAPI * wglAllocateMemoryNV) (GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
typedef void (WINAPI * wglFreeMemoryNV) (void *pointer);
}
AXLGLFLAPI PFN::wglAllocateMemoryNV wglAllocateMemoryNV;
AXLGLFLAPI PFN::wglFreeMemoryNV wglFreeMemoryNV;
// WGL_NV_vertex_array_range

AXLGLFLAPI const bool& WGL_NV_video_capture;
DECLARE_HANDLE(HVIDEOINPUTDEVICENV);
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_UNIQUE_ID_NV = 0x20CE;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_NUM_VIDEO_CAPTURE_SLOTS_NV = 0x20CF;
namespace PFN {
typedef BOOL (WINAPI * wglBindVideoCaptureDeviceNV) (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
typedef UINT (WINAPI * wglEnumerateVideoCaptureDevicesNV) (HDC hDc, HVIDEOINPUTDEVICENV *phDeviceList);
typedef BOOL (WINAPI * wglLockVideoCaptureDeviceNV) (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
typedef BOOL (WINAPI * wglQueryVideoCaptureDeviceNV) (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int *piValue);
typedef BOOL (WINAPI * wglReleaseVideoCaptureDeviceNV) (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
}
AXLGLFLAPI PFN::wglBindVideoCaptureDeviceNV wglBindVideoCaptureDeviceNV;
AXLGLFLAPI PFN::wglEnumerateVideoCaptureDevicesNV wglEnumerateVideoCaptureDevicesNV;
AXLGLFLAPI PFN::wglLockVideoCaptureDeviceNV wglLockVideoCaptureDeviceNV;
AXLGLFLAPI PFN::wglQueryVideoCaptureDeviceNV wglQueryVideoCaptureDeviceNV;
AXLGLFLAPI PFN::wglReleaseVideoCaptureDeviceNV wglReleaseVideoCaptureDeviceNV;
// WGL_NV_video_capture

AXLGLFLAPI const bool& WGL_NV_video_output;
DECLARE_HANDLE(HPVIDEODEV);
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_VIDEO_RGB_NV = 0x20C0;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_VIDEO_RGBA_NV = 0x20C1;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_BIND_TO_VIDEO_RGB_AND_DEPTH_NV = 0x20C2;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_COLOR_NV = 0x20C3;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_ALPHA_NV = 0x20C4;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_DEPTH_NV = 0x20C5;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_COLOR_AND_ALPHA_NV = 0x20C6;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_COLOR_AND_DEPTH_NV = 0x20C7;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_FRAME = 0x20C8;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_FIELD_1 = 0x20C9;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_FIELD_2 = 0x20CA;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_STACKED_FIELDS_1_2 = 0x20CB;
AXLGLFLCONSTMODIFIER axl::glfl::GLconstant WGL_VIDEO_OUT_STACKED_FIELDS_2_1 = 0x20CC;
namespace PFN {
typedef BOOL (WINAPI * wglGetVideoDeviceNV) (HDC hDC, int numDevices, HPVIDEODEV *hVideoDevice);
typedef BOOL (WINAPI * wglReleaseVideoDeviceNV) (HPVIDEODEV hVideoDevice);
typedef BOOL (WINAPI * wglBindVideoImageNV) (HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
typedef BOOL (WINAPI * wglReleaseVideoImageNV) (HPBUFFERARB hPbuffer, int iVideoBuffer);
typedef BOOL (WINAPI * wglSendPbufferToVideoNV) (HPBUFFERARB hPbuffer, int iBufferType, unsigned long *pulCounterPbuffer, BOOL bBlock);
typedef BOOL (WINAPI * wglGetVideoInfoNV) (HPVIDEODEV hpVideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo);
}
AXLGLFLAPI PFN::wglGetVideoDeviceNV wglGetVideoDeviceNV;
AXLGLFLAPI PFN::wglReleaseVideoDeviceNV wglReleaseVideoDeviceNV;
AXLGLFLAPI PFN::wglBindVideoImageNV wglBindVideoImageNV;
AXLGLFLAPI PFN::wglReleaseVideoImageNV wglReleaseVideoImageNV;
AXLGLFLAPI PFN::wglSendPbufferToVideoNV wglSendPbufferToVideoNV;
AXLGLFLAPI PFN::wglGetVideoInfoNV wglGetVideoInfoNV;
// WGL_NV_video_output

AXLGLFLAPI const bool& WGL_OML_sync_control;
namespace PFN {
typedef BOOL (WINAPI * wglGetSyncValuesOML) (HDC hdc, INT64 *ust, INT64 *msc, INT64 *sbc);
typedef BOOL (WINAPI * wglGetMscRateOML) (HDC hdc, INT32 *numerator, INT32 *denominator);
typedef INT64 (WINAPI * wglSwapBuffersMscOML) (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
typedef INT64 (WINAPI * wglSwapLayerBuffersMscOML) (HDC hdc, INT fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
typedef BOOL (WINAPI * wglWaitForMscOML) (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 *ust, INT64 *msc, INT64 *sbc);
typedef BOOL (WINAPI * wglWaitForSbcOML) (HDC hdc, INT64 target_sbc, INT64 *ust, INT64 *msc, INT64 *sbc);
}
AXLGLFLAPI PFN::wglGetSyncValuesOML wglGetSyncValuesOML;
AXLGLFLAPI PFN::wglGetMscRateOML wglGetMscRateOML;
AXLGLFLAPI PFN::wglSwapBuffersMscOML wglSwapBuffersMscOML;
AXLGLFLAPI PFN::wglSwapLayerBuffersMscOML wglSwapLayerBuffersMscOML;
AXLGLFLAPI PFN::wglWaitForMscOML wglWaitForMscOML;
AXLGLFLAPI PFN::wglWaitForSbcOML wglWaitForSbcOML;
// WGL_OML_sync_control

AXLGLFLAPI bool load();
AXLGLFLAPI bool checkExtension(const char* extension_name);

} // axl::glfl::WGL
} // axl::glfl
} // axl
