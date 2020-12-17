#include <cstring>
#include <axl.glfl/Dummy.hpp>
#include <axl.glfl/linux/glxext.hpp>

namespace axl {
namespace glfl {
namespace GLX {

PFN::glXGetFBConfigs glXGetFBConfigs = (PFN::glXGetFBConfigs)0;
PFN::glXChooseFBConfig glXChooseFBConfig = (PFN::glXChooseFBConfig)0;
PFN::glXGetFBConfigAttrib glXGetFBConfigAttrib = (PFN::glXGetFBConfigAttrib)0;
PFN::glXGetVisualFromFBConfig glXGetVisualFromFBConfig = (PFN::glXGetVisualFromFBConfig)0;
PFN::glXCreateWindow glXCreateWindow = (PFN::glXCreateWindow)0;
PFN::glXDestroyWindow glXDestroyWindow = (PFN::glXDestroyWindow)0;
PFN::glXCreatePixmap glXCreatePixmap = (PFN::glXCreatePixmap)0;
PFN::glXDestroyPixmap glXDestroyPixmap = (PFN::glXDestroyPixmap)0;
PFN::glXCreatePbuffer glXCreatePbuffer = (PFN::glXCreatePbuffer)0;
PFN::glXDestroyPbuffer glXDestroyPbuffer = (PFN::glXDestroyPbuffer)0;
PFN::glXQueryDrawable glXQueryDrawable = (PFN::glXQueryDrawable)0;
PFN::glXCreateNewContext glXCreateNewContext = (PFN::glXCreateNewContext)0;
PFN::glXMakeContextCurrent glXMakeContextCurrent = (PFN::glXMakeContextCurrent)0;
PFN::glXGetCurrentReadDrawable glXGetCurrentReadDrawable = (PFN::glXGetCurrentReadDrawable)0;
PFN::glXQueryContext glXQueryContext = (PFN::glXQueryContext)0;
PFN::glXSelectEvent glXSelectEvent = (PFN::glXSelectEvent)0;
PFN::glXGetSelectedEvent glXGetSelectedEvent = (PFN::glXGetSelectedEvent)0;
bool _GLX_VERSION_1_3 = false;
const bool& GLX_VERSION_1_3 = _GLX_VERSION_1_3;

PFN::glXGetProcAddress glXGetProcAddress = (PFN::glXGetProcAddress)0;
bool _GLX_VERSION_1_4 = false;
const bool& GLX_VERSION_1_4 = _GLX_VERSION_1_4;

PFN::glXCreateContextAttribsARB glXCreateContextAttribsARB = (PFN::glXCreateContextAttribsARB)0;
bool _GLX_ARB_create_context = false;
const bool& GLX_ARB_create_context = _GLX_ARB_create_context;

bool _GLX_ARB_create_context_no_error = false;
const bool& GLX_ARB_create_context_no_error = _GLX_ARB_create_context_no_error;

bool _GLX_ARB_create_context_profile = false;
const bool& GLX_ARB_create_context_profile = _GLX_ARB_create_context_profile;

bool _GLX_ARB_create_context_robustness = false;
const bool& GLX_ARB_create_context_robustness = _GLX_ARB_create_context_robustness;

bool _GLX_ARB_fbconfig_float = false;
const bool& GLX_ARB_fbconfig_float = _GLX_ARB_fbconfig_float;

bool _GLX_ARB_framebuffer_sRGB = false;
const bool& GLX_ARB_framebuffer_sRGB = _GLX_ARB_framebuffer_sRGB;

PFN::glXGetProcAddressARB glXGetProcAddressARB = (PFN::glXGetProcAddressARB)0;
bool _GLX_ARB_get_proc_address = false;
const bool& GLX_ARB_get_proc_address = _GLX_ARB_get_proc_address;

bool _GLX_ARB_multisample = false;
const bool& GLX_ARB_multisample = _GLX_ARB_multisample;

bool _GLX_ARB_robustness_application_isolation = false;
const bool& GLX_ARB_robustness_application_isolation = _GLX_ARB_robustness_application_isolation;

bool _GLX_ARB_robustness_share_group_isolation = false;
const bool& GLX_ARB_robustness_share_group_isolation = _GLX_ARB_robustness_share_group_isolation;

bool _GLX_ARB_vertex_buffer_object = false;
const bool& GLX_ARB_vertex_buffer_object = _GLX_ARB_vertex_buffer_object;

bool _GLX_3DFX_multisample = false;
const bool& GLX_3DFX_multisample = _GLX_3DFX_multisample;

PFN::glXGetGPUIDsAMD glXGetGPUIDsAMD = (PFN::glXGetGPUIDsAMD)0;
PFN::glXGetGPUInfoAMD glXGetGPUInfoAMD = (PFN::glXGetGPUInfoAMD)0;
PFN::glXGetContextGPUIDAMD glXGetContextGPUIDAMD = (PFN::glXGetContextGPUIDAMD)0;
PFN::glXCreateAssociatedContextAMD glXCreateAssociatedContextAMD = (PFN::glXCreateAssociatedContextAMD)0;
PFN::glXCreateAssociatedContextAttribsAMD glXCreateAssociatedContextAttribsAMD = (PFN::glXCreateAssociatedContextAttribsAMD)0;
PFN::glXDeleteAssociatedContextAMD glXDeleteAssociatedContextAMD = (PFN::glXDeleteAssociatedContextAMD)0;
PFN::glXMakeAssociatedContextCurrentAMD glXMakeAssociatedContextCurrentAMD = (PFN::glXMakeAssociatedContextCurrentAMD)0;
PFN::glXGetCurrentAssociatedContextAMD glXGetCurrentAssociatedContextAMD = (PFN::glXGetCurrentAssociatedContextAMD)0;
PFN::glXBlitContextFramebufferAMD glXBlitContextFramebufferAMD = (PFN::glXBlitContextFramebufferAMD)0;
bool _GLX_AMD_gpu_association = false;
const bool& GLX_AMD_gpu_association = _GLX_AMD_gpu_association;

bool _GLX_EXT_buffer_age = false;
const bool& GLX_EXT_buffer_age = _GLX_EXT_buffer_age;

bool _GLX_EXT_context_priority = false;
const bool& GLX_EXT_context_priority = _GLX_EXT_context_priority;

bool _GLX_EXT_create_context_es2_profile = false;
const bool& GLX_EXT_create_context_es2_profile = _GLX_EXT_create_context_es2_profile;

bool _GLX_EXT_create_context_es_profile = false;
const bool& GLX_EXT_create_context_es_profile = _GLX_EXT_create_context_es_profile;

bool _GLX_EXT_fbconfig_packed_float = false;
const bool& GLX_EXT_fbconfig_packed_float = _GLX_EXT_fbconfig_packed_float;

bool _GLX_EXT_framebuffer_sRGB = false;
const bool& GLX_EXT_framebuffer_sRGB = _GLX_EXT_framebuffer_sRGB;

bool _GLX_EXT_get_drawable_type = false;
const bool& GLX_EXT_get_drawable_type = _GLX_EXT_get_drawable_type;

PFN::glXGetCurrentDisplayEXT glXGetCurrentDisplayEXT = (PFN::glXGetCurrentDisplayEXT)0;
PFN::glXQueryContextInfoEXT glXQueryContextInfoEXT = (PFN::glXQueryContextInfoEXT)0;
PFN::glXGetContextIDEXT glXGetContextIDEXT = (PFN::glXGetContextIDEXT)0;
PFN::glXImportContextEXT glXImportContextEXT = (PFN::glXImportContextEXT)0;
PFN::glXFreeContextEXT glXFreeContextEXT = (PFN::glXFreeContextEXT)0;
bool _GLX_EXT_import_context = false;
const bool& GLX_EXT_import_context = _GLX_EXT_import_context;

bool _GLX_EXT_libglvnd = false;
const bool& GLX_EXT_libglvnd = _GLX_EXT_libglvnd;

bool _GLX_EXT_no_config_context = false;
const bool& GLX_EXT_no_config_context = _GLX_EXT_no_config_context;

bool _GLX_EXT_stereo_tree = false;
const bool& GLX_EXT_stereo_tree = _GLX_EXT_stereo_tree;

PFN::glXSwapIntervalEXT glXSwapIntervalEXT = (PFN::glXSwapIntervalEXT)0;
bool _GLX_EXT_swap_control = false;
const bool& GLX_EXT_swap_control = _GLX_EXT_swap_control;

bool _GLX_EXT_swap_control_tear = false;
const bool& GLX_EXT_swap_control_tear = _GLX_EXT_swap_control_tear;

PFN::glXBindTexImageEXT glXBindTexImageEXT = (PFN::glXBindTexImageEXT)0;
PFN::glXReleaseTexImageEXT glXReleaseTexImageEXT = (PFN::glXReleaseTexImageEXT)0;
bool _GLX_EXT_texture_from_pixmap = false;
const bool& GLX_EXT_texture_from_pixmap = _GLX_EXT_texture_from_pixmap;

bool _GLX_EXT_visual_info = false;
const bool& GLX_EXT_visual_info = _GLX_EXT_visual_info;

bool _GLX_EXT_visual_rating = false;
const bool& GLX_EXT_visual_rating = _GLX_EXT_visual_rating;

bool _GLX_INTEL_swap_event = false;
const bool& GLX_INTEL_swap_event = _GLX_INTEL_swap_event;

PFN::glXGetAGPOffsetMESA glXGetAGPOffsetMESA = (PFN::glXGetAGPOffsetMESA)0;
bool _GLX_MESA_agp_offset = false;
const bool& GLX_MESA_agp_offset = _GLX_MESA_agp_offset;

PFN::glXCopySubBufferMESA glXCopySubBufferMESA = (PFN::glXCopySubBufferMESA)0;
bool _GLX_MESA_copy_sub_buffer = false;
const bool& GLX_MESA_copy_sub_buffer = _GLX_MESA_copy_sub_buffer;

PFN::glXCreateGLXPixmapMESA glXCreateGLXPixmapMESA = (PFN::glXCreateGLXPixmapMESA)0;
bool _GLX_MESA_pixmap_colormap = false;
const bool& GLX_MESA_pixmap_colormap = _GLX_MESA_pixmap_colormap;

PFN::glXQueryCurrentRendererIntegerMESA glXQueryCurrentRendererIntegerMESA = (PFN::glXQueryCurrentRendererIntegerMESA)0;
PFN::glXQueryCurrentRendererStringMESA glXQueryCurrentRendererStringMESA = (PFN::glXQueryCurrentRendererStringMESA)0;
PFN::glXQueryRendererIntegerMESA glXQueryRendererIntegerMESA = (PFN::glXQueryRendererIntegerMESA)0;
PFN::glXQueryRendererStringMESA glXQueryRendererStringMESA = (PFN::glXQueryRendererStringMESA)0;
bool _GLX_MESA_query_renderer = false;
const bool& GLX_MESA_query_renderer = _GLX_MESA_query_renderer;

PFN::glXReleaseBuffersMESA glXReleaseBuffersMESA = (PFN::glXReleaseBuffersMESA)0;
bool _GLX_MESA_release_buffers = false;
const bool& GLX_MESA_release_buffers = _GLX_MESA_release_buffers;

PFN::glXSet3DfxModeMESA glXSet3DfxModeMESA = (PFN::glXSet3DfxModeMESA)0;
bool _GLX_MESA_set_3dfx_mode = false;
const bool& GLX_MESA_set_3dfx_mode = _GLX_MESA_set_3dfx_mode;

PFN::glXGetSwapIntervalMESA glXGetSwapIntervalMESA = (PFN::glXGetSwapIntervalMESA)0;
PFN::glXSwapIntervalMESA glXSwapIntervalMESA = (PFN::glXSwapIntervalMESA)0;
bool _GLX_MESA_swap_control = false;
const bool& GLX_MESA_swap_control = _GLX_MESA_swap_control;

PFN::glXCopyBufferSubDataNV glXCopyBufferSubDataNV = (PFN::glXCopyBufferSubDataNV)0;
PFN::glXNamedCopyBufferSubDataNV glXNamedCopyBufferSubDataNV = (PFN::glXNamedCopyBufferSubDataNV)0;
bool _GLX_NV_copy_buffer = false;
const bool& GLX_NV_copy_buffer = _GLX_NV_copy_buffer;

PFN::glXCopyImageSubDataNV glXCopyImageSubDataNV = (PFN::glXCopyImageSubDataNV)0;
bool _GLX_NV_copy_image = false;
const bool& GLX_NV_copy_image = _GLX_NV_copy_image;

PFN::glXDelayBeforeSwapNV glXDelayBeforeSwapNV = (PFN::glXDelayBeforeSwapNV)0;
bool _GLX_NV_delay_before_swap = false;
const bool& GLX_NV_delay_before_swap = _GLX_NV_delay_before_swap;

bool _GLX_NV_float_buffer = false;
const bool& GLX_NV_float_buffer = _GLX_NV_float_buffer;

bool _GLX_NV_multigpu_context = false;
const bool& GLX_NV_multigpu_context = _GLX_NV_multigpu_context;

bool _GLX_NV_multisample_coverage = false;
const bool& GLX_NV_multisample_coverage = _GLX_NV_multisample_coverage;

PFN::glXEnumerateVideoDevicesNV glXEnumerateVideoDevicesNV = (PFN::glXEnumerateVideoDevicesNV)0;
PFN::glXBindVideoDeviceNV glXBindVideoDeviceNV = (PFN::glXBindVideoDeviceNV)0;
bool _GLX_NV_present_video = false;
const bool& GLX_NV_present_video = _GLX_NV_present_video;

bool _GLX_NV_robustness_video_memory_purge = false;
const bool& GLX_NV_robustness_video_memory_purge = _GLX_NV_robustness_video_memory_purge;

PFN::glXJoinSwapGroupNV glXJoinSwapGroupNV = (PFN::glXJoinSwapGroupNV)0;
PFN::glXBindSwapBarrierNV glXBindSwapBarrierNV = (PFN::glXBindSwapBarrierNV)0;
PFN::glXQuerySwapGroupNV glXQuerySwapGroupNV = (PFN::glXQuerySwapGroupNV)0;
PFN::glXQueryMaxSwapGroupsNV glXQueryMaxSwapGroupsNV = (PFN::glXQueryMaxSwapGroupsNV)0;
PFN::glXQueryFrameCountNV glXQueryFrameCountNV = (PFN::glXQueryFrameCountNV)0;
PFN::glXResetFrameCountNV glXResetFrameCountNV = (PFN::glXResetFrameCountNV)0;
bool _GLX_NV_swap_group = false;
const bool& GLX_NV_swap_group = _GLX_NV_swap_group;

PFN::glXBindVideoCaptureDeviceNV glXBindVideoCaptureDeviceNV = (PFN::glXBindVideoCaptureDeviceNV)0;
PFN::glXEnumerateVideoCaptureDevicesNV glXEnumerateVideoCaptureDevicesNV = (PFN::glXEnumerateVideoCaptureDevicesNV)0;
PFN::glXLockVideoCaptureDeviceNV glXLockVideoCaptureDeviceNV = (PFN::glXLockVideoCaptureDeviceNV)0;
PFN::glXQueryVideoCaptureDeviceNV glXQueryVideoCaptureDeviceNV = (PFN::glXQueryVideoCaptureDeviceNV)0;
PFN::glXReleaseVideoCaptureDeviceNV glXReleaseVideoCaptureDeviceNV = (PFN::glXReleaseVideoCaptureDeviceNV)0;
bool _GLX_NV_video_capture = false;
const bool& GLX_NV_video_capture = _GLX_NV_video_capture;

PFN::glXGetVideoDeviceNV glXGetVideoDeviceNV = (PFN::glXGetVideoDeviceNV)0;
PFN::glXReleaseVideoDeviceNV glXReleaseVideoDeviceNV = (PFN::glXReleaseVideoDeviceNV)0;
PFN::glXBindVideoImageNV glXBindVideoImageNV = (PFN::glXBindVideoImageNV)0;
PFN::glXReleaseVideoImageNV glXReleaseVideoImageNV = (PFN::glXReleaseVideoImageNV)0;
PFN::glXSendPbufferToVideoNV glXSendPbufferToVideoNV = (PFN::glXSendPbufferToVideoNV)0;
PFN::glXGetVideoInfoNV glXGetVideoInfoNV = (PFN::glXGetVideoInfoNV)0;
bool _GLX_NV_video_out = false;
const bool& GLX_NV_video_out = _GLX_NV_video_out;

bool _GLX_OML_swap_method = false;
const bool& GLX_OML_swap_method = _GLX_OML_swap_method;

PFN::glXGetSyncValuesOML glXGetSyncValuesOML = (PFN::glXGetSyncValuesOML)0;
PFN::glXGetMscRateOML glXGetMscRateOML = (PFN::glXGetMscRateOML)0;
PFN::glXSwapBuffersMscOML glXSwapBuffersMscOML = (PFN::glXSwapBuffersMscOML)0;
PFN::glXWaitForMscOML glXWaitForMscOML = (PFN::glXWaitForMscOML)0;
PFN::glXWaitForSbcOML glXWaitForSbcOML = (PFN::glXWaitForSbcOML)0;
bool _GLX_OML_sync_control = false;
const bool& GLX_OML_sync_control = _GLX_OML_sync_control;

bool _GLX_SGIS_blended_overlay = false;
const bool& GLX_SGIS_blended_overlay = _GLX_SGIS_blended_overlay;

bool _GLX_SGIS_multisample = false;
const bool& GLX_SGIS_multisample = _GLX_SGIS_multisample;

bool _GLX_SGIS_shared_multisample = false;
const bool& GLX_SGIS_shared_multisample = _GLX_SGIS_shared_multisample;

#ifdef _DM_BUFFER_H_
PFN::glXAssociateDMPbufferSGIX glXAssociateDMPbufferSGIX = (PFN::glXAssociateDMPbufferSGIX)0;
#endif // _DM_BUFFER_H_
bool _GLX_SGIX_dmbuffer = false;
const bool& GLX_SGIX_dmbuffer = _GLX_SGIX_dmbuffer;

PFN::glXGetFBConfigAttribSGIX glXGetFBConfigAttribSGIX = (PFN::glXGetFBConfigAttribSGIX)0;
PFN::glXChooseFBConfigSGIX glXChooseFBConfigSGIX = (PFN::glXChooseFBConfigSGIX)0;
PFN::glXCreateGLXPixmapWithConfigSGIX glXCreateGLXPixmapWithConfigSGIX = (PFN::glXCreateGLXPixmapWithConfigSGIX)0;
PFN::glXCreateContextWithConfigSGIX glXCreateContextWithConfigSGIX = (PFN::glXCreateContextWithConfigSGIX)0;
PFN::glXGetVisualFromFBConfigSGIX glXGetVisualFromFBConfigSGIX = (PFN::glXGetVisualFromFBConfigSGIX)0;
PFN::glXGetFBConfigFromVisualSGIX glXGetFBConfigFromVisualSGIX = (PFN::glXGetFBConfigFromVisualSGIX)0;
bool _GLX_SGIX_fbconfig = false;
const bool& GLX_SGIX_fbconfig = _GLX_SGIX_fbconfig;

PFN::glXQueryHyperpipeNetworkSGIX glXQueryHyperpipeNetworkSGIX = (PFN::glXQueryHyperpipeNetworkSGIX)0;
PFN::glXHyperpipeConfigSGIX glXHyperpipeConfigSGIX = (PFN::glXHyperpipeConfigSGIX)0;
PFN::glXQueryHyperpipeConfigSGIX glXQueryHyperpipeConfigSGIX = (PFN::glXQueryHyperpipeConfigSGIX)0;
PFN::glXDestroyHyperpipeConfigSGIX glXDestroyHyperpipeConfigSGIX = (PFN::glXDestroyHyperpipeConfigSGIX)0;
PFN::glXBindHyperpipeSGIX glXBindHyperpipeSGIX = (PFN::glXBindHyperpipeSGIX)0;
PFN::glXQueryHyperpipeBestAttribSGIX glXQueryHyperpipeBestAttribSGIX = (PFN::glXQueryHyperpipeBestAttribSGIX)0;
PFN::glXHyperpipeAttribSGIX glXHyperpipeAttribSGIX = (PFN::glXHyperpipeAttribSGIX)0;
PFN::glXQueryHyperpipeAttribSGIX glXQueryHyperpipeAttribSGIX = (PFN::glXQueryHyperpipeAttribSGIX)0;
bool _GLX_SGIX_hyperpipe = false;
const bool& GLX_SGIX_hyperpipe = _GLX_SGIX_hyperpipe;

PFN::glXCreateGLXPbufferSGIX glXCreateGLXPbufferSGIX = (PFN::glXCreateGLXPbufferSGIX)0;
PFN::glXDestroyGLXPbufferSGIX glXDestroyGLXPbufferSGIX = (PFN::glXDestroyGLXPbufferSGIX)0;
PFN::glXQueryGLXPbufferSGIX glXQueryGLXPbufferSGIX = (PFN::glXQueryGLXPbufferSGIX)0;
PFN::glXSelectEventSGIX glXSelectEventSGIX = (PFN::glXSelectEventSGIX)0;
PFN::glXGetSelectedEventSGIX glXGetSelectedEventSGIX = (PFN::glXGetSelectedEventSGIX)0;
bool _GLX_SGIX_pbuffer = false;
const bool& GLX_SGIX_pbuffer = _GLX_SGIX_pbuffer;

PFN::glXBindSwapBarrierSGIX glXBindSwapBarrierSGIX = (PFN::glXBindSwapBarrierSGIX)0;
PFN::glXQueryMaxSwapBarriersSGIX glXQueryMaxSwapBarriersSGIX = (PFN::glXQueryMaxSwapBarriersSGIX)0;
bool _GLX_SGIX_swap_barrier = false;
const bool& GLX_SGIX_swap_barrier = _GLX_SGIX_swap_barrier;

PFN::glXBindChannelToWindowSGIX glXBindChannelToWindowSGIX = (PFN::glXBindChannelToWindowSGIX)0;
PFN::glXChannelRectSGIX glXChannelRectSGIX = (PFN::glXChannelRectSGIX)0;
PFN::glXQueryChannelRectSGIX glXQueryChannelRectSGIX = (PFN::glXQueryChannelRectSGIX)0;
PFN::glXQueryChannelDeltasSGIX glXQueryChannelDeltasSGIX = (PFN::glXQueryChannelDeltasSGIX)0;
PFN::glXChannelRectSyncSGIX glXChannelRectSyncSGIX = (PFN::glXChannelRectSyncSGIX)0;
bool _GLX_SGIX_video_resize = false;
const bool& GLX_SGIX_video_resize = _GLX_SGIX_video_resize;

#ifdef _VL_H
PFN::glXCreateGLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX = (PFN::glXCreateGLXVideoSourceSGIX)0;
PFN::glXDestroyGLXVideoSourceSGIX glXDestroyGLXVideoSourceSGIX = (PFN::glXDestroyGLXVideoSourceSGIX)0;
#endif
bool _GLX_SGIX_video_source = false;
const bool& GLX_SGIX_video_source = _GLX_SGIX_video_source;

bool _GLX_SGIX_visual_select_group = false;
const bool& GLX_SGIX_visual_select_group = _GLX_SGIX_visual_select_group;

PFN::glXCushionSGI glXCushionSGI = (PFN::glXCushionSGI)0;
bool _GLX_SGI_cushion = false;
const bool& GLX_SGI_cushion = _GLX_SGI_cushion;

PFN::glXMakeCurrentReadSGI glXMakeCurrentReadSGI = (PFN::glXMakeCurrentReadSGI)0;
PFN::glXGetCurrentReadDrawableSGI glXGetCurrentReadDrawableSGI = (PFN::glXGetCurrentReadDrawableSGI)0;
bool _GLX_SGI_make_current_read = false;
const bool& GLX_SGI_make_current_read = _GLX_SGI_make_current_read;

PFN::glXSwapIntervalSGI glXSwapIntervalSGI = (PFN::glXSwapIntervalSGI)0;
bool _GLX_SGI_swap_control = false;
const bool& GLX_SGI_swap_control = _GLX_SGI_swap_control;

PFN::glXGetVideoSyncSGI glXGetVideoSyncSGI = (PFN::glXGetVideoSyncSGI)0;
PFN::glXWaitVideoSyncSGI glXWaitVideoSyncSGI = (PFN::glXWaitVideoSyncSGI)0;
bool _GLX_SGI_video_sync = false;
const bool& GLX_SGI_video_sync = _GLX_SGI_video_sync;

PFN::glXGetTransparentIndexSUN glXGetTransparentIndexSUN = (PFN::glXGetTransparentIndexSUN)0;
bool _GLX_SUN_get_transparent_index = false;
const bool& GLX_SUN_get_transparent_index = _GLX_SUN_get_transparent_index;
}
}
}

