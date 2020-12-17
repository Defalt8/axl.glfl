#include <stdio.h>
#include <axl.glfl/linux/glxext.hpp>
#include "../../Assert.hpp"

#define LOG_B(b) printf("%c - %s - "#b"\n", (b ? ' ' : '*'), (b ? "OK" : "NA"));

namespace axl {
namespace glfl {
namespace GLX {

bool test(bool verbose)
{
	Assertv(load(), verbose);
	if(GLX_VERSION_1_3)
	{
		LOG_B(GLX_VERSION_1_3);
		Assertv(glXGetFBConfigs, verbose);
		Assertv(glXChooseFBConfig, verbose);
		Assertv(glXGetFBConfigAttrib, verbose);
		Assertv(glXGetVisualFromFBConfig, verbose);
		Assertv(glXCreateWindow, verbose);
		Assertv(glXDestroyWindow, verbose);
		Assertv(glXCreatePixmap, verbose);
		Assertv(glXDestroyPixmap, verbose);
		Assertv(glXCreatePbuffer, verbose);
		Assertv(glXDestroyPbuffer, verbose);
		Assertv(glXQueryDrawable, verbose);
		Assertv(glXCreateNewContext, verbose);
		Assertv(glXMakeContextCurrent, verbose);
		Assertv(glXGetCurrentReadDrawable, verbose);
		Assertv(glXQueryContext, verbose);
		Assertv(glXSelectEvent, verbose);
		Assertv(glXGetSelectedEvent, verbose);
	}
	if(GLX_VERSION_1_4)
	{
		LOG_B(GLX_VERSION_1_4);
		Assertv(glXGetProcAddress, verbose);
	}
	if(GLX_ARB_get_proc_address)
	{
		LOG_B(GLX_ARB_get_proc_address);
		Assertv(glXGetProcAddressARB, verbose);
	}
	
	if(GLX_ARB_create_context)
	{
		LOG_B(GLX_ARB_create_context);
		Assertv(glXCreateContextAttribsARB, verbose);
	}
	if(GLX_AMD_gpu_association)
	{
		LOG_B(GLX_AMD_gpu_association);
		Assertv(glXGetGPUIDsAMD, verbose);
		Assertv(glXGetGPUInfoAMD, verbose);
		Assertv(glXGetContextGPUIDAMD, verbose);
		Assertv(glXCreateAssociatedContextAMD, verbose);
		Assertv(glXCreateAssociatedContextAttribsAMD, verbose);
		Assertv(glXDeleteAssociatedContextAMD, verbose);
		Assertv(glXMakeAssociatedContextCurrentAMD, verbose);
		Assertv(glXGetCurrentAssociatedContextAMD, verbose);
		Assertv(glXBlitContextFramebufferAMD, verbose);
	}
	if(GLX_EXT_import_context)
	{
		LOG_B(GLX_EXT_import_context);
		Assertv(glXGetCurrentDisplayEXT, verbose);
		Assertv(glXQueryContextInfoEXT, verbose);
		Assertv(glXGetContextIDEXT, verbose);
		Assertv(glXImportContextEXT, verbose);
		Assertv(glXFreeContextEXT, verbose);
	}
	if(GLX_EXT_swap_control)
	{
		LOG_B(GLX_EXT_swap_control);
		Assertv(glXSwapIntervalEXT, verbose);
	}
	if(GLX_EXT_texture_from_pixmap)
	{
		LOG_B(GLX_EXT_texture_from_pixmap);
		Assertv(glXBindTexImageEXT, verbose);
		Assertv(glXReleaseTexImageEXT, verbose);
	}
	if(GLX_MESA_agp_offset)
	{
		LOG_B(GLX_MESA_agp_offset);
		Assertv(glXGetAGPOffsetMESA, verbose);
	}
	if(GLX_MESA_copy_sub_buffer)
	{
		LOG_B(GLX_MESA_copy_sub_buffer);
		Assertv(glXCopySubBufferMESA, verbose);
	}
	if(GLX_MESA_pixmap_colormap)
	{
		LOG_B(GLX_MESA_pixmap_colormap);
		Assertv(glXCreateGLXPixmapMESA, verbose);
	}
	if(GLX_MESA_query_renderer)
	{
		LOG_B(GLX_MESA_query_renderer);
		Assertv(glXQueryCurrentRendererIntegerMESA, verbose);
		Assertv(glXQueryCurrentRendererStringMESA, verbose);
		Assertv(glXQueryRendererIntegerMESA, verbose);
		Assertv(glXQueryRendererStringMESA, verbose);
	}
	if(GLX_MESA_release_buffers)
	{
		LOG_B(GLX_MESA_release_buffers);
		Assertv(glXReleaseBuffersMESA, verbose);
	}
	if(GLX_MESA_set_3dfx_mode)
	{
		LOG_B(GLX_MESA_set_3dfx_mode);
		Assertv(glXSet3DfxModeMESA, verbose);
	}
	if(GLX_MESA_swap_control)
	{
		LOG_B(GLX_MESA_swap_control);
		Assertv(glXGetSwapIntervalMESA, verbose);
		Assertv(glXSwapIntervalMESA, verbose);
	}
	if(GLX_NV_copy_buffer)
	{
		LOG_B(GLX_NV_copy_buffer);
		Assertv(glXCopyBufferSubDataNV, verbose);
		Assertv(glXNamedCopyBufferSubDataNV, verbose);
	}
	if(GLX_NV_copy_image)
	{
		LOG_B(GLX_NV_copy_image);
		Assertv(glXCopyImageSubDataNV, verbose);
	}
	if(GLX_NV_delay_before_swap)
	{
		LOG_B(GLX_NV_delay_before_swap);
		Assertv(glXDelayBeforeSwapNV, verbose);
	}
	if(GLX_NV_present_video)
	{
		LOG_B(GLX_NV_present_video);
		Assertv(glXEnumerateVideoDevicesNV, verbose);
		Assertv(glXBindVideoDeviceNV, verbose);
	}
	if(GLX_NV_swap_group)
	{
		LOG_B(GLX_NV_swap_group);
		Assertv(glXJoinSwapGroupNV, verbose);
		Assertv(glXBindSwapBarrierNV, verbose);
		Assertv(glXQuerySwapGroupNV, verbose);
		Assertv(glXQueryMaxSwapGroupsNV, verbose);
		Assertv(glXQueryFrameCountNV, verbose);
		Assertv(glXResetFrameCountNV, verbose);
	}
	if(GLX_NV_video_capture)
	{
		LOG_B(GLX_NV_video_capture);
		Assertv(glXBindVideoCaptureDeviceNV, verbose);
		Assertv(glXEnumerateVideoCaptureDevicesNV, verbose);
		Assertv(glXLockVideoCaptureDeviceNV, verbose);
		Assertv(glXQueryVideoCaptureDeviceNV, verbose);
		Assertv(glXReleaseVideoCaptureDeviceNV, verbose);
	}
	if(GLX_NV_video_out)
	{
		LOG_B(GLX_NV_video_out);
		Assertv(glXGetVideoDeviceNV, verbose);
		Assertv(glXReleaseVideoDeviceNV, verbose);
		Assertv(glXBindVideoImageNV, verbose);
		Assertv(glXReleaseVideoImageNV, verbose);
		Assertv(glXSendPbufferToVideoNV, verbose);
		Assertv(glXGetVideoInfoNV, verbose);
	}
	if(GLX_OML_sync_control)
	{
		LOG_B(GLX_OML_sync_control);
		Assertv(glXGetSyncValuesOML, verbose);
		Assertv(glXGetMscRateOML, verbose);
		Assertv(glXSwapBuffersMscOML, verbose);
		Assertv(glXWaitForMscOML, verbose);
		Assertv(glXWaitForSbcOML, verbose);
	}
#ifdef _DM_BUFFER_H_
	if(GLX_SGIX_dmbuffer)
	{
		LOG_B(GLX_SGIX_dmbuffer);
		Assertv(glXAssociateDMPbufferSGIX, verbose);
	}
#endif // _DM_BUFFER_H_
	if(GLX_SGIX_fbconfig)
	{
		LOG_B(GLX_SGIX_fbconfig);
		Assertv(glXGetFBConfigAttribSGIX, verbose);
		Assertv(glXChooseFBConfigSGIX, verbose);
		Assertv(glXCreateGLXPixmapWithConfigSGIX, verbose);
		Assertv(glXCreateContextWithConfigSGIX, verbose);
		Assertv(glXGetVisualFromFBConfigSGIX, verbose);
		Assertv(glXGetFBConfigFromVisualSGIX, verbose);
	}
	if(GLX_SGIX_hyperpipe)
	{
		LOG_B(GLX_SGIX_hyperpipe);
		Assertv(glXQueryHyperpipeNetworkSGIX, verbose);
		Assertv(glXHyperpipeConfigSGIX, verbose);
		Assertv(glXQueryHyperpipeConfigSGIX, verbose);
		Assertv(glXDestroyHyperpipeConfigSGIX, verbose);
		Assertv(glXBindHyperpipeSGIX, verbose);
		Assertv(glXQueryHyperpipeBestAttribSGIX, verbose);
		Assertv(glXHyperpipeAttribSGIX, verbose);
		Assertv(glXQueryHyperpipeAttribSGIX, verbose);
	}
	if(GLX_SGIX_pbuffer)
	{
		LOG_B(GLX_SGIX_pbuffer);
		Assertv(glXCreateGLXPbufferSGIX, verbose);
		Assertv(glXDestroyGLXPbufferSGIX, verbose);
		Assertv(glXQueryGLXPbufferSGIX, verbose);
		Assertv(glXSelectEventSGIX, verbose);
		Assertv(glXGetSelectedEventSGIX, verbose);
	}
	if(GLX_SGIX_swap_barrier)
	{
		LOG_B(GLX_SGIX_swap_barrier);
		Assertv(glXBindSwapBarrierSGIX, verbose);
		Assertv(glXQueryMaxSwapBarriersSGIX, verbose);
	}
	if(GLX_SGIX_video_resize)
	{
		LOG_B(GLX_SGIX_video_resize);
		Assertv(glXBindChannelToWindowSGIX, verbose);
		Assertv(glXChannelRectSGIX, verbose);
		Assertv(glXQueryChannelRectSGIX, verbose);
		Assertv(glXQueryChannelDeltasSGIX, verbose);
		Assertv(glXChannelRectSyncSGIX, verbose);
	}
#ifdef _VL_H
	if(GLX_SGIX_video_source)
	{
		LOG_B(GLX_SGIX_video_source);
		Assertv(glXCreateGLXVideoSourceSGIX, verbose);
		Assertv(glXDestroyGLXVideoSourceSGIX, verbose);
	}
#endif // _VL_H
	if(GLX_SGI_cushion)
	{
		LOG_B(GLX_SGI_cushion);
		Assertv(glXCushionSGI, verbose);
	}
	if(GLX_SGI_make_current_read)
	{
		LOG_B(GLX_SGI_make_current_read);
		Assertv(glXMakeCurrentReadSGI, verbose);
		Assertv(glXGetCurrentReadDrawableSGI, verbose);
	}
	if(GLX_SGI_swap_control)
	{
		LOG_B(GLX_SGI_swap_control);
		Assertv(glXSwapIntervalSGI, verbose);
	}
	if(GLX_SGI_video_sync)
	{
		LOG_B(GLX_SGI_video_sync);
		Assertv(glXGetVideoSyncSGI, verbose);
		Assertv(glXWaitVideoSyncSGI, verbose);
	}
	if(GLX_SUN_get_transparent_index)
	{
		LOG_B(GLX_SUN_get_transparent_index);
		Assertv(glXGetTransparentIndexSUN, verbose);
	}
	if(GLX_ARB_create_context_no_error)
	{
		LOG_B(GLX_ARB_create_context_no_error);
	}
	if(GLX_ARB_create_context_profile)
	{
		LOG_B(GLX_ARB_create_context_profile);
	}
	if(GLX_ARB_create_context_robustness)
	{
		LOG_B(GLX_ARB_create_context_robustness);
	}
	if(GLX_ARB_fbconfig_float)
	{
		LOG_B(GLX_ARB_fbconfig_float);
	}
	if(GLX_ARB_framebuffer_sRGB)
	{
		LOG_B(GLX_ARB_framebuffer_sRGB);
	}
	if(GLX_ARB_multisample)
	{
		LOG_B(GLX_ARB_multisample);
	}
	if(GLX_ARB_robustness_application_isolation)
	{
		LOG_B(GLX_ARB_robustness_application_isolation);
	}
	if(GLX_ARB_robustness_share_group_isolation)
	{
		LOG_B(GLX_ARB_robustness_share_group_isolation);
	}
	if(GLX_ARB_vertex_buffer_object)
	{
		LOG_B(GLX_ARB_vertex_buffer_object);
	}
	if(GLX_3DFX_multisample)
	{
		LOG_B(GLX_3DFX_multisample);
	}
	if(GLX_EXT_buffer_age)
	{
		LOG_B(GLX_EXT_buffer_age);
	}
	if(GLX_EXT_context_priority)
	{
		LOG_B(GLX_EXT_context_priority);
	}
	if(GLX_EXT_create_context_es2_profile)
	{
		LOG_B(GLX_EXT_create_context_es2_profile);
	}
	if(GLX_EXT_create_context_es_profile)
	{
		LOG_B(GLX_EXT_create_context_es_profile);
	}
	if(GLX_EXT_fbconfig_packed_float)
	{
		LOG_B(GLX_EXT_fbconfig_packed_float);
	}
	if(GLX_EXT_framebuffer_sRGB)
	{
		LOG_B(GLX_EXT_framebuffer_sRGB);
	}
	if(GLX_EXT_get_drawable_type)
	{
		LOG_B(GLX_EXT_get_drawable_type);
	}
	if(GLX_EXT_libglvnd)
	{
		LOG_B(GLX_EXT_libglvnd);
	}
	if(GLX_EXT_no_config_context)
	{
		LOG_B(GLX_EXT_no_config_context);
	}
	if(GLX_EXT_stereo_tree)
	{
		LOG_B(GLX_EXT_stereo_tree);
	}
	if(GLX_EXT_swap_control_tear)
	{
		LOG_B(GLX_EXT_swap_control_tear);
	}
	if(GLX_EXT_visual_info)
	{
		LOG_B(GLX_EXT_visual_info);
	}
	if(GLX_EXT_visual_rating)
	{
		LOG_B(GLX_EXT_visual_rating);
	}
	if(GLX_INTEL_swap_event)
	{
		LOG_B(GLX_INTEL_swap_event);
	}
	if(GLX_NV_float_buffer)
	{
		LOG_B(GLX_NV_float_buffer);
	}
	if(GLX_NV_multigpu_context)
	{
		LOG_B(GLX_NV_multigpu_context);
	}
	if(GLX_NV_multisample_coverage)
	{
		LOG_B(GLX_NV_multisample_coverage);
	}
	if(GLX_NV_robustness_video_memory_purge)
	{
		LOG_B(GLX_NV_robustness_video_memory_purge);
	}
	if(GLX_OML_swap_method)
	{
		LOG_B(GLX_OML_swap_method);
	}
	if(GLX_SGIS_blended_overlay)
	{
		LOG_B(GLX_SGIS_blended_overlay);
	}
	if(GLX_SGIS_multisample)
	{
		LOG_B(GLX_SGIS_multisample);
	}
	if(GLX_SGIS_shared_multisample)
	{
		LOG_B(GLX_SGIS_shared_multisample);
	}
	if(GLX_SGIX_visual_select_group)
	{
		LOG_B(GLX_SGIX_visual_select_group);
	} 
	return true;
}

} // axl::glfl::GLX
} // axl::glfl
} // axl
