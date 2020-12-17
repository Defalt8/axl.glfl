#include <cstdio>
#include <axl.glfl/Dummy.hpp>
#include <axl.glfl/linux/glxext.hpp>
#include "../../Assert.hpp"

#define LOG_B(b) printf("%c - %s - "#b"\n", (b ? ' ' : '*'), (b ? "OK" : "NA"));

namespace axl {
namespace glfl {
namespace GLX {

bool test(bool verbose)
{
	Assertv(load(), verbose);
    GLOBAL_DUMMY.init();
    GLOBAL_DUMMY.makeCurrent();
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
        Assertv(checkExtension("GLX_ARB_get_proc_address"), verbose);
		LOG_B(GLX_ARB_get_proc_address);
		Assertv(glXGetProcAddressARB, verbose);
	}
	if(GLX_ARB_create_context)
	{
        Assertv(checkExtension("GLX_ARB_create_context"), verbose);
		LOG_B(GLX_ARB_create_context);
		Assertv(glXCreateContextAttribsARB, verbose);
	}
	if(GLX_AMD_gpu_association)
	{
        Assertv(checkExtension("GLX_AMD_gpu_association"), verbose);
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
        Assertv(checkExtension("GLX_EXT_import_context"), verbose);
		LOG_B(GLX_EXT_import_context);
		Assertv(glXGetCurrentDisplayEXT, verbose);
		Assertv(glXQueryContextInfoEXT, verbose);
		Assertv(glXGetContextIDEXT, verbose);
		Assertv(glXImportContextEXT, verbose);
		Assertv(glXFreeContextEXT, verbose);
	}
	if(GLX_EXT_swap_control)
	{
        Assertv(checkExtension("GLX_EXT_swap_control"), verbose);
		LOG_B(GLX_EXT_swap_control);
		Assertv(glXSwapIntervalEXT, verbose);
	}
	if(GLX_EXT_texture_from_pixmap)
	{
        Assertv(checkExtension("GLX_EXT_texture_from_pixmap"), verbose);
		LOG_B(GLX_EXT_texture_from_pixmap);
		Assertv(glXBindTexImageEXT, verbose);
		Assertv(glXReleaseTexImageEXT, verbose);
	}
	if(GLX_MESA_agp_offset)
	{
        Assertv(checkExtension("GLX_MESA_agp_offset"), verbose);
		LOG_B(GLX_MESA_agp_offset);
		Assertv(glXGetAGPOffsetMESA, verbose);
	}
	if(GLX_MESA_copy_sub_buffer)
	{
        Assertv(checkExtension("GLX_MESA_copy_sub_buffer"), verbose);
		LOG_B(GLX_MESA_copy_sub_buffer);
		Assertv(glXCopySubBufferMESA, verbose);
	}
	if(GLX_MESA_pixmap_colormap)
	{
        Assertv(checkExtension("GLX_MESA_pixmap_colormap"), verbose);
		LOG_B(GLX_MESA_pixmap_colormap);
		Assertv(glXCreateGLXPixmapMESA, verbose);
	}
	if(GLX_MESA_query_renderer)
	{
        Assertv(checkExtension("GLX_MESA_query_renderer"), verbose);
		LOG_B(GLX_MESA_query_renderer);
		Assertv(glXQueryCurrentRendererIntegerMESA, verbose);
		Assertv(glXQueryCurrentRendererStringMESA, verbose);
		Assertv(glXQueryRendererIntegerMESA, verbose);
		Assertv(glXQueryRendererStringMESA, verbose);
	}
	if(GLX_MESA_release_buffers)
	{
        Assertv(checkExtension("GLX_MESA_release_buffers"), verbose);
		LOG_B(GLX_MESA_release_buffers);
		Assertv(glXReleaseBuffersMESA, verbose);
	}
	if(GLX_MESA_set_3dfx_mode)
	{
        Assertv(checkExtension("GLX_MESA_set_3dfx_mode"), verbose);
		LOG_B(GLX_MESA_set_3dfx_mode);
		Assertv(glXSet3DfxModeMESA, verbose);
	}
	if(GLX_MESA_swap_control)
	{
        Assertv(checkExtension("GLX_MESA_swap_control"), verbose);
		LOG_B(GLX_MESA_swap_control);
		Assertv(glXGetSwapIntervalMESA, verbose);
		Assertv(glXSwapIntervalMESA, verbose);
	}
	if(GLX_NV_copy_buffer)
	{
        Assertv(checkExtension("GLX_NV_copy_buffer"), verbose);
		LOG_B(GLX_NV_copy_buffer);
		Assertv(glXCopyBufferSubDataNV, verbose);
		Assertv(glXNamedCopyBufferSubDataNV, verbose);
	}
	if(GLX_NV_copy_image)
	{
        Assertv(checkExtension("GLX_NV_copy_image"), verbose);
		LOG_B(GLX_NV_copy_image);
		Assertv(glXCopyImageSubDataNV, verbose);
	}
	if(GLX_NV_delay_before_swap)
	{
        Assertv(checkExtension("GLX_NV_delay_before_swap"), verbose);
		LOG_B(GLX_NV_delay_before_swap);
		Assertv(glXDelayBeforeSwapNV, verbose);
	}
	if(GLX_NV_present_video)
	{
        Assertv(checkExtension("GLX_NV_present_video"), verbose);
		LOG_B(GLX_NV_present_video);
		Assertv(glXEnumerateVideoDevicesNV, verbose);
		Assertv(glXBindVideoDeviceNV, verbose);
	}
	if(GLX_NV_swap_group)
	{
        Assertv(checkExtension("GLX_NV_swap_group"), verbose);
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
        Assertv(checkExtension("GLX_NV_video_capture"), verbose);
		LOG_B(GLX_NV_video_capture);
		Assertv(glXBindVideoCaptureDeviceNV, verbose);
		Assertv(glXEnumerateVideoCaptureDevicesNV, verbose);
		Assertv(glXLockVideoCaptureDeviceNV, verbose);
		Assertv(glXQueryVideoCaptureDeviceNV, verbose);
		Assertv(glXReleaseVideoCaptureDeviceNV, verbose);
	}
	if(GLX_NV_video_out)
	{
        Assertv(checkExtension("GLX_NV_video_out"), verbose);
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
        Assertv(checkExtension("GLX_OML_sync_control"), verbose);
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
        Assertv(checkExtension("GLX_SGIX_dmbuffer"), verbose);
		LOG_B(GLX_SGIX_dmbuffer);
		Assertv(glXAssociateDMPbufferSGIX, verbose);
	}
#endif // _DM_BUFFER_H_
	if(GLX_SGIX_fbconfig)
	{
        Assertv(checkExtension("GLX_SGIX_fbconfig"), verbose);
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
        Assertv(checkExtension("GLX_SGIX_hyperpipe"), verbose);
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
        Assertv(checkExtension("GLX_SGIX_pbuffer"), verbose);
		LOG_B(GLX_SGIX_pbuffer);
		Assertv(glXCreateGLXPbufferSGIX, verbose);
		Assertv(glXDestroyGLXPbufferSGIX, verbose);
		Assertv(glXQueryGLXPbufferSGIX, verbose);
		Assertv(glXSelectEventSGIX, verbose);
		Assertv(glXGetSelectedEventSGIX, verbose);
	}
	if(GLX_SGIX_swap_barrier)
	{
        Assertv(checkExtension("GLX_SGIX_swap_barrier"), verbose);
		LOG_B(GLX_SGIX_swap_barrier);
		Assertv(glXBindSwapBarrierSGIX, verbose);
		Assertv(glXQueryMaxSwapBarriersSGIX, verbose);
	}
	if(GLX_SGIX_video_resize)
	{
        Assertv(checkExtension("GLX_SGIX_video_resize"), verbose);
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
        Assertv(checkExtension("GLX_SGIX_video_source"), verbose);
		LOG_B(GLX_SGIX_video_source);
		Assertv(glXCreateGLXVideoSourceSGIX, verbose);
		Assertv(glXDestroyGLXVideoSourceSGIX, verbose);
	}
#endif // _VL_H
	if(GLX_SGI_cushion)
	{
        Assertv(checkExtension("GLX_SGI_cushion"), verbose);
		LOG_B(GLX_SGI_cushion);
		Assertv(glXCushionSGI, verbose);
	}
	if(GLX_SGI_make_current_read)
	{
        Assertv(checkExtension("GLX_SGI_make_current_read"), verbose);
		LOG_B(GLX_SGI_make_current_read);
		Assertv(glXMakeCurrentReadSGI, verbose);
		Assertv(glXGetCurrentReadDrawableSGI, verbose);
	}
	if(GLX_SGI_swap_control)
	{
        Assertv(checkExtension("GLX_SGI_swap_control"), verbose);
		LOG_B(GLX_SGI_swap_control);
		Assertv(glXSwapIntervalSGI, verbose);
	}
	if(GLX_SGI_video_sync)
	{
        Assertv(checkExtension("GLX_SGI_video_sync"), verbose);
		LOG_B(GLX_SGI_video_sync);
		Assertv(glXGetVideoSyncSGI, verbose);
		Assertv(glXWaitVideoSyncSGI, verbose);
	}
	if(GLX_SUN_get_transparent_index)
	{
        Assertv(checkExtension("GLX_SUN_get_transparent_index"), verbose);
		LOG_B(GLX_SUN_get_transparent_index);
		Assertv(glXGetTransparentIndexSUN, verbose);
	}
	if(GLX_ARB_create_context_no_error)
	{
        Assertv(checkExtension("GLX_ARB_create_context_no_error"), verbose);
		LOG_B(GLX_ARB_create_context_no_error);
	}
	if(GLX_ARB_create_context_profile)
	{
        Assertv(checkExtension("GLX_ARB_create_context_profile"), verbose);
		LOG_B(GLX_ARB_create_context_profile);
	}
	if(GLX_ARB_create_context_robustness)
	{
        Assertv(checkExtension("GLX_ARB_create_context_robustness"), verbose);
		LOG_B(GLX_ARB_create_context_robustness);
	}
	if(GLX_ARB_fbconfig_float)
	{
        Assertv(checkExtension("GLX_ARB_fbconfig_float"), verbose);
		LOG_B(GLX_ARB_fbconfig_float);
	}
	if(GLX_ARB_framebuffer_sRGB)
	{
        Assertv(checkExtension("GLX_ARB_framebuffer_sRGB"), verbose);
		LOG_B(GLX_ARB_framebuffer_sRGB);
	}
	if(GLX_ARB_multisample)
	{
        Assertv(checkExtension("GLX_ARB_multisample"), verbose);
		LOG_B(GLX_ARB_multisample);
	}
	if(GLX_ARB_robustness_application_isolation)
	{
        Assertv(checkExtension("GLX_ARB_robustness_application_isolation"), verbose);
		LOG_B(GLX_ARB_robustness_application_isolation);
	}
	if(GLX_ARB_robustness_share_group_isolation)
	{
        Assertv(checkExtension("GLX_ARB_robustness_share_group_isolation"), verbose);
		LOG_B(GLX_ARB_robustness_share_group_isolation);
	}
	if(GLX_ARB_vertex_buffer_object)
	{
        Assertv(checkExtension("GLX_ARB_vertex_buffer_object"), verbose);
		LOG_B(GLX_ARB_vertex_buffer_object);
	}
	if(GLX_3DFX_multisample)
	{
        Assertv(checkExtension("GLX_3DFX_multisample"), verbose);
		LOG_B(GLX_3DFX_multisample);
	}
	if(GLX_EXT_buffer_age)
	{
        Assertv(checkExtension("GLX_EXT_buffer_age"), verbose);
		LOG_B(GLX_EXT_buffer_age);
	}
	if(GLX_EXT_context_priority)
	{
        Assertv(checkExtension("GLX_EXT_context_priority"), verbose);
		LOG_B(GLX_EXT_context_priority);
	}
	if(GLX_EXT_create_context_es2_profile)
	{
        Assertv(checkExtension("GLX_EXT_create_context_es2_profile"), verbose);
		LOG_B(GLX_EXT_create_context_es2_profile);
	}
	if(GLX_EXT_create_context_es_profile)
	{
        Assertv(checkExtension("GLX_EXT_create_context_es_profile"), verbose);
		LOG_B(GLX_EXT_create_context_es_profile);
	}
	if(GLX_EXT_fbconfig_packed_float)
	{
        Assertv(checkExtension("GLX_EXT_fbconfig_packed_float"), verbose);
		LOG_B(GLX_EXT_fbconfig_packed_float);
	}
	if(GLX_EXT_framebuffer_sRGB)
	{
        Assertv(checkExtension("GLX_EXT_framebuffer_sRGB"), verbose);
		LOG_B(GLX_EXT_framebuffer_sRGB);
	}
	if(GLX_EXT_get_drawable_type)
	{
        Assertv(checkExtension("GLX_EXT_get_drawable_type"), verbose);
		LOG_B(GLX_EXT_get_drawable_type);
	}
	if(GLX_EXT_libglvnd)
	{
        Assertv(checkExtension("GLX_EXT_libglvnd"), verbose);
		LOG_B(GLX_EXT_libglvnd);
	}
	if(GLX_EXT_no_config_context)
	{
        Assertv(checkExtension("GLX_EXT_no_config_context"), verbose);
		LOG_B(GLX_EXT_no_config_context);
	}
	if(GLX_EXT_stereo_tree)
	{
        Assertv(checkExtension("GLX_EXT_stereo_tree"), verbose);
		LOG_B(GLX_EXT_stereo_tree);
	}
	if(GLX_EXT_swap_control_tear)
	{
        Assertv(checkExtension("GLX_EXT_swap_control_tear"), verbose);
		LOG_B(GLX_EXT_swap_control_tear);
	}
	if(GLX_EXT_visual_info)
	{
        Assertv(checkExtension("GLX_EXT_visual_info"), verbose);
		LOG_B(GLX_EXT_visual_info);
	}
	if(GLX_EXT_visual_rating)
	{
        Assertv(checkExtension("GLX_EXT_visual_rating"), verbose);
		LOG_B(GLX_EXT_visual_rating);
	}
	if(GLX_INTEL_swap_event)
	{
        Assertv(checkExtension("GLX_INTEL_swap_event"), verbose);
		LOG_B(GLX_INTEL_swap_event);
	}
	if(GLX_NV_float_buffer)
	{
        Assertv(checkExtension("GLX_NV_float_buffer"), verbose);
		LOG_B(GLX_NV_float_buffer);
	}
	if(GLX_NV_multigpu_context)
	{
        Assertv(checkExtension("GLX_NV_multigpu_context"), verbose);
		LOG_B(GLX_NV_multigpu_context);
	}
	if(GLX_NV_multisample_coverage)
	{
        Assertv(checkExtension("GLX_NV_multisample_coverage"), verbose);
		LOG_B(GLX_NV_multisample_coverage);
	}
	if(GLX_NV_robustness_video_memory_purge)
	{
        Assertv(checkExtension("GLX_NV_robustness_video_memory_purge"), verbose);
		LOG_B(GLX_NV_robustness_video_memory_purge);
	}
	if(GLX_OML_swap_method)
	{
        Assertv(checkExtension("GLX_OML_swap_method"), verbose);
		LOG_B(GLX_OML_swap_method);
	}
	if(GLX_SGIS_blended_overlay)
	{
        Assertv(checkExtension("GLX_SGIS_blended_overlay"), verbose);
		LOG_B(GLX_SGIS_blended_overlay);
	}
	if(GLX_SGIS_multisample)
	{
        Assertv(checkExtension("GLX_SGIS_multisample"), verbose);
		LOG_B(GLX_SGIS_multisample);
	}
	if(GLX_SGIS_shared_multisample)
	{
        Assertv(checkExtension("GLX_SGIS_shared_multisample"), verbose);
		LOG_B(GLX_SGIS_shared_multisample);
	}
	if(GLX_SGIX_visual_select_group)
	{
        Assertv(checkExtension("GLX_SGIX_visual_select_group"), verbose);
		LOG_B(GLX_SGIX_visual_select_group);
	} 
	return true;
}

} // axl::glfl::GLX
} // axl::glfl
} // axl
