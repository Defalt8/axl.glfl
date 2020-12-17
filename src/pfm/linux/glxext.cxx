#include <axl.glfl/linux/glxext.hpp>

#define _DEF(F) PFN::F F = (PFN::F)0

namespace axl {
namespace glfl {
namespace GLX {

_DEF(glXGetFBConfigs);
_DEF(glXChooseFBConfig);
_DEF(glXGetFBConfigAttrib);
_DEF(glXGetVisualFromFBConfig);
_DEF(glXCreateWindow);
_DEF(glXDestroyWindow);
_DEF(glXCreatePixmap);
_DEF(glXDestroyPixmap);
_DEF(glXCreatePbuffer);
_DEF(glXDestroyPbuffer);
_DEF(glXQueryDrawable);
_DEF(glXCreateNewContext);
_DEF(glXMakeContextCurrent);
_DEF(glXGetCurrentReadDrawable);
_DEF(glXQueryContext);
_DEF(glXSelectEvent);
_DEF(glXGetSelectedEvent);
bool _GLX_VERSION_1_3 = false;
const bool& GLX_VERSION_1_3 = _GLX_VERSION_1_3;

_DEF(glXGetProcAddress);
bool _GLX_VERSION_1_4 = false;
const bool& GLX_VERSION_1_4 = _GLX_VERSION_1_4;

_DEF(glXCreateContextAttribsARB);
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

_DEF(glXGetProcAddressARB);
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

_DEF(glXGetGPUIDsAMD);
_DEF(glXGetGPUInfoAMD);
_DEF(glXGetContextGPUIDAMD);
_DEF(glXCreateAssociatedContextAMD);
_DEF(glXCreateAssociatedContextAttribsAMD);
_DEF(glXDeleteAssociatedContextAMD);
_DEF(glXMakeAssociatedContextCurrentAMD);
_DEF(glXGetCurrentAssociatedContextAMD);
_DEF(glXBlitContextFramebufferAMD);
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

_DEF(glXGetCurrentDisplayEXT);
_DEF(glXQueryContextInfoEXT);
_DEF(glXGetContextIDEXT);
_DEF(glXImportContextEXT);
_DEF(glXFreeContextEXT);
bool _GLX_EXT_import_context = false;
const bool& GLX_EXT_import_context = _GLX_EXT_import_context;

bool _GLX_EXT_libglvnd = false;
const bool& GLX_EXT_libglvnd = _GLX_EXT_libglvnd;

bool _GLX_EXT_no_config_context = false;
const bool& GLX_EXT_no_config_context = _GLX_EXT_no_config_context;

bool _GLX_EXT_stereo_tree = false;
const bool& GLX_EXT_stereo_tree = _GLX_EXT_stereo_tree;

_DEF(glXSwapIntervalEXT);
bool _GLX_EXT_swap_control = false;
const bool& GLX_EXT_swap_control = _GLX_EXT_swap_control;

bool _GLX_EXT_swap_control_tear = false;
const bool& GLX_EXT_swap_control_tear = _GLX_EXT_swap_control_tear;

_DEF(glXBindTexImageEXT);
_DEF(glXReleaseTexImageEXT);
bool _GLX_EXT_texture_from_pixmap = false;
const bool& GLX_EXT_texture_from_pixmap = _GLX_EXT_texture_from_pixmap;

bool _GLX_EXT_visual_info = false;
const bool& GLX_EXT_visual_info = _GLX_EXT_visual_info;

bool _GLX_EXT_visual_rating = false;
const bool& GLX_EXT_visual_rating = _GLX_EXT_visual_rating;

bool _GLX_INTEL_swap_event = false;
const bool& GLX_INTEL_swap_event = _GLX_INTEL_swap_event;

_DEF(glXGetAGPOffsetMESA);
bool _GLX_MESA_agp_offset = false;
const bool& GLX_MESA_agp_offset = _GLX_MESA_agp_offset;

_DEF(glXCopySubBufferMESA);
bool _GLX_MESA_copy_sub_buffer = false;
const bool& GLX_MESA_copy_sub_buffer = _GLX_MESA_copy_sub_buffer;

_DEF(glXCreateGLXPixmapMESA);
bool _GLX_MESA_pixmap_colormap = false;
const bool& GLX_MESA_pixmap_colormap = _GLX_MESA_pixmap_colormap;

_DEF(glXQueryCurrentRendererIntegerMESA);
_DEF(glXQueryCurrentRendererStringMESA);
_DEF(glXQueryRendererIntegerMESA);
_DEF(glXQueryRendererStringMESA);
bool _GLX_MESA_query_renderer = false;
const bool& GLX_MESA_query_renderer = _GLX_MESA_query_renderer;

_DEF(glXReleaseBuffersMESA);
bool _GLX_MESA_release_buffers = false;
const bool& GLX_MESA_release_buffers = _GLX_MESA_release_buffers;

_DEF(glXSet3DfxModeMESA);
bool _GLX_MESA_set_3dfx_mode = false;
const bool& GLX_MESA_set_3dfx_mode = _GLX_MESA_set_3dfx_mode;

_DEF(glXGetSwapIntervalMESA);
_DEF(glXSwapIntervalMESA);
bool _GLX_MESA_swap_control = false;
const bool& GLX_MESA_swap_control = _GLX_MESA_swap_control;

_DEF(glXCopyBufferSubDataNV);
_DEF(glXNamedCopyBufferSubDataNV);
bool _GLX_NV_copy_buffer = false;
const bool& GLX_NV_copy_buffer = _GLX_NV_copy_buffer;

_DEF(glXCopyImageSubDataNV);
bool _GLX_NV_copy_image = false;
const bool& GLX_NV_copy_image = _GLX_NV_copy_image;

_DEF(glXDelayBeforeSwapNV);
bool _GLX_NV_delay_before_swap = false;
const bool& GLX_NV_delay_before_swap = _GLX_NV_delay_before_swap;

bool _GLX_NV_float_buffer = false;
const bool& GLX_NV_float_buffer = _GLX_NV_float_buffer;

bool _GLX_NV_multigpu_context = false;
const bool& GLX_NV_multigpu_context = _GLX_NV_multigpu_context;

bool _GLX_NV_multisample_coverage = false;
const bool& GLX_NV_multisample_coverage = _GLX_NV_multisample_coverage;

_DEF(glXEnumerateVideoDevicesNV);
_DEF(glXBindVideoDeviceNV);
bool _GLX_NV_present_video = false;
const bool& GLX_NV_present_video = _GLX_NV_present_video;

bool _GLX_NV_robustness_video_memory_purge = false;
const bool& GLX_NV_robustness_video_memory_purge = _GLX_NV_robustness_video_memory_purge;

_DEF(glXJoinSwapGroupNV);
_DEF(glXBindSwapBarrierNV);
_DEF(glXQuerySwapGroupNV);
_DEF(glXQueryMaxSwapGroupsNV);
_DEF(glXQueryFrameCountNV);
_DEF(glXResetFrameCountNV);
bool _GLX_NV_swap_group = false;
const bool& GLX_NV_swap_group = _GLX_NV_swap_group;

_DEF(glXBindVideoCaptureDeviceNV);
_DEF(glXEnumerateVideoCaptureDevicesNV);
_DEF(glXLockVideoCaptureDeviceNV);
_DEF(glXQueryVideoCaptureDeviceNV);
_DEF(glXReleaseVideoCaptureDeviceNV);
bool _GLX_NV_video_capture = false;
const bool& GLX_NV_video_capture = _GLX_NV_video_capture;

_DEF(glXGetVideoDeviceNV);
_DEF(glXReleaseVideoDeviceNV);
_DEF(glXBindVideoImageNV);
_DEF(glXReleaseVideoImageNV);
_DEF(glXSendPbufferToVideoNV);
_DEF(glXGetVideoInfoNV);
bool _GLX_NV_video_out = false;
const bool& GLX_NV_video_out = _GLX_NV_video_out;

bool _GLX_OML_swap_method = false;
const bool& GLX_OML_swap_method = _GLX_OML_swap_method;

_DEF(glXGetSyncValuesOML);
_DEF(glXGetMscRateOML);
_DEF(glXSwapBuffersMscOML);
_DEF(glXWaitForMscOML);
_DEF(glXWaitForSbcOML);
bool _GLX_OML_sync_control = false;
const bool& GLX_OML_sync_control = _GLX_OML_sync_control;

bool _GLX_SGIS_blended_overlay = false;
const bool& GLX_SGIS_blended_overlay = _GLX_SGIS_blended_overlay;

bool _GLX_SGIS_multisample = false;
const bool& GLX_SGIS_multisample = _GLX_SGIS_multisample;

bool _GLX_SGIS_shared_multisample = false;
const bool& GLX_SGIS_shared_multisample = _GLX_SGIS_shared_multisample;

#ifdef _DM_BUFFER_H_
_DEF(glXAssociateDMPbufferSGIX);
#endif // _DM_BUFFER_H_
bool _GLX_SGIX_dmbuffer = false;
const bool& GLX_SGIX_dmbuffer = _GLX_SGIX_dmbuffer;

_DEF(glXGetFBConfigAttribSGIX);
_DEF(glXChooseFBConfigSGIX);
_DEF(glXCreateGLXPixmapWithConfigSGIX);
_DEF(glXCreateContextWithConfigSGIX);
_DEF(glXGetVisualFromFBConfigSGIX);
_DEF(glXGetFBConfigFromVisualSGIX);
bool _GLX_SGIX_fbconfig = false;
const bool& GLX_SGIX_fbconfig = _GLX_SGIX_fbconfig;

_DEF(glXQueryHyperpipeNetworkSGIX);
_DEF(glXHyperpipeConfigSGIX);
_DEF(glXQueryHyperpipeConfigSGIX);
_DEF(glXDestroyHyperpipeConfigSGIX);
_DEF(glXBindHyperpipeSGIX);
_DEF(glXQueryHyperpipeBestAttribSGIX);
_DEF(glXHyperpipeAttribSGIX);
_DEF(glXQueryHyperpipeAttribSGIX);
bool _GLX_SGIX_hyperpipe = false;
const bool& GLX_SGIX_hyperpipe = _GLX_SGIX_hyperpipe;

_DEF(glXCreateGLXPbufferSGIX);
_DEF(glXDestroyGLXPbufferSGIX);
_DEF(glXQueryGLXPbufferSGIX);
_DEF(glXSelectEventSGIX);
_DEF(glXGetSelectedEventSGIX);
bool _GLX_SGIX_pbuffer = false;
const bool& GLX_SGIX_pbuffer = _GLX_SGIX_pbuffer;

_DEF(glXBindSwapBarrierSGIX);
_DEF(glXQueryMaxSwapBarriersSGIX);
bool _GLX_SGIX_swap_barrier = false;
const bool& GLX_SGIX_swap_barrier = _GLX_SGIX_swap_barrier;

_DEF(glXBindChannelToWindowSGIX);
_DEF(glXChannelRectSGIX);
_DEF(glXQueryChannelRectSGIX);
_DEF(glXQueryChannelDeltasSGIX);
_DEF(glXChannelRectSyncSGIX);
bool _GLX_SGIX_video_resize = false;
const bool& GLX_SGIX_video_resize = _GLX_SGIX_video_resize;

#ifdef _VL_H
_DEF(glXCreateGLXVideoSourceSGIX);
_DEF(glXDestroyGLXVideoSourceSGIX);
#endif
bool _GLX_SGIX_video_source = false;
const bool& GLX_SGIX_video_source = _GLX_SGIX_video_source;

bool _GLX_SGIX_visual_select_group = false;
const bool& GLX_SGIX_visual_select_group = _GLX_SGIX_visual_select_group;

_DEF(glXCushionSGI);
bool _GLX_SGI_cushion = false;
const bool& GLX_SGI_cushion = _GLX_SGI_cushion;

_DEF(glXMakeCurrentReadSGI);
_DEF(glXGetCurrentReadDrawableSGI);
bool _GLX_SGI_make_current_read = false;
const bool& GLX_SGI_make_current_read = _GLX_SGI_make_current_read;

_DEF(glXSwapIntervalSGI);
bool _GLX_SGI_swap_control = false;
const bool& GLX_SGI_swap_control = _GLX_SGI_swap_control;

_DEF(glXGetVideoSyncSGI);
_DEF(glXWaitVideoSyncSGI);
bool _GLX_SGI_video_sync = false;
const bool& GLX_SGI_video_sync = _GLX_SGI_video_sync;

_DEF(glXGetTransparentIndexSUN);
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
		if(::glXGetProcAddressARB) getter_proc = (void* (*)(const axl::glfl::GLubyte* procname))::glXGetProcAddressARB((const axl::glfl::GLubyte*)proc_name);
		else if(::glXGetProcAddress) getter_proc = (void* (*)(const axl::glfl::GLubyte* procname))::glXGetProcAddress((const axl::glfl::GLubyte*)proc_name);
        else return (void*)0;
    }
	return (void*)getter_proc((const axl::glfl::GLubyte*)proc_name);
}

namespace axl {
namespace glfl {
namespace GLX {

#define _LOAD(F) F = (PFN::F)_GetProcAddress(#F)

bool loadExtensions();

bool load()
{
    static bool loaded = false;
    if(loaded) return true;
	_LOAD(glXGetProcAddressARB);
	_GLX_ARB_get_proc_address = 0 != glXGetProcAddressARB;
	_LOAD(glXGetProcAddress);
	_GLX_VERSION_1_4 = 0 != glXGetProcAddress;
	if(!glXGetProcAddressARB && !glXGetProcAddress) return false;

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

	_LOAD(glXCreateContextAttribsARB);
	_GLX_ARB_create_context = 0 != glXCreateContextAttribsARB;

	_LOAD(glXGetGPUIDsAMD);
	_LOAD(glXGetGPUInfoAMD);
	_LOAD(glXGetContextGPUIDAMD);
	_LOAD(glXCreateAssociatedContextAMD);
	_LOAD(glXCreateAssociatedContextAttribsAMD);
	_LOAD(glXDeleteAssociatedContextAMD);
	_LOAD(glXMakeAssociatedContextCurrentAMD);
	_LOAD(glXGetCurrentAssociatedContextAMD);
	_LOAD(glXBlitContextFramebufferAMD);
	_GLX_AMD_gpu_association = glXGetGPUIDsAMD && glXGetGPUInfoAMD && glXGetContextGPUIDAMD && glXCreateAssociatedContextAMD && glXCreateAssociatedContextAttribsAMD && glXDeleteAssociatedContextAMD && glXMakeAssociatedContextCurrentAMD && glXGetCurrentAssociatedContextAMD && glXBlitContextFramebufferAMD;

	_LOAD(glXGetCurrentDisplayEXT);
	_LOAD(glXQueryContextInfoEXT);
	_LOAD(glXGetContextIDEXT);
	_LOAD(glXImportContextEXT);
	_LOAD(glXFreeContextEXT);
	_GLX_EXT_import_context = glXGetCurrentDisplayEXT && glXQueryContextInfoEXT && glXGetContextIDEXT && glXImportContextEXT && glXFreeContextEXT;

	_LOAD(glXSwapIntervalEXT);
	_GLX_EXT_swap_control = 0 != glXSwapIntervalEXT;

	_LOAD(glXBindTexImageEXT);
	_LOAD(glXReleaseTexImageEXT);
	_GLX_EXT_texture_from_pixmap = glXBindTexImageEXT && glXReleaseTexImageEXT;

	_LOAD(glXGetAGPOffsetMESA);
	_GLX_MESA_agp_offset = 0 != glXGetAGPOffsetMESA;

	_LOAD(glXCopySubBufferMESA);
	_GLX_MESA_copy_sub_buffer = 0 != glXCopySubBufferMESA;

	_LOAD(glXCreateGLXPixmapMESA);
	_GLX_MESA_pixmap_colormap = 0 != glXCreateGLXPixmapMESA;

	_LOAD(glXQueryCurrentRendererIntegerMESA);
	_LOAD(glXQueryCurrentRendererStringMESA);
	_LOAD(glXQueryRendererIntegerMESA);
	_LOAD(glXQueryRendererStringMESA);
	_GLX_MESA_query_renderer = glXQueryCurrentRendererIntegerMESA && glXQueryCurrentRendererStringMESA && glXQueryRendererIntegerMESA && glXQueryRendererStringMESA;

	_LOAD(glXReleaseBuffersMESA);
	_GLX_MESA_release_buffers = 0 != glXReleaseBuffersMESA;

	_LOAD(glXSet3DfxModeMESA);
	_GLX_MESA_set_3dfx_mode = 0 != glXSet3DfxModeMESA;

	_LOAD(glXGetSwapIntervalMESA);
	_LOAD(glXSwapIntervalMESA);
	_GLX_MESA_swap_control = glXGetSwapIntervalMESA && glXSwapIntervalMESA;

	_LOAD(glXCopyBufferSubDataNV);
	_LOAD(glXNamedCopyBufferSubDataNV);
	_GLX_NV_copy_buffer = glXCopyBufferSubDataNV && glXNamedCopyBufferSubDataNV;

	_LOAD(glXCopyImageSubDataNV);
	_GLX_NV_copy_image = 0 != glXCopyImageSubDataNV;

	_LOAD(glXDelayBeforeSwapNV);
	_GLX_NV_delay_before_swap = 0 != glXDelayBeforeSwapNV;

	_LOAD(glXEnumerateVideoDevicesNV);
	_LOAD(glXBindVideoDeviceNV);
	_GLX_NV_present_video = glXEnumerateVideoDevicesNV && glXBindVideoDeviceNV;

	_LOAD(glXJoinSwapGroupNV);
	_LOAD(glXBindSwapBarrierNV);
	_LOAD(glXQuerySwapGroupNV);
	_LOAD(glXQueryMaxSwapGroupsNV);
	_LOAD(glXQueryFrameCountNV);
	_LOAD(glXResetFrameCountNV);
	_GLX_NV_swap_group = glXJoinSwapGroupNV && glXBindSwapBarrierNV && glXQuerySwapGroupNV && glXQueryMaxSwapGroupsNV && glXQueryFrameCountNV && glXResetFrameCountNV;

	_LOAD(glXBindVideoCaptureDeviceNV);
	_LOAD(glXEnumerateVideoCaptureDevicesNV);
	_LOAD(glXLockVideoCaptureDeviceNV);
	_LOAD(glXQueryVideoCaptureDeviceNV);
	_LOAD(glXReleaseVideoCaptureDeviceNV);
	_GLX_NV_video_capture = glXBindVideoCaptureDeviceNV && glXEnumerateVideoCaptureDevicesNV && glXLockVideoCaptureDeviceNV && glXQueryVideoCaptureDeviceNV && glXReleaseVideoCaptureDeviceNV;

	_LOAD(glXGetVideoDeviceNV);
	_LOAD(glXReleaseVideoDeviceNV);
	_LOAD(glXBindVideoImageNV);
	_LOAD(glXReleaseVideoImageNV);
	_LOAD(glXSendPbufferToVideoNV);
	_LOAD(glXGetVideoInfoNV);
	_GLX_NV_video_out = glXGetVideoDeviceNV && glXReleaseVideoDeviceNV && glXBindVideoImageNV && glXReleaseVideoImageNV && glXSendPbufferToVideoNV && glXGetVideoInfoNV;

	_LOAD(glXGetSyncValuesOML);
	_LOAD(glXGetMscRateOML);
	_LOAD(glXSwapBuffersMscOML);
	_LOAD(glXWaitForMscOML);
	_LOAD(glXWaitForSbcOML);
	_GLX_OML_sync_control = glXGetSyncValuesOML && glXGetMscRateOML && glXSwapBuffersMscOML && glXWaitForMscOML && glXWaitForSbcOML;

	#ifdef _DM_BUFFER_H_
	_LOAD(glXAssociateDMPbufferSGIX);
	_GLX_SGIX_dmbuffer = 0 != glXAssociateDMPbufferSGIX;
	#endif // _DM_BUFFER_H_

	_LOAD(glXGetFBConfigAttribSGIX);
	_LOAD(glXChooseFBConfigSGIX);
	_LOAD(glXCreateGLXPixmapWithConfigSGIX);
	_LOAD(glXCreateContextWithConfigSGIX);
	_LOAD(glXGetVisualFromFBConfigSGIX);
	_LOAD(glXGetFBConfigFromVisualSGIX);
	_GLX_SGIX_fbconfig = glXGetFBConfigAttribSGIX && glXChooseFBConfigSGIX && glXCreateGLXPixmapWithConfigSGIX && glXCreateContextWithConfigSGIX && glXGetVisualFromFBConfigSGIX && glXGetFBConfigFromVisualSGIX;

	_LOAD(glXQueryHyperpipeNetworkSGIX);
	_LOAD(glXHyperpipeConfigSGIX);
	_LOAD(glXQueryHyperpipeConfigSGIX);
	_LOAD(glXDestroyHyperpipeConfigSGIX);
	_LOAD(glXBindHyperpipeSGIX);
	_LOAD(glXQueryHyperpipeBestAttribSGIX);
	_LOAD(glXHyperpipeAttribSGIX);
	_LOAD(glXQueryHyperpipeAttribSGIX);
	_GLX_SGIX_hyperpipe = glXQueryHyperpipeNetworkSGIX && glXHyperpipeConfigSGIX && glXQueryHyperpipeConfigSGIX && glXDestroyHyperpipeConfigSGIX && glXBindHyperpipeSGIX && glXQueryHyperpipeBestAttribSGIX && glXHyperpipeAttribSGIX && glXQueryHyperpipeAttribSGIX;

	_LOAD(glXCreateGLXPbufferSGIX);
	_LOAD(glXDestroyGLXPbufferSGIX);
	_LOAD(glXQueryGLXPbufferSGIX);
	_LOAD(glXSelectEventSGIX);
	_LOAD(glXGetSelectedEventSGIX);
	_GLX_SGIX_pbuffer = glXCreateGLXPbufferSGIX && glXDestroyGLXPbufferSGIX && glXQueryGLXPbufferSGIX && glXSelectEventSGIX && glXGetSelectedEventSGIX;

	_LOAD(glXBindSwapBarrierSGIX);
	_LOAD(glXQueryMaxSwapBarriersSGIX);
	_GLX_SGIX_swap_barrier = glXBindSwapBarrierSGIX && glXQueryMaxSwapBarriersSGIX;

	_LOAD(glXBindChannelToWindowSGIX);
	_LOAD(glXChannelRectSGIX);
	_LOAD(glXQueryChannelRectSGIX);
	_LOAD(glXQueryChannelDeltasSGIX);
	_LOAD(glXChannelRectSyncSGIX);
	_GLX_SGIX_video_resize = glXBindChannelToWindowSGIX && glXChannelRectSGIX && glXQueryChannelRectSGIX && glXQueryChannelDeltasSGIX && glXChannelRectSyncSGIX;

	#ifdef _VL_H
	_LOAD(glXCreateGLXVideoSourceSGIX);
	_LOAD(glXDestroyGLXVideoSourceSGIX);
	_GLX_SGIX_video_source = glXCreateGLXVideoSourceSGIX && glXDestroyGLXVideoSourceSGIX;
	#endif

	_LOAD(glXCushionSGI);
	_GLX_SGI_cushion = 0 != glXCushionSGI;

	_LOAD(glXMakeCurrentReadSGI);
	_LOAD(glXGetCurrentReadDrawableSGI);
	_GLX_SGI_make_current_read = glXMakeCurrentReadSGI && glXGetCurrentReadDrawableSGI;

	_LOAD(glXSwapIntervalSGI);
	_GLX_SGI_swap_control = 0 != glXSwapIntervalSGI;

	_LOAD(glXGetVideoSyncSGI);
	_LOAD(glXWaitVideoSyncSGI);
	_GLX_SGI_video_sync = glXGetVideoSyncSGI && glXWaitVideoSyncSGI;

	_LOAD(glXGetTransparentIndexSUN);
	_GLX_SUN_get_transparent_index = 0 != glXGetTransparentIndexSUN;
    
    loadExtensions();
    loaded = true;
	return true;
}

bool loadExtensions()
{
    static bool loaded = false;
    if(loaded) return true;
	_GLX_ARB_create_context_no_error = 0;
	_GLX_ARB_create_context_profile = 0;
	_GLX_ARB_create_context_robustness = 0;
	_GLX_ARB_fbconfig_float = 0;
	_GLX_ARB_framebuffer_sRGB = 0;
	_GLX_ARB_multisample = 0;
	_GLX_ARB_robustness_application_isolation = 0;
	_GLX_ARB_robustness_share_group_isolation = 0;
	_GLX_ARB_vertex_buffer_object = 0;
	_GLX_3DFX_multisample = 0;
	_GLX_EXT_buffer_age = 0;
	_GLX_EXT_context_priority = 0;
	_GLX_EXT_create_context_es2_profile = 0;
	_GLX_EXT_create_context_es_profile = 0;
	_GLX_EXT_fbconfig_packed_float = 0;
	_GLX_EXT_framebuffer_sRGB = 0;
	_GLX_EXT_get_drawable_type = 0;
	_GLX_EXT_libglvnd = 0;
	_GLX_EXT_no_config_context = 0;
	_GLX_EXT_stereo_tree = 0;
	_GLX_EXT_swap_control_tear = 0;
	_GLX_EXT_visual_info = 0;
	_GLX_EXT_visual_rating = 0;
	_GLX_INTEL_swap_event = 0;
	_GLX_NV_float_buffer = 0;
	_GLX_NV_multigpu_context = 0;
	_GLX_NV_multisample_coverage = 0;
	_GLX_NV_robustness_video_memory_purge = 0;
	_GLX_OML_swap_method = 0;
	_GLX_SGIS_blended_overlay = 0;
	_GLX_SGIS_multisample = 0;
	_GLX_SGIS_shared_multisample = 0;
	_GLX_SGIX_visual_select_group = 0;
    loaded = true;
	return true;   
}

bool checkExtension(const char* extension_name)
{
	return false;
}

} // axl::glfl::GLX
} // axl::glfl
} // axl