extern "C" {
typedef void (*__GLXextFuncPtr)(void);
extern __GLXextFuncPtr glXGetProcAddressARB (const axl::glfl::GLubyte*);
extern void (*glXGetProcAddress(const axl::glfl::GLubyte* procname))( void );
}

void* _GetProcAddress(const char* proc_name)
{
	static void* (*getter_proc)(const axl::glfl::GLubyte* procname) = 0;
	if(!getter_proc)
	{
		if(::glXGetProcAddress) getter_proc = (void* (*)(const axl::glfl::GLubyte* procname))::glXGetProcAddress((const axl::glfl::GLubyte*)proc_name);
		else if(::glXGetProcAddressARB) getter_proc = (void* (*)(const axl::glfl::GLubyte* procname))::glXGetProcAddressARB((const axl::glfl::GLubyte*)proc_name);
		else return (void*)0;
	}
	return (void*)getter_proc((const axl::glfl::GLubyte*)proc_name);
}

namespace axl {
namespace glfl {
namespace GLX {

#define _LOAD(F) (!(F = (PFN::F)glXGetProcAddress((const GLubyte*)#F)) ? (F = (PFN::F)glXGetProcAddressARB((const GLubyte*)#F)) : (PFN::F)0)

bool load()
{
	static bool loaded = false;
	if(loaded) return true;
	if(!GLOBAL_DUMMY.isInitialized()) GLOBAL_DUMMY.init();
	if(!GLOBAL_DUMMY.isInitialized() || !GLOBAL_DUMMY.makeCurrent())
		return false;
	Display *display = glXGetCurrentDisplay();
	int version_major, version_minor;
	if(!display || False == glXQueryVersion(display, &version_major, &version_minor)) return false;
	if(!_GLX_ARB_get_proc_address)
	{
		glXGetProcAddressARB = (PFN::glXGetProcAddressARB)_GetProcAddress("glXGetProcAddressARB");
		_GLX_ARB_get_proc_address = 0 != glXGetProcAddressARB;
	}
	if(!_GLX_VERSION_1_4 && (version_major >= 1 && version_minor >= 4))
	{
		glXGetProcAddress = (PFN::glXGetProcAddress)_GetProcAddress("glXGetProcAddress");
		_GLX_VERSION_1_4 = 0 != glXGetProcAddress;
	}
	if(!glXGetProcAddressARB && !glXGetProcAddress) return false;

	if(!_GLX_VERSION_1_3 && (version_major >= 1 && version_minor >= 3))
	{
		_LOAD(glXGetFBConfigs);
		_LOAD(glXChooseFBConfig);
		_LOAD(glXGetFBConfigAttrib);
		_LOAD(glXGetVisualFromFBConfig);
		_LOAD(glXCreateWindow);
		_LOAD(glXDestroyWindow);
		_LOAD(glXCreatePixmap);
		_LOAD(glXDestroyPixmap);
		_LOAD(glXCreatePbuffer);
		_LOAD(glXDestroyPbuffer);
		_LOAD(glXQueryDrawable);
		_LOAD(glXCreateNewContext);
		_LOAD(glXMakeContextCurrent);
		_LOAD(glXGetCurrentReadDrawable);
		_LOAD(glXQueryContext);
		_LOAD(glXSelectEvent);
		_LOAD(glXGetSelectedEvent);
		_GLX_VERSION_1_3 = glXGetFBConfigs && glXChooseFBConfig && glXGetFBConfigAttrib && glXGetVisualFromFBConfig && glXCreateWindow && glXDestroyWindow && glXCreatePixmap && glXDestroyPixmap && glXCreatePbuffer && glXDestroyPbuffer && glXQueryDrawable && glXCreateNewContext && glXMakeContextCurrent && glXGetCurrentReadDrawable && glXQueryContext && glXSelectEvent && glXGetSelectedEvent;
	}
	GLint index = 0, last = 0;
	const char *cur_ext = (const char*)0, *ext = (const char*)0;
	ext = (const char*)glXQueryExtensionsString(display, 0);
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
		const size_t len = (index - last);
		if(c == ' ')
			last = ++index;
		switch(len)
		{
			case 15:
				if(!_GLX_SGI_cushion && strncmp(cur_ext, "GLX_SGI_cushion", 15) == 0)
				{
					_LOAD(glXCushionSGI);
					_GLX_SGI_cushion = true;
					continue;
				}
				break;
			case 16:
				if(!_GLX_NV_video_out && strncmp(cur_ext, "GLX_NV_video_out", 16) == 0)
				{
					_LOAD(glXGetVideoDeviceNV);
					_LOAD(glXReleaseVideoDeviceNV);
					_LOAD(glXBindVideoImageNV);
					_LOAD(glXReleaseVideoImageNV);
					_LOAD(glXSendPbufferToVideoNV);
					_LOAD(glXGetVideoInfoNV);
					_GLX_NV_video_out = true;
					continue;
				}
				else if(!_GLX_SGIX_pbuffer && strncmp(cur_ext, "GLX_SGIX_pbuffer", 16) == 0)
				{
					_LOAD(glXCreateGLXPbufferSGIX);
					_LOAD(glXDestroyGLXPbufferSGIX);
					_LOAD(glXQueryGLXPbufferSGIX);
					_LOAD(glXSelectEventSGIX);
					_LOAD(glXGetSelectedEventSGIX);
					_GLX_SGIX_pbuffer = true;
					continue;
				}
				else if(!_GLX_EXT_libglvnd && strncmp(cur_ext, "GLX_EXT_libglvnd", 16) == 0)
				{
					_GLX_EXT_libglvnd = true;
					continue;
				}
				break;
			case 17:
				if(!_GLX_NV_copy_image && strncmp(cur_ext, "GLX_NV_copy_image", 17) == 0)
				{
					_LOAD(glXCopyImageSubDataNV);
					_GLX_NV_copy_image = true;
					continue;
				}
				else if(!_GLX_NV_swap_group && strncmp(cur_ext, "GLX_NV_swap_group", 17) == 0)
				{
					_LOAD(glXJoinSwapGroupNV);
					_LOAD(glXBindSwapBarrierNV);
					_LOAD(glXQuerySwapGroupNV);
					_LOAD(glXQueryMaxSwapGroupsNV);
					_LOAD(glXQueryFrameCountNV);
					_LOAD(glXResetFrameCountNV);
					_GLX_NV_swap_group = true;
					continue;
				}
				else if(!_GLX_SGIX_fbconfig && strncmp(cur_ext, "GLX_SGIX_fbconfig", 17) == 0)
				{
					_LOAD(glXGetFBConfigAttribSGIX);
					_LOAD(glXChooseFBConfigSGIX);
					_LOAD(glXCreateGLXPixmapWithConfigSGIX);
					_LOAD(glXCreateContextWithConfigSGIX);
					_LOAD(glXGetVisualFromFBConfigSGIX);
					_LOAD(glXGetFBConfigFromVisualSGIX);
					_GLX_SGIX_fbconfig = true;
					continue;
				}
#ifdef _DM_BUFFER_H_
				else if(!_GLX_SGIX_dmbuffer && strncmp(cur_ext, "GLX_SGIX_dmbuffer", 17) == 0)
				{
					_LOAD(glXAssociateDMPbufferSGIX);
					_GLX_SGIX_dmbuffer = true;
					continue;
				}
#endif
				break;
			case 18:
				if(!_GLX_NV_copy_buffer && strncmp(cur_ext, "GLX_NV_copy_buffer", 18) == 0)
				{
					_LOAD(glXCopyBufferSubDataNV);
					_LOAD(glXNamedCopyBufferSubDataNV);
					_GLX_NV_copy_buffer = true;
					continue;
				}
				else if(!_GLX_SGIX_hyperpipe && strncmp(cur_ext, "GLX_SGIX_hyperpipe", 18) == 0)
				{
					_LOAD(glXQueryHyperpipeNetworkSGIX);
					_LOAD(glXHyperpipeConfigSGIX);
					_LOAD(glXQueryHyperpipeConfigSGIX);
					_LOAD(glXDestroyHyperpipeConfigSGIX);
					_LOAD(glXBindHyperpipeSGIX);
					_LOAD(glXQueryHyperpipeBestAttribSGIX);
					_LOAD(glXHyperpipeAttribSGIX);
					_LOAD(glXQueryHyperpipeAttribSGIX);
					_GLX_SGIX_hyperpipe = true;
					continue;
				}
				else if(!_GLX_SGI_video_sync && strncmp(cur_ext, "GLX_SGI_video_sync", 18) == 0)
				{
					_LOAD(glXGetVideoSyncSGI);
					_LOAD(glXWaitVideoSyncSGI);
					_GLX_SGI_video_sync = true;
					continue;
				}
				else if(!_GLX_EXT_buffer_age && strncmp(cur_ext, "GLX_EXT_buffer_age", 18) == 0)
				{
					_GLX_EXT_buffer_age = true;
					continue;
				}
				break;
			case 19:
				if(!_GLX_MESA_agp_offset && strncmp(cur_ext, "GLX_MESA_agp_offset", 19) == 0)
				{
					_LOAD(glXGetAGPOffsetMESA);
					_GLX_MESA_agp_offset = true;
					continue;
				}
				else if(!_GLX_ARB_multisample && strncmp(cur_ext, "GLX_ARB_multisample", 19) == 0)
				{
					_GLX_ARB_multisample = true;
					continue;
				}
				else if(!_GLX_EXT_stereo_tree && strncmp(cur_ext, "GLX_EXT_stereo_tree", 19) == 0)
				{
					_GLX_EXT_stereo_tree = true;
					continue;
				}
				else if(!_GLX_EXT_visual_info && strncmp(cur_ext, "GLX_EXT_visual_info", 19) == 0)
				{
					_GLX_EXT_visual_info = true;
					continue;
				}
				else if(!_GLX_NV_float_buffer && strncmp(cur_ext, "GLX_NV_float_buffer", 19) == 0)
				{
					_GLX_NV_float_buffer = true;
					continue;
				}
				else if(!_GLX_OML_swap_method && strncmp(cur_ext, "GLX_OML_swap_method", 19) == 0)
				{
					_GLX_OML_swap_method = true;
					continue;
				}
				break;
			case 20:
				if(!_GLX_EXT_swap_control && strncmp(cur_ext, "GLX_EXT_swap_control", 20) == 0)
				{
					_LOAD(glXSwapIntervalEXT);
					_GLX_EXT_swap_control = true;
					continue;
				}
				else if(!_GLX_NV_present_video && strncmp(cur_ext, "GLX_NV_present_video", 20) == 0)
				{
					_LOAD(glXEnumerateVideoDevicesNV);
					_LOAD(glXBindVideoDeviceNV);
					_GLX_NV_present_video = true;
					continue;
				}
				else if(!_GLX_NV_video_capture && strncmp(cur_ext, "GLX_NV_video_capture", 20) == 0)
				{
					_LOAD(glXBindVideoCaptureDeviceNV);
					_LOAD(glXEnumerateVideoCaptureDevicesNV);
					_LOAD(glXLockVideoCaptureDeviceNV);
					_LOAD(glXQueryVideoCaptureDeviceNV);
					_LOAD(glXReleaseVideoCaptureDeviceNV);
					_GLX_NV_video_capture = true;
					continue;
				}
				else if(!_GLX_OML_sync_control && strncmp(cur_ext, "GLX_OML_sync_control", 20) == 0)
				{
					_LOAD(glXGetSyncValuesOML);
					_LOAD(glXGetMscRateOML);
					_LOAD(glXSwapBuffersMscOML);
					_LOAD(glXWaitForMscOML);
					_LOAD(glXWaitForSbcOML);
					_GLX_OML_sync_control = true;
					continue;
				}
				else if(!_GLX_SGI_swap_control && strncmp(cur_ext, "GLX_SGI_swap_control", 20) == 0)
				{
					_LOAD(glXSwapIntervalSGI);
					_GLX_SGI_swap_control = true;
					continue;
				}
				else if(!_GLX_3DFX_multisample && strncmp(cur_ext, "GLX_3DFX_multisample", 20) == 0)
				{
					_GLX_3DFX_multisample = true;
					continue;
				}
				else if(!_GLX_INTEL_swap_event && strncmp(cur_ext, "GLX_INTEL_swap_event", 20) == 0)
				{
					_GLX_INTEL_swap_event = true;
					continue;
				}
				else if(!_GLX_SGIS_multisample && strncmp(cur_ext, "GLX_SGIS_multisample", 20) == 0)
				{
					_GLX_SGIS_multisample = true;
					continue;
				}
				break;
			case 21:
				if(!_GLX_SGIX_swap_barrier && strncmp(cur_ext, "GLX_SGIX_swap_barrier", 21) == 0)
				{
					_LOAD(glXBindSwapBarrierSGIX);
					_LOAD(glXQueryMaxSwapBarriersSGIX);
					_GLX_SGIX_swap_barrier = true;
					continue;
				}
				else if(!_GLX_SGIX_video_resize && strncmp(cur_ext, "GLX_SGIX_video_resize", 21) == 0)
				{
					_LOAD(glXBindChannelToWindowSGIX);
					_LOAD(glXChannelRectSGIX);
					_LOAD(glXQueryChannelRectSGIX);
					_LOAD(glXQueryChannelDeltasSGIX);
					_LOAD(glXChannelRectSyncSGIX);
					_GLX_SGIX_video_resize = true;
					continue;
				}
				else if(!_GLX_MESA_swap_control && strncmp(cur_ext, "GLX_MESA_swap_control", 21) == 0)
				{
					_LOAD(glXGetSwapIntervalMESA);
					_LOAD(glXSwapIntervalMESA);
					_GLX_MESA_swap_control = true;
					continue;
				}
				else if(!_GLX_EXT_visual_rating && strncmp(cur_ext, "GLX_EXT_visual_rating", 21) == 0)
				{
					_GLX_EXT_visual_rating = true;
					continue;
				}
#ifdef _VL_H
				else if(!_GLX_SGIX_video_source && strncmp(cur_ext, "GLX_SGIX_video_source", 21) == 0)
				{
					_LOAD(glXCreateGLXVideoSourceSGIX);
					_LOAD(glXDestroyGLXVideoSourceSGIX);
					_GLX_SGIX_video_source = true;
					continue;
				}
#endif
				break;
			case 22:
				if(!_GLX_ARB_create_context && strncmp(cur_ext, "GLX_ARB_create_context", 22) == 0)
				{
					_LOAD(glXCreateContextAttribsARB);
					_GLX_ARB_create_context = true;
					continue;
				}
				else if(!_GLX_EXT_import_context && strncmp(cur_ext, "GLX_EXT_import_context", 22) == 0)
				{
					_LOAD(glXGetCurrentDisplayEXT);
					_LOAD(glXQueryContextInfoEXT);
					_LOAD(glXGetContextIDEXT);
					_LOAD(glXImportContextEXT);
					_LOAD(glXFreeContextEXT);
					_GLX_EXT_import_context = true;
					continue;
				}
				else if(!_GLX_MESA_set_3dfx_mode && strncmp(cur_ext, "GLX_MESA_set_3dfx_mode", 22) == 0)
				{
					_LOAD(glXSet3DfxModeMESA);
					_GLX_MESA_set_3dfx_mode = true;
					continue;
				}
				else if(!_GLX_ARB_fbconfig_float && strncmp(cur_ext, "GLX_ARB_fbconfig_float", 22) == 0)
				{
					_GLX_ARB_fbconfig_float = true;
					continue;
				}
				break;
			case 23:
				if(!_GLX_AMD_gpu_association && strncmp(cur_ext, "GLX_AMD_gpu_association", 23) == 0)
				{
					_LOAD(glXGetGPUIDsAMD);
					_LOAD(glXGetGPUInfoAMD);
					_LOAD(glXGetContextGPUIDAMD);
					_LOAD(glXCreateAssociatedContextAMD);
					_LOAD(glXCreateAssociatedContextAttribsAMD);
					_LOAD(glXDeleteAssociatedContextAMD);
					_LOAD(glXMakeAssociatedContextCurrentAMD);
					_LOAD(glXGetCurrentAssociatedContextAMD);
					_LOAD(glXBlitContextFramebufferAMD);
					_GLX_AMD_gpu_association = true;
					continue;
				}
				else if(!_GLX_MESA_query_renderer && strncmp(cur_ext, "GLX_MESA_query_renderer", 23) == 0)
				{
					_LOAD(glXQueryCurrentRendererIntegerMESA);
					_LOAD(glXQueryCurrentRendererStringMESA);
					_LOAD(glXQueryRendererIntegerMESA);
					_LOAD(glXQueryRendererStringMESA);
					_GLX_MESA_query_renderer = true;
					continue;
				}
				else if(!_GLX_NV_multigpu_context && strncmp(cur_ext, "GLX_NV_multigpu_context", 23) == 0)
				{
					_GLX_NV_multigpu_context = true;
					continue;
				}
				break;
			case 24: 
				if(!_GLX_MESA_release_buffers && strncmp(cur_ext, "GLX_MESA_release_buffers", 24) == 0)
				{
					_LOAD(glXReleaseBuffersMESA);
					_GLX_MESA_release_buffers = true;
					continue;
				}
				else if(!_GLX_NV_delay_before_swap && strncmp(cur_ext, "GLX_NV_delay_before_swap", 24) == 0)
				{
					_LOAD(glXDelayBeforeSwapNV);
					_GLX_NV_delay_before_swap = true;
					continue;
				}
				else if(!_GLX_MESA_copy_sub_buffer && strncmp(cur_ext, "GLX_MESA_copy_sub_buffer", 24) == 0)
				{
					_LOAD(glXCopySubBufferMESA);
					_GLX_MESA_copy_sub_buffer = true;
					continue;
				}
				else if(!_GLX_MESA_pixmap_colormap && strncmp(cur_ext, "GLX_MESA_pixmap_colormap", 24) == 0)
				{
					_LOAD(glXCreateGLXPixmapMESA);
					_GLX_MESA_pixmap_colormap = true;
					continue;
				}
				else if(!_GLX_ARB_framebuffer_sRGB && strncmp(cur_ext, "GLX_ARB_framebuffer_sRGB", 24) == 0)
				{
					_GLX_ARB_framebuffer_sRGB = true;
					continue;
				}
				else if(!_GLX_EXT_context_priority && strncmp(cur_ext, "GLX_EXT_context_priority", 24) == 0)
				{
					_GLX_EXT_context_priority = true;
					continue;
				}
				else if(!_GLX_EXT_framebuffer_sRGB && strncmp(cur_ext, "GLX_EXT_framebuffer_sRGB", 24) == 0)
				{
					_GLX_EXT_framebuffer_sRGB = true;
					continue;
				}
				else if(!_GLX_SGIS_blended_overlay && strncmp(cur_ext, "GLX_SGIS_blended_overlay", 24) == 0)
				{
					_GLX_SGIS_blended_overlay = true;
					continue;
				}
				break;
			case 25:
				if(!_GLX_SGI_make_current_read && strncmp(cur_ext, "GLX_SGI_make_current_read", 25) == 0)
				{
					_LOAD(glXMakeCurrentReadSGI);
					_LOAD(glXGetCurrentReadDrawableSGI);
					_GLX_SGI_make_current_read = true;
					continue;
				}
				else if(!_GLX_EXT_get_drawable_type && strncmp(cur_ext, "GLX_EXT_get_drawable_type", 25) == 0)
				{
					_GLX_EXT_get_drawable_type = true;
					continue;
				}
				else if(!_GLX_EXT_no_config_context && strncmp(cur_ext, "GLX_EXT_no_config_context", 25) == 0)
				{
					_GLX_EXT_no_config_context = true;
					continue;
				}
				else if(!_GLX_EXT_swap_control_tear && strncmp(cur_ext, "GLX_EXT_swap_control_tear", 25) == 0)
				{
					_GLX_EXT_swap_control_tear = true;
					continue;
				}
				break;
			case 27:
				if(!_GLX_EXT_texture_from_pixmap && strncmp(cur_ext, "GLX_EXT_texture_from_pixmap", 27) == 0)
				{
					_LOAD(glXBindTexImageEXT);
					_LOAD(glXReleaseTexImageEXT);
					_GLX_EXT_texture_from_pixmap = true;
					continue;
				}
				else if(!_GLX_NV_multisample_coverage && strncmp(cur_ext, "GLX_NV_multisample_coverage", 27) == 0)
				{
					_GLX_NV_multisample_coverage = true;
					continue;
				}
				else if(!_GLX_SGIS_shared_multisample && strncmp(cur_ext, "GLX_SGIS_shared_multisample", 27) == 0)
				{
					_GLX_SGIS_shared_multisample = true;
					continue;
				}
				break;
			case 29: 
				if(!_GLX_SUN_get_transparent_index && strncmp(cur_ext, "GLX_SUN_get_transparent_index", 29) == 0)
				{
					_LOAD(glXGetTransparentIndexSUN);
					_GLX_SUN_get_transparent_index = true;
					continue;
				}
				else if(!_GLX_EXT_fbconfig_packed_float && strncmp(cur_ext, "GLX_EXT_fbconfig_packed_float", 29) == 0)
				{
					_GLX_EXT_fbconfig_packed_float = true;
					continue;
				}
				break;
			case 28:
				if(!_GLX_ARB_vertex_buffer_object && strncmp(cur_ext, "GLX_ARB_vertex_buffer_object", 28) == 0)
				{
					_GLX_ARB_vertex_buffer_object = true;
					continue;
				}
				else if(!_GLX_SGIX_visual_select_group && strncmp(cur_ext, "GLX_SGIX_visual_select_group", 28) == 0)
				{
					_GLX_SGIX_visual_select_group = true;
					continue;
				}
				break;
			case 30:
				if(!_GLX_ARB_create_context_profile && strncmp(cur_ext, "GLX_ARB_create_context_profile", 30) == 0)
				{
					_GLX_ARB_create_context_profile = true;
					continue;
				}
				break;
			case 31:
				if(!_GLX_ARB_create_context_no_error && strncmp(cur_ext, "GLX_ARB_create_context_no_error", 31) == 0)
				{
					_GLX_ARB_create_context_no_error = true;
					continue;
				}
				break;
			case 33:
				if(!_GLX_ARB_create_context_robustness && strncmp(cur_ext, "GLX_ARB_create_context_robustness", 33) == 0)
				{
					_GLX_ARB_create_context_robustness = true;
					continue;
				}
				else if(!_GLX_EXT_create_context_es_profile && strncmp(cur_ext, "GLX_EXT_create_context_es_profile", 33) == 0)
				{
					_GLX_EXT_create_context_es_profile = true;
					continue;
				}
				break;
			case 34:
				if(!_GLX_EXT_create_context_es2_profile && strncmp(cur_ext, "GLX_EXT_create_context_es2_profile", 34) == 0)
				{
					_GLX_EXT_create_context_es2_profile = true;
					continue;
				}
				break;
			case 36:
				if(!_GLX_NV_robustness_video_memory_purge && strncmp(cur_ext, "GLX_NV_robustness_video_memory_purge", 36) == 0)
				{
					_GLX_NV_robustness_video_memory_purge = true;
					continue;
				}
				break;
			case 40:
				if(!_GLX_ARB_robustness_application_isolation && strncmp(cur_ext, "GLX_ARB_robustness_application_isolation", 40) == 0)
				{
					_GLX_ARB_robustness_application_isolation = true;
					continue;
				}
				else if(!_GLX_ARB_robustness_share_group_isolation && strncmp(cur_ext, "GLX_ARB_robustness_share_group_isolation", 40) == 0)
				{
					_GLX_ARB_robustness_share_group_isolation = true;
					continue;
				}
				break;
		}
	}
	loaded = true;
	return true;   
}

bool checkExtension(const char* extension_name)
{
	using namespace axl::glfl;
	if(!GLX::glXQueryExtensionsString || !GLX::glXGetCurrentDisplay) return false;
	Display* display = GLX::glXGetCurrentDisplay();
	if(!display) return false;
	GLint index = 0, last = 0;
	const char *cur_ext = (const char*)0, *ext = (const char*)0;
	ext = (const char*)GLX::glXQueryExtensionsString(display, 0);
	if(!ext) return false;
	const size_t ext_len = strlen(extension_name);
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
		const size_t len = index - last;
		if(c == ' ')
			last = ++index;
		if(len == ext_len && strncmp(cur_ext, extension_name, ext_len) == 0)
			return true;
	}
	return false;
}

} // axl::glfl::GLX
} // axl::glfl
} // axl
