#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>
#include <axl.glfl/lib.hpp>
#include <axl.glfl/Dummy.hpp>
#include <axl.glfl/gl.hpp>
#include <axl.glfl/glCoreARB.hpp>
#include <axl.glfl/win/wglext.hpp>

#define LOAD_WGLPROC(Name) (Name = (PFN::Name)wglGetProcAddress(#Name))

namespace axl {
namespace glfl {
namespace WGL {

bool _WGL_ARB_buffer_region = false;
const bool& WGL_ARB_buffer_region = _WGL_ARB_buffer_region;
PFN::wglCreateBufferRegionARB wglCreateBufferRegionARB = (PFN::wglCreateBufferRegionARB)0;;
PFN::wglDeleteBufferRegionARB wglDeleteBufferRegionARB = (PFN::wglDeleteBufferRegionARB)0;;
PFN::wglSaveBufferRegionARB wglSaveBufferRegionARB = (PFN::wglSaveBufferRegionARB)0;;
PFN::wglRestoreBufferRegionARB wglRestoreBufferRegionARB = (PFN::wglRestoreBufferRegionARB)0;;
// WGL_ARB_buffer_region
bool _WGL_ARB_context_flush_control = false;
const bool& WGL_ARB_context_flush_control = _WGL_ARB_context_flush_control;
// WGL_ARB_context_flush_control
bool _WGL_ARB_create_context = false;
const bool& WGL_ARB_create_context = _WGL_ARB_create_context;
PFN::wglCreateContextAttribsARB wglCreateContextAttribsARB = (PFN::wglCreateContextAttribsARB)0;;
// WGL_ARB_create_context
bool _WGL_ARB_create_context_no_error = false;
const bool& WGL_ARB_create_context_no_error = _WGL_ARB_create_context_no_error;
// WGL_ARB_create_context_no_error
bool _WGL_ARB_create_context_profile = false;
const bool& WGL_ARB_create_context_profile = _WGL_ARB_create_context_profile;
// WGL_ARB_create_context_profile
bool _WGL_ARB_create_context_robustness = false;
const bool& WGL_ARB_create_context_robustness = _WGL_ARB_create_context_robustness;
// WGL_ARB_create_context_robustness
bool _WGL_ARB_extensions_string = false;
const bool& WGL_ARB_extensions_string = _WGL_ARB_extensions_string;
PFN::wglGetExtensionsStringARB wglGetExtensionsStringARB = (PFN::wglGetExtensionsStringARB)0;;
// WGL_ARB_extensions_string
bool _WGL_ARB_framebuffer_sRGB = false;
const bool& WGL_ARB_framebuffer_sRGB = _WGL_ARB_framebuffer_sRGB;
// WGL_ARB_framebuffer_sRGB
bool _WGL_ARB_make_current_read = false;
const bool& WGL_ARB_make_current_read = _WGL_ARB_make_current_read;
PFN::wglMakeContextCurrentARB wglMakeContextCurrentARB = (PFN::wglMakeContextCurrentARB)0;;
PFN::wglGetCurrentReadDCARB wglGetCurrentReadDCARB = (PFN::wglGetCurrentReadDCARB)0;;
// WGL_ARB_make_current_read
bool _WGL_ARB_multisample = false;
const bool& WGL_ARB_multisample = _WGL_ARB_multisample;
// WGL_ARB_multisample
bool _WGL_ARB_pbuffer = false;
const bool& WGL_ARB_pbuffer = _WGL_ARB_pbuffer;
PFN::wglCreatePbufferARB wglCreatePbufferARB = (PFN::wglCreatePbufferARB)0;;
PFN::wglGetPbufferDCARB wglGetPbufferDCARB = (PFN::wglGetPbufferDCARB)0;;
PFN::wglReleasePbufferDCARB wglReleasePbufferDCARB = (PFN::wglReleasePbufferDCARB)0;;
PFN::wglDestroyPbufferARB wglDestroyPbufferARB = (PFN::wglDestroyPbufferARB)0;;
PFN::wglQueryPbufferARB wglQueryPbufferARB = (PFN::wglQueryPbufferARB)0;;
// WGL_ARB_pbuffer
bool _WGL_ARB_pixel_format = false;
const bool& WGL_ARB_pixel_format = _WGL_ARB_pixel_format;
PFN::wglGetPixelFormatAttribivARB wglGetPixelFormatAttribivARB = (PFN::wglGetPixelFormatAttribivARB)0;;
PFN::wglGetPixelFormatAttribfvARB wglGetPixelFormatAttribfvARB = (PFN::wglGetPixelFormatAttribfvARB)0;;
PFN::wglChoosePixelFormatARB wglChoosePixelFormatARB = (PFN::wglChoosePixelFormatARB)0;;
// WGL_ARB_pixel_format
bool _WGL_ARB_pixel_format_float = false;
const bool& WGL_ARB_pixel_format_float = _WGL_ARB_pixel_format_float;
// WGL_ARB_pixel_format_float
bool _WGL_ARB_render_texture = false;
const bool& WGL_ARB_render_texture = _WGL_ARB_render_texture;
PFN::wglBindTexImageARB wglBindTexImageARB = (PFN::wglBindTexImageARB)0;;
PFN::wglReleaseTexImageARB wglReleaseTexImageARB = (PFN::wglReleaseTexImageARB)0;;
PFN::wglSetPbufferAttribARB wglSetPbufferAttribARB = (PFN::wglSetPbufferAttribARB)0;;
// WGL_ARB_render_texture
bool _WGL_ARB_robustness_application_isolation = false;
const bool& WGL_ARB_robustness_application_isolation = _WGL_ARB_robustness_application_isolation;
// WGL_ARB_robustness_application_isolation
bool _WGL_ARB_robustness_share_group_isolation = false;
const bool& WGL_ARB_robustness_share_group_isolation = _WGL_ARB_robustness_share_group_isolation;
// WGL_ARB_robustness_share_group_isolation
bool _WGL_3DFX_multisample = false;
const bool& WGL_3DFX_multisample = _WGL_3DFX_multisample;
// WGL_3DFX_multisample
bool _WGL_3DL_stereo_control = false;
const bool& WGL_3DL_stereo_control = _WGL_3DL_stereo_control;
PFN::wglSetStereoEmitterState3DL wglSetStereoEmitterState3DL = (PFN::wglSetStereoEmitterState3DL)0;;
// WGL_3DL_stereo_control
bool _WGL_AMD_gpu_association = false;
const bool& WGL_AMD_gpu_association = _WGL_AMD_gpu_association;
PFN::wglGetGPUIDsAMD wglGetGPUIDsAMD = (PFN::wglGetGPUIDsAMD)0;;
PFN::wglGetGPUInfoAMD wglGetGPUInfoAMD = (PFN::wglGetGPUInfoAMD)0;;
PFN::wglGetContextGPUIDAMD wglGetContextGPUIDAMD = (PFN::wglGetContextGPUIDAMD)0;;
PFN::wglCreateAssociatedContextAMD wglCreateAssociatedContextAMD = (PFN::wglCreateAssociatedContextAMD)0;;
PFN::wglCreateAssociatedContextAttribsAMD wglCreateAssociatedContextAttribsAMD = (PFN::wglCreateAssociatedContextAttribsAMD)0;;
PFN::wglDeleteAssociatedContextAMD wglDeleteAssociatedContextAMD = (PFN::wglDeleteAssociatedContextAMD)0;;
PFN::wglMakeAssociatedContextCurrentAMD wglMakeAssociatedContextCurrentAMD = (PFN::wglMakeAssociatedContextCurrentAMD)0;;
PFN::wglGetCurrentAssociatedContextAMD wglGetCurrentAssociatedContextAMD = (PFN::wglGetCurrentAssociatedContextAMD)0;;
PFN::wglBlitContextFramebufferAMD wglBlitContextFramebufferAMD = (PFN::wglBlitContextFramebufferAMD)0;;
// WGL_AMD_gpu_association
bool _WGL_ATI_pixel_format_float = false;
const bool& WGL_ATI_pixel_format_float = _WGL_ATI_pixel_format_float;
// WGL_ATI_pixel_format_float
bool _WGL_ATI_render_texture_rectangle = false;
const bool& WGL_ATI_render_texture_rectangle = _WGL_ATI_render_texture_rectangle;
// WGL_ATI_render_texture_rectangle
bool _WGL_EXT_colorspace = false;
const bool& WGL_EXT_colorspace = _WGL_EXT_colorspace;
// WGL_EXT_colorspace
bool _WGL_EXT_create_context_es2_profile = false;
const bool& WGL_EXT_create_context_es2_profile = _WGL_EXT_create_context_es2_profile;
// WGL_EXT_create_context_es2_profile
bool _WGL_EXT_create_context_es_profile = false;
const bool& WGL_EXT_create_context_es_profile = _WGL_EXT_create_context_es_profile;
// WGL_EXT_create_context_es_profile
bool _WGL_EXT_depth_float = false;
const bool& WGL_EXT_depth_float = _WGL_EXT_depth_float;
// WGL_EXT_depth_float
bool _WGL_EXT_display_color_table = false;
const bool& WGL_EXT_display_color_table = _WGL_EXT_display_color_table;
PFN::wglCreateDisplayColorTableEXT wglCreateDisplayColorTableEXT = (PFN::wglCreateDisplayColorTableEXT)0;;
PFN::wglLoadDisplayColorTableEXT wglLoadDisplayColorTableEXT = (PFN::wglLoadDisplayColorTableEXT)0;;
PFN::wglBindDisplayColorTableEXT wglBindDisplayColorTableEXT = (PFN::wglBindDisplayColorTableEXT)0;;
PFN::wglDestroyDisplayColorTableEXT wglDestroyDisplayColorTableEXT = (PFN::wglDestroyDisplayColorTableEXT)0;;
// WGL_EXT_display_color_table
bool _WGL_EXT_extensions_string = false;
const bool& WGL_EXT_extensions_string = _WGL_EXT_extensions_string;
PFN::wglGetExtensionsStringEXT wglGetExtensionsStringEXT = (PFN::wglGetExtensionsStringEXT)0;;
// WGL_EXT_extensions_string
bool _WGL_EXT_framebuffer_sRGB = false;
const bool& WGL_EXT_framebuffer_sRGB = _WGL_EXT_framebuffer_sRGB;
// WGL_EXT_framebuffer_sRGB
bool _WGL_EXT_make_current_read = false;
const bool& WGL_EXT_make_current_read = _WGL_EXT_make_current_read;
PFN::wglMakeContextCurrentEXT wglMakeContextCurrentEXT = (PFN::wglMakeContextCurrentEXT)0;;
PFN::wglGetCurrentReadDCEXT wglGetCurrentReadDCEXT = (PFN::wglGetCurrentReadDCEXT)0;;
// WGL_EXT_make_current_read
bool _WGL_EXT_multisample = false;
const bool& WGL_EXT_multisample = _WGL_EXT_multisample;
// WGL_EXT_multisample
bool _WGL_EXT_pbuffer = false;
const bool& WGL_EXT_pbuffer = _WGL_EXT_pbuffer;
PFN::wglCreatePbufferEXT wglCreatePbufferEXT = (PFN::wglCreatePbufferEXT)0;;
PFN::wglGetPbufferDCEXT wglGetPbufferDCEXT = (PFN::wglGetPbufferDCEXT)0;;
PFN::wglReleasePbufferDCEXT wglReleasePbufferDCEXT = (PFN::wglReleasePbufferDCEXT)0;;
PFN::wglDestroyPbufferEXT wglDestroyPbufferEXT = (PFN::wglDestroyPbufferEXT)0;;
PFN::wglQueryPbufferEXT wglQueryPbufferEXT = (PFN::wglQueryPbufferEXT)0;;
// WGL_EXT_pbuffer
bool _WGL_EXT_pixel_format = false;
const bool& WGL_EXT_pixel_format = _WGL_EXT_pixel_format;
PFN::wglGetPixelFormatAttribivEXT wglGetPixelFormatAttribivEXT = (PFN::wglGetPixelFormatAttribivEXT)0;;
PFN::wglGetPixelFormatAttribfvEXT wglGetPixelFormatAttribfvEXT = (PFN::wglGetPixelFormatAttribfvEXT)0;;
PFN::wglChoosePixelFormatEXT wglChoosePixelFormatEXT = (PFN::wglChoosePixelFormatEXT)0;;
// WGL_EXT_pixel_format
bool _WGL_EXT_pixel_format_packed_float = false;
const bool& WGL_EXT_pixel_format_packed_float = _WGL_EXT_pixel_format_packed_float;
// WGL_EXT_pixel_format_packed_float
bool _WGL_EXT_swap_control = false;
const bool& WGL_EXT_swap_control = _WGL_EXT_swap_control;
PFN::wglSwapIntervalEXT wglSwapIntervalEXT = (PFN::wglSwapIntervalEXT)0;;
PFN::wglGetSwapIntervalEXT wglGetSwapIntervalEXT = (PFN::wglGetSwapIntervalEXT)0;;
// WGL_EXT_swap_control
bool _WGL_EXT_swap_control_tear = false;
const bool& WGL_EXT_swap_control_tear = _WGL_EXT_swap_control_tear;
// WGL_EXT_swap_control_tear
bool _WGL_I3D_digital_video_control = false;
const bool& WGL_I3D_digital_video_control = _WGL_I3D_digital_video_control;
PFN::wglGetDigitalVideoParametersI3D wglGetDigitalVideoParametersI3D = (PFN::wglGetDigitalVideoParametersI3D)0;;
PFN::wglSetDigitalVideoParametersI3D wglSetDigitalVideoParametersI3D = (PFN::wglSetDigitalVideoParametersI3D)0;;
// WGL_I3D_digital_video_control
bool _WGL_I3D_gamma = false;
const bool& WGL_I3D_gamma = _WGL_I3D_gamma;
PFN::wglGetGammaTableParametersI3D wglGetGammaTableParametersI3D = (PFN::wglGetGammaTableParametersI3D)0;;
PFN::wglSetGammaTableParametersI3D wglSetGammaTableParametersI3D = (PFN::wglSetGammaTableParametersI3D)0;;
PFN::wglGetGammaTableI3D wglGetGammaTableI3D = (PFN::wglGetGammaTableI3D)0;;
PFN::wglSetGammaTableI3D wglSetGammaTableI3D = (PFN::wglSetGammaTableI3D)0;;
// WGL_I3D_gamma
bool _WGL_I3D_genlock = false;
const bool& WGL_I3D_genlock = _WGL_I3D_genlock;
PFN::wglEnableGenlockI3D wglEnableGenlockI3D = (PFN::wglEnableGenlockI3D)0;;
PFN::wglDisableGenlockI3D wglDisableGenlockI3D = (PFN::wglDisableGenlockI3D)0;;
PFN::wglIsEnabledGenlockI3D wglIsEnabledGenlockI3D = (PFN::wglIsEnabledGenlockI3D)0;;
PFN::wglGenlockSourceI3D wglGenlockSourceI3D = (PFN::wglGenlockSourceI3D)0;;
PFN::wglGetGenlockSourceI3D wglGetGenlockSourceI3D = (PFN::wglGetGenlockSourceI3D)0;;
PFN::wglGenlockSourceEdgeI3D wglGenlockSourceEdgeI3D = (PFN::wglGenlockSourceEdgeI3D)0;;
PFN::wglGetGenlockSourceEdgeI3D wglGetGenlockSourceEdgeI3D = (PFN::wglGetGenlockSourceEdgeI3D)0;;
PFN::wglGenlockSampleRateI3D wglGenlockSampleRateI3D = (PFN::wglGenlockSampleRateI3D)0;;
PFN::wglGetGenlockSampleRateI3D wglGetGenlockSampleRateI3D = (PFN::wglGetGenlockSampleRateI3D)0;;
PFN::wglGenlockSourceDelayI3D wglGenlockSourceDelayI3D = (PFN::wglGenlockSourceDelayI3D)0;;
PFN::wglGetGenlockSourceDelayI3D wglGetGenlockSourceDelayI3D = (PFN::wglGetGenlockSourceDelayI3D)0;;
PFN::wglQueryGenlockMaxSourceDelayI3D wglQueryGenlockMaxSourceDelayI3D = (PFN::wglQueryGenlockMaxSourceDelayI3D)0;;
// WGL_I3D_genlock
bool _WGL_I3D_image_buffer = false;
const bool& WGL_I3D_image_buffer = _WGL_I3D_image_buffer;
PFN::wglCreateImageBufferI3D wglCreateImageBufferI3D = (PFN::wglCreateImageBufferI3D)0;;
PFN::wglDestroyImageBufferI3D wglDestroyImageBufferI3D = (PFN::wglDestroyImageBufferI3D)0;;
PFN::wglAssociateImageBufferEventsI3D wglAssociateImageBufferEventsI3D = (PFN::wglAssociateImageBufferEventsI3D)0;;
PFN::wglReleaseImageBufferEventsI3D wglReleaseImageBufferEventsI3D = (PFN::wglReleaseImageBufferEventsI3D)0;;
// WGL_I3D_image_buffer
bool _WGL_I3D_swap_frame_lock = false;
const bool& WGL_I3D_swap_frame_lock = _WGL_I3D_swap_frame_lock;
PFN::wglEnableFrameLockI3D wglEnableFrameLockI3D = (PFN::wglEnableFrameLockI3D)0;;
PFN::wglDisableFrameLockI3D wglDisableFrameLockI3D = (PFN::wglDisableFrameLockI3D)0;;
PFN::wglIsEnabledFrameLockI3D wglIsEnabledFrameLockI3D = (PFN::wglIsEnabledFrameLockI3D)0;;
PFN::wglQueryFrameLockMasterI3D wglQueryFrameLockMasterI3D = (PFN::wglQueryFrameLockMasterI3D)0;;
// WGL_I3D_swap_frame_lock
bool _WGL_I3D_swap_frame_usage = false;
const bool& WGL_I3D_swap_frame_usage = _WGL_I3D_swap_frame_usage;
PFN::wglGetFrameUsageI3D wglGetFrameUsageI3D = (PFN::wglGetFrameUsageI3D)0;;
PFN::wglBeginFrameTrackingI3D wglBeginFrameTrackingI3D = (PFN::wglBeginFrameTrackingI3D)0;;
PFN::wglEndFrameTrackingI3D wglEndFrameTrackingI3D = (PFN::wglEndFrameTrackingI3D)0;;
PFN::wglQueryFrameTrackingI3D wglQueryFrameTrackingI3D = (PFN::wglQueryFrameTrackingI3D)0;;
// WGL_I3D_swap_frame_usage
bool _WGL_NV_DX_interop = false;
const bool& WGL_NV_DX_interop = _WGL_NV_DX_interop;
PFN::wglDXSetResourceShareHandleNV wglDXSetResourceShareHandleNV = (PFN::wglDXSetResourceShareHandleNV)0;;
PFN::wglDXOpenDeviceNV wglDXOpenDeviceNV = (PFN::wglDXOpenDeviceNV)0;;
PFN::wglDXCloseDeviceNV wglDXCloseDeviceNV = (PFN::wglDXCloseDeviceNV)0;;
PFN::wglDXRegisterObjectNV wglDXRegisterObjectNV = (PFN::wglDXRegisterObjectNV)0;;
PFN::wglDXUnregisterObjectNV wglDXUnregisterObjectNV = (PFN::wglDXUnregisterObjectNV)0;;
PFN::wglDXObjectAccessNV wglDXObjectAccessNV = (PFN::wglDXObjectAccessNV)0;;
PFN::wglDXLockObjectsNV wglDXLockObjectsNV = (PFN::wglDXLockObjectsNV)0;;
PFN::wglDXUnlockObjectsNV wglDXUnlockObjectsNV = (PFN::wglDXUnlockObjectsNV)0;;
// WGL_NV_DX_interop
bool _WGL_NV_DX_interop2 = false;
const bool& WGL_NV_DX_interop2 = _WGL_NV_DX_interop2;
// WGL_NV_DX_interop2
bool _WGL_NV_copy_image = false;
const bool& WGL_NV_copy_image = _WGL_NV_copy_image;
PFN::wglCopyImageSubDataNV wglCopyImageSubDataNV = (PFN::wglCopyImageSubDataNV)0;;
// WGL_NV_copy_image
bool _WGL_NV_delay_before_swap = false;
const bool& WGL_NV_delay_before_swap = _WGL_NV_delay_before_swap;
PFN::wglDelayBeforeSwapNV wglDelayBeforeSwapNV = (PFN::wglDelayBeforeSwapNV)0;;
// WGL_NV_delay_before_swap
bool _WGL_NV_float_buffer = false;
const bool& WGL_NV_float_buffer = _WGL_NV_float_buffer;
// WGL_NV_float_buffer
bool _WGL_NV_gpu_affinity = false;
const bool& WGL_NV_gpu_affinity = _WGL_NV_gpu_affinity;
PFN::wglEnumGpusNV wglEnumGpusNV = (PFN::wglEnumGpusNV)0;;
PFN::wglEnumGpuDevicesNV wglEnumGpuDevicesNV = (PFN::wglEnumGpuDevicesNV)0;;
PFN::wglCreateAffinityDCNV wglCreateAffinityDCNV = (PFN::wglCreateAffinityDCNV)0;;
PFN::wglEnumGpusFromAffinityDCNV wglEnumGpusFromAffinityDCNV = (PFN::wglEnumGpusFromAffinityDCNV)0;;
PFN::wglDeleteDCNV wglDeleteDCNV = (PFN::wglDeleteDCNV)0;;
// WGL_NV_gpu_affinity
bool _WGL_NV_multigpu_context = false;
const bool& WGL_NV_multigpu_context = _WGL_NV_multigpu_context;
// WGL_NV_multigpu_context
bool _WGL_NV_multisample_coverage = false;
const bool& WGL_NV_multisample_coverage = _WGL_NV_multisample_coverage;
// WGL_NV_multisample_coverage
bool _WGL_NV_present_video = false;
const bool& WGL_NV_present_video = _WGL_NV_present_video;
PFN::wglEnumerateVideoDevicesNV wglEnumerateVideoDevicesNV = (PFN::wglEnumerateVideoDevicesNV)0;;
PFN::wglBindVideoDeviceNV wglBindVideoDeviceNV = (PFN::wglBindVideoDeviceNV)0;;
PFN::wglQueryCurrentContextNV wglQueryCurrentContextNV = (PFN::wglQueryCurrentContextNV)0;;
// WGL_NV_present_video
bool _WGL_NV_render_depth_texture = false;
const bool& WGL_NV_render_depth_texture = _WGL_NV_render_depth_texture;
// WGL_NV_render_depth_texture
bool _WGL_NV_render_texture_rectangle = false;
const bool& WGL_NV_render_texture_rectangle = _WGL_NV_render_texture_rectangle;
// WGL_NV_render_texture_rectangle
bool _WGL_NV_swap_group = false;
const bool& WGL_NV_swap_group = _WGL_NV_swap_group;
PFN::wglJoinSwapGroupNV wglJoinSwapGroupNV = (PFN::wglJoinSwapGroupNV)0;;
PFN::wglBindSwapBarrierNV wglBindSwapBarrierNV = (PFN::wglBindSwapBarrierNV)0;;
PFN::wglQuerySwapGroupNV wglQuerySwapGroupNV = (PFN::wglQuerySwapGroupNV)0;;
PFN::wglQueryMaxSwapGroupsNV wglQueryMaxSwapGroupsNV = (PFN::wglQueryMaxSwapGroupsNV)0;;
PFN::wglQueryFrameCountNV wglQueryFrameCountNV = (PFN::wglQueryFrameCountNV)0;;
PFN::wglResetFrameCountNV wglResetFrameCountNV = (PFN::wglResetFrameCountNV)0;;
// WGL_NV_swap_group
bool _WGL_NV_vertex_array_range = false;
const bool& WGL_NV_vertex_array_range = _WGL_NV_vertex_array_range;
PFN::wglAllocateMemoryNV wglAllocateMemoryNV = (PFN::wglAllocateMemoryNV)0;;
PFN::wglFreeMemoryNV wglFreeMemoryNV = (PFN::wglFreeMemoryNV)0;;
// WGL_NV_vertex_array_range
bool _WGL_NV_video_capture = false;
const bool& WGL_NV_video_capture = _WGL_NV_video_capture;
PFN::wglBindVideoCaptureDeviceNV wglBindVideoCaptureDeviceNV = (PFN::wglBindVideoCaptureDeviceNV)0;;
PFN::wglEnumerateVideoCaptureDevicesNV wglEnumerateVideoCaptureDevicesNV = (PFN::wglEnumerateVideoCaptureDevicesNV)0;;
PFN::wglLockVideoCaptureDeviceNV wglLockVideoCaptureDeviceNV = (PFN::wglLockVideoCaptureDeviceNV)0;;
PFN::wglQueryVideoCaptureDeviceNV wglQueryVideoCaptureDeviceNV = (PFN::wglQueryVideoCaptureDeviceNV)0;;
PFN::wglReleaseVideoCaptureDeviceNV wglReleaseVideoCaptureDeviceNV = (PFN::wglReleaseVideoCaptureDeviceNV)0;;
// WGL_NV_video_capture
bool _WGL_NV_video_output = false;
const bool& WGL_NV_video_output = _WGL_NV_video_output;
PFN::wglGetVideoDeviceNV wglGetVideoDeviceNV = (PFN::wglGetVideoDeviceNV)0;;
PFN::wglReleaseVideoDeviceNV wglReleaseVideoDeviceNV = (PFN::wglReleaseVideoDeviceNV)0;;
PFN::wglBindVideoImageNV wglBindVideoImageNV = (PFN::wglBindVideoImageNV)0;;
PFN::wglReleaseVideoImageNV wglReleaseVideoImageNV = (PFN::wglReleaseVideoImageNV)0;;
PFN::wglSendPbufferToVideoNV wglSendPbufferToVideoNV = (PFN::wglSendPbufferToVideoNV)0;;
PFN::wglGetVideoInfoNV wglGetVideoInfoNV = (PFN::wglGetVideoInfoNV)0;;
// WGL_NV_video_output
bool _WGL_OML_sync_control = false;
const bool& WGL_OML_sync_control = _WGL_OML_sync_control;
PFN::wglGetSyncValuesOML wglGetSyncValuesOML = (PFN::wglGetSyncValuesOML)0;;
PFN::wglGetMscRateOML wglGetMscRateOML = (PFN::wglGetMscRateOML)0;;
PFN::wglSwapBuffersMscOML wglSwapBuffersMscOML = (PFN::wglSwapBuffersMscOML)0;;
PFN::wglSwapLayerBuffersMscOML wglSwapLayerBuffersMscOML = (PFN::wglSwapLayerBuffersMscOML)0;;
PFN::wglWaitForMscOML wglWaitForMscOML = (PFN::wglWaitForMscOML)0;;
PFN::wglWaitForSbcOML wglWaitForSbcOML = (PFN::wglWaitForSbcOML)0;;
// WGL_OML_sync_control

bool checkAllExtensions();

bool load()
{
	static bool initialized = false;
	if(initialized) return true;
	if(!GLOBAL_DUMMY.isInitialized()) GLOBAL_DUMMY.init();
	if(!GLOBAL_DUMMY.isInitialized() || !GLOBAL_DUMMY.makeCurrent() || !GLOBAL_DUMMY.makeCurrent())
		return false;
	if(!_WGL_ARB_buffer_region)
	{
		LOAD_WGLPROC(wglCreateBufferRegionARB);
		LOAD_WGLPROC(wglDeleteBufferRegionARB);
		LOAD_WGLPROC(wglSaveBufferRegionARB);
		LOAD_WGLPROC(wglRestoreBufferRegionARB);
		_WGL_ARB_buffer_region = wglCreateBufferRegionARB && wglDeleteBufferRegionARB && wglSaveBufferRegionARB && wglRestoreBufferRegionARB;
	}
	if(!_WGL_ARB_create_context)
	{
		LOAD_WGLPROC(wglCreateContextAttribsARB);
		_WGL_ARB_create_context = 0 != wglCreateContextAttribsARB;
	}
	if(!_WGL_ARB_extensions_string)
	{
		LOAD_WGLPROC(wglGetExtensionsStringARB);
		_WGL_ARB_extensions_string = 0 != wglGetExtensionsStringARB;
	}
	if(!_WGL_ARB_make_current_read)
	{
		LOAD_WGLPROC(wglMakeContextCurrentARB);
		LOAD_WGLPROC(wglGetCurrentReadDCARB);
		_WGL_ARB_make_current_read = wglMakeContextCurrentARB && wglGetCurrentReadDCARB;
	}
	if(!_WGL_ARB_pbuffer)
	{
		LOAD_WGLPROC(wglCreatePbufferARB);
		LOAD_WGLPROC(wglGetPbufferDCARB);
		LOAD_WGLPROC(wglReleasePbufferDCARB);
		LOAD_WGLPROC(wglDestroyPbufferARB);
		LOAD_WGLPROC(wglQueryPbufferARB);
		_WGL_ARB_pbuffer = wglCreatePbufferARB && wglGetPbufferDCARB && wglReleasePbufferDCARB && wglDestroyPbufferARB && wglQueryPbufferARB;
	}
	if(!_WGL_ARB_pixel_format)
	{
		LOAD_WGLPROC(wglGetPixelFormatAttribivARB);
		LOAD_WGLPROC(wglGetPixelFormatAttribfvARB);
		LOAD_WGLPROC(wglChoosePixelFormatARB);
		_WGL_ARB_pixel_format = wglGetPixelFormatAttribivARB && wglGetPixelFormatAttribfvARB && wglChoosePixelFormatARB;
	}
	if(!_WGL_ARB_render_texture)
	{
		LOAD_WGLPROC(wglBindTexImageARB);
		LOAD_WGLPROC(wglReleaseTexImageARB);
		LOAD_WGLPROC(wglSetPbufferAttribARB);
		_WGL_ARB_render_texture = wglGetPixelFormatAttribivARB && wglGetPixelFormatAttribfvARB && wglChoosePixelFormatARB;
	}
	if(!_WGL_3DL_stereo_control)
	{
		LOAD_WGLPROC(wglSetStereoEmitterState3DL);
		_WGL_3DL_stereo_control = 0 != wglSetStereoEmitterState3DL;
	}
	if(!_WGL_AMD_gpu_association)
	{
		LOAD_WGLPROC(wglGetGPUIDsAMD);
		LOAD_WGLPROC(wglGetGPUInfoAMD);
		LOAD_WGLPROC(wglGetContextGPUIDAMD);
		LOAD_WGLPROC(wglCreateAssociatedContextAMD);
		LOAD_WGLPROC(wglCreateAssociatedContextAttribsAMD);
		LOAD_WGLPROC(wglDeleteAssociatedContextAMD);
		LOAD_WGLPROC(wglMakeAssociatedContextCurrentAMD);
		LOAD_WGLPROC(wglGetCurrentAssociatedContextAMD);
		LOAD_WGLPROC(wglBlitContextFramebufferAMD);
		_WGL_AMD_gpu_association = wglGetGPUIDsAMD && wglGetGPUInfoAMD && wglGetContextGPUIDAMD && wglCreateAssociatedContextAMD && wglCreateAssociatedContextAttribsAMD && wglDeleteAssociatedContextAMD && wglMakeAssociatedContextCurrentAMD && wglGetCurrentAssociatedContextAMD && wglBlitContextFramebufferAMD;
	}
	if(!_WGL_EXT_display_color_table)
	{
		LOAD_WGLPROC(wglCreateDisplayColorTableEXT);
		LOAD_WGLPROC(wglLoadDisplayColorTableEXT);
		LOAD_WGLPROC(wglBindDisplayColorTableEXT);
		LOAD_WGLPROC(wglDestroyDisplayColorTableEXT);
		_WGL_EXT_display_color_table = wglCreateDisplayColorTableEXT && wglLoadDisplayColorTableEXT && wglBindDisplayColorTableEXT && wglDestroyDisplayColorTableEXT;
	}
	if(!_WGL_EXT_extensions_string)
	{
		LOAD_WGLPROC(wglGetExtensionsStringEXT);
		_WGL_EXT_extensions_string = 0 != wglGetExtensionsStringEXT;
	}
	if(!_WGL_EXT_make_current_read)
	{
		LOAD_WGLPROC(wglMakeContextCurrentEXT);
		LOAD_WGLPROC(wglGetCurrentReadDCEXT);
		_WGL_EXT_make_current_read = wglMakeContextCurrentEXT && wglGetCurrentReadDCEXT;
	}
	if(!_WGL_EXT_pbuffer);
	{
		LOAD_WGLPROC(wglCreatePbufferEXT);
		LOAD_WGLPROC(wglGetPbufferDCEXT);
		LOAD_WGLPROC(wglReleasePbufferDCEXT);
		LOAD_WGLPROC(wglDestroyPbufferEXT);
		LOAD_WGLPROC(wglQueryPbufferEXT);
		_WGL_EXT_pbuffer = wglCreatePbufferEXT && wglGetPbufferDCEXT && wglReleasePbufferDCEXT && wglDestroyPbufferEXT && wglQueryPbufferEXT;
	}
	if(!_WGL_EXT_pixel_format)
	{
		LOAD_WGLPROC(wglGetPixelFormatAttribivEXT);
		LOAD_WGLPROC(wglGetPixelFormatAttribfvEXT);
		LOAD_WGLPROC(wglChoosePixelFormatEXT);
		_WGL_EXT_pixel_format = wglGetPixelFormatAttribivEXT && wglGetPixelFormatAttribfvEXT && wglChoosePixelFormatEXT;
	}
	if(!_WGL_EXT_swap_control)
	{
		LOAD_WGLPROC(wglSwapIntervalEXT);
		LOAD_WGLPROC(wglGetSwapIntervalEXT);
		_WGL_EXT_swap_control = wglSwapIntervalEXT && wglGetSwapIntervalEXT;
	}
	if(!_WGL_I3D_digital_video_control)
	{
		LOAD_WGLPROC(wglGetDigitalVideoParametersI3D);
		LOAD_WGLPROC(wglSetDigitalVideoParametersI3D);
		_WGL_I3D_digital_video_control = wglGetDigitalVideoParametersI3D && wglSetDigitalVideoParametersI3D;
	}
	if(!_WGL_I3D_gamma)
	{
		LOAD_WGLPROC(wglGetGammaTableParametersI3D);
		LOAD_WGLPROC(wglSetGammaTableParametersI3D);
		LOAD_WGLPROC(wglGetGammaTableI3D);
		LOAD_WGLPROC(wglSetGammaTableI3D);
		_WGL_I3D_gamma = wglGetGammaTableParametersI3D && wglSetGammaTableParametersI3D && wglGetGammaTableI3D && wglSetGammaTableI3D;
	}
	if(!_WGL_I3D_genlock)
	{
		LOAD_WGLPROC(wglEnableGenlockI3D);
		LOAD_WGLPROC(wglDisableGenlockI3D);
		LOAD_WGLPROC(wglIsEnabledGenlockI3D);
		LOAD_WGLPROC(wglGenlockSourceI3D);
		LOAD_WGLPROC(wglGetGenlockSourceI3D);
		LOAD_WGLPROC(wglGenlockSourceEdgeI3D);
		LOAD_WGLPROC(wglGetGenlockSourceEdgeI3D);
		LOAD_WGLPROC(wglGenlockSampleRateI3D);
		LOAD_WGLPROC(wglGetGenlockSampleRateI3D);
		LOAD_WGLPROC(wglGenlockSourceDelayI3D);
		LOAD_WGLPROC(wglGetGenlockSourceDelayI3D);
		LOAD_WGLPROC(wglQueryGenlockMaxSourceDelayI3D);
		_WGL_I3D_genlock = wglEnableGenlockI3D && wglDisableGenlockI3D && wglIsEnabledGenlockI3D && wglGenlockSourceI3D && wglGetGenlockSourceI3D && wglGenlockSourceEdgeI3D && wglGetGenlockSourceEdgeI3D && wglGenlockSampleRateI3D && wglGetGenlockSampleRateI3D && wglGenlockSourceDelayI3D && wglGetGenlockSourceDelayI3D && wglQueryGenlockMaxSourceDelayI3D;
	}
	if(!_WGL_I3D_image_buffer)
	{
		LOAD_WGLPROC(wglCreateImageBufferI3D);
		LOAD_WGLPROC(wglDestroyImageBufferI3D);
		LOAD_WGLPROC(wglAssociateImageBufferEventsI3D);
		LOAD_WGLPROC(wglReleaseImageBufferEventsI3D);
		_WGL_I3D_image_buffer = wglCreateImageBufferI3D && wglDestroyImageBufferI3D && wglAssociateImageBufferEventsI3D && wglReleaseImageBufferEventsI3D;
	}
	if(!_WGL_I3D_swap_frame_lock)
	{
		LOAD_WGLPROC(wglEnableFrameLockI3D);
		LOAD_WGLPROC(wglDisableFrameLockI3D);
		LOAD_WGLPROC(wglIsEnabledFrameLockI3D);
		LOAD_WGLPROC(wglQueryFrameLockMasterI3D);
		_WGL_I3D_swap_frame_lock = wglEnableFrameLockI3D && wglDisableFrameLockI3D && wglIsEnabledFrameLockI3D && wglQueryFrameLockMasterI3D;
	}
	if(!_WGL_I3D_swap_frame_usage)
	{
		LOAD_WGLPROC(wglGetFrameUsageI3D);
		LOAD_WGLPROC(wglBeginFrameTrackingI3D);
		LOAD_WGLPROC(wglEndFrameTrackingI3D);
		LOAD_WGLPROC(wglQueryFrameTrackingI3D);
		_WGL_I3D_swap_frame_usage = wglGetFrameUsageI3D && wglBeginFrameTrackingI3D && wglEndFrameTrackingI3D && wglQueryFrameTrackingI3D;
	}
	if(!_WGL_NV_DX_interop)
	{
		LOAD_WGLPROC(wglDXSetResourceShareHandleNV);
		LOAD_WGLPROC(wglDXOpenDeviceNV);
		LOAD_WGLPROC(wglDXCloseDeviceNV);
		LOAD_WGLPROC(wglDXRegisterObjectNV);
		LOAD_WGLPROC(wglDXUnregisterObjectNV);
		LOAD_WGLPROC(wglDXObjectAccessNV);
		LOAD_WGLPROC(wglDXLockObjectsNV);
		LOAD_WGLPROC(wglDXUnlockObjectsNV);
		_WGL_NV_DX_interop = wglDXSetResourceShareHandleNV && wglDXOpenDeviceNV && wglDXCloseDeviceNV && wglDXRegisterObjectNV && wglDXUnregisterObjectNV && wglDXObjectAccessNV && wglDXLockObjectsNV && wglDXUnlockObjectsNV;
	}
	if(!_WGL_NV_copy_image)
	{
		LOAD_WGLPROC(wglCopyImageSubDataNV);
		_WGL_NV_copy_image = 0 != wglCopyImageSubDataNV;
	}
	if(!_WGL_NV_delay_before_swap)
	{
		LOAD_WGLPROC(wglDelayBeforeSwapNV);
		_WGL_NV_delay_before_swap = 0 != wglDelayBeforeSwapNV;
	}
	if(!_WGL_NV_gpu_affinity)
	{
		LOAD_WGLPROC(wglEnumGpusNV);
		LOAD_WGLPROC(wglEnumGpuDevicesNV);
		LOAD_WGLPROC(wglCreateAffinityDCNV);
		LOAD_WGLPROC(wglEnumGpusFromAffinityDCNV);
		LOAD_WGLPROC(wglDeleteDCNV);
		_WGL_NV_gpu_affinity = wglEnumGpusNV && wglEnumGpuDevicesNV && wglCreateAffinityDCNV && wglEnumGpusFromAffinityDCNV && wglDeleteDCNV;
	}
	if(!_WGL_NV_present_video)
	{
		LOAD_WGLPROC(wglEnumerateVideoDevicesNV);
		LOAD_WGLPROC(wglBindVideoDeviceNV);
		LOAD_WGLPROC(wglQueryCurrentContextNV);
		_WGL_NV_present_video = wglEnumerateVideoDevicesNV && wglBindVideoDeviceNV && wglQueryCurrentContextNV;
	}
	if(!_WGL_NV_swap_group)
	{
		LOAD_WGLPROC(wglJoinSwapGroupNV);
		LOAD_WGLPROC(wglBindSwapBarrierNV);
		LOAD_WGLPROC(wglQuerySwapGroupNV);
		LOAD_WGLPROC(wglQueryMaxSwapGroupsNV);
		LOAD_WGLPROC(wglQueryFrameCountNV);
		LOAD_WGLPROC(wglResetFrameCountNV);
		_WGL_NV_swap_group = wglJoinSwapGroupNV && wglBindSwapBarrierNV && wglQuerySwapGroupNV && wglQueryMaxSwapGroupsNV && wglQueryFrameCountNV && wglResetFrameCountNV;
	}
	if(!_WGL_NV_vertex_array_range)
	{
		LOAD_WGLPROC(wglAllocateMemoryNV);
		LOAD_WGLPROC(wglFreeMemoryNV);
		_WGL_NV_vertex_array_range = wglAllocateMemoryNV && wglFreeMemoryNV;
	}
	if(!_WGL_NV_video_capture)
	{
		LOAD_WGLPROC(wglBindVideoCaptureDeviceNV);
		LOAD_WGLPROC(wglEnumerateVideoCaptureDevicesNV);
		LOAD_WGLPROC(wglLockVideoCaptureDeviceNV);
		LOAD_WGLPROC(wglQueryVideoCaptureDeviceNV);
		LOAD_WGLPROC(wglReleaseVideoCaptureDeviceNV);
		_WGL_NV_video_capture = wglBindVideoCaptureDeviceNV && wglEnumerateVideoCaptureDevicesNV && wglLockVideoCaptureDeviceNV && wglQueryVideoCaptureDeviceNV && wglReleaseVideoCaptureDeviceNV;
	}
	if(!_WGL_NV_video_output)
	{
		LOAD_WGLPROC(wglGetVideoDeviceNV);
		LOAD_WGLPROC(wglReleaseVideoDeviceNV);
		LOAD_WGLPROC(wglBindVideoImageNV);
		LOAD_WGLPROC(wglReleaseVideoImageNV);
		LOAD_WGLPROC(wglSendPbufferToVideoNV);
		LOAD_WGLPROC(wglGetVideoInfoNV);
		_WGL_NV_video_output = wglGetVideoDeviceNV && wglReleaseVideoDeviceNV && wglBindVideoImageNV && wglReleaseVideoImageNV && wglSendPbufferToVideoNV && wglGetVideoInfoNV;
	}
	if(!_WGL_OML_sync_control)
	{
		LOAD_WGLPROC(wglGetSyncValuesOML);
		LOAD_WGLPROC(wglGetMscRateOML);
		LOAD_WGLPROC(wglSwapBuffersMscOML);
		LOAD_WGLPROC(wglSwapLayerBuffersMscOML);
		LOAD_WGLPROC(wglWaitForMscOML);
		LOAD_WGLPROC(wglWaitForSbcOML);
		_WGL_OML_sync_control = wglGetSyncValuesOML && wglGetMscRateOML && wglSwapBuffersMscOML && wglSwapLayerBuffersMscOML && wglWaitForMscOML && wglWaitForSbcOML;
	}
	return (initialized = true) && checkAllExtensions();
}


bool checkAllExtensions()
{
	static bool initialized = false;
	if(initialized) return true;
	if(!GLOBAL_DUMMY.isInitialized()) GLOBAL_DUMMY.init();
	if(!GLOBAL_DUMMY.isInitialized() || !GLOBAL_DUMMY.makeCurrent() || !axl::glfl::core::load())
		return false;
	using namespace axl::glfl::core::GL1;
	using namespace axl::glfl::WGL;
	GLint index = 0, last = 0;
	const char *cur_ext = (const char*)0, *ext = (const char*)0;
	if(WGL_ARB_extensions_string)
		ext = (const char*)wglGetExtensionsStringARB(wglGetCurrentDC());
	else
		ext = (const char*)glGetString(GL_EXTENSIONS);
	if(!ext) return false;
	bool done = false;
	while(!done)
	{
		char c = ext[index];
		while(c != '\0' && c != ' ')
		{
			c = ext[++index];
		}
		if(c == '\0') done = true;
		const char* cur_ext = (const char*)&ext[last];
		if(c == ' ')
			last = ++index;
		if(!_WGL_ARB_context_flush_control && strncmp(cur_ext, "WGL_ARB_context_flush_control", 24) == 0) { _WGL_ARB_context_flush_control = true; continue; }
		else if(!_WGL_ARB_create_context_no_error && strncmp(cur_ext, "WGL_ARB_create_context_no_error", 31) == 0) { _WGL_ARB_create_context_no_error = true; continue; }
		else if(!_WGL_ARB_create_context_profile && strncmp(cur_ext, "WGL_ARB_create_context_profile", 30) == 0) { _WGL_ARB_create_context_profile = true; continue; }
		else if(!_WGL_ARB_create_context_robustness && strncmp(cur_ext, "WGL_ARB_create_context_robustness", 33) == 0) { _WGL_ARB_create_context_robustness = true; continue; }
		else if(!_WGL_ARB_framebuffer_sRGB && strncmp(cur_ext, "WGL_ARB_framebuffer_sRGB", 24) == 0) { _WGL_ARB_framebuffer_sRGB = true; continue; }
		else if(!_WGL_ARB_multisample && strncmp(cur_ext, "WGL_ARB_multisample", 19) == 0) { _WGL_ARB_multisample = true; continue; }
		else if(!_WGL_ARB_pixel_format_float && strncmp(cur_ext, "WGL_ARB_pixel_format_float", 26) == 0) { _WGL_ARB_pixel_format_float = true; continue; }
		else if(!_WGL_ARB_robustness_application_isolation && strncmp(cur_ext, "WGL_ARB_robustness_application_isolation", 40) == 0) { _WGL_ARB_robustness_application_isolation = true; continue; }
		else if(!_WGL_ARB_robustness_share_group_isolation && strncmp(cur_ext, "WGL_ARB_robustness_share_group_isolation", 40) == 0) { _WGL_ARB_robustness_share_group_isolation = true; continue; }
		else if(!_WGL_3DFX_multisample && strncmp(cur_ext, "WGL_3DFX_multisample", 20) == 0) { _WGL_3DFX_multisample = true; continue; }
		else if(!_WGL_ATI_pixel_format_float && strncmp(cur_ext, "WGL_ATI_pixel_format_float", 26) == 0) { _WGL_ATI_pixel_format_float = true; continue; }
		else if(!_WGL_ATI_render_texture_rectangle && strncmp(cur_ext, "WGL_ATI_render_texture_rectangle", 32) == 0) { _WGL_ATI_render_texture_rectangle = true; continue; }
		else if(!_WGL_EXT_colorspace && strncmp(cur_ext, "WGL_EXT_colorspace", 18) == 0) { _WGL_EXT_colorspace = true; continue; }
		else if(!_WGL_EXT_create_context_es2_profile && strncmp(cur_ext, "WGL_EXT_create_context_es2_profile", 34) == 0) { _WGL_EXT_create_context_es2_profile = true; continue; }
		else if(!_WGL_EXT_create_context_es_profile && strncmp(cur_ext, "WGL_EXT_create_context_es_profile", 33) == 0) { _WGL_EXT_create_context_es_profile = true; continue; }
		else if(!_WGL_EXT_depth_float && strncmp(cur_ext, "WGL_EXT_depth_float", 19) == 0) { _WGL_EXT_depth_float = true; continue; }
		else if(!_WGL_EXT_framebuffer_sRGB && strncmp(cur_ext, "WGL_EXT_framebuffer_sRGB", 24) == 0) { _WGL_EXT_framebuffer_sRGB = true; continue; }
		else if(!_WGL_EXT_multisample && strncmp(cur_ext, "WGL_EXT_multisample", 19) == 0) { _WGL_EXT_multisample = true; continue; }
		else if(!_WGL_EXT_pixel_format_packed_float && strncmp(cur_ext, "WGL_EXT_pixel_format_packed_float", 33) == 0) { _WGL_EXT_pixel_format_packed_float = true; continue; }
		else if(!_WGL_EXT_swap_control_tear && strncmp(cur_ext, "WGL_EXT_swap_control_tear", 25) == 0) { _WGL_EXT_swap_control_tear = true; continue; }
		else if(!_WGL_NV_DX_interop2 && strncmp(cur_ext, "WGL_NV_DX_interop2", 18) == 0) { _WGL_NV_DX_interop2 = true; continue; }
		else if(!_WGL_NV_float_buffer && strncmp(cur_ext, "WGL_NV_float_buffer", 19) == 0) { _WGL_NV_float_buffer = true; continue; }
		else if(!_WGL_NV_multigpu_context && strncmp(cur_ext, "WGL_NV_multigpu_context", 23) == 0) { _WGL_NV_multigpu_context = true; continue; }
		else if(!_WGL_NV_multisample_coverage && strncmp(cur_ext, "WGL_NV_multisample_coverage", 27) == 0) { _WGL_NV_multisample_coverage = true; continue; }
		else if(!_WGL_NV_render_depth_texture && strncmp(cur_ext, "WGL_NV_render_depth_texture", 27) == 0) { _WGL_NV_render_depth_texture = true; continue; }
		else if(!_WGL_NV_render_texture_rectangle && strncmp(cur_ext, "WGL_NV_render_texture_rectangle", 31) == 0) { _WGL_NV_render_texture_rectangle = true; continue; }
	}
	return (initialized = true);
}

bool checkExtension(const char* extension_name)
{
	if(axl::glfl::WGL::load() && !WGL_ARB_extensions_string) return axl::glfl::core::checkExtension(extension_name);
	if(!GLOBAL_DUMMY.isInitialized()) GLOBAL_DUMMY.init();
	if(!GLOBAL_DUMMY.isInitialized() || !GLOBAL_DUMMY.makeCurrent() || !axl::glfl::WGL::load())
		return false;
	using namespace axl::glfl::core::GL1;
	using namespace axl::glfl::WGL;
	GLint index = 0, last = 0;
	const char *cur_ext = (const char*)0, *ext = (const char*)0;
	if(WGL_ARB_extensions_string)
		ext = (const char*)wglGetExtensionsStringARB(wglGetCurrentDC());
	else
		ext = (const char*)glGetString(GL_EXTENSIONS);
	if(!ext) return false;
	bool done = false;
	while(!done)
	{
		char c = ext[index];
		while(c != '\0' && c != ' ')
		{
			c = ext[++index];
		}
		if(c == '\0') done = true;
		const char* cur_ext = (const char*)&ext[last];
		if(c == ' ')
			last = ++index;
		if(strcmp(cur_ext, extension_name) == 0)
			return true;
	}
	return false;
}

} // axl::glfl::WGL
} // axl::glfl
} // axl
