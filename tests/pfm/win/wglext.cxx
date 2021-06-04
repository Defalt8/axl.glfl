#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <axl.glfl/lib.hpp>
#include <axl.glfl/win/wglext.hpp>
#include "../../Assert.hpp"

#define LOG_B(b) printf("%c - %s - "#b"\n", (b ? ' ' : '*'), (b ? "OK" : "NA"));

namespace axl {
namespace glfl {
namespace WGL {

bool test(bool verbose)
{
	int failes_so_far = axl::assert::_num_failed_tests;
	if(WGL_ARB_buffer_region)
	{
		LOG_B(WGL_ARB_buffer_region);
		Assertv((wglCreateBufferRegionARB), verbose);
		Assertv((wglDeleteBufferRegionARB), verbose);
		Assertv((wglSaveBufferRegionARB), verbose);
		Assertv((wglRestoreBufferRegionARB), verbose);
	}
	if(WGL_ARB_context_flush_control)
	{
		LOG_B(WGL_ARB_context_flush_control);
	}
	if(WGL_ARB_create_context)
	{
		LOG_B(WGL_ARB_create_context);
		Assertv((wglCreateContextAttribsARB), verbose);
	}
	if(WGL_ARB_create_context_no_error)
	{
		LOG_B(WGL_ARB_create_context_no_error);
	}
	if(WGL_ARB_create_context_profile)
	{
		LOG_B(WGL_ARB_create_context_profile);
	}
	if(WGL_ARB_create_context_robustness)
	{
		LOG_B(WGL_ARB_create_context_robustness);
	}
	if(WGL_ARB_extensions_string)
	{
		LOG_B(WGL_ARB_extensions_string);
		Assertv((wglGetExtensionsStringARB), verbose);
	}
	if(WGL_ARB_framebuffer_sRGB)
	{
		LOG_B(WGL_ARB_framebuffer_sRGB);
	}
	if(WGL_ARB_make_current_read)
	{
		LOG_B(WGL_ARB_make_current_read);
		Assertv((wglMakeContextCurrentARB), verbose);
		Assertv((wglGetCurrentReadDCARB), verbose);
	}
	if(WGL_ARB_multisample)
	{
		LOG_B(WGL_ARB_multisample);
	}
	if(WGL_ARB_pbuffer)
	{
		LOG_B(WGL_ARB_pbuffer);
		Assertv((wglCreatePbufferARB), verbose);
		Assertv((wglGetPbufferDCARB), verbose);
		Assertv((wglReleasePbufferDCARB), verbose);
		Assertv((wglDestroyPbufferARB), verbose);
		Assertv((wglQueryPbufferARB), verbose);
	}
	if(WGL_ARB_pixel_format)
	{
		LOG_B(WGL_ARB_pixel_format);
		Assertv((wglGetPixelFormatAttribivARB), verbose);
		Assertv((wglGetPixelFormatAttribfvARB), verbose);
		Assertv((wglChoosePixelFormatARB), verbose);
	}
	if(WGL_ARB_pixel_format_float)
	{
		LOG_B(WGL_ARB_pixel_format_float);
	}
	if(WGL_ARB_render_texture)
	{
		LOG_B(WGL_ARB_render_texture);
		Assertv((wglBindTexImageARB), verbose);
		Assertv((wglReleaseTexImageARB), verbose);
		Assertv((wglSetPbufferAttribARB), verbose);
	}
	if(WGL_ARB_robustness_application_isolation)
	{
		LOG_B(WGL_ARB_robustness_application_isolation);
	}
	if(WGL_ARB_robustness_share_group_isolation)
	{
		LOG_B(WGL_ARB_robustness_share_group_isolation);
	}
	if(WGL_3DFX_multisample)
	{
		LOG_B(WGL_3DFX_multisample);
	}
	if(WGL_3DL_stereo_control)
	{
		LOG_B(WGL_3DL_stereo_control);
		Assertv((wglSetStereoEmitterState3DL), verbose);
	}
	if(WGL_AMD_gpu_association)
	{
		LOG_B(WGL_AMD_gpu_association);
		Assertv((wglGetGPUIDsAMD), verbose);
		Assertv((wglGetGPUInfoAMD), verbose);
		Assertv((wglGetContextGPUIDAMD), verbose);
		Assertv((wglCreateAssociatedContextAMD), verbose);
		Assertv((wglCreateAssociatedContextAttribsAMD), verbose);
		Assertv((wglDeleteAssociatedContextAMD), verbose);
		Assertv((wglMakeAssociatedContextCurrentAMD), verbose);
		Assertv((wglGetCurrentAssociatedContextAMD), verbose);
		Assertv((wglBlitContextFramebufferAMD), verbose);
	}
	if(WGL_ATI_pixel_format_float)
	{
		LOG_B(WGL_ATI_pixel_format_float);
	}
	if(WGL_ATI_render_texture_rectangle)
	{
		LOG_B(WGL_ATI_render_texture_rectangle);
	}
	if(WGL_EXT_colorspace)
	{
		LOG_B(WGL_EXT_colorspace);
	}
	if(WGL_EXT_create_context_es2_profile)
	{
		LOG_B(WGL_EXT_create_context_es2_profile);
	}
	if(WGL_EXT_create_context_es_profile)
	{
		LOG_B(WGL_EXT_create_context_es_profile);
	}
	if(WGL_EXT_depth_float)
	{
		LOG_B(WGL_EXT_depth_float);
	}
	if(WGL_EXT_display_color_table)
	{
		LOG_B(WGL_EXT_display_color_table);
		Assertv((wglCreateDisplayColorTableEXT), verbose);
		Assertv((wglLoadDisplayColorTableEXT), verbose);
		Assertv((wglBindDisplayColorTableEXT), verbose);
		Assertv((wglDestroyDisplayColorTableEXT), verbose);
	}
	if(WGL_EXT_extensions_string)
	{
		LOG_B(WGL_EXT_extensions_string);
		Assertv((wglGetExtensionsStringEXT), verbose);
	}
	if(WGL_EXT_framebuffer_sRGB)
	{
		LOG_B(WGL_EXT_framebuffer_sRGB);
	}
	if(WGL_EXT_make_current_read)
	{
		LOG_B(WGL_EXT_make_current_read);
		Assertv((wglMakeContextCurrentEXT), verbose);
		Assertv((wglGetCurrentReadDCEXT), verbose);
	}
	if(WGL_EXT_multisample)
	{
		LOG_B(WGL_EXT_multisample);
	}
	if(WGL_EXT_pbuffer)
	{
		LOG_B(WGL_EXT_pbuffer);
		Assertv((wglCreatePbufferEXT), verbose);
		Assertv((wglGetPbufferDCEXT), verbose);
		Assertv((wglReleasePbufferDCEXT), verbose);
		Assertv((wglDestroyPbufferEXT), verbose);
		Assertv((wglQueryPbufferEXT), verbose);
	}
	if(WGL_EXT_pixel_format)
	{
		LOG_B(WGL_EXT_pixel_format);
		Assertv((wglGetPixelFormatAttribivEXT), verbose);
		Assertv((wglGetPixelFormatAttribfvEXT), verbose);
		Assertv((wglChoosePixelFormatEXT), verbose);
	}
	if(WGL_EXT_pixel_format_packed_float)
	{
		LOG_B(WGL_EXT_pixel_format_packed_float);
	}
	if(WGL_EXT_swap_control)
	{
		LOG_B(WGL_EXT_swap_control);
		Assertv((wglSwapIntervalEXT), verbose);
		Assertv((wglGetSwapIntervalEXT), verbose);
	}
	if(WGL_EXT_swap_control_tear)
	{
		LOG_B(WGL_EXT_swap_control_tear);
	}
	if(WGL_I3D_digital_video_control)
	{
		LOG_B(WGL_I3D_digital_video_control);
		Assertv((wglGetDigitalVideoParametersI3D), verbose);
		Assertv((wglSetDigitalVideoParametersI3D), verbose);
	}
	if(WGL_I3D_gamma)
	{
		LOG_B(WGL_I3D_gamma);
		Assertv((wglGetGammaTableParametersI3D), verbose);
		Assertv((wglSetGammaTableParametersI3D), verbose);
		Assertv((wglGetGammaTableI3D), verbose);
		Assertv((wglSetGammaTableI3D), verbose);
	}
	if(WGL_I3D_genlock)
	{
		LOG_B(WGL_I3D_genlock);
		Assertv((wglEnableGenlockI3D), verbose);
		Assertv((wglDisableGenlockI3D), verbose);
		Assertv((wglIsEnabledGenlockI3D), verbose);
		Assertv((wglGenlockSourceI3D), verbose);
		Assertv((wglGetGenlockSourceI3D), verbose);
		Assertv((wglGenlockSourceEdgeI3D), verbose);
		Assertv((wglGetGenlockSourceEdgeI3D), verbose);
		Assertv((wglGenlockSampleRateI3D), verbose);
		Assertv((wglGetGenlockSampleRateI3D), verbose);
		Assertv((wglGenlockSourceDelayI3D), verbose);
		Assertv((wglGetGenlockSourceDelayI3D), verbose);
		Assertv((wglQueryGenlockMaxSourceDelayI3D), verbose);
	}
	if(WGL_I3D_image_buffer)
	{
		LOG_B(WGL_I3D_image_buffer);
		Assertv((wglCreateImageBufferI3D), verbose);
		Assertv((wglDestroyImageBufferI3D), verbose);
		Assertv((wglAssociateImageBufferEventsI3D), verbose);
		Assertv((wglReleaseImageBufferEventsI3D), verbose);
	}
	if(WGL_I3D_swap_frame_lock)
	{
		LOG_B(WGL_I3D_swap_frame_lock);
		Assertv((wglEnableFrameLockI3D), verbose);
		Assertv((wglDisableFrameLockI3D), verbose);
		Assertv((wglIsEnabledFrameLockI3D), verbose);
		Assertv((wglQueryFrameLockMasterI3D), verbose);
	}
	if(WGL_I3D_swap_frame_usage)
	{
		LOG_B(WGL_I3D_swap_frame_usage);
		Assertv((wglGetFrameUsageI3D), verbose);
		Assertv((wglBeginFrameTrackingI3D), verbose);
		Assertv((wglEndFrameTrackingI3D), verbose);
		Assertv((wglQueryFrameTrackingI3D), verbose);
	}
	if(WGL_NV_DX_interop)
	{
		LOG_B(WGL_NV_DX_interop);
		Assertv((wglDXSetResourceShareHandleNV), verbose);
		Assertv((wglDXOpenDeviceNV), verbose);
		Assertv((wglDXCloseDeviceNV), verbose);
		Assertv((wglDXRegisterObjectNV), verbose);
		Assertv((wglDXUnregisterObjectNV), verbose);
		Assertv((wglDXObjectAccessNV), verbose);
		Assertv((wglDXLockObjectsNV), verbose);
		Assertv((wglDXUnlockObjectsNV), verbose);
	}
	if(WGL_NV_DX_interop2)
	{
		LOG_B(WGL_NV_DX_interop2);
	}
	if(WGL_NV_copy_image)
	{
		LOG_B(WGL_NV_copy_image);
		Assertv((wglCopyImageSubDataNV), verbose);
	}
	if(WGL_NV_delay_before_swap)
	{
		LOG_B(WGL_NV_delay_before_swap);
		Assertv((wglDelayBeforeSwapNV), verbose);
	}
	if(WGL_NV_float_buffer)
	{
		LOG_B(WGL_NV_float_buffer);
	}
	if(WGL_NV_gpu_affinity)
	{
		LOG_B(WGL_NV_gpu_affinity);
		Assertv((wglEnumGpusNV), verbose);
		Assertv((wglEnumGpuDevicesNV), verbose);
		Assertv((wglCreateAffinityDCNV), verbose);
		Assertv((wglEnumGpusFromAffinityDCNV), verbose);
		Assertv((wglDeleteDCNV), verbose);
	}
	if(WGL_NV_multigpu_context)
	{
		LOG_B(WGL_NV_multigpu_context);
	}
	if(WGL_NV_multisample_coverage)
	{
		LOG_B(WGL_NV_multisample_coverage);
	}
	if(WGL_NV_present_video)
	{
		LOG_B(WGL_NV_present_video);
		Assertv((wglEnumerateVideoDevicesNV), verbose);
		Assertv((wglBindVideoDeviceNV), verbose);
		Assertv((wglQueryCurrentContextNV), verbose);
	}
	if(WGL_NV_render_depth_texture)
	{
		LOG_B(WGL_NV_render_depth_texture);
	}
	if(WGL_NV_render_texture_rectangle)
	{
		LOG_B(WGL_NV_render_texture_rectangle);
	}
	if(WGL_NV_swap_group)
	{
		LOG_B(WGL_NV_swap_group);
		Assertv((wglJoinSwapGroupNV), verbose);
		Assertv((wglBindSwapBarrierNV), verbose);
		Assertv((wglQuerySwapGroupNV), verbose);
		Assertv((wglQueryMaxSwapGroupsNV), verbose);
		Assertv((wglQueryFrameCountNV), verbose);
		Assertv((wglResetFrameCountNV), verbose);
	}
	if(WGL_NV_vertex_array_range)
	{
		LOG_B(WGL_NV_vertex_array_range);
		Assertv((wglAllocateMemoryNV), verbose);
		Assertv((wglFreeMemoryNV), verbose);
	}
	if(WGL_NV_video_capture)
	{
		LOG_B(WGL_NV_video_capture);
		Assertv((wglBindVideoCaptureDeviceNV), verbose);
		Assertv((wglEnumerateVideoCaptureDevicesNV), verbose);
		Assertv((wglLockVideoCaptureDeviceNV), verbose);
		Assertv((wglQueryVideoCaptureDeviceNV), verbose);
		Assertv((wglReleaseVideoCaptureDeviceNV), verbose);
	}
	if(WGL_NV_video_output)
	{
		LOG_B(WGL_NV_video_output);
		Assertv((wglGetVideoDeviceNV), verbose);
		Assertv((wglReleaseVideoDeviceNV), verbose);
		Assertv((wglBindVideoImageNV), verbose);
		Assertv((wglReleaseVideoImageNV), verbose);
		Assertv((wglSendPbufferToVideoNV), verbose);
		Assertv((wglGetVideoInfoNV), verbose);
	}
	if(WGL_OML_sync_control)
	{
		LOG_B(WGL_OML_sync_control);
		Assertv((wglGetSyncValuesOML), verbose);
		Assertv((wglGetMscRateOML), verbose);
		Assertv((wglSwapBuffersMscOML), verbose);
		Assertv((wglSwapLayerBuffersMscOML), verbose);
		Assertv((wglWaitForMscOML), verbose);
		Assertv((wglWaitForSbcOML), verbose);
	}
	return (axl::assert::_num_failed_tests - failes_so_far) == 0;
}

} // axl::glfl::WGL
} // axl::glfl
} // axl