
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <axl.glfl/platform.h>

#if PLATFORM==PLATFORM_WINDOWS
#	define WIN32_LEAN_AND_MEAN 1
#	include <windows.h>
#	include <axl.glfl/lib.hpp>
#	include <axl.glfl/Dummy.hpp>
#	include <axl.glfl/glCoreARB.hpp>
#	define LOAD_GLPROC(Name) (!(Name = (PFN::Name)wglGetProcAddress(#Name)) ? (Name = (PFN::Name)GetProcAddress(GLMODULE, #Name)) : Name)
#	define LOAD_GLPROC_ALT(Name) Name = (PFN::Name)GetProcAddress(GLMODULE, #Name)
#elif PLATFORM==PLATFORM_LINUX
#	include <axl.glfl/lib.hpp>
#	include <axl.glfl/linux/glx.hpp>
#	include <axl.glfl/linux/glxext.hpp>
#	include <axl.glfl/glCoreARB.hpp>
#	include <axl.glfl/Dummy.hpp>
#	define LOAD_GLPROC(Name) Name = (!(Name = (PFN::Name)axl::glfl::GLX::glXGetProcAddress((const GLubyte*)#Name)) ? (Name = (PFN::Name)axl::glfl::GLX::glXGetProcAddressARB((const GLubyte*)#Name)) : Name)
#	define LOAD_GLPROC_ALT(Name) Name = (PFN::Name)axl::glfl::GLX::glXGetProcAddressARB((const GLubyte*)#Name)
#else
#	error("Unsupported platform!")
#endif

namespace axl {
namespace glfl {
namespace core {

namespace GL1 {

bool _GL_VERSION_1_0 = false;
const bool& GL_VERSION_1_0 = _GL_VERSION_1_0;
PFN::glCullFace glCullFace = (PFN::glCullFace)0;
PFN::glFrontFace glFrontFace = (PFN::glFrontFace)0;
PFN::glHint glHint = (PFN::glHint)0;
PFN::glLineWidth glLineWidth = (PFN::glLineWidth)0;
PFN::glPointSize glPointSize = (PFN::glPointSize)0;
PFN::glPolygonMode glPolygonMode = (PFN::glPolygonMode)0;
PFN::glScissor glScissor = (PFN::glScissor)0;
PFN::glTexParameterf glTexParameterf = (PFN::glTexParameterf)0;
PFN::glTexParameterfv glTexParameterfv = (PFN::glTexParameterfv)0;
PFN::glTexParameteri glTexParameteri = (PFN::glTexParameteri)0;
PFN::glTexParameteriv glTexParameteriv = (PFN::glTexParameteriv)0;
PFN::glTexImage1D glTexImage1D = (PFN::glTexImage1D)0;
PFN::glTexImage2D glTexImage2D = (PFN::glTexImage2D)0;
PFN::glDrawBuffer glDrawBuffer = (PFN::glDrawBuffer)0;
PFN::glClear glClear = (PFN::glClear)0;
PFN::glClearColor glClearColor = (PFN::glClearColor)0;
PFN::glClearStencil glClearStencil = (PFN::glClearStencil)0;
PFN::glClearDepth glClearDepth = (PFN::glClearDepth)0;
PFN::glStencilMask glStencilMask = (PFN::glStencilMask)0;
PFN::glColorMask glColorMask = (PFN::glColorMask)0;
PFN::glDepthMask glDepthMask = (PFN::glDepthMask)0;
PFN::glDisable glDisable = (PFN::glDisable)0;
PFN::glEnable glEnable = (PFN::glEnable)0;
PFN::glFinish glFinish = (PFN::glFinish)0;
PFN::glFlush glFlush = (PFN::glFlush)0;
PFN::glBlendFunc glBlendFunc = (PFN::glBlendFunc)0;
PFN::glLogicOp glLogicOp = (PFN::glLogicOp)0;
PFN::glStencilFunc glStencilFunc = (PFN::glStencilFunc)0;
PFN::glStencilOp glStencilOp = (PFN::glStencilOp)0;
PFN::glDepthFunc glDepthFunc = (PFN::glDepthFunc)0;
PFN::glPixelStoref glPixelStoref = (PFN::glPixelStoref)0;
PFN::glPixelStorei glPixelStorei = (PFN::glPixelStorei)0;
PFN::glReadBuffer glReadBuffer = (PFN::glReadBuffer)0;
PFN::glReadPixels glReadPixels = (PFN::glReadPixels)0;
PFN::glGetBooleanv glGetBooleanv = (PFN::glGetBooleanv)0;
PFN::glGetDoublev glGetDoublev = (PFN::glGetDoublev)0;
PFN::glGetError glGetError = (PFN::glGetError)0;
PFN::glGetFloatv glGetFloatv = (PFN::glGetFloatv)0;
PFN::glGetIntegerv glGetIntegerv = (PFN::glGetIntegerv)0;
PFN::glGetString glGetString = (PFN::glGetString)0;
PFN::glGetTexImage glGetTexImage = (PFN::glGetTexImage)0;
PFN::glGetTexParameterfv glGetTexParameterfv = (PFN::glGetTexParameterfv)0;
PFN::glGetTexParameteriv glGetTexParameteriv = (PFN::glGetTexParameteriv)0;
PFN::glGetTexLevelParameterfv glGetTexLevelParameterfv = (PFN::glGetTexLevelParameterfv)0;
PFN::glGetTexLevelParameteriv glGetTexLevelParameteriv = (PFN::glGetTexLevelParameteriv)0;
PFN::glIsEnabled glIsEnabled = (PFN::glIsEnabled)0;
PFN::glDepthRange glDepthRange = (PFN::glDepthRange)0;
PFN::glViewport glViewport = (PFN::glViewport)0;

bool _GL_VERSION_1_1 = false;
const bool& GL_VERSION_1_1 = _GL_VERSION_1_1;
PFN::glDrawArrays glDrawArrays = (PFN::glDrawArrays)0;
PFN::glDrawElements glDrawElements = (PFN::glDrawElements)0;
PFN::glGetPointerv glGetPointerv = (PFN::glGetPointerv)0;
PFN::glPolygonOffset glPolygonOffset = (PFN::glPolygonOffset)0;
PFN::glCopyTexImage1D glCopyTexImage1D = (PFN::glCopyTexImage1D)0;
PFN::glCopyTexImage2D glCopyTexImage2D = (PFN::glCopyTexImage2D)0;
PFN::glCopyTexSubImage1D glCopyTexSubImage1D = (PFN::glCopyTexSubImage1D)0;
PFN::glCopyTexSubImage2D glCopyTexSubImage2D = (PFN::glCopyTexSubImage2D)0;
PFN::glTexSubImage1D glTexSubImage1D = (PFN::glTexSubImage1D)0;
PFN::glTexSubImage2D glTexSubImage2D = (PFN::glTexSubImage2D)0;
PFN::glBindTexture glBindTexture = (PFN::glBindTexture)0;
PFN::glDeleteTextures glDeleteTextures = (PFN::glDeleteTextures)0;
PFN::glGenTextures glGenTextures = (PFN::glGenTextures)0;
PFN::glIsTexture glIsTexture = (PFN::glIsTexture)0;

bool _GL_VERSION_1_2 = false;
const bool& GL_VERSION_1_2 = _GL_VERSION_1_2;
PFN::glDrawRangeElements glDrawRangeElements = (PFN::glDrawRangeElements)0;
PFN::glTexImage3D glTexImage3D = (PFN::glTexImage3D)0;
PFN::glTexSubImage3D glTexSubImage3D = (PFN::glTexSubImage3D)0;
PFN::glCopyTexSubImage3D glCopyTexSubImage3D = (PFN::glCopyTexSubImage3D)0;

bool _GL_VERSION_1_3 = false;
const bool& GL_VERSION_1_3 = _GL_VERSION_1_3;
PFN::glActiveTexture glActiveTexture = (PFN::glActiveTexture)0;
PFN::glSampleCoverage glSampleCoverage = (PFN::glSampleCoverage)0;
PFN::glCompressedTexImage3D glCompressedTexImage3D = (PFN::glCompressedTexImage3D)0;
PFN::glCompressedTexImage2D glCompressedTexImage2D = (PFN::glCompressedTexImage2D)0;
PFN::glCompressedTexImage1D glCompressedTexImage1D = (PFN::glCompressedTexImage1D)0;
PFN::glCompressedTexSubImage3D glCompressedTexSubImage3D = (PFN::glCompressedTexSubImage3D)0;
PFN::glCompressedTexSubImage2D glCompressedTexSubImage2D = (PFN::glCompressedTexSubImage2D)0;
PFN::glCompressedTexSubImage1D glCompressedTexSubImage1D = (PFN::glCompressedTexSubImage1D)0;
PFN::glGetCompressedTexImage glGetCompressedTexImage = (PFN::glGetCompressedTexImage)0;

bool _GL_VERSION_1_4 = false;
const bool& GL_VERSION_1_4 = _GL_VERSION_1_4;
PFN::glBlendFuncSeparate glBlendFuncSeparate = (PFN::glBlendFuncSeparate)0;
PFN::glMultiDrawArrays glMultiDrawArrays = (PFN::glMultiDrawArrays)0;
PFN::glMultiDrawElements glMultiDrawElements = (PFN::glMultiDrawElements)0;
PFN::glPointParameterf glPointParameterf = (PFN::glPointParameterf)0;
PFN::glPointParameterfv glPointParameterfv = (PFN::glPointParameterfv)0;
PFN::glPointParameteri glPointParameteri = (PFN::glPointParameteri)0;
PFN::glPointParameteriv glPointParameteriv = (PFN::glPointParameteriv)0;
PFN::glBlendColor glBlendColor = (PFN::glBlendColor)0;
PFN::glBlendEquation glBlendEquation = (PFN::glBlendEquation)0;

bool _GL_VERSION_1_5 = false;
const bool& GL_VERSION_1_5 = _GL_VERSION_1_5;
PFN::glGenQueries glGenQueries = (PFN::glGenQueries)0;
PFN::glDeleteQueries glDeleteQueries = (PFN::glDeleteQueries)0;
PFN::glIsQuery glIsQuery = (PFN::glIsQuery)0;
PFN::glBeginQuery glBeginQuery = (PFN::glBeginQuery)0;
PFN::glEndQuery glEndQuery = (PFN::glEndQuery)0;
PFN::glGetQueryiv glGetQueryiv = (PFN::glGetQueryiv)0;
PFN::glGetQueryObjectiv glGetQueryObjectiv = (PFN::glGetQueryObjectiv)0;
PFN::glGetQueryObjectuiv glGetQueryObjectuiv = (PFN::glGetQueryObjectuiv)0;
PFN::glBindBuffer glBindBuffer = (PFN::glBindBuffer)0;
PFN::glDeleteBuffers glDeleteBuffers = (PFN::glDeleteBuffers)0;
PFN::glGenBuffers glGenBuffers = (PFN::glGenBuffers)0;
PFN::glIsBuffer glIsBuffer = (PFN::glIsBuffer)0;
PFN::glBufferData glBufferData = (PFN::glBufferData)0;
PFN::glBufferSubData glBufferSubData = (PFN::glBufferSubData)0;
PFN::glGetBufferSubData glGetBufferSubData = (PFN::glGetBufferSubData)0;
PFN::glMapBuffer glMapBuffer = (PFN::glMapBuffer)0;
PFN::glUnmapBuffer glUnmapBuffer = (PFN::glUnmapBuffer)0;
PFN::glGetBufferParameteriv glGetBufferParameteriv = (PFN::glGetBufferParameteriv)0;
PFN::glGetBufferPointerv glGetBufferPointerv = (PFN::glGetBufferPointerv)0;

}

namespace GL2 {

bool _GL_VERSION_2_0 = false;
const bool& GL_VERSION_2_0 = _GL_VERSION_2_0;
PFN::glBlendEquationSeparate glBlendEquationSeparate = (PFN::glBlendEquationSeparate)0;
PFN::glDrawBuffers glDrawBuffers = (PFN::glDrawBuffers)0;
PFN::glStencilOpSeparate glStencilOpSeparate = (PFN::glStencilOpSeparate)0;
PFN::glStencilFuncSeparate glStencilFuncSeparate = (PFN::glStencilFuncSeparate)0;
PFN::glStencilMaskSeparate glStencilMaskSeparate = (PFN::glStencilMaskSeparate)0;
PFN::glAttachShader glAttachShader = (PFN::glAttachShader)0;
PFN::glBindAttribLocation glBindAttribLocation = (PFN::glBindAttribLocation)0;
PFN::glCompileShader glCompileShader = (PFN::glCompileShader)0;
PFN::glCreateProgram glCreateProgram = (PFN::glCreateProgram)0;
PFN::glCreateShader glCreateShader = (PFN::glCreateShader)0;
PFN::glDeleteProgram glDeleteProgram = (PFN::glDeleteProgram)0;
PFN::glDeleteShader glDeleteShader = (PFN::glDeleteShader)0;
PFN::glDetachShader glDetachShader = (PFN::glDetachShader)0;
PFN::glDisableVertexAttribArray glDisableVertexAttribArray = (PFN::glDisableVertexAttribArray)0;
PFN::glEnableVertexAttribArray glEnableVertexAttribArray = (PFN::glEnableVertexAttribArray)0;
PFN::glGetActiveAttrib glGetActiveAttrib = (PFN::glGetActiveAttrib)0;
PFN::glGetActiveUniform glGetActiveUniform = (PFN::glGetActiveUniform)0;
PFN::glGetAttachedShaders glGetAttachedShaders = (PFN::glGetAttachedShaders)0;
PFN::glGetAttribLocation glGetAttribLocation = (PFN::glGetAttribLocation)0;
PFN::glGetProgramiv glGetProgramiv = (PFN::glGetProgramiv)0;
PFN::glGetProgramInfoLog glGetProgramInfoLog = (PFN::glGetProgramInfoLog)0;
PFN::glGetShaderiv glGetShaderiv = (PFN::glGetShaderiv)0;
PFN::glGetShaderInfoLog glGetShaderInfoLog = (PFN::glGetShaderInfoLog)0;
PFN::glGetShaderSource glGetShaderSource = (PFN::glGetShaderSource)0;
PFN::glGetUniformLocation glGetUniformLocation = (PFN::glGetUniformLocation)0;
PFN::glGetUniformfv glGetUniformfv = (PFN::glGetUniformfv)0;
PFN::glGetUniformiv glGetUniformiv = (PFN::glGetUniformiv)0;
PFN::glGetVertexAttribdv glGetVertexAttribdv = (PFN::glGetVertexAttribdv)0;
PFN::glGetVertexAttribfv glGetVertexAttribfv = (PFN::glGetVertexAttribfv)0;
PFN::glGetVertexAttribiv glGetVertexAttribiv = (PFN::glGetVertexAttribiv)0;
PFN::glGetVertexAttribPointerv glGetVertexAttribPointerv = (PFN::glGetVertexAttribPointerv)0;
PFN::glIsProgram glIsProgram = (PFN::glIsProgram)0;
PFN::glIsShader glIsShader = (PFN::glIsShader)0;
PFN::glLinkProgram glLinkProgram = (PFN::glLinkProgram)0;
PFN::glShaderSource glShaderSource = (PFN::glShaderSource)0;
PFN::glUseProgram glUseProgram = (PFN::glUseProgram)0;
PFN::glUniform1f glUniform1f = (PFN::glUniform1f)0;
PFN::glUniform2f glUniform2f = (PFN::glUniform2f)0;
PFN::glUniform3f glUniform3f = (PFN::glUniform3f)0;
PFN::glUniform4f glUniform4f = (PFN::glUniform4f)0;
PFN::glUniform1i glUniform1i = (PFN::glUniform1i)0;
PFN::glUniform2i glUniform2i = (PFN::glUniform2i)0;
PFN::glUniform3i glUniform3i = (PFN::glUniform3i)0;
PFN::glUniform4i glUniform4i = (PFN::glUniform4i)0;
PFN::glUniform1fv glUniform1fv = (PFN::glUniform1fv)0;
PFN::glUniform2fv glUniform2fv = (PFN::glUniform2fv)0;
PFN::glUniform3fv glUniform3fv = (PFN::glUniform3fv)0;
PFN::glUniform4fv glUniform4fv = (PFN::glUniform4fv)0;
PFN::glUniform1iv glUniform1iv = (PFN::glUniform1iv)0;
PFN::glUniform2iv glUniform2iv = (PFN::glUniform2iv)0;
PFN::glUniform3iv glUniform3iv = (PFN::glUniform3iv)0;
PFN::glUniform4iv glUniform4iv = (PFN::glUniform4iv)0;
PFN::glUniformMatrix2fv glUniformMatrix2fv = (PFN::glUniformMatrix2fv)0;
PFN::glUniformMatrix3fv glUniformMatrix3fv = (PFN::glUniformMatrix3fv)0;
PFN::glUniformMatrix4fv glUniformMatrix4fv = (PFN::glUniformMatrix4fv)0;
PFN::glValidateProgram glValidateProgram = (PFN::glValidateProgram)0;
PFN::glVertexAttrib1d glVertexAttrib1d = (PFN::glVertexAttrib1d)0;
PFN::glVertexAttrib1dv glVertexAttrib1dv = (PFN::glVertexAttrib1dv)0;
PFN::glVertexAttrib1f glVertexAttrib1f = (PFN::glVertexAttrib1f)0;
PFN::glVertexAttrib1fv glVertexAttrib1fv = (PFN::glVertexAttrib1fv)0;
PFN::glVertexAttrib1s glVertexAttrib1s = (PFN::glVertexAttrib1s)0;
PFN::glVertexAttrib1sv glVertexAttrib1sv = (PFN::glVertexAttrib1sv)0;
PFN::glVertexAttrib2d glVertexAttrib2d = (PFN::glVertexAttrib2d)0;
PFN::glVertexAttrib2dv glVertexAttrib2dv = (PFN::glVertexAttrib2dv)0;
PFN::glVertexAttrib2f glVertexAttrib2f = (PFN::glVertexAttrib2f)0;
PFN::glVertexAttrib2fv glVertexAttrib2fv = (PFN::glVertexAttrib2fv)0;
PFN::glVertexAttrib2s glVertexAttrib2s = (PFN::glVertexAttrib2s)0;
PFN::glVertexAttrib2sv glVertexAttrib2sv = (PFN::glVertexAttrib2sv)0;
PFN::glVertexAttrib3d glVertexAttrib3d = (PFN::glVertexAttrib3d)0;
PFN::glVertexAttrib3dv glVertexAttrib3dv = (PFN::glVertexAttrib3dv)0;
PFN::glVertexAttrib3f glVertexAttrib3f = (PFN::glVertexAttrib3f)0;
PFN::glVertexAttrib3fv glVertexAttrib3fv = (PFN::glVertexAttrib3fv)0;
PFN::glVertexAttrib3s glVertexAttrib3s = (PFN::glVertexAttrib3s)0;
PFN::glVertexAttrib3sv glVertexAttrib3sv = (PFN::glVertexAttrib3sv)0;
PFN::glVertexAttrib4Nbv glVertexAttrib4Nbv = (PFN::glVertexAttrib4Nbv)0;
PFN::glVertexAttrib4Niv glVertexAttrib4Niv = (PFN::glVertexAttrib4Niv)0;
PFN::glVertexAttrib4Nsv glVertexAttrib4Nsv = (PFN::glVertexAttrib4Nsv)0;
PFN::glVertexAttrib4Nub glVertexAttrib4Nub = (PFN::glVertexAttrib4Nub)0;
PFN::glVertexAttrib4Nubv glVertexAttrib4Nubv = (PFN::glVertexAttrib4Nubv)0;
PFN::glVertexAttrib4Nuiv glVertexAttrib4Nuiv = (PFN::glVertexAttrib4Nuiv)0;
PFN::glVertexAttrib4Nusv glVertexAttrib4Nusv = (PFN::glVertexAttrib4Nusv)0;
PFN::glVertexAttrib4bv glVertexAttrib4bv = (PFN::glVertexAttrib4bv)0;
PFN::glVertexAttrib4d glVertexAttrib4d = (PFN::glVertexAttrib4d)0;
PFN::glVertexAttrib4dv glVertexAttrib4dv = (PFN::glVertexAttrib4dv)0;
PFN::glVertexAttrib4f glVertexAttrib4f = (PFN::glVertexAttrib4f)0;
PFN::glVertexAttrib4fv glVertexAttrib4fv = (PFN::glVertexAttrib4fv)0;
PFN::glVertexAttrib4iv glVertexAttrib4iv = (PFN::glVertexAttrib4iv)0;
PFN::glVertexAttrib4s glVertexAttrib4s = (PFN::glVertexAttrib4s)0;
PFN::glVertexAttrib4sv glVertexAttrib4sv = (PFN::glVertexAttrib4sv)0;
PFN::glVertexAttrib4ubv glVertexAttrib4ubv = (PFN::glVertexAttrib4ubv)0;
PFN::glVertexAttrib4uiv glVertexAttrib4uiv = (PFN::glVertexAttrib4uiv)0;
PFN::glVertexAttrib4usv glVertexAttrib4usv = (PFN::glVertexAttrib4usv)0;
PFN::glVertexAttribPointer glVertexAttribPointer = (PFN::glVertexAttribPointer)0;

bool _GL_VERSION_2_1 = false;
const bool& GL_VERSION_2_1 = _GL_VERSION_2_1;
PFN::glUniformMatrix2x3fv glUniformMatrix2x3fv = (PFN::glUniformMatrix2x3fv)0;
PFN::glUniformMatrix3x2fv glUniformMatrix3x2fv = (PFN::glUniformMatrix3x2fv)0;
PFN::glUniformMatrix2x4fv glUniformMatrix2x4fv = (PFN::glUniformMatrix2x4fv)0;
PFN::glUniformMatrix4x2fv glUniformMatrix4x2fv = (PFN::glUniformMatrix4x2fv)0;
PFN::glUniformMatrix3x4fv glUniformMatrix3x4fv = (PFN::glUniformMatrix3x4fv)0;
PFN::glUniformMatrix4x3fv glUniformMatrix4x3fv = (PFN::glUniformMatrix4x3fv)0;

}

namespace GL3 {
	
bool _GL_VERSION_3_0 = false;
const bool& GL_VERSION_3_0 = _GL_VERSION_3_0;
PFN::glColorMaski glColorMaski = (PFN::glColorMaski)0;
PFN::glGetBooleani_v glGetBooleani_v = (PFN::glGetBooleani_v)0;
PFN::glGetIntegeri_v glGetIntegeri_v = (PFN::glGetIntegeri_v)0;
PFN::glEnablei glEnablei = (PFN::glEnablei)0;
PFN::glDisablei glDisablei = (PFN::glDisablei)0;
PFN::glIsEnabledi glIsEnabledi = (PFN::glIsEnabledi)0;
PFN::glBeginTransformFeedback glBeginTransformFeedback = (PFN::glBeginTransformFeedback)0;
PFN::glEndTransformFeedback glEndTransformFeedback = (PFN::glEndTransformFeedback)0;
PFN::glBindBufferRange glBindBufferRange = (PFN::glBindBufferRange)0;
PFN::glBindBufferBase glBindBufferBase = (PFN::glBindBufferBase)0;
PFN::glTransformFeedbackVaryings glTransformFeedbackVaryings = (PFN::glTransformFeedbackVaryings)0;
PFN::glGetTransformFeedbackVarying glGetTransformFeedbackVarying = (PFN::glGetTransformFeedbackVarying)0;
PFN::glClampColor glClampColor = (PFN::glClampColor)0;
PFN::glBeginConditionalRender glBeginConditionalRender = (PFN::glBeginConditionalRender)0;
PFN::glEndConditionalRender glEndConditionalRender = (PFN::glEndConditionalRender)0;
PFN::glVertexAttribIPointer glVertexAttribIPointer = (PFN::glVertexAttribIPointer)0;
PFN::glGetVertexAttribIiv glGetVertexAttribIiv = (PFN::glGetVertexAttribIiv)0;
PFN::glGetVertexAttribIuiv glGetVertexAttribIuiv = (PFN::glGetVertexAttribIuiv)0;
PFN::glVertexAttribI1i glVertexAttribI1i = (PFN::glVertexAttribI1i)0;
PFN::glVertexAttribI2i glVertexAttribI2i = (PFN::glVertexAttribI2i)0;
PFN::glVertexAttribI3i glVertexAttribI3i = (PFN::glVertexAttribI3i)0;
PFN::glVertexAttribI4i glVertexAttribI4i = (PFN::glVertexAttribI4i)0;
PFN::glVertexAttribI1ui glVertexAttribI1ui = (PFN::glVertexAttribI1ui)0;
PFN::glVertexAttribI2ui glVertexAttribI2ui = (PFN::glVertexAttribI2ui)0;
PFN::glVertexAttribI3ui glVertexAttribI3ui = (PFN::glVertexAttribI3ui)0;
PFN::glVertexAttribI4ui glVertexAttribI4ui = (PFN::glVertexAttribI4ui)0;
PFN::glVertexAttribI1iv glVertexAttribI1iv = (PFN::glVertexAttribI1iv)0;
PFN::glVertexAttribI2iv glVertexAttribI2iv = (PFN::glVertexAttribI2iv)0;
PFN::glVertexAttribI3iv glVertexAttribI3iv = (PFN::glVertexAttribI3iv)0;
PFN::glVertexAttribI4iv glVertexAttribI4iv = (PFN::glVertexAttribI4iv)0;
PFN::glVertexAttribI1uiv glVertexAttribI1uiv = (PFN::glVertexAttribI1uiv)0;
PFN::glVertexAttribI2uiv glVertexAttribI2uiv = (PFN::glVertexAttribI2uiv)0;
PFN::glVertexAttribI3uiv glVertexAttribI3uiv = (PFN::glVertexAttribI3uiv)0;
PFN::glVertexAttribI4uiv glVertexAttribI4uiv = (PFN::glVertexAttribI4uiv)0;
PFN::glVertexAttribI4bv glVertexAttribI4bv = (PFN::glVertexAttribI4bv)0;
PFN::glVertexAttribI4sv glVertexAttribI4sv = (PFN::glVertexAttribI4sv)0;
PFN::glVertexAttribI4ubv glVertexAttribI4ubv = (PFN::glVertexAttribI4ubv)0;
PFN::glVertexAttribI4usv glVertexAttribI4usv = (PFN::glVertexAttribI4usv)0;
PFN::glGetUniformuiv glGetUniformuiv = (PFN::glGetUniformuiv)0;
PFN::glBindFragDataLocation glBindFragDataLocation = (PFN::glBindFragDataLocation)0;
PFN::glGetFragDataLocation glGetFragDataLocation = (PFN::glGetFragDataLocation)0;
PFN::glUniform1ui glUniform1ui = (PFN::glUniform1ui)0;
PFN::glUniform2ui glUniform2ui = (PFN::glUniform2ui)0;
PFN::glUniform3ui glUniform3ui = (PFN::glUniform3ui)0;
PFN::glUniform4ui glUniform4ui = (PFN::glUniform4ui)0;
PFN::glUniform1uiv glUniform1uiv = (PFN::glUniform1uiv)0;
PFN::glUniform2uiv glUniform2uiv = (PFN::glUniform2uiv)0;
PFN::glUniform3uiv glUniform3uiv = (PFN::glUniform3uiv)0;
PFN::glUniform4uiv glUniform4uiv = (PFN::glUniform4uiv)0;
PFN::glTexParameterIiv glTexParameterIiv = (PFN::glTexParameterIiv)0;
PFN::glTexParameterIuiv glTexParameterIuiv = (PFN::glTexParameterIuiv)0;
PFN::glGetTexParameterIiv glGetTexParameterIiv = (PFN::glGetTexParameterIiv)0;
PFN::glGetTexParameterIuiv glGetTexParameterIuiv = (PFN::glGetTexParameterIuiv)0;
PFN::glClearBufferiv glClearBufferiv = (PFN::glClearBufferiv)0;
PFN::glClearBufferuiv glClearBufferuiv = (PFN::glClearBufferuiv)0;
PFN::glClearBufferfv glClearBufferfv = (PFN::glClearBufferfv)0;
PFN::glClearBufferfi glClearBufferfi = (PFN::glClearBufferfi)0;
PFN::glGetStringi glGetStringi = (PFN::glGetStringi)0;
PFN::glIsRenderbuffer glIsRenderbuffer = (PFN::glIsRenderbuffer)0;
PFN::glBindRenderbuffer glBindRenderbuffer = (PFN::glBindRenderbuffer)0;
PFN::glDeleteRenderbuffers glDeleteRenderbuffers = (PFN::glDeleteRenderbuffers)0;
PFN::glGenRenderbuffers glGenRenderbuffers = (PFN::glGenRenderbuffers)0;
PFN::glRenderbufferStorage glRenderbufferStorage = (PFN::glRenderbufferStorage)0;
PFN::glGetRenderbufferParameteriv glGetRenderbufferParameteriv = (PFN::glGetRenderbufferParameteriv)0;
PFN::glIsFramebuffer glIsFramebuffer = (PFN::glIsFramebuffer)0;
PFN::glBindFramebuffer glBindFramebuffer = (PFN::glBindFramebuffer)0;
PFN::glDeleteFramebuffers glDeleteFramebuffers = (PFN::glDeleteFramebuffers)0;
PFN::glGenFramebuffers glGenFramebuffers = (PFN::glGenFramebuffers)0;
PFN::glCheckFramebufferStatus glCheckFramebufferStatus = (PFN::glCheckFramebufferStatus)0;
PFN::glFramebufferTexture1D glFramebufferTexture1D = (PFN::glFramebufferTexture1D)0;
PFN::glFramebufferTexture2D glFramebufferTexture2D = (PFN::glFramebufferTexture2D)0;
PFN::glFramebufferTexture3D glFramebufferTexture3D = (PFN::glFramebufferTexture3D)0;
PFN::glFramebufferRenderbuffer glFramebufferRenderbuffer = (PFN::glFramebufferRenderbuffer)0;
PFN::glGetFramebufferAttachmentParameteriv glGetFramebufferAttachmentParameteriv = (PFN::glGetFramebufferAttachmentParameteriv)0;
PFN::glGenerateMipmap glGenerateMipmap = (PFN::glGenerateMipmap)0;
PFN::glBlitFramebuffer glBlitFramebuffer = (PFN::glBlitFramebuffer)0;
PFN::glRenderbufferStorageMultisample glRenderbufferStorageMultisample = (PFN::glRenderbufferStorageMultisample)0;
PFN::glFramebufferTextureLayer glFramebufferTextureLayer = (PFN::glFramebufferTextureLayer)0;
PFN::glMapBufferRange glMapBufferRange = (PFN::glMapBufferRange)0;
PFN::glFlushMappedBufferRange glFlushMappedBufferRange = (PFN::glFlushMappedBufferRange)0;
PFN::glBindVertexArray glBindVertexArray = (PFN::glBindVertexArray)0;
PFN::glDeleteVertexArrays glDeleteVertexArrays = (PFN::glDeleteVertexArrays)0;
PFN::glGenVertexArrays glGenVertexArrays = (PFN::glGenVertexArrays)0;
PFN::glIsVertexArray glIsVertexArray = (PFN::glIsVertexArray)0;

bool _GL_VERSION_3_1 = false;
const bool& GL_VERSION_3_1 = _GL_VERSION_3_1;
PFN::glDrawArraysInstanced glDrawArraysInstanced = (PFN::glDrawArraysInstanced)0;
PFN::glDrawElementsInstanced glDrawElementsInstanced = (PFN::glDrawElementsInstanced)0;
PFN::glTexBuffer glTexBuffer = (PFN::glTexBuffer)0;
PFN::glPrimitiveRestartIndex glPrimitiveRestartIndex = (PFN::glPrimitiveRestartIndex)0;
PFN::glCopyBufferSubData glCopyBufferSubData = (PFN::glCopyBufferSubData)0;
PFN::glGetUniformIndices glGetUniformIndices = (PFN::glGetUniformIndices)0;
PFN::glGetActiveUniformsiv glGetActiveUniformsiv = (PFN::glGetActiveUniformsiv)0;
PFN::glGetActiveUniformName glGetActiveUniformName = (PFN::glGetActiveUniformName)0;
PFN::glGetUniformBlockIndex glGetUniformBlockIndex = (PFN::glGetUniformBlockIndex)0;
PFN::glGetActiveUniformBlockiv glGetActiveUniformBlockiv = (PFN::glGetActiveUniformBlockiv)0;
PFN::glGetActiveUniformBlockName glGetActiveUniformBlockName = (PFN::glGetActiveUniformBlockName)0;
PFN::glUniformBlockBinding glUniformBlockBinding = (PFN::glUniformBlockBinding)0;

bool _GL_VERSION_3_2 = false;
const bool& GL_VERSION_3_2 = _GL_VERSION_3_2;
PFN::glDrawElementsBaseVertex glDrawElementsBaseVertex = (PFN::glDrawElementsBaseVertex)0;
PFN::glDrawRangeElementsBaseVertex glDrawRangeElementsBaseVertex = (PFN::glDrawRangeElementsBaseVertex)0;
PFN::glDrawElementsInstancedBaseVertex glDrawElementsInstancedBaseVertex = (PFN::glDrawElementsInstancedBaseVertex)0;
PFN::glMultiDrawElementsBaseVertex glMultiDrawElementsBaseVertex = (PFN::glMultiDrawElementsBaseVertex)0;
PFN::glProvokingVertex glProvokingVertex = (PFN::glProvokingVertex)0;
PFN::glFenceSync glFenceSync = (PFN::glFenceSync)0;
PFN::glIsSync glIsSync = (PFN::glIsSync)0;
PFN::glDeleteSync glDeleteSync = (PFN::glDeleteSync)0;
PFN::glClientWaitSync glClientWaitSync = (PFN::glClientWaitSync)0;
PFN::glWaitSync glWaitSync = (PFN::glWaitSync)0;
PFN::glGetInteger64v glGetInteger64v = (PFN::glGetInteger64v)0;
PFN::glGetSynciv glGetSynciv = (PFN::glGetSynciv)0;
PFN::glGetInteger64i_v glGetInteger64i_v = (PFN::glGetInteger64i_v)0;
PFN::glGetBufferParameteri64v glGetBufferParameteri64v = (PFN::glGetBufferParameteri64v)0;
PFN::glFramebufferTexture glFramebufferTexture = (PFN::glFramebufferTexture)0;
PFN::glTexImage2DMultisample glTexImage2DMultisample = (PFN::glTexImage2DMultisample)0;
PFN::glTexImage3DMultisample glTexImage3DMultisample = (PFN::glTexImage3DMultisample)0;
PFN::glGetMultisamplefv glGetMultisamplefv = (PFN::glGetMultisamplefv)0;
PFN::glSampleMaski glSampleMaski = (PFN::glSampleMaski)0;

bool _GL_VERSION_3_3 = false;
const bool& GL_VERSION_3_3 = _GL_VERSION_3_3;
PFN::glBindFragDataLocationIndexed glBindFragDataLocationIndexed = (PFN::glBindFragDataLocationIndexed)0;
PFN::glGetFragDataIndex glGetFragDataIndex = (PFN::glGetFragDataIndex)0;
PFN::glGenSamplers glGenSamplers = (PFN::glGenSamplers)0;
PFN::glDeleteSamplers glDeleteSamplers = (PFN::glDeleteSamplers)0;
PFN::glIsSampler glIsSampler = (PFN::glIsSampler)0;
PFN::glBindSampler glBindSampler = (PFN::glBindSampler)0;
PFN::glSamplerParameteri glSamplerParameteri = (PFN::glSamplerParameteri)0;
PFN::glSamplerParameteriv glSamplerParameteriv = (PFN::glSamplerParameteriv)0;
PFN::glSamplerParameterf glSamplerParameterf = (PFN::glSamplerParameterf)0;
PFN::glSamplerParameterfv glSamplerParameterfv = (PFN::glSamplerParameterfv)0;
PFN::glSamplerParameterIiv glSamplerParameterIiv = (PFN::glSamplerParameterIiv)0;
PFN::glSamplerParameterIuiv glSamplerParameterIuiv = (PFN::glSamplerParameterIuiv)0;
PFN::glGetSamplerParameteriv glGetSamplerParameteriv = (PFN::glGetSamplerParameteriv)0;
PFN::glGetSamplerParameterIiv glGetSamplerParameterIiv = (PFN::glGetSamplerParameterIiv)0;
PFN::glGetSamplerParameterfv glGetSamplerParameterfv = (PFN::glGetSamplerParameterfv)0;
PFN::glGetSamplerParameterIuiv glGetSamplerParameterIuiv = (PFN::glGetSamplerParameterIuiv)0;
PFN::glQueryCounter glQueryCounter = (PFN::glQueryCounter)0;
PFN::glGetQueryObjecti64v glGetQueryObjecti64v = (PFN::glGetQueryObjecti64v)0;
PFN::glGetQueryObjectui64v glGetQueryObjectui64v = (PFN::glGetQueryObjectui64v)0;
PFN::glVertexAttribDivisor glVertexAttribDivisor = (PFN::glVertexAttribDivisor)0;
PFN::glVertexAttribP1ui glVertexAttribP1ui = (PFN::glVertexAttribP1ui)0;
PFN::glVertexAttribP1uiv glVertexAttribP1uiv = (PFN::glVertexAttribP1uiv)0;
PFN::glVertexAttribP2ui glVertexAttribP2ui = (PFN::glVertexAttribP2ui)0;
PFN::glVertexAttribP2uiv glVertexAttribP2uiv = (PFN::glVertexAttribP2uiv)0;
PFN::glVertexAttribP3ui glVertexAttribP3ui = (PFN::glVertexAttribP3ui)0;
PFN::glVertexAttribP3uiv glVertexAttribP3uiv = (PFN::glVertexAttribP3uiv)0;
PFN::glVertexAttribP4ui glVertexAttribP4ui = (PFN::glVertexAttribP4ui)0;
PFN::glVertexAttribP4uiv glVertexAttribP4uiv = (PFN::glVertexAttribP4uiv)0;

}

namespace GL4 {

bool _GL_VERSION_4_0 = false;
const bool& GL_VERSION_4_0 = _GL_VERSION_4_0;
PFN::glMinSampleShading glMinSampleShading = (PFN::glMinSampleShading)0;
PFN::glBlendEquationi glBlendEquationi = (PFN::glBlendEquationi)0;
PFN::glBlendEquationSeparatei glBlendEquationSeparatei = (PFN::glBlendEquationSeparatei)0;
PFN::glBlendFunci glBlendFunci = (PFN::glBlendFunci)0;
PFN::glBlendFuncSeparatei glBlendFuncSeparatei = (PFN::glBlendFuncSeparatei)0;
PFN::glDrawArraysIndirect glDrawArraysIndirect = (PFN::glDrawArraysIndirect)0;
PFN::glDrawElementsIndirect glDrawElementsIndirect = (PFN::glDrawElementsIndirect)0;
PFN::glUniform1d glUniform1d = (PFN::glUniform1d)0;
PFN::glUniform2d glUniform2d = (PFN::glUniform2d)0;
PFN::glUniform3d glUniform3d = (PFN::glUniform3d)0;
PFN::glUniform4d glUniform4d = (PFN::glUniform4d)0;
PFN::glUniform1dv glUniform1dv = (PFN::glUniform1dv)0;
PFN::glUniform2dv glUniform2dv = (PFN::glUniform2dv)0;
PFN::glUniform3dv glUniform3dv = (PFN::glUniform3dv)0;
PFN::glUniform4dv glUniform4dv = (PFN::glUniform4dv)0;
PFN::glUniformMatrix2dv glUniformMatrix2dv = (PFN::glUniformMatrix2dv)0;
PFN::glUniformMatrix3dv glUniformMatrix3dv = (PFN::glUniformMatrix3dv)0;
PFN::glUniformMatrix4dv glUniformMatrix4dv = (PFN::glUniformMatrix4dv)0;
PFN::glUniformMatrix2x3dv glUniformMatrix2x3dv = (PFN::glUniformMatrix2x3dv)0;
PFN::glUniformMatrix2x4dv glUniformMatrix2x4dv = (PFN::glUniformMatrix2x4dv)0;
PFN::glUniformMatrix3x2dv glUniformMatrix3x2dv = (PFN::glUniformMatrix3x2dv)0;
PFN::glUniformMatrix3x4dv glUniformMatrix3x4dv = (PFN::glUniformMatrix3x4dv)0;
PFN::glUniformMatrix4x2dv glUniformMatrix4x2dv = (PFN::glUniformMatrix4x2dv)0;
PFN::glUniformMatrix4x3dv glUniformMatrix4x3dv = (PFN::glUniformMatrix4x3dv)0;
PFN::glGetUniformdv glGetUniformdv = (PFN::glGetUniformdv)0;
PFN::glGetSubroutineUniformLocation glGetSubroutineUniformLocation = (PFN::glGetSubroutineUniformLocation)0;
PFN::glGetSubroutineIndex glGetSubroutineIndex = (PFN::glGetSubroutineIndex)0;
PFN::glGetActiveSubroutineUniformiv glGetActiveSubroutineUniformiv = (PFN::glGetActiveSubroutineUniformiv)0;
PFN::glGetActiveSubroutineUniformName glGetActiveSubroutineUniformName = (PFN::glGetActiveSubroutineUniformName)0;
PFN::glGetActiveSubroutineName glGetActiveSubroutineName = (PFN::glGetActiveSubroutineName)0;
PFN::glUniformSubroutinesuiv glUniformSubroutinesuiv = (PFN::glUniformSubroutinesuiv)0;
PFN::glGetUniformSubroutineuiv glGetUniformSubroutineuiv = (PFN::glGetUniformSubroutineuiv)0;
PFN::glGetProgramStageiv glGetProgramStageiv = (PFN::glGetProgramStageiv)0;
PFN::glPatchParameteri glPatchParameteri = (PFN::glPatchParameteri)0;
PFN::glPatchParameterfv glPatchParameterfv = (PFN::glPatchParameterfv)0;
PFN::glBindTransformFeedback glBindTransformFeedback = (PFN::glBindTransformFeedback)0;
PFN::glDeleteTransformFeedbacks glDeleteTransformFeedbacks = (PFN::glDeleteTransformFeedbacks)0;
PFN::glGenTransformFeedbacks glGenTransformFeedbacks = (PFN::glGenTransformFeedbacks)0;
PFN::glIsTransformFeedback glIsTransformFeedback = (PFN::glIsTransformFeedback)0;
PFN::glPauseTransformFeedback glPauseTransformFeedback = (PFN::glPauseTransformFeedback)0;
PFN::glResumeTransformFeedback glResumeTransformFeedback = (PFN::glResumeTransformFeedback)0;
PFN::glDrawTransformFeedback glDrawTransformFeedback = (PFN::glDrawTransformFeedback)0;
PFN::glDrawTransformFeedbackStream glDrawTransformFeedbackStream = (PFN::glDrawTransformFeedbackStream)0;
PFN::glBeginQueryIndexed glBeginQueryIndexed = (PFN::glBeginQueryIndexed)0;
PFN::glEndQueryIndexed glEndQueryIndexed = (PFN::glEndQueryIndexed)0;
PFN::glGetQueryIndexediv glGetQueryIndexediv = (PFN::glGetQueryIndexediv)0;

bool _GL_VERSION_4_1 = false;
const bool& GL_VERSION_4_1 = _GL_VERSION_4_1;

PFN::glReleaseShaderCompiler glReleaseShaderCompiler = (PFN::glReleaseShaderCompiler)0;
PFN::glShaderBinary glShaderBinary = (PFN::glShaderBinary)0;
PFN::glGetShaderPrecisionFormat glGetShaderPrecisionFormat = (PFN::glGetShaderPrecisionFormat)0;
PFN::glDepthRangef glDepthRangef = (PFN::glDepthRangef)0;
PFN::glClearDepthf glClearDepthf = (PFN::glClearDepthf)0;
PFN::glGetProgramBinary glGetProgramBinary = (PFN::glGetProgramBinary)0;
PFN::glProgramBinary glProgramBinary = (PFN::glProgramBinary)0;
PFN::glProgramParameteri glProgramParameteri = (PFN::glProgramParameteri)0;
PFN::glUseProgramStages glUseProgramStages = (PFN::glUseProgramStages)0;
PFN::glActiveShaderProgram glActiveShaderProgram = (PFN::glActiveShaderProgram)0;
PFN::glCreateShaderProgramv glCreateShaderProgramv = (PFN::glCreateShaderProgramv)0;
PFN::glBindProgramPipeline glBindProgramPipeline = (PFN::glBindProgramPipeline)0;
PFN::glDeleteProgramPipelines glDeleteProgramPipelines = (PFN::glDeleteProgramPipelines)0;
PFN::glGenProgramPipelines glGenProgramPipelines = (PFN::glGenProgramPipelines)0;
PFN::glIsProgramPipeline glIsProgramPipeline = (PFN::glIsProgramPipeline)0;
PFN::glGetProgramPipelineiv glGetProgramPipelineiv = (PFN::glGetProgramPipelineiv)0;
PFN::glProgramUniform1i glProgramUniform1i = (PFN::glProgramUniform1i)0;
PFN::glProgramUniform1iv glProgramUniform1iv = (PFN::glProgramUniform1iv)0;
PFN::glProgramUniform1f glProgramUniform1f = (PFN::glProgramUniform1f)0;
PFN::glProgramUniform1fv glProgramUniform1fv = (PFN::glProgramUniform1fv)0;
PFN::glProgramUniform1d glProgramUniform1d = (PFN::glProgramUniform1d)0;
PFN::glProgramUniform1dv glProgramUniform1dv = (PFN::glProgramUniform1dv)0;
PFN::glProgramUniform1ui glProgramUniform1ui = (PFN::glProgramUniform1ui)0;
PFN::glProgramUniform1uiv glProgramUniform1uiv = (PFN::glProgramUniform1uiv)0;
PFN::glProgramUniform2i glProgramUniform2i = (PFN::glProgramUniform2i)0;
PFN::glProgramUniform2iv glProgramUniform2iv = (PFN::glProgramUniform2iv)0;
PFN::glProgramUniform2f glProgramUniform2f = (PFN::glProgramUniform2f)0;
PFN::glProgramUniform2fv glProgramUniform2fv = (PFN::glProgramUniform2fv)0;
PFN::glProgramUniform2d glProgramUniform2d = (PFN::glProgramUniform2d)0;
PFN::glProgramUniform2dv glProgramUniform2dv = (PFN::glProgramUniform2dv)0;
PFN::glProgramUniform2ui glProgramUniform2ui = (PFN::glProgramUniform2ui)0;
PFN::glProgramUniform2uiv glProgramUniform2uiv = (PFN::glProgramUniform2uiv)0;
PFN::glProgramUniform3i glProgramUniform3i = (PFN::glProgramUniform3i)0;
PFN::glProgramUniform3iv glProgramUniform3iv = (PFN::glProgramUniform3iv)0;
PFN::glProgramUniform3f glProgramUniform3f = (PFN::glProgramUniform3f)0;
PFN::glProgramUniform3fv glProgramUniform3fv = (PFN::glProgramUniform3fv)0;
PFN::glProgramUniform3d glProgramUniform3d = (PFN::glProgramUniform3d)0;
PFN::glProgramUniform3dv glProgramUniform3dv = (PFN::glProgramUniform3dv)0;
PFN::glProgramUniform3ui glProgramUniform3ui = (PFN::glProgramUniform3ui)0;
PFN::glProgramUniform3uiv glProgramUniform3uiv = (PFN::glProgramUniform3uiv)0;
PFN::glProgramUniform4i glProgramUniform4i = (PFN::glProgramUniform4i)0;
PFN::glProgramUniform4iv glProgramUniform4iv = (PFN::glProgramUniform4iv)0;
PFN::glProgramUniform4f glProgramUniform4f = (PFN::glProgramUniform4f)0;
PFN::glProgramUniform4fv glProgramUniform4fv = (PFN::glProgramUniform4fv)0;
PFN::glProgramUniform4d glProgramUniform4d = (PFN::glProgramUniform4d)0;
PFN::glProgramUniform4dv glProgramUniform4dv = (PFN::glProgramUniform4dv)0;
PFN::glProgramUniform4ui glProgramUniform4ui = (PFN::glProgramUniform4ui)0;
PFN::glProgramUniform4uiv glProgramUniform4uiv = (PFN::glProgramUniform4uiv)0;
PFN::glProgramUniformMatrix2fv glProgramUniformMatrix2fv = (PFN::glProgramUniformMatrix2fv)0;
PFN::glProgramUniformMatrix3fv glProgramUniformMatrix3fv = (PFN::glProgramUniformMatrix3fv)0;
PFN::glProgramUniformMatrix4fv glProgramUniformMatrix4fv = (PFN::glProgramUniformMatrix4fv)0;
PFN::glProgramUniformMatrix2dv glProgramUniformMatrix2dv = (PFN::glProgramUniformMatrix2dv)0;
PFN::glProgramUniformMatrix3dv glProgramUniformMatrix3dv = (PFN::glProgramUniformMatrix3dv)0;
PFN::glProgramUniformMatrix4dv glProgramUniformMatrix4dv = (PFN::glProgramUniformMatrix4dv)0;
PFN::glProgramUniformMatrix2x3fv glProgramUniformMatrix2x3fv = (PFN::glProgramUniformMatrix2x3fv)0;
PFN::glProgramUniformMatrix3x2fv glProgramUniformMatrix3x2fv = (PFN::glProgramUniformMatrix3x2fv)0;
PFN::glProgramUniformMatrix2x4fv glProgramUniformMatrix2x4fv = (PFN::glProgramUniformMatrix2x4fv)0;
PFN::glProgramUniformMatrix4x2fv glProgramUniformMatrix4x2fv = (PFN::glProgramUniformMatrix4x2fv)0;
PFN::glProgramUniformMatrix3x4fv glProgramUniformMatrix3x4fv = (PFN::glProgramUniformMatrix3x4fv)0;
PFN::glProgramUniformMatrix4x3fv glProgramUniformMatrix4x3fv = (PFN::glProgramUniformMatrix4x3fv)0;
PFN::glProgramUniformMatrix2x3dv glProgramUniformMatrix2x3dv = (PFN::glProgramUniformMatrix2x3dv)0;
PFN::glProgramUniformMatrix3x2dv glProgramUniformMatrix3x2dv = (PFN::glProgramUniformMatrix3x2dv)0;
PFN::glProgramUniformMatrix2x4dv glProgramUniformMatrix2x4dv = (PFN::glProgramUniformMatrix2x4dv)0;
PFN::glProgramUniformMatrix4x2dv glProgramUniformMatrix4x2dv = (PFN::glProgramUniformMatrix4x2dv)0;
PFN::glProgramUniformMatrix3x4dv glProgramUniformMatrix3x4dv = (PFN::glProgramUniformMatrix3x4dv)0;
PFN::glProgramUniformMatrix4x3dv glProgramUniformMatrix4x3dv = (PFN::glProgramUniformMatrix4x3dv)0;
PFN::glValidateProgramPipeline glValidateProgramPipeline = (PFN::glValidateProgramPipeline)0;
PFN::glGetProgramPipelineInfoLog glGetProgramPipelineInfoLog = (PFN::glGetProgramPipelineInfoLog)0;
PFN::glVertexAttribL1d glVertexAttribL1d = (PFN::glVertexAttribL1d)0;
PFN::glVertexAttribL2d glVertexAttribL2d = (PFN::glVertexAttribL2d)0;
PFN::glVertexAttribL3d glVertexAttribL3d = (PFN::glVertexAttribL3d)0;
PFN::glVertexAttribL4d glVertexAttribL4d = (PFN::glVertexAttribL4d)0;
PFN::glVertexAttribL1dv glVertexAttribL1dv = (PFN::glVertexAttribL1dv)0;
PFN::glVertexAttribL2dv glVertexAttribL2dv = (PFN::glVertexAttribL2dv)0;
PFN::glVertexAttribL3dv glVertexAttribL3dv = (PFN::glVertexAttribL3dv)0;
PFN::glVertexAttribL4dv glVertexAttribL4dv = (PFN::glVertexAttribL4dv)0;
PFN::glVertexAttribLPointer glVertexAttribLPointer = (PFN::glVertexAttribLPointer)0;
PFN::glGetVertexAttribLdv glGetVertexAttribLdv = (PFN::glGetVertexAttribLdv)0;
PFN::glViewportArrayv glViewportArrayv = (PFN::glViewportArrayv)0;
PFN::glViewportIndexedf glViewportIndexedf = (PFN::glViewportIndexedf)0;
PFN::glViewportIndexedfv glViewportIndexedfv = (PFN::glViewportIndexedfv)0;
PFN::glScissorArrayv glScissorArrayv = (PFN::glScissorArrayv)0;
PFN::glScissorIndexed glScissorIndexed = (PFN::glScissorIndexed)0;
PFN::glScissorIndexedv glScissorIndexedv = (PFN::glScissorIndexedv)0;
PFN::glDepthRangeArrayv glDepthRangeArrayv = (PFN::glDepthRangeArrayv)0;
PFN::glDepthRangeIndexed glDepthRangeIndexed = (PFN::glDepthRangeIndexed)0;
PFN::glGetFloati_v glGetFloati_v = (PFN::glGetFloati_v)0;
PFN::glGetDoublei_v glGetDoublei_v = (PFN::glGetDoublei_v)0;

bool _GL_VERSION_4_2 = false;
const bool& GL_VERSION_4_2 = _GL_VERSION_4_2;
PFN::glDrawArraysInstancedBaseInstance glDrawArraysInstancedBaseInstance = (PFN::glDrawArraysInstancedBaseInstance)0;
PFN::glDrawElementsInstancedBaseInstance glDrawElementsInstancedBaseInstance = (PFN::glDrawElementsInstancedBaseInstance)0;
PFN::glDrawElementsInstancedBaseVertexBaseInstance glDrawElementsInstancedBaseVertexBaseInstance = (PFN::glDrawElementsInstancedBaseVertexBaseInstance)0;
PFN::glGetInternalformativ glGetInternalformativ = (PFN::glGetInternalformativ)0;
PFN::glGetActiveAtomicCounterBufferiv glGetActiveAtomicCounterBufferiv = (PFN::glGetActiveAtomicCounterBufferiv)0;
PFN::glBindImageTexture glBindImageTexture = (PFN::glBindImageTexture)0;
PFN::glMemoryBarrier glMemoryBarrier = (PFN::glMemoryBarrier)0;
PFN::glTexStorage1D glTexStorage1D = (PFN::glTexStorage1D)0;
PFN::glTexStorage2D glTexStorage2D = (PFN::glTexStorage2D)0;
PFN::glTexStorage3D glTexStorage3D = (PFN::glTexStorage3D)0;
PFN::glDrawTransformFeedbackInstanced glDrawTransformFeedbackInstanced = (PFN::glDrawTransformFeedbackInstanced)0;
PFN::glDrawTransformFeedbackStreamInstanced glDrawTransformFeedbackStreamInstanced = (PFN::glDrawTransformFeedbackStreamInstanced)0;

bool _GL_VERSION_4_3 = false;
const bool& GL_VERSION_4_3 = _GL_VERSION_4_3;
PFN::glClearBufferData glClearBufferData = (PFN::glClearBufferData)0;
PFN::glClearBufferSubData glClearBufferSubData = (PFN::glClearBufferSubData)0;
PFN::glDispatchCompute glDispatchCompute = (PFN::glDispatchCompute)0;
PFN::glDispatchComputeIndirect glDispatchComputeIndirect = (PFN::glDispatchComputeIndirect)0;
PFN::glCopyImageSubData glCopyImageSubData = (PFN::glCopyImageSubData)0;
PFN::glFramebufferParameteri glFramebufferParameteri = (PFN::glFramebufferParameteri)0;
PFN::glGetFramebufferParameteriv glGetFramebufferParameteriv = (PFN::glGetFramebufferParameteriv)0;
PFN::glGetInternalformati64v glGetInternalformati64v = (PFN::glGetInternalformati64v)0;
PFN::glInvalidateTexSubImage glInvalidateTexSubImage = (PFN::glInvalidateTexSubImage)0;
PFN::glInvalidateTexImage glInvalidateTexImage = (PFN::glInvalidateTexImage)0;
PFN::glInvalidateBufferSubData glInvalidateBufferSubData = (PFN::glInvalidateBufferSubData)0;
PFN::glInvalidateBufferData glInvalidateBufferData = (PFN::glInvalidateBufferData)0;
PFN::glInvalidateFramebuffer glInvalidateFramebuffer = (PFN::glInvalidateFramebuffer)0;
PFN::glInvalidateSubFramebuffer glInvalidateSubFramebuffer = (PFN::glInvalidateSubFramebuffer)0;
PFN::glMultiDrawArraysIndirect glMultiDrawArraysIndirect = (PFN::glMultiDrawArraysIndirect)0;
PFN::glMultiDrawElementsIndirect glMultiDrawElementsIndirect = (PFN::glMultiDrawElementsIndirect)0;
PFN::glGetProgramInterfaceiv glGetProgramInterfaceiv = (PFN::glGetProgramInterfaceiv)0;
PFN::glGetProgramResourceIndex glGetProgramResourceIndex = (PFN::glGetProgramResourceIndex)0;
PFN::glGetProgramResourceName glGetProgramResourceName = (PFN::glGetProgramResourceName)0;
PFN::glGetProgramResourceiv glGetProgramResourceiv = (PFN::glGetProgramResourceiv)0;
PFN::glGetProgramResourceLocation glGetProgramResourceLocation = (PFN::glGetProgramResourceLocation)0;
PFN::glGetProgramResourceLocationIndex glGetProgramResourceLocationIndex = (PFN::glGetProgramResourceLocationIndex)0;
PFN::glShaderStorageBlockBinding glShaderStorageBlockBinding = (PFN::glShaderStorageBlockBinding)0;
PFN::glTexBufferRange glTexBufferRange = (PFN::glTexBufferRange)0;
PFN::glTexStorage2DMultisample glTexStorage2DMultisample = (PFN::glTexStorage2DMultisample)0;
PFN::glTexStorage3DMultisample glTexStorage3DMultisample = (PFN::glTexStorage3DMultisample)0;
PFN::glTextureView glTextureView = (PFN::glTextureView)0;
PFN::glBindVertexBuffer glBindVertexBuffer = (PFN::glBindVertexBuffer)0;
PFN::glVertexAttribFormat glVertexAttribFormat = (PFN::glVertexAttribFormat)0;
PFN::glVertexAttribIFormat glVertexAttribIFormat = (PFN::glVertexAttribIFormat)0;
PFN::glVertexAttribLFormat glVertexAttribLFormat = (PFN::glVertexAttribLFormat)0;
PFN::glVertexAttribBinding glVertexAttribBinding = (PFN::glVertexAttribBinding)0;
PFN::glVertexBindingDivisor glVertexBindingDivisor = (PFN::glVertexBindingDivisor)0;
PFN::glDebugMessageControl glDebugMessageControl = (PFN::glDebugMessageControl)0;
PFN::glDebugMessageInsert glDebugMessageInsert = (PFN::glDebugMessageInsert)0;
PFN::glDebugMessageCallback glDebugMessageCallback = (PFN::glDebugMessageCallback)0;
PFN::glGetDebugMessageLog glGetDebugMessageLog = (PFN::glGetDebugMessageLog)0;
PFN::glPushDebugGroup glPushDebugGroup = (PFN::glPushDebugGroup)0;
PFN::glPopDebugGroup glPopDebugGroup = (PFN::glPopDebugGroup)0;
PFN::glObjectLabel glObjectLabel = (PFN::glObjectLabel)0;
PFN::glGetObjectLabel glGetObjectLabel = (PFN::glGetObjectLabel)0;
PFN::glObjectPtrLabel glObjectPtrLabel = (PFN::glObjectPtrLabel)0;
PFN::glGetObjectPtrLabel glGetObjectPtrLabel = (PFN::glGetObjectPtrLabel)0;

bool _GL_VERSION_4_4 = false;
const bool& GL_VERSION_4_4 = _GL_VERSION_4_4;
PFN::glBufferStorage glBufferStorage = (PFN::glBufferStorage)0;
PFN::glClearTexImage glClearTexImage = (PFN::glClearTexImage)0;
PFN::glClearTexSubImage glClearTexSubImage = (PFN::glClearTexSubImage)0;
PFN::glBindBuffersBase glBindBuffersBase = (PFN::glBindBuffersBase)0;
PFN::glBindBuffersRange glBindBuffersRange = (PFN::glBindBuffersRange)0;
PFN::glBindTextures glBindTextures = (PFN::glBindTextures)0;
PFN::glBindSamplers glBindSamplers = (PFN::glBindSamplers)0;
PFN::glBindImageTextures glBindImageTextures = (PFN::glBindImageTextures)0;
PFN::glBindVertexBuffers glBindVertexBuffers = (PFN::glBindVertexBuffers)0;

bool _GL_VERSION_4_5 = false;
const bool& GL_VERSION_4_5 = _GL_VERSION_4_5;
PFN::glClipControl glClipControl = (PFN::glClipControl)0;
PFN::glCreateTransformFeedbacks glCreateTransformFeedbacks = (PFN::glCreateTransformFeedbacks)0;
PFN::glTransformFeedbackBufferBase glTransformFeedbackBufferBase = (PFN::glTransformFeedbackBufferBase)0;
PFN::glTransformFeedbackBufferRange glTransformFeedbackBufferRange = (PFN::glTransformFeedbackBufferRange)0;
PFN::glGetTransformFeedbackiv glGetTransformFeedbackiv = (PFN::glGetTransformFeedbackiv)0;
PFN::glGetTransformFeedbacki_v glGetTransformFeedbacki_v = (PFN::glGetTransformFeedbacki_v)0;
PFN::glGetTransformFeedbacki64_v glGetTransformFeedbacki64_v = (PFN::glGetTransformFeedbacki64_v)0;
PFN::glCreateBuffers glCreateBuffers = (PFN::glCreateBuffers)0;
PFN::glNamedBufferStorage glNamedBufferStorage = (PFN::glNamedBufferStorage)0;
PFN::glNamedBufferData glNamedBufferData = (PFN::glNamedBufferData)0;
PFN::glNamedBufferSubData glNamedBufferSubData = (PFN::glNamedBufferSubData)0;
PFN::glCopyNamedBufferSubData glCopyNamedBufferSubData = (PFN::glCopyNamedBufferSubData)0;
PFN::glClearNamedBufferData glClearNamedBufferData = (PFN::glClearNamedBufferData)0;
PFN::glClearNamedBufferSubData glClearNamedBufferSubData = (PFN::glClearNamedBufferSubData)0;
PFN::glMapNamedBuffer glMapNamedBuffer = (PFN::glMapNamedBuffer)0;
PFN::glMapNamedBufferRange glMapNamedBufferRange = (PFN::glMapNamedBufferRange)0;
PFN::glUnmapNamedBuffer glUnmapNamedBuffer = (PFN::glUnmapNamedBuffer)0;
PFN::glFlushMappedNamedBufferRange glFlushMappedNamedBufferRange = (PFN::glFlushMappedNamedBufferRange)0;
PFN::glGetNamedBufferParameteriv glGetNamedBufferParameteriv = (PFN::glGetNamedBufferParameteriv)0;
PFN::glGetNamedBufferParameteri64v glGetNamedBufferParameteri64v = (PFN::glGetNamedBufferParameteri64v)0;
PFN::glGetNamedBufferPointerv glGetNamedBufferPointerv = (PFN::glGetNamedBufferPointerv)0;
PFN::glGetNamedBufferSubData glGetNamedBufferSubData = (PFN::glGetNamedBufferSubData)0;
PFN::glCreateFramebuffers glCreateFramebuffers = (PFN::glCreateFramebuffers)0;
PFN::glNamedFramebufferRenderbuffer glNamedFramebufferRenderbuffer = (PFN::glNamedFramebufferRenderbuffer)0;
PFN::glNamedFramebufferParameteri glNamedFramebufferParameteri = (PFN::glNamedFramebufferParameteri)0;
PFN::glNamedFramebufferTexture glNamedFramebufferTexture = (PFN::glNamedFramebufferTexture)0;
PFN::glNamedFramebufferTextureLayer glNamedFramebufferTextureLayer = (PFN::glNamedFramebufferTextureLayer)0;
PFN::glNamedFramebufferDrawBuffer glNamedFramebufferDrawBuffer = (PFN::glNamedFramebufferDrawBuffer)0;
PFN::glNamedFramebufferDrawBuffers glNamedFramebufferDrawBuffers = (PFN::glNamedFramebufferDrawBuffers)0;
PFN::glNamedFramebufferReadBuffer glNamedFramebufferReadBuffer = (PFN::glNamedFramebufferReadBuffer)0;
PFN::glInvalidateNamedFramebufferData glInvalidateNamedFramebufferData = (PFN::glInvalidateNamedFramebufferData)0;
PFN::glInvalidateNamedFramebufferSubData glInvalidateNamedFramebufferSubData = (PFN::glInvalidateNamedFramebufferSubData)0;
PFN::glClearNamedFramebufferiv glClearNamedFramebufferiv = (PFN::glClearNamedFramebufferiv)0;
PFN::glClearNamedFramebufferuiv glClearNamedFramebufferuiv = (PFN::glClearNamedFramebufferuiv)0;
PFN::glClearNamedFramebufferfv glClearNamedFramebufferfv = (PFN::glClearNamedFramebufferfv)0;
PFN::glClearNamedFramebufferfi glClearNamedFramebufferfi = (PFN::glClearNamedFramebufferfi)0;
PFN::glBlitNamedFramebuffer glBlitNamedFramebuffer = (PFN::glBlitNamedFramebuffer)0;
PFN::glCheckNamedFramebufferStatus glCheckNamedFramebufferStatus = (PFN::glCheckNamedFramebufferStatus)0;
PFN::glGetNamedFramebufferParameteriv glGetNamedFramebufferParameteriv = (PFN::glGetNamedFramebufferParameteriv)0;
PFN::glGetNamedFramebufferAttachmentParameteriv glGetNamedFramebufferAttachmentParameteriv = (PFN::glGetNamedFramebufferAttachmentParameteriv)0;
PFN::glCreateRenderbuffers glCreateRenderbuffers = (PFN::glCreateRenderbuffers)0;
PFN::glNamedRenderbufferStorage glNamedRenderbufferStorage = (PFN::glNamedRenderbufferStorage)0;
PFN::glNamedRenderbufferStorageMultisample glNamedRenderbufferStorageMultisample = (PFN::glNamedRenderbufferStorageMultisample)0;
PFN::glGetNamedRenderbufferParameteriv glGetNamedRenderbufferParameteriv = (PFN::glGetNamedRenderbufferParameteriv)0;
PFN::glCreateTextures glCreateTextures = (PFN::glCreateTextures)0;
PFN::glTextureBuffer glTextureBuffer = (PFN::glTextureBuffer)0;
PFN::glTextureBufferRange glTextureBufferRange = (PFN::glTextureBufferRange)0;
PFN::glTextureStorage1D glTextureStorage1D = (PFN::glTextureStorage1D)0;
PFN::glTextureStorage2D glTextureStorage2D = (PFN::glTextureStorage2D)0;
PFN::glTextureStorage3D glTextureStorage3D = (PFN::glTextureStorage3D)0;
PFN::glTextureStorage2DMultisample glTextureStorage2DMultisample = (PFN::glTextureStorage2DMultisample)0;
PFN::glTextureStorage3DMultisample glTextureStorage3DMultisample = (PFN::glTextureStorage3DMultisample)0;
PFN::glTextureSubImage1D glTextureSubImage1D = (PFN::glTextureSubImage1D)0;
PFN::glTextureSubImage2D glTextureSubImage2D = (PFN::glTextureSubImage2D)0;
PFN::glTextureSubImage3D glTextureSubImage3D = (PFN::glTextureSubImage3D)0;
PFN::glCompressedTextureSubImage1D glCompressedTextureSubImage1D = (PFN::glCompressedTextureSubImage1D)0;
PFN::glCompressedTextureSubImage2D glCompressedTextureSubImage2D = (PFN::glCompressedTextureSubImage2D)0;
PFN::glCompressedTextureSubImage3D glCompressedTextureSubImage3D = (PFN::glCompressedTextureSubImage3D)0;
PFN::glCopyTextureSubImage1D glCopyTextureSubImage1D = (PFN::glCopyTextureSubImage1D)0;
PFN::glCopyTextureSubImage2D glCopyTextureSubImage2D = (PFN::glCopyTextureSubImage2D)0;
PFN::glCopyTextureSubImage3D glCopyTextureSubImage3D = (PFN::glCopyTextureSubImage3D)0;
PFN::glTextureParameterf glTextureParameterf = (PFN::glTextureParameterf)0;
PFN::glTextureParameterfv glTextureParameterfv = (PFN::glTextureParameterfv)0;
PFN::glTextureParameteri glTextureParameteri = (PFN::glTextureParameteri)0;
PFN::glTextureParameterIiv glTextureParameterIiv = (PFN::glTextureParameterIiv)0;
PFN::glTextureParameterIuiv glTextureParameterIuiv = (PFN::glTextureParameterIuiv)0;
PFN::glTextureParameteriv glTextureParameteriv = (PFN::glTextureParameteriv)0;
PFN::glGenerateTextureMipmap glGenerateTextureMipmap = (PFN::glGenerateTextureMipmap)0;
PFN::glBindTextureUnit glBindTextureUnit = (PFN::glBindTextureUnit)0;
PFN::glGetTextureImage glGetTextureImage = (PFN::glGetTextureImage)0;
PFN::glGetCompressedTextureImage glGetCompressedTextureImage = (PFN::glGetCompressedTextureImage)0;
PFN::glGetTextureLevelParameterfv glGetTextureLevelParameterfv = (PFN::glGetTextureLevelParameterfv)0;
PFN::glGetTextureLevelParameteriv glGetTextureLevelParameteriv = (PFN::glGetTextureLevelParameteriv)0;
PFN::glGetTextureParameterfv glGetTextureParameterfv = (PFN::glGetTextureParameterfv)0;
PFN::glGetTextureParameterIiv glGetTextureParameterIiv = (PFN::glGetTextureParameterIiv)0;
PFN::glGetTextureParameterIuiv glGetTextureParameterIuiv = (PFN::glGetTextureParameterIuiv)0;
PFN::glGetTextureParameteriv glGetTextureParameteriv = (PFN::glGetTextureParameteriv)0;
PFN::glCreateVertexArrays glCreateVertexArrays = (PFN::glCreateVertexArrays)0;
PFN::glDisableVertexArrayAttrib glDisableVertexArrayAttrib = (PFN::glDisableVertexArrayAttrib)0;
PFN::glEnableVertexArrayAttrib glEnableVertexArrayAttrib = (PFN::glEnableVertexArrayAttrib)0;
PFN::glVertexArrayElementBuffer glVertexArrayElementBuffer = (PFN::glVertexArrayElementBuffer)0;
PFN::glVertexArrayVertexBuffer glVertexArrayVertexBuffer = (PFN::glVertexArrayVertexBuffer)0;
PFN::glVertexArrayVertexBuffers glVertexArrayVertexBuffers = (PFN::glVertexArrayVertexBuffers)0;
PFN::glVertexArrayAttribBinding glVertexArrayAttribBinding = (PFN::glVertexArrayAttribBinding)0;
PFN::glVertexArrayAttribFormat glVertexArrayAttribFormat = (PFN::glVertexArrayAttribFormat)0;
PFN::glVertexArrayAttribIFormat glVertexArrayAttribIFormat = (PFN::glVertexArrayAttribIFormat)0;
PFN::glVertexArrayAttribLFormat glVertexArrayAttribLFormat = (PFN::glVertexArrayAttribLFormat)0;
PFN::glVertexArrayBindingDivisor glVertexArrayBindingDivisor = (PFN::glVertexArrayBindingDivisor)0;
PFN::glGetVertexArrayiv glGetVertexArrayiv = (PFN::glGetVertexArrayiv)0;
PFN::glGetVertexArrayIndexediv glGetVertexArrayIndexediv = (PFN::glGetVertexArrayIndexediv)0;
PFN::glGetVertexArrayIndexed64iv glGetVertexArrayIndexed64iv = (PFN::glGetVertexArrayIndexed64iv)0;
PFN::glCreateSamplers glCreateSamplers = (PFN::glCreateSamplers)0;
PFN::glCreateProgramPipelines glCreateProgramPipelines = (PFN::glCreateProgramPipelines)0;
PFN::glCreateQueries glCreateQueries = (PFN::glCreateQueries)0;
PFN::glGetQueryBufferObjecti64v glGetQueryBufferObjecti64v = (PFN::glGetQueryBufferObjecti64v)0;
PFN::glGetQueryBufferObjectiv glGetQueryBufferObjectiv = (PFN::glGetQueryBufferObjectiv)0;
PFN::glGetQueryBufferObjectui64v glGetQueryBufferObjectui64v = (PFN::glGetQueryBufferObjectui64v)0;
PFN::glGetQueryBufferObjectuiv glGetQueryBufferObjectuiv = (PFN::glGetQueryBufferObjectuiv)0;
PFN::glMemoryBarrierByRegion glMemoryBarrierByRegion = (PFN::glMemoryBarrierByRegion)0;
PFN::glGetTextureSubImage glGetTextureSubImage = (PFN::glGetTextureSubImage)0;
PFN::glGetCompressedTextureSubImage glGetCompressedTextureSubImage = (PFN::glGetCompressedTextureSubImage)0;
PFN::glGetGraphicsResetStatus glGetGraphicsResetStatus = (PFN::glGetGraphicsResetStatus)0;
PFN::glGetnCompressedTexImage glGetnCompressedTexImage = (PFN::glGetnCompressedTexImage)0;
PFN::glGetnTexImage glGetnTexImage = (PFN::glGetnTexImage)0;
PFN::glGetnUniformdv glGetnUniformdv = (PFN::glGetnUniformdv)0;
PFN::glGetnUniformfv glGetnUniformfv = (PFN::glGetnUniformfv)0;
PFN::glGetnUniformiv glGetnUniformiv = (PFN::glGetnUniformiv)0;
PFN::glGetnUniformuiv glGetnUniformuiv = (PFN::glGetnUniformuiv)0;
PFN::glReadnPixels glReadnPixels = (PFN::glReadnPixels)0;
PFN::glTextureBarrier glTextureBarrier = (PFN::glTextureBarrier)0;

bool _GL_VERSION_4_6 = false;
const bool& GL_VERSION_4_6 = _GL_VERSION_4_6;
PFN::glSpecializeShader glSpecializeShader = (PFN::glSpecializeShader)0;
PFN::glMultiDrawArraysIndirectCount glMultiDrawArraysIndirectCount = (PFN::glMultiDrawArraysIndirectCount)0;
PFN::glMultiDrawElementsIndirectCount glMultiDrawElementsIndirectCount = (PFN::glMultiDrawElementsIndirectCount)0;
PFN::glPolygonOffsetClamp glPolygonOffsetClamp = (PFN::glPolygonOffsetClamp)0;

}

namespace GLARB {

// GL_ARB_ES2_compatibility
bool _GL_ARB_ES2_compatibility = false;
const bool& GL_ARB_ES2_compatibility = _GL_ARB_ES2_compatibility;

// GL_ARB_ES3_1_compatibility
bool _GL_ARB_ES3_1_compatibility = false;
const bool& GL_ARB_ES3_1_compatibility = _GL_ARB_ES3_1_compatibility;

// GL_ARB_ES3_2_compatibility
bool _GL_ARB_ES3_2_compatibility = false;
const bool& GL_ARB_ES3_2_compatibility = _GL_ARB_ES3_2_compatibility;
PFN::glPrimitiveBoundingBoxARB glPrimitiveBoundingBoxARB = (PFN::glPrimitiveBoundingBoxARB)0;

// GL_ARB_ES3_compatibility
bool _GL_ARB_ES3_compatibility = false;
const bool& GL_ARB_ES3_compatibility = _GL_ARB_ES3_compatibility;

// GL_ARB_arrays_of_arrays
bool _GL_ARB_arrays_of_arrays = false;
const bool& GL_ARB_arrays_of_arrays = _GL_ARB_arrays_of_arrays;

// GL_ARB_base_instance
bool _GL_ARB_base_instance = false;
const bool& GL_ARB_base_instance = _GL_ARB_base_instance;

// GL_ARB_bindless_texture
bool _GL_ARB_bindless_texture = false;
const bool& GL_ARB_bindless_texture = _GL_ARB_bindless_texture;
PFN::glGetTextureHandleARB glGetTextureHandleARB = (PFN::glGetTextureHandleARB)0;
PFN::glGetTextureSamplerHandleARB glGetTextureSamplerHandleARB = (PFN::glGetTextureSamplerHandleARB)0;
PFN::glMakeTextureHandleResidentARB glMakeTextureHandleResidentARB = (PFN::glMakeTextureHandleResidentARB)0;
PFN::glMakeTextureHandleNonResidentARB glMakeTextureHandleNonResidentARB = (PFN::glMakeTextureHandleNonResidentARB)0;
PFN::glGetImageHandleARB glGetImageHandleARB = (PFN::glGetImageHandleARB)0;
PFN::glMakeImageHandleResidentARB glMakeImageHandleResidentARB = (PFN::glMakeImageHandleResidentARB)0;
PFN::glMakeImageHandleNonResidentARB glMakeImageHandleNonResidentARB = (PFN::glMakeImageHandleNonResidentARB)0;
PFN::glUniformHandleui64ARB glUniformHandleui64ARB = (PFN::glUniformHandleui64ARB)0;
PFN::glUniformHandleui64vARB glUniformHandleui64vARB = (PFN::glUniformHandleui64vARB)0;
PFN::glProgramUniformHandleui64ARB glProgramUniformHandleui64ARB = (PFN::glProgramUniformHandleui64ARB)0;
PFN::glProgramUniformHandleui64vARB glProgramUniformHandleui64vARB = (PFN::glProgramUniformHandleui64vARB)0;
PFN::glIsTextureHandleResidentARB glIsTextureHandleResidentARB = (PFN::glIsTextureHandleResidentARB)0;
PFN::glIsImageHandleResidentARB glIsImageHandleResidentARB = (PFN::glIsImageHandleResidentARB)0;
PFN::glVertexAttribL1ui64ARB glVertexAttribL1ui64ARB = (PFN::glVertexAttribL1ui64ARB)0;
PFN::glVertexAttribL1ui64vARB glVertexAttribL1ui64vARB = (PFN::glVertexAttribL1ui64vARB)0;
PFN::glGetVertexAttribLui64vARB glGetVertexAttribLui64vARB = (PFN::glGetVertexAttribLui64vARB)0;

// GL_ARB_blend_func_extended
bool _GL_ARB_blend_func_extended = false;
const bool& GL_ARB_blend_func_extended = _GL_ARB_blend_func_extended;

// GL_ARB_buffer_storage
bool _GL_ARB_buffer_storage = false;
const bool& GL_ARB_buffer_storage = _GL_ARB_buffer_storage;

// GL_ARB_cl_event
bool _GL_ARB_cl_event = false;
const bool& GL_ARB_cl_event = _GL_ARB_cl_event;
PFN::glCreateSyncFromCLeventARB glCreateSyncFromCLeventARB = (PFN::glCreateSyncFromCLeventARB)0;

// GL_ARB_cl_event

// GL_ARB_clear_buffer_object
bool _GL_ARB_clear_buffer_object = false;
const bool& GL_ARB_clear_buffer_object = _GL_ARB_clear_buffer_object;

// GL_ARB_clear_texture
bool _GL_ARB_clear_texture = false;
const bool& GL_ARB_clear_texture = _GL_ARB_clear_texture;

// GL_ARB_clip_control
bool _GL_ARB_clip_control = false;
const bool& GL_ARB_clip_control = _GL_ARB_clip_control;

// GL_ARB_compressed_texture_pixel_storage
bool _GL_ARB_compressed_texture_pixel_storage = false;
const bool& GL_ARB_compressed_texture_pixel_storage = _GL_ARB_compressed_texture_pixel_storage;

// GL_ARB_compute_shader
bool _GL_ARB_compute_shader = false;
const bool& GL_ARB_compute_shader = _GL_ARB_compute_shader;

// GL_ARB_compute_variable_group_size
bool _GL_ARB_compute_variable_group_size = false;
const bool& GL_ARB_compute_variable_group_size = _GL_ARB_compute_variable_group_size;
PFN::glDispatchComputeGroupSizeARB glDispatchComputeGroupSizeARB = (PFN::glDispatchComputeGroupSizeARB)0;

// GL_ARB_conditional_render_inverted
bool _GL_ARB_conditional_render_inverted = false;
const bool& GL_ARB_conditional_render_inverted = _GL_ARB_conditional_render_inverted;

// GL_ARB_conservative_depth
bool _GL_ARB_conservative_depth = false;
const bool& GL_ARB_conservative_depth = _GL_ARB_conservative_depth;

// GL_ARB_copy_buffer
bool _GL_ARB_copy_buffer = false;
const bool& GL_ARB_copy_buffer = _GL_ARB_copy_buffer;

// GL_ARB_copy_image
bool _GL_ARB_copy_image = false;
const bool& GL_ARB_copy_image = _GL_ARB_copy_image;

// GL_ARB_cull_distance
bool _GL_ARB_cull_distance = false;
const bool& GL_ARB_cull_distance = _GL_ARB_cull_distance;

// GL_ARB_debug_output
bool _GL_ARB_debug_output = false;
const bool& GL_ARB_debug_output = _GL_ARB_debug_output;
PFN::glDebugMessageControlARB glDebugMessageControlARB = (PFN::glDebugMessageControlARB)0;
PFN::glDebugMessageInsertARB glDebugMessageInsertARB = (PFN::glDebugMessageInsertARB)0;
PFN::glDebugMessageCallbackARB glDebugMessageCallbackARB = (PFN::glDebugMessageCallbackARB)0;
PFN::glGetDebugMessageLogARB glGetDebugMessageLogARB = (PFN::glGetDebugMessageLogARB)0;

// GL_ARB_depth_buffer_float
bool _GL_ARB_depth_buffer_float = false;
const bool& GL_ARB_depth_buffer_float = _GL_ARB_depth_buffer_float;

// GL_ARB_depth_clamp
bool _GL_ARB_depth_clamp = false;
const bool& GL_ARB_depth_clamp = _GL_ARB_depth_clamp;

// GL_ARB_derivative_control
bool _GL_ARB_derivative_control = false;
const bool& GL_ARB_derivative_control = _GL_ARB_derivative_control;

// GL_ARB_direct_state_access
bool _GL_ARB_direct_state_access = false;
const bool& GL_ARB_direct_state_access = _GL_ARB_direct_state_access;

// GL_ARB_draw_buffers_blend
bool _GL_ARB_draw_buffers_blend = false;
const bool& GL_ARB_draw_buffers_blend = _GL_ARB_draw_buffers_blend;
PFN::glBlendEquationiARB glBlendEquationiARB = (PFN::glBlendEquationiARB)0;
PFN::glBlendEquationSeparateiARB glBlendEquationSeparateiARB = (PFN::glBlendEquationSeparateiARB)0;
PFN::glBlendFunciARB glBlendFunciARB = (PFN::glBlendFunciARB)0;
PFN::glBlendFuncSeparateiARB glBlendFuncSeparateiARB = (PFN::glBlendFuncSeparateiARB)0;

// GL_ARB_draw_elements_base_vertex
bool _GL_ARB_draw_elements_base_vertex = false;
const bool& GL_ARB_draw_elements_base_vertex = _GL_ARB_draw_elements_base_vertex;

// GL_ARB_draw_indirect
bool _GL_ARB_draw_indirect = false;
const bool& GL_ARB_draw_indirect = _GL_ARB_draw_indirect;

// GL_ARB_draw_instanced
bool _GL_ARB_draw_instanced = false;
const bool& GL_ARB_draw_instanced = _GL_ARB_draw_instanced;
PFN::glDrawArraysInstancedARB glDrawArraysInstancedARB = (PFN::glDrawArraysInstancedARB)0;
PFN::glDrawElementsInstancedARB glDrawElementsInstancedARB = (PFN::glDrawElementsInstancedARB)0;

// GL_ARB_enhanced_layouts
bool _GL_ARB_enhanced_layouts = false;
const bool& GL_ARB_enhanced_layouts = _GL_ARB_enhanced_layouts;

// GL_ARB_explicit_attrib_location
bool _GL_ARB_explicit_attrib_location = false;
const bool& GL_ARB_explicit_attrib_location = _GL_ARB_explicit_attrib_location;

// GL_ARB_explicit_uniform_location
bool _GL_ARB_explicit_uniform_location = false;
const bool& GL_ARB_explicit_uniform_location = _GL_ARB_explicit_uniform_location;

// GL_ARB_fragment_coord_conventions
bool _GL_ARB_fragment_coord_conventions = false;
const bool& GL_ARB_fragment_coord_conventions = _GL_ARB_fragment_coord_conventions;

// GL_ARB_fragment_layer_viewport
bool _GL_ARB_fragment_layer_viewport = false;
const bool& GL_ARB_fragment_layer_viewport = _GL_ARB_fragment_layer_viewport;

// GL_ARB_fragment_shader_interlock
bool _GL_ARB_fragment_shader_interlock = false;
const bool& GL_ARB_fragment_shader_interlock = _GL_ARB_fragment_shader_interlock;

// GL_ARB_framebuffer_no_attachments
bool _GL_ARB_framebuffer_no_attachments = false;
const bool& GL_ARB_framebuffer_no_attachments = _GL_ARB_framebuffer_no_attachments;

// GL_ARB_framebuffer_object
bool _GL_ARB_framebuffer_object = false;
const bool& GL_ARB_framebuffer_object = _GL_ARB_framebuffer_object;

// GL_ARB_framebuffer_sRGB
bool _GL_ARB_framebuffer_sRGB = false;
const bool& GL_ARB_framebuffer_sRGB = _GL_ARB_framebuffer_sRGB;

// GL_ARB_geometry_shader4
bool _GL_ARB_geometry_shader4 = false;
const bool& GL_ARB_geometry_shader4 = _GL_ARB_geometry_shader4;
PFN::glProgramParameteriARB glProgramParameteriARB = (PFN::glProgramParameteriARB)0;
PFN::glFramebufferTextureARB glFramebufferTextureARB = (PFN::glFramebufferTextureARB)0;
PFN::glFramebufferTextureLayerARB glFramebufferTextureLayerARB = (PFN::glFramebufferTextureLayerARB)0;
PFN::glFramebufferTextureFaceARB glFramebufferTextureFaceARB = (PFN::glFramebufferTextureFaceARB)0;

// GL_ARB_get_program_binary
bool _GL_ARB_get_program_binary = false;
const bool& GL_ARB_get_program_binary = _GL_ARB_get_program_binary;

// GL_ARB_get_texture_sub_image
bool _GL_ARB_get_texture_sub_image = false;
const bool& GL_ARB_get_texture_sub_image = _GL_ARB_get_texture_sub_image;

// GL_ARB_gl_spirv
bool _GL_ARB_gl_spirv = false;
const bool& GL_ARB_gl_spirv = _GL_ARB_gl_spirv;
PFN::glSpecializeShaderARB glSpecializeShaderARB = (PFN::glSpecializeShaderARB)0;

// GL_ARB_gpu_shader5
bool _GL_ARB_gpu_shader5 = false;
const bool& GL_ARB_gpu_shader5 = _GL_ARB_gpu_shader5;

// GL_ARB_gpu_shader_fp64
bool _GL_ARB_gpu_shader_fp64 = false;
const bool& GL_ARB_gpu_shader_fp64 = _GL_ARB_gpu_shader_fp64;

// GL_ARB_gpu_shader_int64
bool _GL_ARB_gpu_shader_int64 = false;
const bool& GL_ARB_gpu_shader_int64 = _GL_ARB_gpu_shader_int64;
PFN::glUniform1i64ARB glUniform1i64ARB = (PFN::glUniform1i64ARB)0;
PFN::glUniform2i64ARB glUniform2i64ARB = (PFN::glUniform2i64ARB)0;
PFN::glUniform3i64ARB glUniform3i64ARB = (PFN::glUniform3i64ARB)0;
PFN::glUniform4i64ARB glUniform4i64ARB = (PFN::glUniform4i64ARB)0;
PFN::glUniform1i64vARB glUniform1i64vARB = (PFN::glUniform1i64vARB)0;
PFN::glUniform2i64vARB glUniform2i64vARB = (PFN::glUniform2i64vARB)0;
PFN::glUniform3i64vARB glUniform3i64vARB = (PFN::glUniform3i64vARB)0;
PFN::glUniform4i64vARB glUniform4i64vARB = (PFN::glUniform4i64vARB)0;
PFN::glUniform1ui64ARB glUniform1ui64ARB = (PFN::glUniform1ui64ARB)0;
PFN::glUniform2ui64ARB glUniform2ui64ARB = (PFN::glUniform2ui64ARB)0;
PFN::glUniform3ui64ARB glUniform3ui64ARB = (PFN::glUniform3ui64ARB)0;
PFN::glUniform4ui64ARB glUniform4ui64ARB = (PFN::glUniform4ui64ARB)0;
PFN::glUniform1ui64vARB glUniform1ui64vARB = (PFN::glUniform1ui64vARB)0;
PFN::glUniform2ui64vARB glUniform2ui64vARB = (PFN::glUniform2ui64vARB)0;
PFN::glUniform3ui64vARB glUniform3ui64vARB = (PFN::glUniform3ui64vARB)0;
PFN::glUniform4ui64vARB glUniform4ui64vARB = (PFN::glUniform4ui64vARB)0;
PFN::glGetUniformi64vARB glGetUniformi64vARB = (PFN::glGetUniformi64vARB)0;
PFN::glGetUniformui64vARB glGetUniformui64vARB = (PFN::glGetUniformui64vARB)0;
PFN::glGetnUniformi64vARB glGetnUniformi64vARB = (PFN::glGetnUniformi64vARB)0;
PFN::glGetnUniformui64vARB glGetnUniformui64vARB = (PFN::glGetnUniformui64vARB)0;
PFN::glProgramUniform1i64ARB glProgramUniform1i64ARB = (PFN::glProgramUniform1i64ARB)0;
PFN::glProgramUniform2i64ARB glProgramUniform2i64ARB = (PFN::glProgramUniform2i64ARB)0;
PFN::glProgramUniform3i64ARB glProgramUniform3i64ARB = (PFN::glProgramUniform3i64ARB)0;
PFN::glProgramUniform4i64ARB glProgramUniform4i64ARB = (PFN::glProgramUniform4i64ARB)0;
PFN::glProgramUniform1i64vARB glProgramUniform1i64vARB = (PFN::glProgramUniform1i64vARB)0;
PFN::glProgramUniform2i64vARB glProgramUniform2i64vARB = (PFN::glProgramUniform2i64vARB)0;
PFN::glProgramUniform3i64vARB glProgramUniform3i64vARB = (PFN::glProgramUniform3i64vARB)0;
PFN::glProgramUniform4i64vARB glProgramUniform4i64vARB = (PFN::glProgramUniform4i64vARB)0;
PFN::glProgramUniform1ui64ARB glProgramUniform1ui64ARB = (PFN::glProgramUniform1ui64ARB)0;
PFN::glProgramUniform2ui64ARB glProgramUniform2ui64ARB = (PFN::glProgramUniform2ui64ARB)0;
PFN::glProgramUniform3ui64ARB glProgramUniform3ui64ARB = (PFN::glProgramUniform3ui64ARB)0;
PFN::glProgramUniform4ui64ARB glProgramUniform4ui64ARB = (PFN::glProgramUniform4ui64ARB)0;
PFN::glProgramUniform1ui64vARB glProgramUniform1ui64vARB = (PFN::glProgramUniform1ui64vARB)0;
PFN::glProgramUniform2ui64vARB glProgramUniform2ui64vARB = (PFN::glProgramUniform2ui64vARB)0;
PFN::glProgramUniform3ui64vARB glProgramUniform3ui64vARB = (PFN::glProgramUniform3ui64vARB)0;
PFN::glProgramUniform4ui64vARB glProgramUniform4ui64vARB = (PFN::glProgramUniform4ui64vARB)0;

// GL_ARB_half_float_vertex
bool _GL_ARB_half_float_vertex = false;
const bool& GL_ARB_half_float_vertex = _GL_ARB_half_float_vertex;

// GL_ARB_imaging
bool _GL_ARB_imaging = false;
const bool& GL_ARB_imaging = _GL_ARB_imaging;

// GL_ARB_indirect_parameters
bool _GL_ARB_indirect_parameters = false;
const bool& GL_ARB_indirect_parameters = _GL_ARB_indirect_parameters;
PFN::glMultiDrawArraysIndirectCountARB glMultiDrawArraysIndirectCountARB = (PFN::glMultiDrawArraysIndirectCountARB)0;
PFN::glMultiDrawElementsIndirectCountARB glMultiDrawElementsIndirectCountARB = (PFN::glMultiDrawElementsIndirectCountARB)0;

// GL_ARB_instanced_arrays
bool _GL_ARB_instanced_arrays = false;
const bool& GL_ARB_instanced_arrays = _GL_ARB_instanced_arrays;
PFN::glVertexAttribDivisorARB glVertexAttribDivisorARB = (PFN::glVertexAttribDivisorARB)0;

// GL_ARB_internalformat_query
bool _GL_ARB_internalformat_query = false;
const bool& GL_ARB_internalformat_query = _GL_ARB_internalformat_query;

// GL_ARB_internalformat_query2
bool _GL_ARB_internalformat_query2 = false;
const bool& GL_ARB_internalformat_query2 = _GL_ARB_internalformat_query2;

// GL_ARB_invalidate_subdata
bool _GL_ARB_invalidate_subdata = false;
const bool& GL_ARB_invalidate_subdata = _GL_ARB_invalidate_subdata;

// GL_ARB_map_buffer_alignment
bool _GL_ARB_map_buffer_alignment = false;
const bool& GL_ARB_map_buffer_alignment = _GL_ARB_map_buffer_alignment;

// GL_ARB_map_buffer_range
bool _GL_ARB_map_buffer_range = false;
const bool& GL_ARB_map_buffer_range = _GL_ARB_map_buffer_range;

// GL_ARB_multi_bind
bool _GL_ARB_multi_bind = false;
const bool& GL_ARB_multi_bind = _GL_ARB_multi_bind;

// GL_ARB_multi_draw_indirect
bool _GL_ARB_multi_draw_indirect = false;
const bool& GL_ARB_multi_draw_indirect = _GL_ARB_multi_draw_indirect;

// GL_ARB_occlusion_query2
bool _GL_ARB_occlusion_query2 = false;
const bool& GL_ARB_occlusion_query2 = _GL_ARB_occlusion_query2;

// GL_ARB_parallel_shader_compile
bool _GL_ARB_parallel_shader_compile = false;
const bool& GL_ARB_parallel_shader_compile = _GL_ARB_parallel_shader_compile;
PFN::glMaxShaderCompilerThreadsARB glMaxShaderCompilerThreadsARB = (PFN::glMaxShaderCompilerThreadsARB)0;

// GL_ARB_pipeline_statistics_query
bool _GL_ARB_pipeline_statistics_query = false;
const bool& GL_ARB_pipeline_statistics_query = _GL_ARB_pipeline_statistics_query;

// GL_ARB_pixel_buffer_object
bool _GL_ARB_pixel_buffer_object = false;
const bool& GL_ARB_pixel_buffer_object = _GL_ARB_pixel_buffer_object;

// GL_ARB_polygon_offset_clamp
bool _GL_ARB_polygon_offset_clamp = false;
const bool& GL_ARB_polygon_offset_clamp = _GL_ARB_polygon_offset_clamp;

// GL_ARB_post_depth_coverage
bool _GL_ARB_post_depth_coverage = false;
const bool& GL_ARB_post_depth_coverage = _GL_ARB_post_depth_coverage;

// GL_ARB_program_interface_query
bool _GL_ARB_program_interface_query = false;
const bool& GL_ARB_program_interface_query = _GL_ARB_program_interface_query;

// GL_ARB_provoking_vertex
bool _GL_ARB_provoking_vertex = false;
const bool& GL_ARB_provoking_vertex = _GL_ARB_provoking_vertex;

// GL_ARB_query_buffer_object
bool _GL_ARB_query_buffer_object = false;
const bool& GL_ARB_query_buffer_object = _GL_ARB_query_buffer_object;

// GL_ARB_robust_buffer_access_behavior
bool _GL_ARB_robust_buffer_access_behavior = false;
const bool& GL_ARB_robust_buffer_access_behavior = _GL_ARB_robust_buffer_access_behavior;

// GL_ARB_robustness
bool _GL_ARB_robustness = false;
const bool& GL_ARB_robustness = _GL_ARB_robustness;
PFN::glGetGraphicsResetStatusARB glGetGraphicsResetStatusARB = (PFN::glGetGraphicsResetStatusARB)0;
PFN::glGetnTexImageARB glGetnTexImageARB = (PFN::glGetnTexImageARB)0;
PFN::glReadnPixelsARB glReadnPixelsARB = (PFN::glReadnPixelsARB)0;
PFN::glGetnCompressedTexImageARB glGetnCompressedTexImageARB = (PFN::glGetnCompressedTexImageARB)0;
PFN::glGetnUniformfvARB glGetnUniformfvARB = (PFN::glGetnUniformfvARB)0;
PFN::glGetnUniformivARB glGetnUniformivARB = (PFN::glGetnUniformivARB)0;
PFN::glGetnUniformuivARB glGetnUniformuivARB = (PFN::glGetnUniformuivARB)0;
PFN::glGetnUniformdvARB glGetnUniformdvARB = (PFN::glGetnUniformdvARB)0;

// GL_ARB_robustness_isolation
bool _GL_ARB_robustness_isolation = false;
const bool& GL_ARB_robustness_isolation = _GL_ARB_robustness_isolation;

// GL_ARB_sample_locations
bool _GL_ARB_sample_locations = false;
const bool& GL_ARB_sample_locations = _GL_ARB_sample_locations;
PFN::glFramebufferSampleLocationsfvARB glFramebufferSampleLocationsfvARB = (PFN::glFramebufferSampleLocationsfvARB)0;
PFN::glNamedFramebufferSampleLocationsfvARB glNamedFramebufferSampleLocationsfvARB = (PFN::glNamedFramebufferSampleLocationsfvARB)0;
PFN::glEvaluateDepthValuesARB glEvaluateDepthValuesARB = (PFN::glEvaluateDepthValuesARB)0;

// GL_ARB_sample_shading
bool _GL_ARB_sample_shading = false;
const bool& GL_ARB_sample_shading = _GL_ARB_sample_shading;
PFN::glMinSampleShadingARB glMinSampleShadingARB = (PFN::glMinSampleShadingARB)0;

// GL_ARB_sampler_objects
bool _GL_ARB_sampler_objects = false;
const bool& GL_ARB_sampler_objects = _GL_ARB_sampler_objects;

// GL_ARB_seamless_cube_map
bool _GL_ARB_seamless_cube_map = false;
const bool& GL_ARB_seamless_cube_map = _GL_ARB_seamless_cube_map;

// GL_ARB_seamless_cubemap_per_texture
bool _GL_ARB_seamless_cubemap_per_texture = false;
const bool& GL_ARB_seamless_cubemap_per_texture = _GL_ARB_seamless_cubemap_per_texture;

// GL_ARB_separate_shader_objects
bool _GL_ARB_separate_shader_objects = false;
const bool& GL_ARB_separate_shader_objects = _GL_ARB_separate_shader_objects;

// GL_ARB_shader_atomic_counter_ops
bool _GL_ARB_shader_atomic_counter_ops = false;
const bool& GL_ARB_shader_atomic_counter_ops = _GL_ARB_shader_atomic_counter_ops;

// GL_ARB_shader_atomic_counters
bool _GL_ARB_shader_atomic_counters = false;
const bool& GL_ARB_shader_atomic_counters = _GL_ARB_shader_atomic_counters;

// GL_ARB_shader_ballot
bool _GL_ARB_shader_ballot = false;
const bool& GL_ARB_shader_ballot = _GL_ARB_shader_ballot;

// GL_ARB_shader_bit_encoding
bool _GL_ARB_shader_bit_encoding = false;
const bool& GL_ARB_shader_bit_encoding = _GL_ARB_shader_bit_encoding;

// GL_ARB_shader_clock
bool _GL_ARB_shader_clock = false;
const bool& GL_ARB_shader_clock = _GL_ARB_shader_clock;

// GL_ARB_shader_draw_parameters
bool _GL_ARB_shader_draw_parameters = false;
const bool& GL_ARB_shader_draw_parameters = _GL_ARB_shader_draw_parameters;

// GL_ARB_shader_group_vote
bool _GL_ARB_shader_group_vote = false;
const bool& GL_ARB_shader_group_vote = _GL_ARB_shader_group_vote;

// GL_ARB_shader_image_load_store
bool _GL_ARB_shader_image_load_store = false;
const bool& GL_ARB_shader_image_load_store = _GL_ARB_shader_image_load_store;

// GL_ARB_shader_image_size
bool _GL_ARB_shader_image_size = false;
const bool& GL_ARB_shader_image_size = _GL_ARB_shader_image_size;

// GL_ARB_shader_precision
bool _GL_ARB_shader_precision = false;
const bool& GL_ARB_shader_precision = _GL_ARB_shader_precision;

// GL_ARB_shader_stencil_export
bool _GL_ARB_shader_stencil_export = false;
const bool& GL_ARB_shader_stencil_export = _GL_ARB_shader_stencil_export;

// GL_ARB_shader_storage_buffer_object
bool _GL_ARB_shader_storage_buffer_object = false;
const bool& GL_ARB_shader_storage_buffer_object = _GL_ARB_shader_storage_buffer_object;

// GL_ARB_shader_subroutine
bool _GL_ARB_shader_subroutine = false;
const bool& GL_ARB_shader_subroutine = _GL_ARB_shader_subroutine;

// GL_ARB_shader_texture_image_samples
bool _GL_ARB_shader_texture_image_samples = false;
const bool& GL_ARB_shader_texture_image_samples = _GL_ARB_shader_texture_image_samples;

// GL_ARB_shader_viewport_layer_array
bool _GL_ARB_shader_viewport_layer_array = false;
const bool& GL_ARB_shader_viewport_layer_array = _GL_ARB_shader_viewport_layer_array;

// GL_ARB_shading_language_420pack
bool _GL_ARB_shading_language_420pack = false;
const bool& GL_ARB_shading_language_420pack = _GL_ARB_shading_language_420pack;

// GL_ARB_shading_language_include
bool _GL_ARB_shading_language_include = false;
const bool& GL_ARB_shading_language_include = _GL_ARB_shading_language_include;
PFN::glNamedStringARB glNamedStringARB = (PFN::glNamedStringARB)0;
PFN::glDeleteNamedStringARB glDeleteNamedStringARB = (PFN::glDeleteNamedStringARB)0;
PFN::glCompileShaderIncludeARB glCompileShaderIncludeARB = (PFN::glCompileShaderIncludeARB)0;
PFN::glIsNamedStringARB glIsNamedStringARB = (PFN::glIsNamedStringARB)0;
PFN::glGetNamedStringARB glGetNamedStringARB = (PFN::glGetNamedStringARB)0;
PFN::glGetNamedStringivARB glGetNamedStringivARB = (PFN::glGetNamedStringivARB)0;

// GL_ARB_shading_language_packing
bool _GL_ARB_shading_language_packing = false;
const bool& GL_ARB_shading_language_packing = _GL_ARB_shading_language_packing;

// GL_ARB_sparse_buffer
bool _GL_ARB_sparse_buffer = false;
const bool& GL_ARB_sparse_buffer = _GL_ARB_sparse_buffer;
PFN::glBufferPageCommitmentARB glBufferPageCommitmentARB = (PFN::glBufferPageCommitmentARB)0;
PFN::glNamedBufferPageCommitmentEXT glNamedBufferPageCommitmentEXT = (PFN::glNamedBufferPageCommitmentEXT)0;
PFN::glNamedBufferPageCommitmentARB glNamedBufferPageCommitmentARB = (PFN::glNamedBufferPageCommitmentARB)0;

// GL_ARB_sparse_texture
bool _GL_ARB_sparse_texture = false;
const bool& GL_ARB_sparse_texture = _GL_ARB_sparse_texture;
PFN::glTexPageCommitmentARB glTexPageCommitmentARB = (PFN::glTexPageCommitmentARB)0;

// GL_ARB_sparse_texture2
bool _GL_ARB_sparse_texture2 = false;
const bool& GL_ARB_sparse_texture2 = _GL_ARB_sparse_texture2;

// GL_ARB_sparse_texture_clamp
bool _GL_ARB_sparse_texture_clamp = false;
const bool& GL_ARB_sparse_texture_clamp = _GL_ARB_sparse_texture_clamp;

// GL_ARB_spirv_extensions
bool _GL_ARB_spirv_extensions = false;
const bool& GL_ARB_spirv_extensions = _GL_ARB_spirv_extensions;

// GL_ARB_stencil_texturing
bool _GL_ARB_stencil_texturing = false;
const bool& GL_ARB_stencil_texturing = _GL_ARB_stencil_texturing;

// GL_ARB_sync
bool _GL_ARB_sync = false;
const bool& GL_ARB_sync = _GL_ARB_sync;

// GL_ARB_tessellation_shader
bool _GL_ARB_tessellation_shader = false;
const bool& GL_ARB_tessellation_shader = _GL_ARB_tessellation_shader;

// GL_ARB_texture_barrier
bool _GL_ARB_texture_barrier = false;
const bool& GL_ARB_texture_barrier = _GL_ARB_texture_barrier;

// GL_ARB_texture_border_clamp
bool _GL_ARB_texture_border_clamp = false;
const bool& GL_ARB_texture_border_clamp = _GL_ARB_texture_border_clamp;

// GL_ARB_texture_buffer_object
bool _GL_ARB_texture_buffer_object = false;
const bool& GL_ARB_texture_buffer_object = _GL_ARB_texture_buffer_object;
PFN::glTexBufferARB glTexBufferARB = (PFN::glTexBufferARB)0;

// GL_ARB_texture_buffer_object_rgb32
bool _GL_ARB_texture_buffer_object_rgb32 = false;
const bool& GL_ARB_texture_buffer_object_rgb32 = _GL_ARB_texture_buffer_object_rgb32;

// GL_ARB_texture_buffer_range
bool _GL_ARB_texture_buffer_range = false;
const bool& GL_ARB_texture_buffer_range = _GL_ARB_texture_buffer_range;

// GL_ARB_texture_compression_bptc
bool _GL_ARB_texture_compression_bptc = false;
const bool& GL_ARB_texture_compression_bptc = _GL_ARB_texture_compression_bptc;

// GL_ARB_texture_compression_rgtc
bool _GL_ARB_texture_compression_rgtc = false;
const bool& GL_ARB_texture_compression_rgtc = _GL_ARB_texture_compression_rgtc;

// GL_ARB_texture_cube_map_array
bool _GL_ARB_texture_cube_map_array = false;
const bool& GL_ARB_texture_cube_map_array = _GL_ARB_texture_cube_map_array;

// GL_ARB_texture_filter_anisotropic
bool _GL_ARB_texture_filter_anisotropic = false;
const bool& GL_ARB_texture_filter_anisotropic = _GL_ARB_texture_filter_anisotropic;

// GL_ARB_texture_filter_minmax
bool _GL_ARB_texture_filter_minmax = false;
const bool& GL_ARB_texture_filter_minmax = _GL_ARB_texture_filter_minmax;

// GL_ARB_texture_gather
bool _GL_ARB_texture_gather = false;
const bool& GL_ARB_texture_gather = _GL_ARB_texture_gather;

// GL_ARB_texture_mirror_clamp_to_edge
bool _GL_ARB_texture_mirror_clamp_to_edge = false;
const bool& GL_ARB_texture_mirror_clamp_to_edge = _GL_ARB_texture_mirror_clamp_to_edge;

// GL_ARB_texture_mirrored_repeat
bool _GL_ARB_texture_mirrored_repeat = false;
const bool& GL_ARB_texture_mirrored_repeat = _GL_ARB_texture_mirrored_repeat;

// GL_ARB_texture_multisample
bool _GL_ARB_texture_multisample = false;
const bool& GL_ARB_texture_multisample = _GL_ARB_texture_multisample;

// GL_ARB_texture_non_power_of_two
bool _GL_ARB_texture_non_power_of_two = false;
const bool& GL_ARB_texture_non_power_of_two = _GL_ARB_texture_non_power_of_two;

// GL_ARB_texture_query_levels
bool _GL_ARB_texture_query_levels = false;
const bool& GL_ARB_texture_query_levels = _GL_ARB_texture_query_levels;

// GL_ARB_texture_query_lod
bool _GL_ARB_texture_query_lod = false;
const bool& GL_ARB_texture_query_lod = _GL_ARB_texture_query_lod;

// GL_ARB_texture_rg
bool _GL_ARB_texture_rg = false;
const bool& GL_ARB_texture_rg = _GL_ARB_texture_rg;

// GL_ARB_texture_rgb10_a2ui
bool _GL_ARB_texture_rgb10_a2ui = false;
const bool& GL_ARB_texture_rgb10_a2ui = _GL_ARB_texture_rgb10_a2ui;

// GL_ARB_texture_stencil8
bool _GL_ARB_texture_stencil8 = false;
const bool& GL_ARB_texture_stencil8 = _GL_ARB_texture_stencil8;

// GL_ARB_texture_storage
bool _GL_ARB_texture_storage = false;
const bool& GL_ARB_texture_storage = _GL_ARB_texture_storage;

// GL_ARB_texture_storage_multisample
bool _GL_ARB_texture_storage_multisample = false;
const bool& GL_ARB_texture_storage_multisample = _GL_ARB_texture_storage_multisample;

// GL_ARB_texture_swizzle
bool _GL_ARB_texture_swizzle = false;
const bool& GL_ARB_texture_swizzle = _GL_ARB_texture_swizzle;

// GL_ARB_texture_view
bool _GL_ARB_texture_view = false;
const bool& GL_ARB_texture_view = _GL_ARB_texture_view;

// GL_ARB_timer_query
bool _GL_ARB_timer_query = false;
const bool& GL_ARB_timer_query = _GL_ARB_timer_query;

// GL_ARB_transform_feedback2
bool _GL_ARB_transform_feedback2 = false;
const bool& GL_ARB_transform_feedback2 = _GL_ARB_transform_feedback2;

// GL_ARB_transform_feedback3
bool _GL_ARB_transform_feedback3 = false;
const bool& GL_ARB_transform_feedback3 = _GL_ARB_transform_feedback3;

// GL_ARB_transform_feedback_instanced
bool _GL_ARB_transform_feedback_instanced = false;
const bool& GL_ARB_transform_feedback_instanced = _GL_ARB_transform_feedback_instanced;

// GL_ARB_transform_feedback_overflow_query
bool _GL_ARB_transform_feedback_overflow_query = false;
const bool& GL_ARB_transform_feedback_overflow_query = _GL_ARB_transform_feedback_overflow_query;

// GL_ARB_uniform_buffer_object
bool _GL_ARB_uniform_buffer_object = false;
const bool& GL_ARB_uniform_buffer_object = _GL_ARB_uniform_buffer_object;

// GL_ARB_vertex_array_bgra
bool _GL_ARB_vertex_array_bgra = false;
const bool& GL_ARB_vertex_array_bgra = _GL_ARB_vertex_array_bgra;

// GL_ARB_vertex_array_object
bool _GL_ARB_vertex_array_object = false;
const bool& GL_ARB_vertex_array_object = _GL_ARB_vertex_array_object;

// GL_ARB_vertex_attrib_64bit
bool _GL_ARB_vertex_attrib_64bit = false;
const bool& GL_ARB_vertex_attrib_64bit = _GL_ARB_vertex_attrib_64bit;

// GL_ARB_vertex_attrib_binding
bool _GL_ARB_vertex_attrib_binding = false;
const bool& GL_ARB_vertex_attrib_binding = _GL_ARB_vertex_attrib_binding;

// GL_ARB_vertex_type_10f_11f_11f_rev
bool _GL_ARB_vertex_type_10f_11f_11f_rev = false;
const bool& GL_ARB_vertex_type_10f_11f_11f_rev = _GL_ARB_vertex_type_10f_11f_11f_rev;

// GL_ARB_vertex_type_2_10_10_10_rev
bool _GL_ARB_vertex_type_2_10_10_10_rev = false;
const bool& GL_ARB_vertex_type_2_10_10_10_rev = _GL_ARB_vertex_type_2_10_10_10_rev;

// GL_ARB_viewport_array
bool _GL_ARB_viewport_array = false;
const bool& GL_ARB_viewport_array = _GL_ARB_viewport_array;
PFN::glDepthRangeArraydvNV glDepthRangeArraydvNV = (PFN::glDepthRangeArraydvNV)0;
PFN::glDepthRangeIndexeddNV glDepthRangeIndexeddNV = (PFN::glDepthRangeIndexeddNV)0;

} // namespace GLARB

namespace GLKHR {

// GL_KHR_blend_equation_advanced
bool _GL_KHR_blend_equation_advanced = false;
const bool& GL_KHR_blend_equation_advanced = _GL_KHR_blend_equation_advanced;
PFN::glBlendBarrierKHR glBlendBarrierKHR = (PFN::glBlendBarrierKHR)0;

// GL_KHR_blend_equation_advanced_coherent
bool _GL_KHR_blend_equation_advanced_coherent = false;
const bool& GL_KHR_blend_equation_advanced_coherent = _GL_KHR_blend_equation_advanced_coherent;

// GL_KHR_context_flush_control
bool _GL_KHR_context_flush_control = false;
const bool& GL_KHR_context_flush_control = _GL_KHR_context_flush_control;

// GL_KHR_debug
bool _GL_KHR_debug = false;
const bool& GL_KHR_debug = _GL_KHR_debug;

// GL_KHR_no_error
bool _GL_KHR_no_error = false;
const bool& GL_KHR_no_error = _GL_KHR_no_error;

// GL_KHR_parallel_shader_compile
bool _GL_KHR_parallel_shader_compile = false;
const bool& GL_KHR_parallel_shader_compile = _GL_KHR_parallel_shader_compile;
PFN::glMaxShaderCompilerThreadsKHR glMaxShaderCompilerThreadsKHR = (PFN::glMaxShaderCompilerThreadsKHR)0;

// GL_KHR_robust_buffer_access_behavior
bool _GL_KHR_robust_buffer_access_behavior = false;
const bool& GL_KHR_robust_buffer_access_behavior = _GL_KHR_robust_buffer_access_behavior;

// GL_KHR_robustness
bool _GL_KHR_robustness = false;
const bool& GL_KHR_robustness = _GL_KHR_robustness;

// GL_KHR_shader_subgroup
bool _GL_KHR_shader_subgroup = false;
const bool& GL_KHR_shader_subgroup = _GL_KHR_shader_subgroup;

// GL_KHR_texture_compression_astc_hdr
bool _GL_KHR_texture_compression_astc_hdr = false;
const bool& GL_KHR_texture_compression_astc_hdr = _GL_KHR_texture_compression_astc_hdr;

// GL_KHR_texture_compression_astc_ldr
bool _GL_KHR_texture_compression_astc_ldr = false;
const bool& GL_KHR_texture_compression_astc_ldr = _GL_KHR_texture_compression_astc_ldr;

// GL_KHR_texture_compression_astc_sliced_3d
bool _GL_KHR_texture_compression_astc_sliced_3d = false;
const bool& GL_KHR_texture_compression_astc_sliced_3d = _GL_KHR_texture_compression_astc_sliced_3d;

} // namespace GLKHR


namespace GLAMD {

// GL_AMD_framebuffer_multisample_advanced
bool _GL_AMD_framebuffer_multisample_advanced = false;
const bool& GL_AMD_framebuffer_multisample_advanced = _GL_AMD_framebuffer_multisample_advanced;
PFN::glRenderbufferStorageMultisampleAdvancedAMD glRenderbufferStorageMultisampleAdvancedAMD = (PFN::glRenderbufferStorageMultisampleAdvancedAMD)0;
PFN::glNamedRenderbufferStorageMultisampleAdvancedAMD glNamedRenderbufferStorageMultisampleAdvancedAMD = (PFN::glNamedRenderbufferStorageMultisampleAdvancedAMD)0;

// GL_AMD_performance_monitor
bool _GL_AMD_performance_monitor = false;
const bool& GL_AMD_performance_monitor = _GL_AMD_performance_monitor;
PFN::glGetPerfMonitorGroupsAMD glGetPerfMonitorGroupsAMD = (PFN::glGetPerfMonitorGroupsAMD)0;
PFN::glGetPerfMonitorCountersAMD glGetPerfMonitorCountersAMD = (PFN::glGetPerfMonitorCountersAMD)0;
PFN::glGetPerfMonitorGroupStringAMD glGetPerfMonitorGroupStringAMD = (PFN::glGetPerfMonitorGroupStringAMD)0;
PFN::glGetPerfMonitorCounterStringAMD glGetPerfMonitorCounterStringAMD = (PFN::glGetPerfMonitorCounterStringAMD)0;
PFN::glGetPerfMonitorCounterInfoAMD glGetPerfMonitorCounterInfoAMD = (PFN::glGetPerfMonitorCounterInfoAMD)0;
PFN::glGenPerfMonitorsAMD glGenPerfMonitorsAMD = (PFN::glGenPerfMonitorsAMD)0;
PFN::glDeletePerfMonitorsAMD glDeletePerfMonitorsAMD = (PFN::glDeletePerfMonitorsAMD)0;
PFN::glSelectPerfMonitorCountersAMD glSelectPerfMonitorCountersAMD = (PFN::glSelectPerfMonitorCountersAMD)0;
PFN::glBeginPerfMonitorAMD glBeginPerfMonitorAMD = (PFN::glBeginPerfMonitorAMD)0;
PFN::glEndPerfMonitorAMD glEndPerfMonitorAMD = (PFN::glEndPerfMonitorAMD)0;
PFN::glGetPerfMonitorCounterDataAMD glGetPerfMonitorCounterDataAMD = (PFN::glGetPerfMonitorCounterDataAMD)0;

} // namespace GLAMD

namespace GLAPPLE {

// GL_APPLE_rgb_422
bool _GL_APPLE_rgb_422 = false;
const bool& GL_APPLE_rgb_422 = _GL_APPLE_rgb_422;

} // namespace GLAPPLE

namespace GLEXT {

// GL_EXT_EGL_image_storage
bool _GL_EXT_EGL_image_storage = false;
const bool& GL_EXT_EGL_image_storage = _GL_EXT_EGL_image_storage;
PFN::glEGLImageTargetTexStorageEXT glEGLImageTargetTexStorageEXT = (PFN::glEGLImageTargetTexStorageEXT)0;
PFN::glEGLImageTargetTextureStorageEXT glEGLImageTargetTextureStorageEXT = (PFN::glEGLImageTargetTextureStorageEXT)0;

// GL_EXT_EGL_sync
bool _GL_EXT_EGL_sync = false;
const bool& GL_EXT_EGL_sync = _GL_EXT_EGL_sync;

// GL_EXT_debug_label
bool _GL_EXT_debug_label = false;
const bool& GL_EXT_debug_label = _GL_EXT_debug_label;
PFN::glLabelObjectEXT glLabelObjectEXT = (PFN::glLabelObjectEXT)0;
PFN::glGetObjectLabelEXT glGetObjectLabelEXT = (PFN::glGetObjectLabelEXT)0;

// GL_EXT_debug_marker
bool _GL_EXT_debug_marker = false;
const bool& GL_EXT_debug_marker = _GL_EXT_debug_marker;
PFN::glInsertEventMarkerEXT glInsertEventMarkerEXT = (PFN::glInsertEventMarkerEXT)0;
PFN::glPushGroupMarkerEXT glPushGroupMarkerEXT = (PFN::glPushGroupMarkerEXT)0;
PFN::glPopGroupMarkerEXT glPopGroupMarkerEXT = (PFN::glPopGroupMarkerEXT)0;

// GL_EXT_direct_state_access
bool _GL_EXT_direct_state_access = false;
const bool& GL_EXT_direct_state_access = _GL_EXT_direct_state_access;
PFN::glMatrixLoadfEXT glMatrixLoadfEXT = (PFN::glMatrixLoadfEXT)0;
PFN::glMatrixLoaddEXT glMatrixLoaddEXT = (PFN::glMatrixLoaddEXT)0;
PFN::glMatrixMultfEXT glMatrixMultfEXT = (PFN::glMatrixMultfEXT)0;
PFN::glMatrixMultdEXT glMatrixMultdEXT = (PFN::glMatrixMultdEXT)0;
PFN::glMatrixLoadIdentityEXT glMatrixLoadIdentityEXT = (PFN::glMatrixLoadIdentityEXT)0;
PFN::glMatrixRotatefEXT glMatrixRotatefEXT = (PFN::glMatrixRotatefEXT)0;
PFN::glMatrixRotatedEXT glMatrixRotatedEXT = (PFN::glMatrixRotatedEXT)0;
PFN::glMatrixScalefEXT glMatrixScalefEXT = (PFN::glMatrixScalefEXT)0;
PFN::glMatrixScaledEXT glMatrixScaledEXT = (PFN::glMatrixScaledEXT)0;
PFN::glMatrixTranslatefEXT glMatrixTranslatefEXT = (PFN::glMatrixTranslatefEXT)0;
PFN::glMatrixTranslatedEXT glMatrixTranslatedEXT = (PFN::glMatrixTranslatedEXT)0;
PFN::glMatrixFrustumEXT glMatrixFrustumEXT = (PFN::glMatrixFrustumEXT)0;
PFN::glMatrixOrthoEXT glMatrixOrthoEXT = (PFN::glMatrixOrthoEXT)0;
PFN::glMatrixPopEXT glMatrixPopEXT = (PFN::glMatrixPopEXT)0;
PFN::glMatrixPushEXT glMatrixPushEXT = (PFN::glMatrixPushEXT)0;
PFN::glClientAttribDefaultEXT glClientAttribDefaultEXT = (PFN::glClientAttribDefaultEXT)0;
PFN::glPushClientAttribDefaultEXT glPushClientAttribDefaultEXT = (PFN::glPushClientAttribDefaultEXT)0;
PFN::glTextureParameterfEXT glTextureParameterfEXT = (PFN::glTextureParameterfEXT)0;
PFN::glTextureParameterfvEXT glTextureParameterfvEXT = (PFN::glTextureParameterfvEXT)0;
PFN::glTextureParameteriEXT glTextureParameteriEXT = (PFN::glTextureParameteriEXT)0;
PFN::glTextureParameterivEXT glTextureParameterivEXT = (PFN::glTextureParameterivEXT)0;
PFN::glTextureImage1DEXT glTextureImage1DEXT = (PFN::glTextureImage1DEXT)0;
PFN::glTextureImage2DEXT glTextureImage2DEXT = (PFN::glTextureImage2DEXT)0;
PFN::glTextureSubImage1DEXT glTextureSubImage1DEXT = (PFN::glTextureSubImage1DEXT)0;
PFN::glTextureSubImage2DEXT glTextureSubImage2DEXT = (PFN::glTextureSubImage2DEXT)0;
PFN::glCopyTextureImage1DEXT glCopyTextureImage1DEXT = (PFN::glCopyTextureImage1DEXT)0;
PFN::glCopyTextureImage2DEXT glCopyTextureImage2DEXT = (PFN::glCopyTextureImage2DEXT)0;
PFN::glCopyTextureSubImage1DEXT glCopyTextureSubImage1DEXT = (PFN::glCopyTextureSubImage1DEXT)0;
PFN::glCopyTextureSubImage2DEXT glCopyTextureSubImage2DEXT = (PFN::glCopyTextureSubImage2DEXT)0;
PFN::glGetTextureImageEXT glGetTextureImageEXT = (PFN::glGetTextureImageEXT)0;
PFN::glGetTextureParameterfvEXT glGetTextureParameterfvEXT = (PFN::glGetTextureParameterfvEXT)0;
PFN::glGetTextureParameterivEXT glGetTextureParameterivEXT = (PFN::glGetTextureParameterivEXT)0;
PFN::glGetTextureLevelParameterfvEXT glGetTextureLevelParameterfvEXT = (PFN::glGetTextureLevelParameterfvEXT)0;
PFN::glGetTextureLevelParameterivEXT glGetTextureLevelParameterivEXT = (PFN::glGetTextureLevelParameterivEXT)0;
PFN::glTextureImage3DEXT glTextureImage3DEXT = (PFN::glTextureImage3DEXT)0;
PFN::glTextureSubImage3DEXT glTextureSubImage3DEXT = (PFN::glTextureSubImage3DEXT)0;
PFN::glCopyTextureSubImage3DEXT glCopyTextureSubImage3DEXT = (PFN::glCopyTextureSubImage3DEXT)0;
PFN::glBindMultiTextureEXT glBindMultiTextureEXT = (PFN::glBindMultiTextureEXT)0;
PFN::glMultiTexCoordPointerEXT glMultiTexCoordPointerEXT = (PFN::glMultiTexCoordPointerEXT)0;
PFN::glMultiTexEnvfEXT glMultiTexEnvfEXT = (PFN::glMultiTexEnvfEXT)0;
PFN::glMultiTexEnvfvEXT glMultiTexEnvfvEXT = (PFN::glMultiTexEnvfvEXT)0;
PFN::glMultiTexEnviEXT glMultiTexEnviEXT = (PFN::glMultiTexEnviEXT)0;
PFN::glMultiTexEnvivEXT glMultiTexEnvivEXT = (PFN::glMultiTexEnvivEXT)0;
PFN::glMultiTexGendEXT glMultiTexGendEXT = (PFN::glMultiTexGendEXT)0;
PFN::glMultiTexGendvEXT glMultiTexGendvEXT = (PFN::glMultiTexGendvEXT)0;
PFN::glMultiTexGenfEXT glMultiTexGenfEXT = (PFN::glMultiTexGenfEXT)0;
PFN::glMultiTexGenfvEXT glMultiTexGenfvEXT = (PFN::glMultiTexGenfvEXT)0;
PFN::glMultiTexGeniEXT glMultiTexGeniEXT = (PFN::glMultiTexGeniEXT)0;
PFN::glMultiTexGenivEXT glMultiTexGenivEXT = (PFN::glMultiTexGenivEXT)0;
PFN::glGetMultiTexEnvfvEXT glGetMultiTexEnvfvEXT = (PFN::glGetMultiTexEnvfvEXT)0;
PFN::glGetMultiTexEnvivEXT glGetMultiTexEnvivEXT = (PFN::glGetMultiTexEnvivEXT)0;
PFN::glGetMultiTexGendvEXT glGetMultiTexGendvEXT = (PFN::glGetMultiTexGendvEXT)0;
PFN::glGetMultiTexGenfvEXT glGetMultiTexGenfvEXT = (PFN::glGetMultiTexGenfvEXT)0;
PFN::glGetMultiTexGenivEXT glGetMultiTexGenivEXT = (PFN::glGetMultiTexGenivEXT)0;
PFN::glMultiTexParameteriEXT glMultiTexParameteriEXT = (PFN::glMultiTexParameteriEXT)0;
PFN::glMultiTexParameterivEXT glMultiTexParameterivEXT = (PFN::glMultiTexParameterivEXT)0;
PFN::glMultiTexParameterfEXT glMultiTexParameterfEXT = (PFN::glMultiTexParameterfEXT)0;
PFN::glMultiTexParameterfvEXT glMultiTexParameterfvEXT = (PFN::glMultiTexParameterfvEXT)0;
PFN::glMultiTexImage1DEXT glMultiTexImage1DEXT = (PFN::glMultiTexImage1DEXT)0;
PFN::glMultiTexImage2DEXT glMultiTexImage2DEXT = (PFN::glMultiTexImage2DEXT)0;
PFN::glMultiTexSubImage1DEXT glMultiTexSubImage1DEXT = (PFN::glMultiTexSubImage1DEXT)0;
PFN::glMultiTexSubImage2DEXT glMultiTexSubImage2DEXT = (PFN::glMultiTexSubImage2DEXT)0;
PFN::glCopyMultiTexImage1DEXT glCopyMultiTexImage1DEXT = (PFN::glCopyMultiTexImage1DEXT)0;
PFN::glCopyMultiTexImage2DEXT glCopyMultiTexImage2DEXT = (PFN::glCopyMultiTexImage2DEXT)0;
PFN::glCopyMultiTexSubImage1DEXT glCopyMultiTexSubImage1DEXT = (PFN::glCopyMultiTexSubImage1DEXT)0;
PFN::glCopyMultiTexSubImage2DEXT glCopyMultiTexSubImage2DEXT = (PFN::glCopyMultiTexSubImage2DEXT)0;
PFN::glGetMultiTexImageEXT glGetMultiTexImageEXT = (PFN::glGetMultiTexImageEXT)0;
PFN::glGetMultiTexParameterfvEXT glGetMultiTexParameterfvEXT = (PFN::glGetMultiTexParameterfvEXT)0;
PFN::glGetMultiTexParameterivEXT glGetMultiTexParameterivEXT = (PFN::glGetMultiTexParameterivEXT)0;
PFN::glGetMultiTexLevelParameterfvEXT glGetMultiTexLevelParameterfvEXT = (PFN::glGetMultiTexLevelParameterfvEXT)0;
PFN::glGetMultiTexLevelParameterivEXT glGetMultiTexLevelParameterivEXT = (PFN::glGetMultiTexLevelParameterivEXT)0;
PFN::glMultiTexImage3DEXT glMultiTexImage3DEXT = (PFN::glMultiTexImage3DEXT)0;
PFN::glMultiTexSubImage3DEXT glMultiTexSubImage3DEXT = (PFN::glMultiTexSubImage3DEXT)0;
PFN::glCopyMultiTexSubImage3DEXT glCopyMultiTexSubImage3DEXT = (PFN::glCopyMultiTexSubImage3DEXT)0;
PFN::glEnableClientStateIndexedEXT glEnableClientStateIndexedEXT = (PFN::glEnableClientStateIndexedEXT)0;
PFN::glDisableClientStateIndexedEXT glDisableClientStateIndexedEXT = (PFN::glDisableClientStateIndexedEXT)0;
PFN::glGetFloatIndexedvEXT glGetFloatIndexedvEXT = (PFN::glGetFloatIndexedvEXT)0;
PFN::glGetDoubleIndexedvEXT glGetDoubleIndexedvEXT = (PFN::glGetDoubleIndexedvEXT)0;
PFN::glGetPointerIndexedvEXT glGetPointerIndexedvEXT = (PFN::glGetPointerIndexedvEXT)0;
PFN::glEnableIndexedEXT glEnableIndexedEXT = (PFN::glEnableIndexedEXT)0;
PFN::glDisableIndexedEXT glDisableIndexedEXT = (PFN::glDisableIndexedEXT)0;
PFN::glIsEnabledIndexedEXT glIsEnabledIndexedEXT = (PFN::glIsEnabledIndexedEXT)0;
PFN::glGetIntegerIndexedvEXT glGetIntegerIndexedvEXT = (PFN::glGetIntegerIndexedvEXT)0;
PFN::glGetBooleanIndexedvEXT glGetBooleanIndexedvEXT = (PFN::glGetBooleanIndexedvEXT)0;
PFN::glCompressedTextureImage3DEXT glCompressedTextureImage3DEXT = (PFN::glCompressedTextureImage3DEXT)0;
PFN::glCompressedTextureImage2DEXT glCompressedTextureImage2DEXT = (PFN::glCompressedTextureImage2DEXT)0;
PFN::glCompressedTextureImage1DEXT glCompressedTextureImage1DEXT = (PFN::glCompressedTextureImage1DEXT)0;
PFN::glCompressedTextureSubImage3DEXT glCompressedTextureSubImage3DEXT = (PFN::glCompressedTextureSubImage3DEXT)0;
PFN::glCompressedTextureSubImage2DEXT glCompressedTextureSubImage2DEXT = (PFN::glCompressedTextureSubImage2DEXT)0;
PFN::glCompressedTextureSubImage1DEXT glCompressedTextureSubImage1DEXT = (PFN::glCompressedTextureSubImage1DEXT)0;
PFN::glGetCompressedTextureImageEXT glGetCompressedTextureImageEXT = (PFN::glGetCompressedTextureImageEXT)0;
PFN::glCompressedMultiTexImage3DEXT glCompressedMultiTexImage3DEXT = (PFN::glCompressedMultiTexImage3DEXT)0;
PFN::glCompressedMultiTexImage2DEXT glCompressedMultiTexImage2DEXT = (PFN::glCompressedMultiTexImage2DEXT)0;
PFN::glCompressedMultiTexImage1DEXT glCompressedMultiTexImage1DEXT = (PFN::glCompressedMultiTexImage1DEXT)0;
PFN::glCompressedMultiTexSubImage3DEXT glCompressedMultiTexSubImage3DEXT = (PFN::glCompressedMultiTexSubImage3DEXT)0;
PFN::glCompressedMultiTexSubImage2DEXT glCompressedMultiTexSubImage2DEXT = (PFN::glCompressedMultiTexSubImage2DEXT)0;
PFN::glCompressedMultiTexSubImage1DEXT glCompressedMultiTexSubImage1DEXT = (PFN::glCompressedMultiTexSubImage1DEXT)0;
PFN::glGetCompressedMultiTexImageEXT glGetCompressedMultiTexImageEXT = (PFN::glGetCompressedMultiTexImageEXT)0;
PFN::glMatrixLoadTransposefEXT glMatrixLoadTransposefEXT = (PFN::glMatrixLoadTransposefEXT)0;
PFN::glMatrixLoadTransposedEXT glMatrixLoadTransposedEXT = (PFN::glMatrixLoadTransposedEXT)0;
PFN::glMatrixMultTransposefEXT glMatrixMultTransposefEXT = (PFN::glMatrixMultTransposefEXT)0;
PFN::glMatrixMultTransposedEXT glMatrixMultTransposedEXT = (PFN::glMatrixMultTransposedEXT)0;
PFN::glNamedBufferDataEXT glNamedBufferDataEXT = (PFN::glNamedBufferDataEXT)0;
PFN::glNamedBufferSubDataEXT glNamedBufferSubDataEXT = (PFN::glNamedBufferSubDataEXT)0;
PFN::glMapNamedBufferEXT glMapNamedBufferEXT = (PFN::glMapNamedBufferEXT)0;
PFN::glUnmapNamedBufferEXT glUnmapNamedBufferEXT = (PFN::glUnmapNamedBufferEXT)0;
PFN::glGetNamedBufferParameterivEXT glGetNamedBufferParameterivEXT = (PFN::glGetNamedBufferParameterivEXT)0;
PFN::glGetNamedBufferPointervEXT glGetNamedBufferPointervEXT = (PFN::glGetNamedBufferPointervEXT)0;
PFN::glGetNamedBufferSubDataEXT glGetNamedBufferSubDataEXT = (PFN::glGetNamedBufferSubDataEXT)0;
PFN::glProgramUniform1fEXT glProgramUniform1fEXT = (PFN::glProgramUniform1fEXT)0;
PFN::glProgramUniform2fEXT glProgramUniform2fEXT = (PFN::glProgramUniform2fEXT)0;
PFN::glProgramUniform3fEXT glProgramUniform3fEXT = (PFN::glProgramUniform3fEXT)0;
PFN::glProgramUniform4fEXT glProgramUniform4fEXT = (PFN::glProgramUniform4fEXT)0;
PFN::glProgramUniform1iEXT glProgramUniform1iEXT = (PFN::glProgramUniform1iEXT)0;
PFN::glProgramUniform2iEXT glProgramUniform2iEXT = (PFN::glProgramUniform2iEXT)0;
PFN::glProgramUniform3iEXT glProgramUniform3iEXT = (PFN::glProgramUniform3iEXT)0;
PFN::glProgramUniform4iEXT glProgramUniform4iEXT = (PFN::glProgramUniform4iEXT)0;
PFN::glProgramUniform1fvEXT glProgramUniform1fvEXT = (PFN::glProgramUniform1fvEXT)0;
PFN::glProgramUniform2fvEXT glProgramUniform2fvEXT = (PFN::glProgramUniform2fvEXT)0;
PFN::glProgramUniform3fvEXT glProgramUniform3fvEXT = (PFN::glProgramUniform3fvEXT)0;
PFN::glProgramUniform4fvEXT glProgramUniform4fvEXT = (PFN::glProgramUniform4fvEXT)0;
PFN::glProgramUniform1ivEXT glProgramUniform1ivEXT = (PFN::glProgramUniform1ivEXT)0;
PFN::glProgramUniform2ivEXT glProgramUniform2ivEXT = (PFN::glProgramUniform2ivEXT)0;
PFN::glProgramUniform3ivEXT glProgramUniform3ivEXT = (PFN::glProgramUniform3ivEXT)0;
PFN::glProgramUniform4ivEXT glProgramUniform4ivEXT = (PFN::glProgramUniform4ivEXT)0;
PFN::glProgramUniformMatrix2fvEXT glProgramUniformMatrix2fvEXT = (PFN::glProgramUniformMatrix2fvEXT)0;
PFN::glProgramUniformMatrix3fvEXT glProgramUniformMatrix3fvEXT = (PFN::glProgramUniformMatrix3fvEXT)0;
PFN::glProgramUniformMatrix4fvEXT glProgramUniformMatrix4fvEXT = (PFN::glProgramUniformMatrix4fvEXT)0;
PFN::glProgramUniformMatrix2x3fvEXT glProgramUniformMatrix2x3fvEXT = (PFN::glProgramUniformMatrix2x3fvEXT)0;
PFN::glProgramUniformMatrix3x2fvEXT glProgramUniformMatrix3x2fvEXT = (PFN::glProgramUniformMatrix3x2fvEXT)0;
PFN::glProgramUniformMatrix2x4fvEXT glProgramUniformMatrix2x4fvEXT = (PFN::glProgramUniformMatrix2x4fvEXT)0;
PFN::glProgramUniformMatrix4x2fvEXT glProgramUniformMatrix4x2fvEXT = (PFN::glProgramUniformMatrix4x2fvEXT)0;
PFN::glProgramUniformMatrix3x4fvEXT glProgramUniformMatrix3x4fvEXT = (PFN::glProgramUniformMatrix3x4fvEXT)0;
PFN::glProgramUniformMatrix4x3fvEXT glProgramUniformMatrix4x3fvEXT = (PFN::glProgramUniformMatrix4x3fvEXT)0;
PFN::glTextureBufferEXT glTextureBufferEXT = (PFN::glTextureBufferEXT)0;
PFN::glMultiTexBufferEXT glMultiTexBufferEXT = (PFN::glMultiTexBufferEXT)0;
PFN::glTextureParameterIivEXT glTextureParameterIivEXT = (PFN::glTextureParameterIivEXT)0;
PFN::glTextureParameterIuivEXT glTextureParameterIuivEXT = (PFN::glTextureParameterIuivEXT)0;
PFN::glGetTextureParameterIivEXT glGetTextureParameterIivEXT = (PFN::glGetTextureParameterIivEXT)0;
PFN::glGetTextureParameterIuivEXT glGetTextureParameterIuivEXT = (PFN::glGetTextureParameterIuivEXT)0;
PFN::glMultiTexParameterIivEXT glMultiTexParameterIivEXT = (PFN::glMultiTexParameterIivEXT)0;
PFN::glMultiTexParameterIuivEXT glMultiTexParameterIuivEXT = (PFN::glMultiTexParameterIuivEXT)0;
PFN::glGetMultiTexParameterIivEXT glGetMultiTexParameterIivEXT = (PFN::glGetMultiTexParameterIivEXT)0;
PFN::glGetMultiTexParameterIuivEXT glGetMultiTexParameterIuivEXT = (PFN::glGetMultiTexParameterIuivEXT)0;
PFN::glProgramUniform1uiEXT glProgramUniform1uiEXT = (PFN::glProgramUniform1uiEXT)0;
PFN::glProgramUniform2uiEXT glProgramUniform2uiEXT = (PFN::glProgramUniform2uiEXT)0;
PFN::glProgramUniform3uiEXT glProgramUniform3uiEXT = (PFN::glProgramUniform3uiEXT)0;
PFN::glProgramUniform4uiEXT glProgramUniform4uiEXT = (PFN::glProgramUniform4uiEXT)0;
PFN::glProgramUniform1uivEXT glProgramUniform1uivEXT = (PFN::glProgramUniform1uivEXT)0;
PFN::glProgramUniform2uivEXT glProgramUniform2uivEXT = (PFN::glProgramUniform2uivEXT)0;
PFN::glProgramUniform3uivEXT glProgramUniform3uivEXT = (PFN::glProgramUniform3uivEXT)0;
PFN::glProgramUniform4uivEXT glProgramUniform4uivEXT = (PFN::glProgramUniform4uivEXT)0;
PFN::glNamedProgramLocalParameters4fvEXT glNamedProgramLocalParameters4fvEXT = (PFN::glNamedProgramLocalParameters4fvEXT)0;
PFN::glNamedProgramLocalParameterI4iEXT glNamedProgramLocalParameterI4iEXT = (PFN::glNamedProgramLocalParameterI4iEXT)0;
PFN::glNamedProgramLocalParameterI4ivEXT glNamedProgramLocalParameterI4ivEXT = (PFN::glNamedProgramLocalParameterI4ivEXT)0;
PFN::glNamedProgramLocalParametersI4ivEXT glNamedProgramLocalParametersI4ivEXT = (PFN::glNamedProgramLocalParametersI4ivEXT)0;
PFN::glNamedProgramLocalParameterI4uiEXT glNamedProgramLocalParameterI4uiEXT = (PFN::glNamedProgramLocalParameterI4uiEXT)0;
PFN::glNamedProgramLocalParameterI4uivEXT glNamedProgramLocalParameterI4uivEXT = (PFN::glNamedProgramLocalParameterI4uivEXT)0;
PFN::glNamedProgramLocalParametersI4uivEXT glNamedProgramLocalParametersI4uivEXT = (PFN::glNamedProgramLocalParametersI4uivEXT)0;
PFN::glGetNamedProgramLocalParameterIivEXT glGetNamedProgramLocalParameterIivEXT = (PFN::glGetNamedProgramLocalParameterIivEXT)0;
PFN::glGetNamedProgramLocalParameterIuivEXT glGetNamedProgramLocalParameterIuivEXT = (PFN::glGetNamedProgramLocalParameterIuivEXT)0;
PFN::glEnableClientStateiEXT glEnableClientStateiEXT = (PFN::glEnableClientStateiEXT)0;
PFN::glDisableClientStateiEXT glDisableClientStateiEXT = (PFN::glDisableClientStateiEXT)0;
PFN::glGetFloati_vEXT glGetFloati_vEXT = (PFN::glGetFloati_vEXT)0;
PFN::glGetDoublei_vEXT glGetDoublei_vEXT = (PFN::glGetDoublei_vEXT)0;
PFN::glGetPointeri_vEXT glGetPointeri_vEXT = (PFN::glGetPointeri_vEXT)0;
PFN::glNamedProgramStringEXT glNamedProgramStringEXT = (PFN::glNamedProgramStringEXT)0;
PFN::glNamedProgramLocalParameter4dEXT glNamedProgramLocalParameter4dEXT = (PFN::glNamedProgramLocalParameter4dEXT)0;
PFN::glNamedProgramLocalParameter4dvEXT glNamedProgramLocalParameter4dvEXT = (PFN::glNamedProgramLocalParameter4dvEXT)0;
PFN::glNamedProgramLocalParameter4fEXT glNamedProgramLocalParameter4fEXT = (PFN::glNamedProgramLocalParameter4fEXT)0;
PFN::glNamedProgramLocalParameter4fvEXT glNamedProgramLocalParameter4fvEXT = (PFN::glNamedProgramLocalParameter4fvEXT)0;
PFN::glGetNamedProgramLocalParameterdvEXT glGetNamedProgramLocalParameterdvEXT = (PFN::glGetNamedProgramLocalParameterdvEXT)0;
PFN::glGetNamedProgramLocalParameterfvEXT glGetNamedProgramLocalParameterfvEXT = (PFN::glGetNamedProgramLocalParameterfvEXT)0;
PFN::glGetNamedProgramivEXT glGetNamedProgramivEXT = (PFN::glGetNamedProgramivEXT)0;
PFN::glGetNamedProgramStringEXT glGetNamedProgramStringEXT = (PFN::glGetNamedProgramStringEXT)0;
PFN::glNamedRenderbufferStorageEXT glNamedRenderbufferStorageEXT = (PFN::glNamedRenderbufferStorageEXT)0;
PFN::glGetNamedRenderbufferParameterivEXT glGetNamedRenderbufferParameterivEXT = (PFN::glGetNamedRenderbufferParameterivEXT)0;
PFN::glNamedRenderbufferStorageMultisampleEXT glNamedRenderbufferStorageMultisampleEXT = (PFN::glNamedRenderbufferStorageMultisampleEXT)0;
PFN::glNamedRenderbufferStorageMultisampleCoverageEXT glNamedRenderbufferStorageMultisampleCoverageEXT = (PFN::glNamedRenderbufferStorageMultisampleCoverageEXT)0;
PFN::glCheckNamedFramebufferStatusEXT glCheckNamedFramebufferStatusEXT = (PFN::glCheckNamedFramebufferStatusEXT)0;
PFN::glNamedFramebufferTexture1DEXT glNamedFramebufferTexture1DEXT = (PFN::glNamedFramebufferTexture1DEXT)0;
PFN::glNamedFramebufferTexture2DEXT glNamedFramebufferTexture2DEXT = (PFN::glNamedFramebufferTexture2DEXT)0;
PFN::glNamedFramebufferTexture3DEXT glNamedFramebufferTexture3DEXT = (PFN::glNamedFramebufferTexture3DEXT)0;
PFN::glNamedFramebufferRenderbufferEXT glNamedFramebufferRenderbufferEXT = (PFN::glNamedFramebufferRenderbufferEXT)0;
PFN::glGetNamedFramebufferAttachmentParameterivEXT glGetNamedFramebufferAttachmentParameterivEXT = (PFN::glGetNamedFramebufferAttachmentParameterivEXT)0;
PFN::glGenerateTextureMipmapEXT glGenerateTextureMipmapEXT = (PFN::glGenerateTextureMipmapEXT)0;
PFN::glGenerateMultiTexMipmapEXT glGenerateMultiTexMipmapEXT = (PFN::glGenerateMultiTexMipmapEXT)0;
PFN::glFramebufferDrawBufferEXT glFramebufferDrawBufferEXT = (PFN::glFramebufferDrawBufferEXT)0;
PFN::glFramebufferDrawBuffersEXT glFramebufferDrawBuffersEXT = (PFN::glFramebufferDrawBuffersEXT)0;
PFN::glFramebufferReadBufferEXT glFramebufferReadBufferEXT = (PFN::glFramebufferReadBufferEXT)0;
PFN::glGetFramebufferParameterivEXT glGetFramebufferParameterivEXT = (PFN::glGetFramebufferParameterivEXT)0;
PFN::glNamedCopyBufferSubDataEXT glNamedCopyBufferSubDataEXT = (PFN::glNamedCopyBufferSubDataEXT)0;
PFN::glNamedFramebufferTextureEXT glNamedFramebufferTextureEXT = (PFN::glNamedFramebufferTextureEXT)0;
PFN::glNamedFramebufferTextureLayerEXT glNamedFramebufferTextureLayerEXT = (PFN::glNamedFramebufferTextureLayerEXT)0;
PFN::glNamedFramebufferTextureFaceEXT glNamedFramebufferTextureFaceEXT = (PFN::glNamedFramebufferTextureFaceEXT)0;
PFN::glTextureRenderbufferEXT glTextureRenderbufferEXT = (PFN::glTextureRenderbufferEXT)0;
PFN::glMultiTexRenderbufferEXT glMultiTexRenderbufferEXT = (PFN::glMultiTexRenderbufferEXT)0;
PFN::glVertexArrayVertexOffsetEXT glVertexArrayVertexOffsetEXT = (PFN::glVertexArrayVertexOffsetEXT)0;
PFN::glVertexArrayColorOffsetEXT glVertexArrayColorOffsetEXT = (PFN::glVertexArrayColorOffsetEXT)0;
PFN::glVertexArrayEdgeFlagOffsetEXT glVertexArrayEdgeFlagOffsetEXT = (PFN::glVertexArrayEdgeFlagOffsetEXT)0;
PFN::glVertexArrayIndexOffsetEXT glVertexArrayIndexOffsetEXT = (PFN::glVertexArrayIndexOffsetEXT)0;
PFN::glVertexArrayNormalOffsetEXT glVertexArrayNormalOffsetEXT = (PFN::glVertexArrayNormalOffsetEXT)0;
PFN::glVertexArrayTexCoordOffsetEXT glVertexArrayTexCoordOffsetEXT = (PFN::glVertexArrayTexCoordOffsetEXT)0;
PFN::glVertexArrayMultiTexCoordOffsetEXT glVertexArrayMultiTexCoordOffsetEXT = (PFN::glVertexArrayMultiTexCoordOffsetEXT)0;
PFN::glVertexArrayFogCoordOffsetEXT glVertexArrayFogCoordOffsetEXT = (PFN::glVertexArrayFogCoordOffsetEXT)0;
PFN::glVertexArraySecondaryColorOffsetEXT glVertexArraySecondaryColorOffsetEXT = (PFN::glVertexArraySecondaryColorOffsetEXT)0;
PFN::glVertexArrayVertexAttribOffsetEXT glVertexArrayVertexAttribOffsetEXT = (PFN::glVertexArrayVertexAttribOffsetEXT)0;
PFN::glVertexArrayVertexAttribIOffsetEXT glVertexArrayVertexAttribIOffsetEXT = (PFN::glVertexArrayVertexAttribIOffsetEXT)0;
PFN::glEnableVertexArrayEXT glEnableVertexArrayEXT = (PFN::glEnableVertexArrayEXT)0;
PFN::glDisableVertexArrayEXT glDisableVertexArrayEXT = (PFN::glDisableVertexArrayEXT)0;
PFN::glEnableVertexArrayAttribEXT glEnableVertexArrayAttribEXT = (PFN::glEnableVertexArrayAttribEXT)0;
PFN::glDisableVertexArrayAttribEXT glDisableVertexArrayAttribEXT = (PFN::glDisableVertexArrayAttribEXT)0;
PFN::glGetVertexArrayIntegervEXT glGetVertexArrayIntegervEXT = (PFN::glGetVertexArrayIntegervEXT)0;
PFN::glGetVertexArrayPointervEXT glGetVertexArrayPointervEXT = (PFN::glGetVertexArrayPointervEXT)0;
PFN::glGetVertexArrayIntegeri_vEXT glGetVertexArrayIntegeri_vEXT = (PFN::glGetVertexArrayIntegeri_vEXT)0;
PFN::glGetVertexArrayPointeri_vEXT glGetVertexArrayPointeri_vEXT = (PFN::glGetVertexArrayPointeri_vEXT)0;
PFN::glMapNamedBufferRangeEXT glMapNamedBufferRangeEXT = (PFN::glMapNamedBufferRangeEXT)0;
PFN::glFlushMappedNamedBufferRangeEXT glFlushMappedNamedBufferRangeEXT = (PFN::glFlushMappedNamedBufferRangeEXT)0;
PFN::glNamedBufferStorageEXT glNamedBufferStorageEXT = (PFN::glNamedBufferStorageEXT)0;
PFN::glClearNamedBufferDataEXT glClearNamedBufferDataEXT = (PFN::glClearNamedBufferDataEXT)0;
PFN::glClearNamedBufferSubDataEXT glClearNamedBufferSubDataEXT = (PFN::glClearNamedBufferSubDataEXT)0;
PFN::glNamedFramebufferParameteriEXT glNamedFramebufferParameteriEXT = (PFN::glNamedFramebufferParameteriEXT)0;
PFN::glGetNamedFramebufferParameterivEXT glGetNamedFramebufferParameterivEXT = (PFN::glGetNamedFramebufferParameterivEXT)0;
PFN::glProgramUniform1dEXT glProgramUniform1dEXT = (PFN::glProgramUniform1dEXT)0;
PFN::glProgramUniform2dEXT glProgramUniform2dEXT = (PFN::glProgramUniform2dEXT)0;
PFN::glProgramUniform3dEXT glProgramUniform3dEXT = (PFN::glProgramUniform3dEXT)0;
PFN::glProgramUniform4dEXT glProgramUniform4dEXT = (PFN::glProgramUniform4dEXT)0;
PFN::glProgramUniform1dvEXT glProgramUniform1dvEXT = (PFN::glProgramUniform1dvEXT)0;
PFN::glProgramUniform2dvEXT glProgramUniform2dvEXT = (PFN::glProgramUniform2dvEXT)0;
PFN::glProgramUniform3dvEXT glProgramUniform3dvEXT = (PFN::glProgramUniform3dvEXT)0;
PFN::glProgramUniform4dvEXT glProgramUniform4dvEXT = (PFN::glProgramUniform4dvEXT)0;
PFN::glProgramUniformMatrix2dvEXT glProgramUniformMatrix2dvEXT = (PFN::glProgramUniformMatrix2dvEXT)0;
PFN::glProgramUniformMatrix3dvEXT glProgramUniformMatrix3dvEXT = (PFN::glProgramUniformMatrix3dvEXT)0;
PFN::glProgramUniformMatrix4dvEXT glProgramUniformMatrix4dvEXT = (PFN::glProgramUniformMatrix4dvEXT)0;
PFN::glProgramUniformMatrix2x3dvEXT glProgramUniformMatrix2x3dvEXT = (PFN::glProgramUniformMatrix2x3dvEXT)0;
PFN::glProgramUniformMatrix2x4dvEXT glProgramUniformMatrix2x4dvEXT = (PFN::glProgramUniformMatrix2x4dvEXT)0;
PFN::glProgramUniformMatrix3x2dvEXT glProgramUniformMatrix3x2dvEXT = (PFN::glProgramUniformMatrix3x2dvEXT)0;
PFN::glProgramUniformMatrix3x4dvEXT glProgramUniformMatrix3x4dvEXT = (PFN::glProgramUniformMatrix3x4dvEXT)0;
PFN::glProgramUniformMatrix4x2dvEXT glProgramUniformMatrix4x2dvEXT = (PFN::glProgramUniformMatrix4x2dvEXT)0;
PFN::glProgramUniformMatrix4x3dvEXT glProgramUniformMatrix4x3dvEXT = (PFN::glProgramUniformMatrix4x3dvEXT)0;
PFN::glTextureBufferRangeEXT glTextureBufferRangeEXT = (PFN::glTextureBufferRangeEXT)0;
PFN::glTextureStorage1DEXT glTextureStorage1DEXT = (PFN::glTextureStorage1DEXT)0;
PFN::glTextureStorage2DEXT glTextureStorage2DEXT = (PFN::glTextureStorage2DEXT)0;
PFN::glTextureStorage3DEXT glTextureStorage3DEXT = (PFN::glTextureStorage3DEXT)0;
PFN::glTextureStorage2DMultisampleEXT glTextureStorage2DMultisampleEXT = (PFN::glTextureStorage2DMultisampleEXT)0;
PFN::glTextureStorage3DMultisampleEXT glTextureStorage3DMultisampleEXT = (PFN::glTextureStorage3DMultisampleEXT)0;
PFN::glVertexArrayBindVertexBufferEXT glVertexArrayBindVertexBufferEXT = (PFN::glVertexArrayBindVertexBufferEXT)0;
PFN::glVertexArrayVertexAttribFormatEXT glVertexArrayVertexAttribFormatEXT = (PFN::glVertexArrayVertexAttribFormatEXT)0;
PFN::glVertexArrayVertexAttribIFormatEXT glVertexArrayVertexAttribIFormatEXT = (PFN::glVertexArrayVertexAttribIFormatEXT)0;
PFN::glVertexArrayVertexAttribLFormatEXT glVertexArrayVertexAttribLFormatEXT = (PFN::glVertexArrayVertexAttribLFormatEXT)0;
PFN::glVertexArrayVertexAttribBindingEXT glVertexArrayVertexAttribBindingEXT = (PFN::glVertexArrayVertexAttribBindingEXT)0;
PFN::glVertexArrayVertexBindingDivisorEXT glVertexArrayVertexBindingDivisorEXT = (PFN::glVertexArrayVertexBindingDivisorEXT)0;
PFN::glVertexArrayVertexAttribLOffsetEXT glVertexArrayVertexAttribLOffsetEXT = (PFN::glVertexArrayVertexAttribLOffsetEXT)0;
PFN::glTexturePageCommitmentEXT glTexturePageCommitmentEXT = (PFN::glTexturePageCommitmentEXT)0;
PFN::glVertexArrayVertexAttribDivisorEXT glVertexArrayVertexAttribDivisorEXT = (PFN::glVertexArrayVertexAttribDivisorEXT)0;

// GL_EXT_draw_instanced
bool _GL_EXT_draw_instanced = false;
const bool& GL_EXT_draw_instanced = _GL_EXT_draw_instanced;
PFN::glDrawArraysInstancedEXT glDrawArraysInstancedEXT = (PFN::glDrawArraysInstancedEXT)0;
PFN::glDrawElementsInstancedEXT glDrawElementsInstancedEXT = (PFN::glDrawElementsInstancedEXT)0;

// GL_EXT_multiview_tessellation_geometry_shader
bool _GL_EXT_multiview_tessellation_geometry_shader = false;
const bool& GL_EXT_multiview_tessellation_geometry_shader = _GL_EXT_multiview_tessellation_geometry_shader;

// GL_EXT_multiview_texture_multisample
bool _GL_EXT_multiview_texture_multisample = false;
const bool& GL_EXT_multiview_texture_multisample = _GL_EXT_multiview_texture_multisample;

// GL_EXT_multiview_timer_query
bool _GL_EXT_multiview_timer_query = false;
const bool& GL_EXT_multiview_timer_query = _GL_EXT_multiview_timer_query;

// GL_EXT_polygon_offset_clamp
bool _GL_EXT_polygon_offset_clamp = false;
const bool& GL_EXT_polygon_offset_clamp = _GL_EXT_polygon_offset_clamp;
PFN::glPolygonOffsetClampEXT glPolygonOffsetClampEXT = (PFN::glPolygonOffsetClampEXT)0;

// GL_EXT_post_depth_coverage
bool _GL_EXT_post_depth_coverage = false;
const bool& GL_EXT_post_depth_coverage = _GL_EXT_post_depth_coverage;

// GL_EXT_raster_multisample
bool _GL_EXT_raster_multisample = false;
const bool& GL_EXT_raster_multisample = _GL_EXT_raster_multisample;
PFN::glRasterSamplesEXT glRasterSamplesEXT = (PFN::glRasterSamplesEXT)0;

// GL_EXT_separate_shader_objects
bool _GL_EXT_separate_shader_objects = false;
const bool& GL_EXT_separate_shader_objects = _GL_EXT_separate_shader_objects;
PFN::glUseShaderProgramEXT glUseShaderProgramEXT = (PFN::glUseShaderProgramEXT)0;
PFN::glActiveProgramEXT glActiveProgramEXT = (PFN::glActiveProgramEXT)0;
PFN::glCreateShaderProgramEXT glCreateShaderProgramEXT = (PFN::glCreateShaderProgramEXT)0;

// GL_EXT_shader_framebuffer_fetch
bool _GL_EXT_shader_framebuffer_fetch = false;
const bool& GL_EXT_shader_framebuffer_fetch = _GL_EXT_shader_framebuffer_fetch;

// GL_EXT_shader_framebuffer_fetch_non_coherent
bool _GL_EXT_shader_framebuffer_fetch_non_coherent = false;
const bool& GL_EXT_shader_framebuffer_fetch_non_coherent = _GL_EXT_shader_framebuffer_fetch_non_coherent;
PFN::glFramebufferFetchBarrierEXT glFramebufferFetchBarrierEXT = (PFN::glFramebufferFetchBarrierEXT)0;

// GL_EXT_shader_integer_mix
bool _GL_EXT_shader_integer_mix = false;
const bool& GL_EXT_shader_integer_mix = _GL_EXT_shader_integer_mix;

// GL_EXT_texture_compression_s3tc
bool _GL_EXT_texture_compression_s3tc = false;
const bool& GL_EXT_texture_compression_s3tc = _GL_EXT_texture_compression_s3tc;

// GL_EXT_texture_filter_minmax
bool _GL_EXT_texture_filter_minmax = false;
const bool& GL_EXT_texture_filter_minmax = _GL_EXT_texture_filter_minmax;

// GL_EXT_texture_sRGB_R8
bool _GL_EXT_texture_sRGB_R8 = false;
const bool& GL_EXT_texture_sRGB_R8 = _GL_EXT_texture_sRGB_R8;

// GL_EXT_texture_sRGB_decode
bool _GL_EXT_texture_sRGB_decode = false;
const bool& GL_EXT_texture_sRGB_decode = _GL_EXT_texture_sRGB_decode;

// GL_EXT_texture_shadow_lod
bool _GL_EXT_texture_shadow_lod = false;
const bool& GL_EXT_texture_shadow_lod = _GL_EXT_texture_shadow_lod;

// GL_EXT_window_rectangles
bool _GL_EXT_window_rectangles = false;
const bool& GL_EXT_window_rectangles = _GL_EXT_window_rectangles;
PFN::glWindowRectanglesEXT glWindowRectanglesEXT = (PFN::glWindowRectanglesEXT)0;

} // namespace GLEXT

namespace GLINTEL {

// GL_INTEL_blackhole_render
bool _GL_INTEL_blackhole_render = false;
const bool& GL_INTEL_blackhole_render = _GL_INTEL_blackhole_render;

// GL_INTEL_conservative_rasterization
bool _GL_INTEL_conservative_rasterization = false;
const bool& GL_INTEL_conservative_rasterization = _GL_INTEL_conservative_rasterization;

// GL_INTEL_framebuffer_CMAA
bool _GL_INTEL_framebuffer_CMAA = false;
const bool& GL_INTEL_framebuffer_CMAA = _GL_INTEL_framebuffer_CMAA;
PFN::glApplyFramebufferAttachmentCMAAINTEL glApplyFramebufferAttachmentCMAAINTEL = (PFN::glApplyFramebufferAttachmentCMAAINTEL)0;

// GL_INTEL_performance_query
bool _GL_INTEL_performance_query = false;
const bool& GL_INTEL_performance_query = _GL_INTEL_performance_query;
PFN::glBeginPerfQueryINTEL glBeginPerfQueryINTEL = (PFN::glBeginPerfQueryINTEL)0;
PFN::glCreatePerfQueryINTEL glCreatePerfQueryINTEL = (PFN::glCreatePerfQueryINTEL)0;
PFN::glDeletePerfQueryINTEL glDeletePerfQueryINTEL = (PFN::glDeletePerfQueryINTEL)0;
PFN::glEndPerfQueryINTEL glEndPerfQueryINTEL = (PFN::glEndPerfQueryINTEL)0;
PFN::glGetFirstPerfQueryIdINTEL glGetFirstPerfQueryIdINTEL = (PFN::glGetFirstPerfQueryIdINTEL)0;
PFN::glGetNextPerfQueryIdINTEL glGetNextPerfQueryIdINTEL = (PFN::glGetNextPerfQueryIdINTEL)0;
PFN::glGetPerfCounterInfoINTEL glGetPerfCounterInfoINTEL = (PFN::glGetPerfCounterInfoINTEL)0;
PFN::glGetPerfQueryDataINTEL glGetPerfQueryDataINTEL = (PFN::glGetPerfQueryDataINTEL)0;
PFN::glGetPerfQueryIdByNameINTEL glGetPerfQueryIdByNameINTEL = (PFN::glGetPerfQueryIdByNameINTEL)0;
PFN::glGetPerfQueryInfoINTEL glGetPerfQueryInfoINTEL = (PFN::glGetPerfQueryInfoINTEL)0;

} // namespace GLINTEL

namespace GLMESA {

// GL_MESA_framebuffer_flip_x
bool _GL_MESA_framebuffer_flip_x = false;
const bool& GL_MESA_framebuffer_flip_x = _GL_MESA_framebuffer_flip_x;

// GL_MESA_framebuffer_flip_y
bool _GL_MESA_framebuffer_flip_y = false;
const bool& GL_MESA_framebuffer_flip_y = _GL_MESA_framebuffer_flip_y;
PFN::glFramebufferParameteriMESA glFramebufferParameteriMESA = (PFN::glFramebufferParameteriMESA)0;
PFN::glGetFramebufferParameterivMESA glGetFramebufferParameterivMESA = (PFN::glGetFramebufferParameterivMESA)0;

// GL_MESA_framebuffer_swap_xy
bool _GL_MESA_framebuffer_swap_xy = false;
const bool& GL_MESA_framebuffer_swap_xy = _GL_MESA_framebuffer_swap_xy;

} // namespace GLMESA

namespace GLNV {

// GL_NV_bindless_multi_draw_indirect
bool _GL_NV_bindless_multi_draw_indirect = false;
const bool& GL_NV_bindless_multi_draw_indirect = _GL_NV_bindless_multi_draw_indirect;
PFN::glMultiDrawArraysIndirectBindlessNV glMultiDrawArraysIndirectBindlessNV = (PFN::glMultiDrawArraysIndirectBindlessNV)0;
PFN::glMultiDrawElementsIndirectBindlessNV glMultiDrawElementsIndirectBindlessNV = (PFN::glMultiDrawElementsIndirectBindlessNV)0;

// GL_NV_bindless_multi_draw_indirect_count
bool _GL_NV_bindless_multi_draw_indirect_count = false;
const bool& GL_NV_bindless_multi_draw_indirect_count = _GL_NV_bindless_multi_draw_indirect_count;
PFN::glMultiDrawArraysIndirectBindlessCountNV glMultiDrawArraysIndirectBindlessCountNV = (PFN::glMultiDrawArraysIndirectBindlessCountNV)0;
PFN::glMultiDrawElementsIndirectBindlessCountNV glMultiDrawElementsIndirectBindlessCountNV = (PFN::glMultiDrawElementsIndirectBindlessCountNV)0;

// GL_NV_bindless_texture
bool _GL_NV_bindless_texture = false;
const bool& GL_NV_bindless_texture = _GL_NV_bindless_texture;
PFN::glGetTextureHandleNV glGetTextureHandleNV = (PFN::glGetTextureHandleNV)0;
PFN::glGetTextureSamplerHandleNV glGetTextureSamplerHandleNV = (PFN::glGetTextureSamplerHandleNV)0;
PFN::glMakeTextureHandleResidentNV glMakeTextureHandleResidentNV = (PFN::glMakeTextureHandleResidentNV)0;
PFN::glMakeTextureHandleNonResidentNV glMakeTextureHandleNonResidentNV = (PFN::glMakeTextureHandleNonResidentNV)0;
PFN::glGetImageHandleNV glGetImageHandleNV = (PFN::glGetImageHandleNV)0;
PFN::glMakeImageHandleResidentNV glMakeImageHandleResidentNV = (PFN::glMakeImageHandleResidentNV)0;
PFN::glMakeImageHandleNonResidentNV glMakeImageHandleNonResidentNV = (PFN::glMakeImageHandleNonResidentNV)0;
PFN::glUniformHandleui64NV glUniformHandleui64NV = (PFN::glUniformHandleui64NV)0;
PFN::glUniformHandleui64vNV glUniformHandleui64vNV = (PFN::glUniformHandleui64vNV)0;
PFN::glProgramUniformHandleui64NV glProgramUniformHandleui64NV = (PFN::glProgramUniformHandleui64NV)0;
PFN::glProgramUniformHandleui64vNV glProgramUniformHandleui64vNV = (PFN::glProgramUniformHandleui64vNV)0;
PFN::glIsTextureHandleResidentNV glIsTextureHandleResidentNV = (PFN::glIsTextureHandleResidentNV)0;
PFN::glIsImageHandleResidentNV glIsImageHandleResidentNV = (PFN::glIsImageHandleResidentNV)0;

// GL_NV_blend_equation_advanced
bool _GL_NV_blend_equation_advanced = false;
const bool& GL_NV_blend_equation_advanced = _GL_NV_blend_equation_advanced;
PFN::glBlendParameteriNV glBlendParameteriNV = (PFN::glBlendParameteriNV)0;
PFN::glBlendBarrierNV glBlendBarrierNV = (PFN::glBlendBarrierNV)0;

// GL_NV_blend_equation_advanced_coherent
bool _GL_NV_blend_equation_advanced_coherent = false;
const bool& GL_NV_blend_equation_advanced_coherent = _GL_NV_blend_equation_advanced_coherent;

// GL_NV_blend_minmax_factor
bool _GL_NV_blend_minmax_factor = false;
const bool& GL_NV_blend_minmax_factor = _GL_NV_blend_minmax_factor;

// GL_NV_clip_space_w_scaling
bool _GL_NV_clip_space_w_scaling = false;
const bool& GL_NV_clip_space_w_scaling = _GL_NV_clip_space_w_scaling;
PFN::glViewportPositionWScaleNV glViewportPositionWScaleNV = (PFN::glViewportPositionWScaleNV)0;

// GL_NV_command_list
bool _GL_NV_command_list = false;
const bool& GL_NV_command_list = _GL_NV_command_list;
PFN::glCreateStatesNV glCreateStatesNV = (PFN::glCreateStatesNV)0;
PFN::glDeleteStatesNV glDeleteStatesNV = (PFN::glDeleteStatesNV)0;
PFN::glIsStateNV glIsStateNV = (PFN::glIsStateNV)0;
PFN::glStateCaptureNV glStateCaptureNV = (PFN::glStateCaptureNV)0;
PFN::glGetCommandHeaderNV glGetCommandHeaderNV = (PFN::glGetCommandHeaderNV)0;
PFN::glGetStageIndexNV glGetStageIndexNV = (PFN::glGetStageIndexNV)0;
PFN::glDrawCommandsNV glDrawCommandsNV = (PFN::glDrawCommandsNV)0;
PFN::glDrawCommandsAddressNV glDrawCommandsAddressNV = (PFN::glDrawCommandsAddressNV)0;
PFN::glDrawCommandsStatesNV glDrawCommandsStatesNV = (PFN::glDrawCommandsStatesNV)0;
PFN::glDrawCommandsStatesAddressNV glDrawCommandsStatesAddressNV = (PFN::glDrawCommandsStatesAddressNV)0;
PFN::glCreateCommandListsNV glCreateCommandListsNV = (PFN::glCreateCommandListsNV)0;
PFN::glDeleteCommandListsNV glDeleteCommandListsNV = (PFN::glDeleteCommandListsNV)0;
PFN::glIsCommandListNV glIsCommandListNV = (PFN::glIsCommandListNV)0;
PFN::glListDrawCommandsStatesClientNV glListDrawCommandsStatesClientNV = (PFN::glListDrawCommandsStatesClientNV)0;
PFN::glCommandListSegmentsNV glCommandListSegmentsNV = (PFN::glCommandListSegmentsNV)0;
PFN::glCompileCommandListNV glCompileCommandListNV = (PFN::glCompileCommandListNV)0;
PFN::glCallCommandListNV glCallCommandListNV = (PFN::glCallCommandListNV)0;

// GL_NV_compute_shader_derivatives
bool _GL_NV_compute_shader_derivatives = false;
const bool& GL_NV_compute_shader_derivatives = _GL_NV_compute_shader_derivatives;

// GL_NV_conditional_render
bool _GL_NV_conditional_render = false;
const bool& GL_NV_conditional_render = _GL_NV_conditional_render;
PFN::glBeginConditionalRenderNV glBeginConditionalRenderNV = (PFN::glBeginConditionalRenderNV)0;
PFN::glEndConditionalRenderNV glEndConditionalRenderNV = (PFN::glEndConditionalRenderNV)0;

// GL_NV_conservative_raster
bool _GL_NV_conservative_raster = false;
const bool& GL_NV_conservative_raster = _GL_NV_conservative_raster;
PFN::glSubpixelPrecisionBiasNV glSubpixelPrecisionBiasNV = (PFN::glSubpixelPrecisionBiasNV)0;

// GL_NV_conservative_raster_dilate
bool _GL_NV_conservative_raster_dilate = false;
const bool& GL_NV_conservative_raster_dilate = _GL_NV_conservative_raster_dilate;
PFN::glConservativeRasterParameterfNV glConservativeRasterParameterfNV = (PFN::glConservativeRasterParameterfNV)0;

// GL_NV_conservative_raster_pre_snap
bool _GL_NV_conservative_raster_pre_snap = false;
const bool& GL_NV_conservative_raster_pre_snap = _GL_NV_conservative_raster_pre_snap;

// GL_NV_conservative_raster_pre_snap_triangles
bool _GL_NV_conservative_raster_pre_snap_triangles = false;
const bool& GL_NV_conservative_raster_pre_snap_triangles = _GL_NV_conservative_raster_pre_snap_triangles;
PFN::glConservativeRasterParameteriNV glConservativeRasterParameteriNV = (PFN::glConservativeRasterParameteriNV)0;

// GL_NV_conservative_raster_underestimation
bool _GL_NV_conservative_raster_underestimation = false;
const bool& GL_NV_conservative_raster_underestimation = _GL_NV_conservative_raster_underestimation;

// GL_NV_depth_buffer_float
bool _GL_NV_depth_buffer_float = false;
const bool& GL_NV_depth_buffer_float = _GL_NV_depth_buffer_float;
PFN::glDepthRangedNV glDepthRangedNV = (PFN::glDepthRangedNV)0;
PFN::glClearDepthdNV glClearDepthdNV = (PFN::glClearDepthdNV)0;
PFN::glDepthBoundsdNV glDepthBoundsdNV = (PFN::glDepthBoundsdNV)0;

// GL_NV_draw_vulkan_image
bool _GL_NV_draw_vulkan_image = false;
const bool& GL_NV_draw_vulkan_image = _GL_NV_draw_vulkan_image;
PFN::glDrawVkImageNV glDrawVkImageNV = (PFN::glDrawVkImageNV)0;
PFN::glGetVkProcAddrNV glGetVkProcAddrNV = (PFN::glGetVkProcAddrNV)0;
PFN::glWaitVkSemaphoreNV glWaitVkSemaphoreNV = (PFN::glWaitVkSemaphoreNV)0;
PFN::glSignalVkSemaphoreNV glSignalVkSemaphoreNV = (PFN::glSignalVkSemaphoreNV)0;
PFN::glSignalVkFenceNV glSignalVkFenceNV = (PFN::glSignalVkFenceNV)0;

// GL_NV_fill_rectangle
bool _GL_NV_fill_rectangle = false;
const bool& GL_NV_fill_rectangle = _GL_NV_fill_rectangle;

// GL_NV_fragment_coverage_to_color
bool _GL_NV_fragment_coverage_to_color = false;
const bool& GL_NV_fragment_coverage_to_color = _GL_NV_fragment_coverage_to_color;
PFN::glFragmentCoverageColorNV glFragmentCoverageColorNV = (PFN::glFragmentCoverageColorNV)0;

// GL_NV_fragment_shader_barycentric
bool _GL_NV_fragment_shader_barycentric = false;
const bool& GL_NV_fragment_shader_barycentric = _GL_NV_fragment_shader_barycentric;

// GL_NV_fragment_shader_interlock
bool _GL_NV_fragment_shader_interlock = false;
const bool& GL_NV_fragment_shader_interlock = _GL_NV_fragment_shader_interlock;

// GL_NV_framebuffer_mixed_samples
bool _GL_NV_framebuffer_mixed_samples = false;
const bool& GL_NV_framebuffer_mixed_samples = _GL_NV_framebuffer_mixed_samples;
PFN::glCoverageModulationTableNV glCoverageModulationTableNV = (PFN::glCoverageModulationTableNV)0;
PFN::glGetCoverageModulationTableNV glGetCoverageModulationTableNV = (PFN::glGetCoverageModulationTableNV)0;
PFN::glCoverageModulationNV glCoverageModulationNV = (PFN::glCoverageModulationNV)0;

// GL_NV_framebuffer_multisample_coverage
bool _GL_NV_framebuffer_multisample_coverage = false;
const bool& GL_NV_framebuffer_multisample_coverage = _GL_NV_framebuffer_multisample_coverage;
PFN::glRenderbufferStorageMultisampleCoverageNV glRenderbufferStorageMultisampleCoverageNV = (PFN::glRenderbufferStorageMultisampleCoverageNV)0;

// GL_NV_geometry_shader_passthrough
bool _GL_NV_geometry_shader_passthrough = false;
const bool& GL_NV_geometry_shader_passthrough = _GL_NV_geometry_shader_passthrough;

// GL_NV_gpu_shader5
bool _GL_NV_gpu_shader5 = false;
const bool& GL_NV_gpu_shader5 = _GL_NV_gpu_shader5;
PFN::glUniform1i64NV glUniform1i64NV = (PFN::glUniform1i64NV)0;
PFN::glUniform2i64NV glUniform2i64NV = (PFN::glUniform2i64NV)0;
PFN::glUniform3i64NV glUniform3i64NV = (PFN::glUniform3i64NV)0;
PFN::glUniform4i64NV glUniform4i64NV = (PFN::glUniform4i64NV)0;
PFN::glUniform1i64vNV glUniform1i64vNV = (PFN::glUniform1i64vNV)0;
PFN::glUniform2i64vNV glUniform2i64vNV = (PFN::glUniform2i64vNV)0;
PFN::glUniform3i64vNV glUniform3i64vNV = (PFN::glUniform3i64vNV)0;
PFN::glUniform4i64vNV glUniform4i64vNV = (PFN::glUniform4i64vNV)0;
PFN::glUniform1ui64NV glUniform1ui64NV = (PFN::glUniform1ui64NV)0;
PFN::glUniform2ui64NV glUniform2ui64NV = (PFN::glUniform2ui64NV)0;
PFN::glUniform3ui64NV glUniform3ui64NV = (PFN::glUniform3ui64NV)0;
PFN::glUniform4ui64NV glUniform4ui64NV = (PFN::glUniform4ui64NV)0;
PFN::glUniform1ui64vNV glUniform1ui64vNV = (PFN::glUniform1ui64vNV)0;
PFN::glUniform2ui64vNV glUniform2ui64vNV = (PFN::glUniform2ui64vNV)0;
PFN::glUniform3ui64vNV glUniform3ui64vNV = (PFN::glUniform3ui64vNV)0;
PFN::glUniform4ui64vNV glUniform4ui64vNV = (PFN::glUniform4ui64vNV)0;
PFN::glGetUniformi64vNV glGetUniformi64vNV = (PFN::glGetUniformi64vNV)0;
PFN::glProgramUniform1i64NV glProgramUniform1i64NV = (PFN::glProgramUniform1i64NV)0;
PFN::glProgramUniform2i64NV glProgramUniform2i64NV = (PFN::glProgramUniform2i64NV)0;
PFN::glProgramUniform3i64NV glProgramUniform3i64NV = (PFN::glProgramUniform3i64NV)0;
PFN::glProgramUniform4i64NV glProgramUniform4i64NV = (PFN::glProgramUniform4i64NV)0;
PFN::glProgramUniform1i64vNV glProgramUniform1i64vNV = (PFN::glProgramUniform1i64vNV)0;
PFN::glProgramUniform2i64vNV glProgramUniform2i64vNV = (PFN::glProgramUniform2i64vNV)0;
PFN::glProgramUniform3i64vNV glProgramUniform3i64vNV = (PFN::glProgramUniform3i64vNV)0;
PFN::glProgramUniform4i64vNV glProgramUniform4i64vNV = (PFN::glProgramUniform4i64vNV)0;
PFN::glProgramUniform1ui64NV glProgramUniform1ui64NV = (PFN::glProgramUniform1ui64NV)0;
PFN::glProgramUniform2ui64NV glProgramUniform2ui64NV = (PFN::glProgramUniform2ui64NV)0;
PFN::glProgramUniform3ui64NV glProgramUniform3ui64NV = (PFN::glProgramUniform3ui64NV)0;
PFN::glProgramUniform4ui64NV glProgramUniform4ui64NV = (PFN::glProgramUniform4ui64NV)0;
PFN::glProgramUniform1ui64vNV glProgramUniform1ui64vNV = (PFN::glProgramUniform1ui64vNV)0;
PFN::glProgramUniform2ui64vNV glProgramUniform2ui64vNV = (PFN::glProgramUniform2ui64vNV)0;
PFN::glProgramUniform3ui64vNV glProgramUniform3ui64vNV = (PFN::glProgramUniform3ui64vNV)0;
PFN::glProgramUniform4ui64vNV glProgramUniform4ui64vNV = (PFN::glProgramUniform4ui64vNV)0;

// GL_NV_internalformat_sample_query
bool _GL_NV_internalformat_sample_query = false;
const bool& GL_NV_internalformat_sample_query = _GL_NV_internalformat_sample_query;
PFN::glGetInternalformatSampleivNV glGetInternalformatSampleivNV = (PFN::glGetInternalformatSampleivNV)0;

// GL_NV_memory_attachment
bool _GL_NV_memory_attachment = false;
const bool& GL_NV_memory_attachment = _GL_NV_memory_attachment;
PFN::glGetMemoryObjectDetachedResourcesuivNV glGetMemoryObjectDetachedResourcesuivNV = (PFN::glGetMemoryObjectDetachedResourcesuivNV)0;
PFN::glResetMemoryObjectParameterNV glResetMemoryObjectParameterNV = (PFN::glResetMemoryObjectParameterNV)0;
PFN::glTexAttachMemoryNV glTexAttachMemoryNV = (PFN::glTexAttachMemoryNV)0;
PFN::glBufferAttachMemoryNV glBufferAttachMemoryNV = (PFN::glBufferAttachMemoryNV)0;
PFN::glTextureAttachMemoryNV glTextureAttachMemoryNV = (PFN::glTextureAttachMemoryNV)0;
PFN::glNamedBufferAttachMemoryNV glNamedBufferAttachMemoryNV = (PFN::glNamedBufferAttachMemoryNV)0;

// GL_NV_memory_object_sparse
bool _GL_NV_memory_object_sparse = false;
const bool& GL_NV_memory_object_sparse = _GL_NV_memory_object_sparse;
PFN::glBufferPageCommitmentMemNV glBufferPageCommitmentMemNV = (PFN::glBufferPageCommitmentMemNV)0;
PFN::glTexPageCommitmentMemNV glTexPageCommitmentMemNV = (PFN::glTexPageCommitmentMemNV)0;
PFN::glNamedBufferPageCommitmentMemNV glNamedBufferPageCommitmentMemNV = (PFN::glNamedBufferPageCommitmentMemNV)0;
PFN::glTexturePageCommitmentMemNV glTexturePageCommitmentMemNV = (PFN::glTexturePageCommitmentMemNV)0;

// GL_NV_mesh_shader
bool _GL_NV_mesh_shader = false;
const bool& GL_NV_mesh_shader = _GL_NV_mesh_shader;
PFN::glDrawMeshTasksNV glDrawMeshTasksNV = (PFN::glDrawMeshTasksNV)0;
PFN::glDrawMeshTasksIndirectNV glDrawMeshTasksIndirectNV = (PFN::glDrawMeshTasksIndirectNV)0;
PFN::glMultiDrawMeshTasksIndirectNV glMultiDrawMeshTasksIndirectNV = (PFN::glMultiDrawMeshTasksIndirectNV)0;
PFN::glMultiDrawMeshTasksIndirectCountNV glMultiDrawMeshTasksIndirectCountNV = (PFN::glMultiDrawMeshTasksIndirectCountNV)0;

// GL_NV_path_rendering
bool _GL_NV_path_rendering = false;
const bool& GL_NV_path_rendering = _GL_NV_path_rendering;
PFN::glGenPathsNV glGenPathsNV = (PFN::glGenPathsNV)0;
PFN::glDeletePathsNV glDeletePathsNV = (PFN::glDeletePathsNV)0;
PFN::glIsPathNV glIsPathNV = (PFN::glIsPathNV)0;
PFN::glPathCommandsNV glPathCommandsNV = (PFN::glPathCommandsNV)0;
PFN::glPathCoordsNV glPathCoordsNV = (PFN::glPathCoordsNV)0;
PFN::glPathSubCommandsNV glPathSubCommandsNV = (PFN::glPathSubCommandsNV)0;
PFN::glPathSubCoordsNV glPathSubCoordsNV = (PFN::glPathSubCoordsNV)0;
PFN::glPathStringNV glPathStringNV = (PFN::glPathStringNV)0;
PFN::glPathGlyphsNV glPathGlyphsNV = (PFN::glPathGlyphsNV)0;
PFN::glPathGlyphRangeNV glPathGlyphRangeNV = (PFN::glPathGlyphRangeNV)0;
PFN::glWeightPathsNV glWeightPathsNV = (PFN::glWeightPathsNV)0;
PFN::glCopyPathNV glCopyPathNV = (PFN::glCopyPathNV)0;
PFN::glInterpolatePathsNV glInterpolatePathsNV = (PFN::glInterpolatePathsNV)0;
PFN::glTransformPathNV glTransformPathNV = (PFN::glTransformPathNV)0;
PFN::glPathParameterivNV glPathParameterivNV = (PFN::glPathParameterivNV)0;
PFN::glPathParameteriNV glPathParameteriNV = (PFN::glPathParameteriNV)0;
PFN::glPathParameterfvNV glPathParameterfvNV = (PFN::glPathParameterfvNV)0;
PFN::glPathParameterfNV glPathParameterfNV = (PFN::glPathParameterfNV)0;
PFN::glPathDashArrayNV glPathDashArrayNV = (PFN::glPathDashArrayNV)0;
PFN::glPathStencilFuncNV glPathStencilFuncNV = (PFN::glPathStencilFuncNV)0;
PFN::glPathStencilDepthOffsetNV glPathStencilDepthOffsetNV = (PFN::glPathStencilDepthOffsetNV)0;
PFN::glStencilFillPathNV glStencilFillPathNV = (PFN::glStencilFillPathNV)0;
PFN::glStencilStrokePathNV glStencilStrokePathNV = (PFN::glStencilStrokePathNV)0;
PFN::glStencilFillPathInstancedNV glStencilFillPathInstancedNV = (PFN::glStencilFillPathInstancedNV)0;
PFN::glStencilStrokePathInstancedNV glStencilStrokePathInstancedNV = (PFN::glStencilStrokePathInstancedNV)0;
PFN::glPathCoverDepthFuncNV glPathCoverDepthFuncNV = (PFN::glPathCoverDepthFuncNV)0;
PFN::glCoverFillPathNV glCoverFillPathNV = (PFN::glCoverFillPathNV)0;
PFN::glCoverStrokePathNV glCoverStrokePathNV = (PFN::glCoverStrokePathNV)0;
PFN::glCoverFillPathInstancedNV glCoverFillPathInstancedNV = (PFN::glCoverFillPathInstancedNV)0;
PFN::glCoverStrokePathInstancedNV glCoverStrokePathInstancedNV = (PFN::glCoverStrokePathInstancedNV)0;
PFN::glGetPathParameterivNV glGetPathParameterivNV = (PFN::glGetPathParameterivNV)0;
PFN::glGetPathParameterfvNV glGetPathParameterfvNV = (PFN::glGetPathParameterfvNV)0;
PFN::glGetPathCommandsNV glGetPathCommandsNV = (PFN::glGetPathCommandsNV)0;
PFN::glGetPathCoordsNV glGetPathCoordsNV = (PFN::glGetPathCoordsNV)0;
PFN::glGetPathDashArrayNV glGetPathDashArrayNV = (PFN::glGetPathDashArrayNV)0;
PFN::glGetPathMetricsNV glGetPathMetricsNV = (PFN::glGetPathMetricsNV)0;
PFN::glGetPathMetricRangeNV glGetPathMetricRangeNV = (PFN::glGetPathMetricRangeNV)0;
PFN::glGetPathSpacingNV glGetPathSpacingNV = (PFN::glGetPathSpacingNV)0;
PFN::glIsPointInFillPathNV glIsPointInFillPathNV = (PFN::glIsPointInFillPathNV)0;
PFN::glIsPointInStrokePathNV glIsPointInStrokePathNV = (PFN::glIsPointInStrokePathNV)0;
PFN::glGetPathLengthNV glGetPathLengthNV = (PFN::glGetPathLengthNV)0;
PFN::glPointAlongPathNV glPointAlongPathNV = (PFN::glPointAlongPathNV)0;
PFN::glMatrixLoad3x2fNV glMatrixLoad3x2fNV = (PFN::glMatrixLoad3x2fNV)0;
PFN::glMatrixLoad3x3fNV glMatrixLoad3x3fNV = (PFN::glMatrixLoad3x3fNV)0;
PFN::glMatrixLoadTranspose3x3fNV glMatrixLoadTranspose3x3fNV = (PFN::glMatrixLoadTranspose3x3fNV)0;
PFN::glMatrixMult3x2fNV glMatrixMult3x2fNV = (PFN::glMatrixMult3x2fNV)0;
PFN::glMatrixMult3x3fNV glMatrixMult3x3fNV = (PFN::glMatrixMult3x3fNV)0;
PFN::glMatrixMultTranspose3x3fNV glMatrixMultTranspose3x3fNV = (PFN::glMatrixMultTranspose3x3fNV)0;
PFN::glStencilThenCoverFillPathNV glStencilThenCoverFillPathNV = (PFN::glStencilThenCoverFillPathNV)0;
PFN::glStencilThenCoverStrokePathNV glStencilThenCoverStrokePathNV = (PFN::glStencilThenCoverStrokePathNV)0;
PFN::glStencilThenCoverFillPathInstancedNV glStencilThenCoverFillPathInstancedNV = (PFN::glStencilThenCoverFillPathInstancedNV)0;
PFN::glStencilThenCoverStrokePathInstancedNV glStencilThenCoverStrokePathInstancedNV = (PFN::glStencilThenCoverStrokePathInstancedNV)0;
PFN::glPathGlyphIndexRangeNV glPathGlyphIndexRangeNV = (PFN::glPathGlyphIndexRangeNV)0;
PFN::glPathGlyphIndexArrayNV glPathGlyphIndexArrayNV = (PFN::glPathGlyphIndexArrayNV)0;
PFN::glPathMemoryGlyphIndexArrayNV glPathMemoryGlyphIndexArrayNV = (PFN::glPathMemoryGlyphIndexArrayNV)0;
PFN::glProgramPathFragmentInputGenNV glProgramPathFragmentInputGenNV = (PFN::glProgramPathFragmentInputGenNV)0;
PFN::glGetProgramResourcefvNV glGetProgramResourcefvNV = (PFN::glGetProgramResourcefvNV)0;

// GL_NV_path_rendering_shared_edge
bool _GL_NV_path_rendering_shared_edge = false;
const bool& GL_NV_path_rendering_shared_edge = _GL_NV_path_rendering_shared_edge;

// GL_NV_primitive_shading_rate
bool _GL_NV_primitive_shading_rate = false;
const bool& GL_NV_primitive_shading_rate = _GL_NV_primitive_shading_rate;

// GL_NV_representative_fragment_test
bool _GL_NV_representative_fragment_test = false;
const bool& GL_NV_representative_fragment_test = _GL_NV_representative_fragment_test;

// GL_NV_sample_locations
bool _GL_NV_sample_locations = false;
const bool& GL_NV_sample_locations = _GL_NV_sample_locations;
PFN::glFramebufferSampleLocationsfvNV glFramebufferSampleLocationsfvNV = (PFN::glFramebufferSampleLocationsfvNV)0;
PFN::glNamedFramebufferSampleLocationsfvNV glNamedFramebufferSampleLocationsfvNV = (PFN::glNamedFramebufferSampleLocationsfvNV)0;
PFN::glResolveDepthValuesNV glResolveDepthValuesNV = (PFN::glResolveDepthValuesNV)0;

// GL_NV_sample_mask_override_coverage
bool _GL_NV_sample_mask_override_coverage = false;
const bool& GL_NV_sample_mask_override_coverage = _GL_NV_sample_mask_override_coverage;

// GL_NV_scissor_exclusive
bool _GL_NV_scissor_exclusive = false;
const bool& GL_NV_scissor_exclusive = _GL_NV_scissor_exclusive;
PFN::glScissorExclusiveNV glScissorExclusiveNV = (PFN::glScissorExclusiveNV)0;
PFN::glScissorExclusiveArrayvNV glScissorExclusiveArrayvNV = (PFN::glScissorExclusiveArrayvNV)0;

// GL_NV_shader_atomic_counters
bool _GL_NV_shader_atomic_counters = false;
const bool& GL_NV_shader_atomic_counters = _GL_NV_shader_atomic_counters;

// GL_NV_shader_atomic_float
bool _GL_NV_shader_atomic_float = false;
const bool& GL_NV_shader_atomic_float = _GL_NV_shader_atomic_float;

// GL_NV_shader_atomic_float64
bool _GL_NV_shader_atomic_float64 = false;
const bool& GL_NV_shader_atomic_float64 = _GL_NV_shader_atomic_float64;

// GL_NV_shader_atomic_fp16_vector
bool _GL_NV_shader_atomic_fp16_vector = false;
const bool& GL_NV_shader_atomic_fp16_vector = _GL_NV_shader_atomic_fp16_vector;

// GL_NV_shader_atomic_int64
bool _GL_NV_shader_atomic_int64 = false;
const bool& GL_NV_shader_atomic_int64 = _GL_NV_shader_atomic_int64;

// GL_NV_shader_buffer_load
bool _GL_NV_shader_buffer_load = false;
const bool& GL_NV_shader_buffer_load = _GL_NV_shader_buffer_load;
PFN::glMakeBufferResidentNV glMakeBufferResidentNV = (PFN::glMakeBufferResidentNV)0;
PFN::glMakeBufferNonResidentNV glMakeBufferNonResidentNV = (PFN::glMakeBufferNonResidentNV)0;
PFN::glIsBufferResidentNV glIsBufferResidentNV = (PFN::glIsBufferResidentNV)0;
PFN::glMakeNamedBufferResidentNV glMakeNamedBufferResidentNV = (PFN::glMakeNamedBufferResidentNV)0;
PFN::glMakeNamedBufferNonResidentNV glMakeNamedBufferNonResidentNV = (PFN::glMakeNamedBufferNonResidentNV)0;
PFN::glIsNamedBufferResidentNV glIsNamedBufferResidentNV = (PFN::glIsNamedBufferResidentNV)0;
PFN::glGetBufferParameterui64vNV glGetBufferParameterui64vNV = (PFN::glGetBufferParameterui64vNV)0;
PFN::glGetNamedBufferParameterui64vNV glGetNamedBufferParameterui64vNV = (PFN::glGetNamedBufferParameterui64vNV)0;
PFN::glGetIntegerui64vNV glGetIntegerui64vNV = (PFN::glGetIntegerui64vNV)0;
PFN::glUniformui64NV glUniformui64NV = (PFN::glUniformui64NV)0;
PFN::glUniformui64vNV glUniformui64vNV = (PFN::glUniformui64vNV)0;
PFN::glGetUniformui64vNV glGetUniformui64vNV = (PFN::glGetUniformui64vNV)0;
PFN::glProgramUniformui64NV glProgramUniformui64NV = (PFN::glProgramUniformui64NV)0;
PFN::glProgramUniformui64vNV glProgramUniformui64vNV = (PFN::glProgramUniformui64vNV)0;

// GL_NV_shader_buffer_store
bool _GL_NV_shader_buffer_store = false;
const bool& GL_NV_shader_buffer_store = _GL_NV_shader_buffer_store;

// GL_NV_shader_subgroup_partitioned
bool _GL_NV_shader_subgroup_partitioned = false;
const bool& GL_NV_shader_subgroup_partitioned = _GL_NV_shader_subgroup_partitioned;

// GL_NV_shader_texture_footprint
bool _GL_NV_shader_texture_footprint = false;
const bool& GL_NV_shader_texture_footprint = _GL_NV_shader_texture_footprint;

// GL_NV_shader_thread_group
bool _GL_NV_shader_thread_group = false;
const bool& GL_NV_shader_thread_group = _GL_NV_shader_thread_group;

// GL_NV_shader_thread_shuffle
bool _GL_NV_shader_thread_shuffle = false;
const bool& GL_NV_shader_thread_shuffle = _GL_NV_shader_thread_shuffle;

// GL_NV_shading_rate_image
bool _GL_NV_shading_rate_image = false;
const bool& GL_NV_shading_rate_image = _GL_NV_shading_rate_image;
PFN::glBindShadingRateImageNV glBindShadingRateImageNV = (PFN::glBindShadingRateImageNV)0;
PFN::glGetShadingRateImagePaletteNV glGetShadingRateImagePaletteNV = (PFN::glGetShadingRateImagePaletteNV)0;
PFN::glGetShadingRateSampleLocationivNV glGetShadingRateSampleLocationivNV = (PFN::glGetShadingRateSampleLocationivNV)0;
PFN::glShadingRateImageBarrierNV glShadingRateImageBarrierNV = (PFN::glShadingRateImageBarrierNV)0;
PFN::glShadingRateImagePaletteNV glShadingRateImagePaletteNV = (PFN::glShadingRateImagePaletteNV)0;
PFN::glShadingRateSampleOrderNV glShadingRateSampleOrderNV = (PFN::glShadingRateSampleOrderNV)0;
PFN::glShadingRateSampleOrderCustomNV glShadingRateSampleOrderCustomNV = (PFN::glShadingRateSampleOrderCustomNV)0;

// GL_NV_stereo_view_rendering
bool _GL_NV_stereo_view_rendering = false;
const bool& GL_NV_stereo_view_rendering = _GL_NV_stereo_view_rendering;

// GL_NV_texture_barrier
bool _GL_NV_texture_barrier = false;
const bool& GL_NV_texture_barrier = _GL_NV_texture_barrier;
PFN::glTextureBarrierNV glTextureBarrierNV = (PFN::glTextureBarrierNV)0;

// GL_NV_texture_rectangle_compressed
bool _GL_NV_texture_rectangle_compressed = false;
const bool& GL_NV_texture_rectangle_compressed = _GL_NV_texture_rectangle_compressed;

// GL_NV_uniform_buffer_unified_memory
bool _GL_NV_uniform_buffer_unified_memory = false;
const bool& GL_NV_uniform_buffer_unified_memory = _GL_NV_uniform_buffer_unified_memory;

// GL_NV_vertex_attrib_integer_64bit
bool _GL_NV_vertex_attrib_integer_64bit = false;
const bool& GL_NV_vertex_attrib_integer_64bit = _GL_NV_vertex_attrib_integer_64bit;
PFN::glVertexAttribL1i64NV glVertexAttribL1i64NV = (PFN::glVertexAttribL1i64NV)0;
PFN::glVertexAttribL2i64NV glVertexAttribL2i64NV = (PFN::glVertexAttribL2i64NV)0;
PFN::glVertexAttribL3i64NV glVertexAttribL3i64NV = (PFN::glVertexAttribL3i64NV)0;
PFN::glVertexAttribL4i64NV glVertexAttribL4i64NV = (PFN::glVertexAttribL4i64NV)0;
PFN::glVertexAttribL1i64vNV glVertexAttribL1i64vNV = (PFN::glVertexAttribL1i64vNV)0;
PFN::glVertexAttribL2i64vNV glVertexAttribL2i64vNV = (PFN::glVertexAttribL2i64vNV)0;
PFN::glVertexAttribL3i64vNV glVertexAttribL3i64vNV = (PFN::glVertexAttribL3i64vNV)0;
PFN::glVertexAttribL4i64vNV glVertexAttribL4i64vNV = (PFN::glVertexAttribL4i64vNV)0;
PFN::glVertexAttribL1ui64NV glVertexAttribL1ui64NV = (PFN::glVertexAttribL1ui64NV)0;
PFN::glVertexAttribL2ui64NV glVertexAttribL2ui64NV = (PFN::glVertexAttribL2ui64NV)0;
PFN::glVertexAttribL3ui64NV glVertexAttribL3ui64NV = (PFN::glVertexAttribL3ui64NV)0;
PFN::glVertexAttribL4ui64NV glVertexAttribL4ui64NV = (PFN::glVertexAttribL4ui64NV)0;
PFN::glVertexAttribL1ui64vNV glVertexAttribL1ui64vNV = (PFN::glVertexAttribL1ui64vNV)0;
PFN::glVertexAttribL2ui64vNV glVertexAttribL2ui64vNV = (PFN::glVertexAttribL2ui64vNV)0;
PFN::glVertexAttribL3ui64vNV glVertexAttribL3ui64vNV = (PFN::glVertexAttribL3ui64vNV)0;
PFN::glVertexAttribL4ui64vNV glVertexAttribL4ui64vNV = (PFN::glVertexAttribL4ui64vNV)0;
PFN::glGetVertexAttribLi64vNV glGetVertexAttribLi64vNV = (PFN::glGetVertexAttribLi64vNV)0;
PFN::glGetVertexAttribLui64vNV glGetVertexAttribLui64vNV = (PFN::glGetVertexAttribLui64vNV)0;
PFN::glVertexAttribLFormatNV glVertexAttribLFormatNV = (PFN::glVertexAttribLFormatNV)0;

// GL_NV_vertex_buffer_unified_memory
bool _GL_NV_vertex_buffer_unified_memory = false;
const bool& GL_NV_vertex_buffer_unified_memory = _GL_NV_vertex_buffer_unified_memory;
PFN::glBufferAddressRangeNV glBufferAddressRangeNV = (PFN::glBufferAddressRangeNV)0;
PFN::glVertexFormatNV glVertexFormatNV = (PFN::glVertexFormatNV)0;
PFN::glNormalFormatNV glNormalFormatNV = (PFN::glNormalFormatNV)0;
PFN::glColorFormatNV glColorFormatNV = (PFN::glColorFormatNV)0;
PFN::glIndexFormatNV glIndexFormatNV = (PFN::glIndexFormatNV)0;
PFN::glTexCoordFormatNV glTexCoordFormatNV = (PFN::glTexCoordFormatNV)0;
PFN::glEdgeFlagFormatNV glEdgeFlagFormatNV = (PFN::glEdgeFlagFormatNV)0;
PFN::glSecondaryColorFormatNV glSecondaryColorFormatNV = (PFN::glSecondaryColorFormatNV)0;
PFN::glFogCoordFormatNV glFogCoordFormatNV = (PFN::glFogCoordFormatNV)0;
PFN::glVertexAttribFormatNV glVertexAttribFormatNV = (PFN::glVertexAttribFormatNV)0;
PFN::glVertexAttribIFormatNV glVertexAttribIFormatNV = (PFN::glVertexAttribIFormatNV)0;
PFN::glGetIntegerui64i_vNV glGetIntegerui64i_vNV = (PFN::glGetIntegerui64i_vNV)0;

// GL_NV_viewport_array2
bool _GL_NV_viewport_array2 = false;
const bool& GL_NV_viewport_array2 = _GL_NV_viewport_array2;

// GL_NV_viewport_swizzle
bool _GL_NV_viewport_swizzle = false;
const bool& GL_NV_viewport_swizzle = _GL_NV_viewport_swizzle;
PFN::glViewportSwizzleNV glViewportSwizzleNV = (PFN::glViewportSwizzleNV)0;

} // namespace GLNV

namespace GLOVR {

// GL_OVR_multiview
bool _GL_OVR_multiview = false;
const bool& GL_OVR_multiview = _GL_OVR_multiview;
PFN::glFramebufferTextureMultiviewOVR glFramebufferTextureMultiviewOVR = (PFN::glFramebufferTextureMultiviewOVR)0;
bool _GL_OVR_multiview2 = false;
const bool& GL_OVR_multiview2 = _GL_OVR_multiview2;

} // namespace GLOVR

bool load()
{
	static bool initialized = false;
	if(initialized) return true;
	if(!GLOBAL_DUMMY.isInitialized()) GLOBAL_DUMMY.init();
#if PLATFORM==PLATFORM_WINDOWS
	HMODULE GLMODULE = NULL;
	if(!GLOBAL_DUMMY.isInitialized() || !GLOBAL_DUMMY.makeCurrent() || !(GLMODULE = LoadLibraryW(L"opengl32.dll")))
		return false;
#elif PLATFORM==PLATFORM_LINUX
	if(!GLOBAL_DUMMY.isInitialized() || !GLOBAL_DUMMY.makeCurrent() || !GLOBAL_DUMMY.makeCurrent() || !GLX::load() || (!GLX::glXGetProcAddress && !GLX::glXGetProcAddressARB))
		return false;
#endif
    {
        using namespace GL1;
        LOAD_GLPROC(glGetString);
    }
    const char* cstr_version = (const char*)GL1::glGetString(GL1::GL_VERSION);
    if(!cstr_version) return false;
    // const bool gl3_or_greater = (cstr_version[0] - '0') >= 3;
    int version_major = 0, version_minor = 0;
    const int dot_index = (cstr_version[1] == '.' ? 1 : (cstr_version[2] == '.' ? 2 : (cstr_version[3] == '.' ? 3 : 4))) + 1;
    version_major = (int)atof(&cstr_version[0]);
    version_minor = (int)atof(&cstr_version[dot_index]);
	{
		using namespace GL1;
		// GL_VERSION_1_0
		LOAD_GLPROC(glCullFace);
        if(glCullFace)
        {
            LOAD_GLPROC(glFrontFace);
            LOAD_GLPROC(glHint);
            LOAD_GLPROC(glLineWidth);
            LOAD_GLPROC(glPointSize);
            LOAD_GLPROC(glPolygonMode);
            LOAD_GLPROC(glScissor);
            LOAD_GLPROC(glTexParameterf);
            LOAD_GLPROC(glTexParameterfv);
            LOAD_GLPROC(glTexParameteri);
            LOAD_GLPROC(glTexParameteriv);
            LOAD_GLPROC(glTexImage1D);
            LOAD_GLPROC(glTexImage2D);
            LOAD_GLPROC(glDrawBuffer);
            LOAD_GLPROC(glClear);
            LOAD_GLPROC(glClearColor);
            LOAD_GLPROC(glClearStencil);
            LOAD_GLPROC(glClearDepth);
            LOAD_GLPROC(glStencilMask);
            LOAD_GLPROC(glColorMask);
            LOAD_GLPROC(glDepthMask);
            LOAD_GLPROC(glDisable);
            LOAD_GLPROC(glEnable);
            LOAD_GLPROC(glFinish);
            LOAD_GLPROC(glFlush);
            LOAD_GLPROC(glBlendFunc);
            LOAD_GLPROC(glLogicOp);
            LOAD_GLPROC(glStencilFunc);
            LOAD_GLPROC(glStencilOp);
            LOAD_GLPROC(glDepthFunc);
            LOAD_GLPROC(glPixelStoref);
            LOAD_GLPROC(glPixelStorei);
            LOAD_GLPROC(glReadBuffer);
            LOAD_GLPROC(glReadPixels);
            LOAD_GLPROC(glGetBooleanv);
            LOAD_GLPROC(glGetDoublev);
            LOAD_GLPROC(glGetError);
            LOAD_GLPROC(glGetFloatv);
            LOAD_GLPROC(glGetIntegerv);
            LOAD_GLPROC(glGetString);
            LOAD_GLPROC(glGetTexImage);
            LOAD_GLPROC(glGetTexParameterfv);
            LOAD_GLPROC(glGetTexParameteriv);
            LOAD_GLPROC(glGetTexLevelParameterfv);
            LOAD_GLPROC(glGetTexLevelParameteriv);
            LOAD_GLPROC(glIsEnabled);
            LOAD_GLPROC(glDepthRange);
            LOAD_GLPROC(glViewport);
            _GL_VERSION_1_0 = glCullFace && glFrontFace && glHint && glLineWidth && glPointSize && glPolygonMode && glScissor && glTexParameterf && glTexParameterfv && glTexParameteri && glTexParameteriv && glTexImage1D && glTexImage2D && glDrawBuffer && glClear && glClearColor && glClearStencil && glClearDepth && glStencilMask && glColorMask && glDepthMask && glDisable && glEnable && glFinish && glFlush && glBlendFunc && glLogicOp && glStencilFunc && glStencilOp && glDepthFunc && glPixelStoref && glPixelStorei && glReadBuffer && glReadPixels && glGetBooleanv && glGetDoublev && glGetError && glGetFloatv && glGetIntegerv && glGetString && glGetTexImage && glGetTexParameterfv && glGetTexParameteriv && glGetTexLevelParameterfv && glGetTexLevelParameteriv && glIsEnabled && glDepthRange && glViewport;
        }
        // GL_VERSION_1_1
		LOAD_GLPROC(glDrawArrays);
        if(glDrawArrays)
        {
            LOAD_GLPROC(glDrawElements);
            LOAD_GLPROC(glGetPointerv);
            LOAD_GLPROC(glPolygonOffset);
            LOAD_GLPROC(glCopyTexImage1D);
            LOAD_GLPROC(glCopyTexImage2D);
            LOAD_GLPROC(glCopyTexSubImage1D);
            LOAD_GLPROC(glCopyTexSubImage2D);
            LOAD_GLPROC(glTexSubImage1D);
            LOAD_GLPROC(glTexSubImage2D);
            LOAD_GLPROC(glBindTexture);
            LOAD_GLPROC(glDeleteTextures);
            LOAD_GLPROC(glGenTextures);
            LOAD_GLPROC(glIsTexture);
            _GL_VERSION_1_1 = glDrawArrays && glDrawElements && glGetPointerv && glPolygonOffset && glCopyTexImage1D && glCopyTexImage2D && glCopyTexSubImage1D && glCopyTexSubImage2D && glTexSubImage1D && glTexSubImage2D && glBindTexture && glDeleteTextures && glGenTextures && glIsTexture;
		}
        // GL_VERSION_1_2
		LOAD_GLPROC(glDrawRangeElements);
        if(glDrawRangeElements)
        {
            LOAD_GLPROC(glTexImage3D);
            LOAD_GLPROC(glTexSubImage3D);
            LOAD_GLPROC(glCopyTexSubImage3D);
            _GL_VERSION_1_2 = glDrawRangeElements && glTexImage3D && glTexSubImage3D && glCopyTexSubImage3D;
        }
		// GL_VERSION_1_3
		LOAD_GLPROC(glActiveTexture);
        if(glActiveTexture)
        {
            LOAD_GLPROC(glSampleCoverage);
            LOAD_GLPROC(glCompressedTexImage3D);
            LOAD_GLPROC(glCompressedTexImage2D);
            LOAD_GLPROC(glCompressedTexImage1D);
            LOAD_GLPROC(glCompressedTexSubImage3D);
            LOAD_GLPROC(glCompressedTexSubImage2D);
            LOAD_GLPROC(glCompressedTexSubImage1D);
            LOAD_GLPROC(glGetCompressedTexImage);
            _GL_VERSION_1_3 = glActiveTexture && glSampleCoverage && glCompressedTexImage3D && glCompressedTexImage2D && glCompressedTexImage1D && glCompressedTexSubImage3D && glCompressedTexSubImage2D && glCompressedTexSubImage1D && glGetCompressedTexImage;
        }
		// GL_VERSION_1_4
		LOAD_GLPROC(glBlendFuncSeparate);
        if(glBlendFuncSeparate)
        {
            LOAD_GLPROC(glMultiDrawArrays);
            LOAD_GLPROC(glMultiDrawElements);
            LOAD_GLPROC(glPointParameterf);
            LOAD_GLPROC(glPointParameterfv);
            LOAD_GLPROC(glPointParameteri);
            LOAD_GLPROC(glPointParameteriv);
            LOAD_GLPROC(glBlendColor);
            LOAD_GLPROC(glBlendEquation);
            _GL_VERSION_1_4 = glBlendFuncSeparate && glMultiDrawArrays && glMultiDrawElements && glPointParameterf && glPointParameterfv && glPointParameteri && glPointParameteriv && glBlendColor && glBlendEquation;
        }
		// GL_VERSION_1_5
		LOAD_GLPROC(glGenQueries);
        if(glGenQueries)
        {
            LOAD_GLPROC(glDeleteQueries);
            LOAD_GLPROC(glIsQuery);
            LOAD_GLPROC(glBeginQuery);
            LOAD_GLPROC(glEndQuery);
            LOAD_GLPROC(glGetQueryiv);
            LOAD_GLPROC(glGetQueryObjectiv);
            LOAD_GLPROC(glGetQueryObjectuiv);
            LOAD_GLPROC(glBindBuffer);
            LOAD_GLPROC(glDeleteBuffers);
            LOAD_GLPROC(glGenBuffers);
            LOAD_GLPROC(glIsBuffer);
            LOAD_GLPROC(glBufferData);
            LOAD_GLPROC(glBufferSubData);
            LOAD_GLPROC(glGetBufferSubData);
            LOAD_GLPROC(glMapBuffer);
            LOAD_GLPROC(glUnmapBuffer);
            LOAD_GLPROC(glGetBufferParameteriv);
            LOAD_GLPROC(glGetBufferPointerv);
		    _GL_VERSION_1_5 = glGenQueries && glDeleteQueries && glIsQuery && glBeginQuery && glEndQuery && glGetQueryiv && glGetQueryObjectiv && glGetQueryObjectuiv && glBindBuffer && glDeleteBuffers && glGenBuffers && glIsBuffer && glBufferData && glBufferSubData && glGetBufferSubData && glMapBuffer && glUnmapBuffer && glGetBufferParameteriv && glGetBufferPointerv;
        }
    }
	{
		using namespace axl::glfl::core::GL2;
		// GL_VERSION_2_0
		LOAD_GLPROC(glBlendEquationSeparate);
        if(glBlendEquationSeparate)
        {
            LOAD_GLPROC(glDrawBuffers);
            LOAD_GLPROC(glStencilOpSeparate);
            LOAD_GLPROC(glStencilFuncSeparate);
            LOAD_GLPROC(glStencilMaskSeparate);
            LOAD_GLPROC(glAttachShader);
            LOAD_GLPROC(glBindAttribLocation);
            LOAD_GLPROC(glCompileShader);
            LOAD_GLPROC(glCreateProgram);
            LOAD_GLPROC(glCreateShader);
            LOAD_GLPROC(glDeleteProgram);
            LOAD_GLPROC(glDeleteShader);
            LOAD_GLPROC(glDetachShader);
            LOAD_GLPROC(glDisableVertexAttribArray);
            LOAD_GLPROC(glEnableVertexAttribArray);
            LOAD_GLPROC(glGetActiveAttrib);
            LOAD_GLPROC(glGetActiveUniform);
            LOAD_GLPROC(glGetAttachedShaders);
            LOAD_GLPROC(glGetAttribLocation);
            LOAD_GLPROC(glGetProgramiv);
            LOAD_GLPROC(glGetProgramInfoLog);
            LOAD_GLPROC(glGetShaderiv);
            LOAD_GLPROC(glGetShaderInfoLog);
            LOAD_GLPROC(glGetShaderSource);
            LOAD_GLPROC(glGetUniformLocation);
            LOAD_GLPROC(glGetUniformfv);
            LOAD_GLPROC(glGetUniformiv);
            LOAD_GLPROC(glGetVertexAttribdv);
            LOAD_GLPROC(glGetVertexAttribfv);
            LOAD_GLPROC(glGetVertexAttribiv);
            LOAD_GLPROC(glGetVertexAttribPointerv);
            LOAD_GLPROC(glIsProgram);
            LOAD_GLPROC(glIsShader);
            LOAD_GLPROC(glLinkProgram);
            LOAD_GLPROC(glShaderSource);
            LOAD_GLPROC(glUseProgram);
            LOAD_GLPROC(glUniform1f);
            LOAD_GLPROC(glUniform2f);
            LOAD_GLPROC(glUniform3f);
            LOAD_GLPROC(glUniform4f);
            LOAD_GLPROC(glUniform1i);
            LOAD_GLPROC(glUniform2i);
            LOAD_GLPROC(glUniform3i);
            LOAD_GLPROC(glUniform4i);
            LOAD_GLPROC(glUniform1fv);
            LOAD_GLPROC(glUniform2fv);
            LOAD_GLPROC(glUniform3fv);
            LOAD_GLPROC(glUniform4fv);
            LOAD_GLPROC(glUniform1iv);
            LOAD_GLPROC(glUniform2iv);
            LOAD_GLPROC(glUniform3iv);
            LOAD_GLPROC(glUniform4iv);
            LOAD_GLPROC(glUniformMatrix2fv);
            LOAD_GLPROC(glUniformMatrix3fv);
            LOAD_GLPROC(glUniformMatrix4fv);
            LOAD_GLPROC(glValidateProgram);
            LOAD_GLPROC(glVertexAttrib1d);
            LOAD_GLPROC(glVertexAttrib1dv);
            LOAD_GLPROC(glVertexAttrib1f);
            LOAD_GLPROC(glVertexAttrib1fv);
            LOAD_GLPROC(glVertexAttrib1s);
            LOAD_GLPROC(glVertexAttrib1sv);
            LOAD_GLPROC(glVertexAttrib2d);
            LOAD_GLPROC(glVertexAttrib2dv);
            LOAD_GLPROC(glVertexAttrib2f);
            LOAD_GLPROC(glVertexAttrib2fv);
            LOAD_GLPROC(glVertexAttrib2s);
            LOAD_GLPROC(glVertexAttrib2sv);
            LOAD_GLPROC(glVertexAttrib3d);
            LOAD_GLPROC(glVertexAttrib3dv);
            LOAD_GLPROC(glVertexAttrib3f);
            LOAD_GLPROC(glVertexAttrib3fv);
            LOAD_GLPROC(glVertexAttrib3s);
            LOAD_GLPROC(glVertexAttrib3sv);
            LOAD_GLPROC(glVertexAttrib4Nbv);
            LOAD_GLPROC(glVertexAttrib4Niv);
            LOAD_GLPROC(glVertexAttrib4Nsv);
            LOAD_GLPROC(glVertexAttrib4Nub);
            LOAD_GLPROC(glVertexAttrib4Nubv);
            LOAD_GLPROC(glVertexAttrib4Nuiv);
            LOAD_GLPROC(glVertexAttrib4Nusv);
            LOAD_GLPROC(glVertexAttrib4bv);
            LOAD_GLPROC(glVertexAttrib4d);
            LOAD_GLPROC(glVertexAttrib4dv);
            LOAD_GLPROC(glVertexAttrib4f);
            LOAD_GLPROC(glVertexAttrib4fv);
            LOAD_GLPROC(glVertexAttrib4iv);
            LOAD_GLPROC(glVertexAttrib4s);
            LOAD_GLPROC(glVertexAttrib4sv);
            LOAD_GLPROC(glVertexAttrib4ubv);
            LOAD_GLPROC(glVertexAttrib4uiv);
            LOAD_GLPROC(glVertexAttrib4usv);
            LOAD_GLPROC(glVertexAttribPointer);
            _GL_VERSION_2_0 = glBlendEquationSeparate && glDrawBuffers && glStencilOpSeparate && glStencilFuncSeparate && glStencilMaskSeparate && glAttachShader && glBindAttribLocation && glCompileShader && glCreateProgram && glCreateShader && glDeleteProgram && glDeleteShader && glDetachShader && glDisableVertexAttribArray && glEnableVertexAttribArray && glGetActiveAttrib && glGetActiveUniform && glGetAttachedShaders && glGetAttribLocation && glGetProgramiv && glGetProgramInfoLog && glGetShaderiv && glGetShaderInfoLog && glGetShaderSource && glGetUniformLocation && glGetUniformfv && glGetUniformiv && glGetVertexAttribdv && glGetVertexAttribfv && glGetVertexAttribiv && glGetVertexAttribPointerv && glIsProgram && glIsShader && glLinkProgram && glShaderSource && glUseProgram && glUniform1f && glUniform2f && glUniform3f && glUniform4f && glUniform1i && glUniform2i && glUniform3i && glUniform4i && glUniform1fv && glUniform2fv && glUniform3fv && glUniform4fv && glUniform1iv && glUniform2iv && glUniform3iv && glUniform4iv && glUniformMatrix2fv && glUniformMatrix3fv && glUniformMatrix4fv && glValidateProgram && glVertexAttrib1d && glVertexAttrib1dv && glVertexAttrib1f && glVertexAttrib1fv && glVertexAttrib1s && glVertexAttrib1sv && glVertexAttrib2d && glVertexAttrib2dv && glVertexAttrib2f && glVertexAttrib2fv && glVertexAttrib2s && glVertexAttrib2sv && glVertexAttrib3d && glVertexAttrib3dv && glVertexAttrib3f && glVertexAttrib3fv && glVertexAttrib3s && glVertexAttrib3sv && glVertexAttrib4Nbv && glVertexAttrib4Niv && glVertexAttrib4Nsv && glVertexAttrib4Nub && glVertexAttrib4Nubv && glVertexAttrib4Nuiv && glVertexAttrib4Nusv && glVertexAttrib4bv && glVertexAttrib4d && glVertexAttrib4dv && glVertexAttrib4f && glVertexAttrib4fv && glVertexAttrib4iv && glVertexAttrib4s && glVertexAttrib4sv && glVertexAttrib4ubv && glVertexAttrib4uiv && glVertexAttrib4usv && glVertexAttribPointer;
        }		
		// GL_VERSION_2_1
		LOAD_GLPROC(glUniformMatrix2x3fv);
        if(glUniformMatrix2x3fv)
        {
            LOAD_GLPROC(glUniformMatrix3x2fv);
            LOAD_GLPROC(glUniformMatrix2x4fv);
            LOAD_GLPROC(glUniformMatrix4x2fv);
            LOAD_GLPROC(glUniformMatrix3x4fv);
            LOAD_GLPROC(glUniformMatrix4x3fv);
            _GL_VERSION_2_1 = glUniformMatrix2x3fv && glUniformMatrix3x2fv && glUniformMatrix2x4fv && glUniformMatrix4x2fv && glUniformMatrix3x4fv && glUniformMatrix4x3fv;
        }
	}
	{
		using namespace axl::glfl::core::GL3;
		// GL_VERSION_3_0
		LOAD_GLPROC(glColorMaski);
        if(glColorMaski)
        {
            LOAD_GLPROC(glGetBooleani_v);
            LOAD_GLPROC(glGetIntegeri_v);
            LOAD_GLPROC(glEnablei);
            LOAD_GLPROC(glDisablei);
            LOAD_GLPROC(glIsEnabledi);
            LOAD_GLPROC(glBeginTransformFeedback);
            LOAD_GLPROC(glEndTransformFeedback);
            LOAD_GLPROC(glBindBufferRange);
            LOAD_GLPROC(glBindBufferBase);
            LOAD_GLPROC(glTransformFeedbackVaryings);
            LOAD_GLPROC(glGetTransformFeedbackVarying);
            LOAD_GLPROC(glClampColor);
            LOAD_GLPROC(glBeginConditionalRender);
            LOAD_GLPROC(glEndConditionalRender);
            LOAD_GLPROC(glVertexAttribIPointer);
            LOAD_GLPROC(glGetVertexAttribIiv);
            LOAD_GLPROC(glGetVertexAttribIuiv);
            LOAD_GLPROC(glVertexAttribI1i);
            LOAD_GLPROC(glVertexAttribI2i);
            LOAD_GLPROC(glVertexAttribI3i);
            LOAD_GLPROC(glVertexAttribI4i);
            LOAD_GLPROC(glVertexAttribI1ui);
            LOAD_GLPROC(glVertexAttribI2ui);
            LOAD_GLPROC(glVertexAttribI3ui);
            LOAD_GLPROC(glVertexAttribI4ui);
            LOAD_GLPROC(glVertexAttribI1iv);
            LOAD_GLPROC(glVertexAttribI2iv);
            LOAD_GLPROC(glVertexAttribI3iv);
            LOAD_GLPROC(glVertexAttribI4iv);
            LOAD_GLPROC(glVertexAttribI1uiv);
            LOAD_GLPROC(glVertexAttribI2uiv);
            LOAD_GLPROC(glVertexAttribI3uiv);
            LOAD_GLPROC(glVertexAttribI4uiv);
            LOAD_GLPROC(glVertexAttribI4bv);
            LOAD_GLPROC(glVertexAttribI4sv);
            LOAD_GLPROC(glVertexAttribI4ubv);
            LOAD_GLPROC(glVertexAttribI4usv);
            LOAD_GLPROC(glGetUniformuiv);
            LOAD_GLPROC(glBindFragDataLocation);
            LOAD_GLPROC(glGetFragDataLocation);
            LOAD_GLPROC(glUniform1ui);
            LOAD_GLPROC(glUniform2ui);
            LOAD_GLPROC(glUniform3ui);
            LOAD_GLPROC(glUniform4ui);
            LOAD_GLPROC(glUniform1uiv);
            LOAD_GLPROC(glUniform2uiv);
            LOAD_GLPROC(glUniform3uiv);
            LOAD_GLPROC(glUniform4uiv);
            LOAD_GLPROC(glTexParameterIiv);
            LOAD_GLPROC(glTexParameterIuiv);
            LOAD_GLPROC(glGetTexParameterIiv);
            LOAD_GLPROC(glGetTexParameterIuiv);
            LOAD_GLPROC(glClearBufferiv);
            LOAD_GLPROC(glClearBufferuiv);
            LOAD_GLPROC(glClearBufferfv);
            LOAD_GLPROC(glClearBufferfi);
            LOAD_GLPROC(glGetStringi);
            LOAD_GLPROC(glIsRenderbuffer);
            LOAD_GLPROC(glBindRenderbuffer);
            LOAD_GLPROC(glDeleteRenderbuffers);
            LOAD_GLPROC(glGenRenderbuffers);
            LOAD_GLPROC(glRenderbufferStorage);
            LOAD_GLPROC(glGetRenderbufferParameteriv);
            LOAD_GLPROC(glIsFramebuffer);
            LOAD_GLPROC(glBindFramebuffer);
            LOAD_GLPROC(glDeleteFramebuffers);
            LOAD_GLPROC(glGenFramebuffers);
            LOAD_GLPROC(glCheckFramebufferStatus);
            LOAD_GLPROC(glFramebufferTexture1D);
            LOAD_GLPROC(glFramebufferTexture2D);
            LOAD_GLPROC(glFramebufferTexture3D);
            LOAD_GLPROC(glFramebufferRenderbuffer);
            LOAD_GLPROC(glGetFramebufferAttachmentParameteriv);
            LOAD_GLPROC(glGenerateMipmap);
            LOAD_GLPROC(glBlitFramebuffer);
            LOAD_GLPROC(glRenderbufferStorageMultisample);
            LOAD_GLPROC(glFramebufferTextureLayer);
            LOAD_GLPROC(glMapBufferRange);
            LOAD_GLPROC(glFlushMappedBufferRange);
            LOAD_GLPROC(glBindVertexArray);
            LOAD_GLPROC(glDeleteVertexArrays);
            LOAD_GLPROC(glGenVertexArrays);
            LOAD_GLPROC(glIsVertexArray);
		    _GL_VERSION_3_0 = glColorMaski && glGetBooleani_v && glGetIntegeri_v && glEnablei && glDisablei && glIsEnabledi && glBeginTransformFeedback && glEndTransformFeedback && glBindBufferRange && glBindBufferBase && glTransformFeedbackVaryings && glGetTransformFeedbackVarying && glClampColor && glBeginConditionalRender && glEndConditionalRender && glVertexAttribIPointer && glGetVertexAttribIiv && glGetVertexAttribIuiv && glVertexAttribI1i && glVertexAttribI2i && glVertexAttribI3i && glVertexAttribI4i && glVertexAttribI1ui && glVertexAttribI2ui && glVertexAttribI3ui && glVertexAttribI4ui && glVertexAttribI1iv && glVertexAttribI2iv && glVertexAttribI3iv && glVertexAttribI4iv && glVertexAttribI1uiv && glVertexAttribI2uiv && glVertexAttribI3uiv && glVertexAttribI4uiv && glVertexAttribI4bv && glVertexAttribI4sv && glVertexAttribI4ubv && glVertexAttribI4usv && glGetUniformuiv && glBindFragDataLocation && glGetFragDataLocation && glUniform1ui && glUniform2ui && glUniform3ui && glUniform4ui && glUniform1uiv && glUniform2uiv && glUniform3uiv && glUniform4uiv && glTexParameterIiv && glTexParameterIuiv && glGetTexParameterIiv && glGetTexParameterIuiv && glClearBufferiv && glClearBufferuiv && glClearBufferfv && glClearBufferfi && glGetStringi && glIsRenderbuffer && glBindRenderbuffer && glDeleteRenderbuffers && glGenRenderbuffers && glRenderbufferStorage && glGetRenderbufferParameteriv && glIsFramebuffer && glBindFramebuffer && glDeleteFramebuffers && glGenFramebuffers && glCheckFramebufferStatus && glFramebufferTexture1D && glFramebufferTexture2D && glFramebufferTexture3D && glFramebufferRenderbuffer && glGetFramebufferAttachmentParameteriv && glGenerateMipmap && glBlitFramebuffer && glRenderbufferStorageMultisample && glFramebufferTextureLayer && glMapBufferRange && glFlushMappedBufferRange && glBindVertexArray && glDeleteVertexArrays && glGenVertexArrays && glIsVertexArray;
        }
		// GL_VERSION_3_1
		LOAD_GLPROC(glDrawArraysInstanced);
        if(glDrawArraysInstanced)
        {
            LOAD_GLPROC(glDrawElementsInstanced);
            LOAD_GLPROC(glTexBuffer);
            LOAD_GLPROC(glPrimitiveRestartIndex);
            LOAD_GLPROC(glCopyBufferSubData);
            LOAD_GLPROC(glGetUniformIndices);
            LOAD_GLPROC(glGetActiveUniformsiv);
            LOAD_GLPROC(glGetActiveUniformName);
            LOAD_GLPROC(glGetUniformBlockIndex);
            LOAD_GLPROC(glGetActiveUniformBlockiv);
            LOAD_GLPROC(glGetActiveUniformBlockName);
            LOAD_GLPROC(glUniformBlockBinding);
            _GL_VERSION_3_1 = glDrawArraysInstanced && glDrawElementsInstanced && glTexBuffer && glPrimitiveRestartIndex && glCopyBufferSubData && glGetUniformIndices && glGetActiveUniformsiv && glGetActiveUniformName && glGetUniformBlockIndex && glGetActiveUniformBlockiv && glGetActiveUniformBlockName && glUniformBlockBinding;
        }
		// GL_VERSION_3_2
		LOAD_GLPROC(glDrawElementsBaseVertex);
        if(glDrawElementsBaseVertex)
        {
            LOAD_GLPROC(glDrawRangeElementsBaseVertex);
            LOAD_GLPROC(glDrawElementsInstancedBaseVertex);
            LOAD_GLPROC(glMultiDrawElementsBaseVertex);
            LOAD_GLPROC(glProvokingVertex);
            LOAD_GLPROC(glFenceSync);
            LOAD_GLPROC(glIsSync);
            LOAD_GLPROC(glDeleteSync);
            LOAD_GLPROC(glClientWaitSync);
            LOAD_GLPROC(glWaitSync);
            LOAD_GLPROC(glGetInteger64v);
            LOAD_GLPROC(glGetSynciv);
            LOAD_GLPROC(glGetInteger64i_v);
            LOAD_GLPROC(glGetBufferParameteri64v);
            LOAD_GLPROC(glFramebufferTexture);
            LOAD_GLPROC(glTexImage2DMultisample);
            LOAD_GLPROC(glTexImage3DMultisample);
            LOAD_GLPROC(glGetMultisamplefv);
            LOAD_GLPROC(glSampleMaski);
            _GL_VERSION_3_2 = glDrawElementsBaseVertex && glDrawRangeElementsBaseVertex && glDrawElementsInstancedBaseVertex && glMultiDrawElementsBaseVertex && glProvokingVertex && glFenceSync && glIsSync && glDeleteSync && glClientWaitSync && glWaitSync && glGetInteger64v && glGetSynciv && glGetInteger64i_v && glGetBufferParameteri64v && glFramebufferTexture && glTexImage2DMultisample && glTexImage3DMultisample && glGetMultisamplefv && glSampleMaski;
        }
		// GL_VERSION_3_3
		LOAD_GLPROC(glBindFragDataLocationIndexed);
        if(glBindFragDataLocationIndexed)
        {
            LOAD_GLPROC(glGetFragDataIndex);
            LOAD_GLPROC(glGenSamplers);
            LOAD_GLPROC(glDeleteSamplers);
            LOAD_GLPROC(glIsSampler);
            LOAD_GLPROC(glBindSampler);
            LOAD_GLPROC(glSamplerParameteri);
            LOAD_GLPROC(glSamplerParameteriv);
            LOAD_GLPROC(glSamplerParameterf);
            LOAD_GLPROC(glSamplerParameterfv);
            LOAD_GLPROC(glSamplerParameterIiv);
            LOAD_GLPROC(glSamplerParameterIuiv);
            LOAD_GLPROC(glGetSamplerParameteriv);
            LOAD_GLPROC(glGetSamplerParameterIiv);
            LOAD_GLPROC(glGetSamplerParameterfv);
            LOAD_GLPROC(glGetSamplerParameterIuiv);
            LOAD_GLPROC(glQueryCounter);
            LOAD_GLPROC(glGetQueryObjecti64v);
            LOAD_GLPROC(glGetQueryObjectui64v);
            LOAD_GLPROC(glVertexAttribDivisor);
            LOAD_GLPROC(glVertexAttribP1ui);
            LOAD_GLPROC(glVertexAttribP1uiv);
            LOAD_GLPROC(glVertexAttribP2ui);
            LOAD_GLPROC(glVertexAttribP2uiv);
            LOAD_GLPROC(glVertexAttribP3ui);
            LOAD_GLPROC(glVertexAttribP3uiv);
            LOAD_GLPROC(glVertexAttribP4ui);
            LOAD_GLPROC(glVertexAttribP4uiv);
            _GL_VERSION_3_3 = glBindFragDataLocationIndexed && glGetFragDataIndex && glGenSamplers && glDeleteSamplers && glIsSampler && glBindSampler && glSamplerParameteri && glSamplerParameteriv && glSamplerParameterf && glSamplerParameterfv && glSamplerParameterIiv && glSamplerParameterIuiv && glGetSamplerParameteriv && glGetSamplerParameterIiv && glGetSamplerParameterfv && glGetSamplerParameterIuiv && glQueryCounter && glGetQueryObjecti64v && glGetQueryObjectui64v && glVertexAttribDivisor && glVertexAttribP1ui && glVertexAttribP1uiv && glVertexAttribP2ui && glVertexAttribP2uiv && glVertexAttribP3ui && glVertexAttribP3uiv && glVertexAttribP4ui && glVertexAttribP4uiv;
        }
	}
	{
		using namespace axl::glfl::core::GL4;
		// GL_VERSION_4_0
		LOAD_GLPROC(glMinSampleShading);
        if(glMinSampleShading)
        {
            LOAD_GLPROC(glBlendEquationi);
            LOAD_GLPROC(glBlendEquationSeparatei);
            LOAD_GLPROC(glBlendFunci);
            LOAD_GLPROC(glBlendFuncSeparatei);
            LOAD_GLPROC(glDrawArraysIndirect);
            LOAD_GLPROC(glDrawElementsIndirect);
            LOAD_GLPROC(glUniform1d);
            LOAD_GLPROC(glUniform2d);
            LOAD_GLPROC(glUniform3d);
            LOAD_GLPROC(glUniform4d);
            LOAD_GLPROC(glUniform1dv);
            LOAD_GLPROC(glUniform2dv);
            LOAD_GLPROC(glUniform3dv);
            LOAD_GLPROC(glUniform4dv);
            LOAD_GLPROC(glUniformMatrix2dv);
            LOAD_GLPROC(glUniformMatrix3dv);
            LOAD_GLPROC(glUniformMatrix4dv);
            LOAD_GLPROC(glUniformMatrix2x3dv);
            LOAD_GLPROC(glUniformMatrix2x4dv);
            LOAD_GLPROC(glUniformMatrix3x2dv);
            LOAD_GLPROC(glUniformMatrix3x4dv);
            LOAD_GLPROC(glUniformMatrix4x2dv);
            LOAD_GLPROC(glUniformMatrix4x3dv);
            LOAD_GLPROC(glGetUniformdv);
            LOAD_GLPROC(glGetSubroutineUniformLocation);
            LOAD_GLPROC(glGetSubroutineIndex);
            LOAD_GLPROC(glGetActiveSubroutineUniformiv);
            LOAD_GLPROC(glGetActiveSubroutineUniformName);
            LOAD_GLPROC(glGetActiveSubroutineName);
            LOAD_GLPROC(glUniformSubroutinesuiv);
            LOAD_GLPROC(glGetUniformSubroutineuiv);
            LOAD_GLPROC(glGetProgramStageiv);
            LOAD_GLPROC(glPatchParameteri);
            LOAD_GLPROC(glPatchParameterfv);
            LOAD_GLPROC(glBindTransformFeedback);
            LOAD_GLPROC(glDeleteTransformFeedbacks);
            LOAD_GLPROC(glGenTransformFeedbacks);
            LOAD_GLPROC(glIsTransformFeedback);
            LOAD_GLPROC(glPauseTransformFeedback);
            LOAD_GLPROC(glResumeTransformFeedback);
            LOAD_GLPROC(glDrawTransformFeedback);
            LOAD_GLPROC(glDrawTransformFeedbackStream);
            LOAD_GLPROC(glBeginQueryIndexed);
            LOAD_GLPROC(glEndQueryIndexed);
            LOAD_GLPROC(glGetQueryIndexediv);
            _GL_VERSION_4_0 = glMinSampleShading && glBlendEquationi && glBlendEquationSeparatei && glBlendFunci && glBlendFuncSeparatei && glDrawArraysIndirect && glDrawElementsIndirect && glUniform1d && glUniform2d && glUniform3d && glUniform4d && glUniform1dv && glUniform2dv && glUniform3dv && glUniform4dv && glUniformMatrix2dv && glUniformMatrix3dv && glUniformMatrix4dv && glUniformMatrix2x3dv && glUniformMatrix2x4dv && glUniformMatrix3x2dv && glUniformMatrix3x4dv && glUniformMatrix4x2dv && glUniformMatrix4x3dv && glGetUniformdv && glGetSubroutineUniformLocation && glGetSubroutineIndex && glGetActiveSubroutineUniformiv && glGetActiveSubroutineUniformName && glGetActiveSubroutineName && glUniformSubroutinesuiv && glGetUniformSubroutineuiv && glGetProgramStageiv && glPatchParameteri && glPatchParameterfv && glBindTransformFeedback && glDeleteTransformFeedbacks && glGenTransformFeedbacks && glIsTransformFeedback && glPauseTransformFeedback && glResumeTransformFeedback && glDrawTransformFeedback && glDrawTransformFeedbackStream && glBeginQueryIndexed && glEndQueryIndexed && glGetQueryIndexediv;
        }
		// GL_VERSION_4_1
		LOAD_GLPROC(glReleaseShaderCompiler);
        if(glReleaseShaderCompiler)
        {
            LOAD_GLPROC(glShaderBinary);
            LOAD_GLPROC(glGetShaderPrecisionFormat);
            LOAD_GLPROC(glDepthRangef);
            LOAD_GLPROC(glClearDepthf);
            LOAD_GLPROC(glGetProgramBinary);
            LOAD_GLPROC(glProgramBinary);
            LOAD_GLPROC(glProgramParameteri);
            LOAD_GLPROC(glUseProgramStages);
            LOAD_GLPROC(glActiveShaderProgram);
            LOAD_GLPROC(glCreateShaderProgramv);
            LOAD_GLPROC(glBindProgramPipeline);
            LOAD_GLPROC(glDeleteProgramPipelines);
            LOAD_GLPROC(glGenProgramPipelines);
            LOAD_GLPROC(glIsProgramPipeline);
            LOAD_GLPROC(glGetProgramPipelineiv);
            LOAD_GLPROC(glProgramUniform1i);
            LOAD_GLPROC(glProgramUniform1iv);
            LOAD_GLPROC(glProgramUniform1f);
            LOAD_GLPROC(glProgramUniform1fv);
            LOAD_GLPROC(glProgramUniform1d);
            LOAD_GLPROC(glProgramUniform1dv);
            LOAD_GLPROC(glProgramUniform1ui);
            LOAD_GLPROC(glProgramUniform1uiv);
            LOAD_GLPROC(glProgramUniform2i);
            LOAD_GLPROC(glProgramUniform2iv);
            LOAD_GLPROC(glProgramUniform2f);
            LOAD_GLPROC(glProgramUniform2fv);
            LOAD_GLPROC(glProgramUniform2d);
            LOAD_GLPROC(glProgramUniform2dv);
            LOAD_GLPROC(glProgramUniform2ui);
            LOAD_GLPROC(glProgramUniform2uiv);
            LOAD_GLPROC(glProgramUniform3i);
            LOAD_GLPROC(glProgramUniform3iv);
            LOAD_GLPROC(glProgramUniform3f);
            LOAD_GLPROC(glProgramUniform3fv);
            LOAD_GLPROC(glProgramUniform3d);
            LOAD_GLPROC(glProgramUniform3dv);
            LOAD_GLPROC(glProgramUniform3ui);
            LOAD_GLPROC(glProgramUniform3uiv);
            LOAD_GLPROC(glProgramUniform4i);
            LOAD_GLPROC(glProgramUniform4iv);
            LOAD_GLPROC(glProgramUniform4f);
            LOAD_GLPROC(glProgramUniform4fv);
            LOAD_GLPROC(glProgramUniform4d);
            LOAD_GLPROC(glProgramUniform4dv);
            LOAD_GLPROC(glProgramUniform4ui);
            LOAD_GLPROC(glProgramUniform4uiv);
            LOAD_GLPROC(glProgramUniformMatrix2fv);
            LOAD_GLPROC(glProgramUniformMatrix3fv);
            LOAD_GLPROC(glProgramUniformMatrix4fv);
            LOAD_GLPROC(glProgramUniformMatrix2dv);
            LOAD_GLPROC(glProgramUniformMatrix3dv);
            LOAD_GLPROC(glProgramUniformMatrix4dv);
            LOAD_GLPROC(glProgramUniformMatrix2x3fv);
            LOAD_GLPROC(glProgramUniformMatrix3x2fv);
            LOAD_GLPROC(glProgramUniformMatrix2x4fv);
            LOAD_GLPROC(glProgramUniformMatrix4x2fv);
            LOAD_GLPROC(glProgramUniformMatrix3x4fv);
            LOAD_GLPROC(glProgramUniformMatrix4x3fv);
            LOAD_GLPROC(glProgramUniformMatrix2x3dv);
            LOAD_GLPROC(glProgramUniformMatrix3x2dv);
            LOAD_GLPROC(glProgramUniformMatrix2x4dv);
            LOAD_GLPROC(glProgramUniformMatrix4x2dv);
            LOAD_GLPROC(glProgramUniformMatrix3x4dv);
            LOAD_GLPROC(glProgramUniformMatrix4x3dv);
            LOAD_GLPROC(glValidateProgramPipeline);
            LOAD_GLPROC(glGetProgramPipelineInfoLog);
            LOAD_GLPROC(glVertexAttribL1d);
            LOAD_GLPROC(glVertexAttribL2d);
            LOAD_GLPROC(glVertexAttribL3d);
            LOAD_GLPROC(glVertexAttribL4d);
            LOAD_GLPROC(glVertexAttribL1dv);
            LOAD_GLPROC(glVertexAttribL2dv);
            LOAD_GLPROC(glVertexAttribL3dv);
            LOAD_GLPROC(glVertexAttribL4dv);
            LOAD_GLPROC(glVertexAttribLPointer);
            LOAD_GLPROC(glGetVertexAttribLdv);
            LOAD_GLPROC(glViewportArrayv);
            LOAD_GLPROC(glViewportIndexedf);
            LOAD_GLPROC(glViewportIndexedfv);
            LOAD_GLPROC(glScissorArrayv);
            LOAD_GLPROC(glScissorIndexed);
            LOAD_GLPROC(glScissorIndexedv);
            LOAD_GLPROC(glDepthRangeArrayv);
            LOAD_GLPROC(glDepthRangeIndexed);
            LOAD_GLPROC(glGetFloati_v);
            LOAD_GLPROC(glGetDoublei_v);
            _GL_VERSION_4_1 = glReleaseShaderCompiler && glShaderBinary && glGetShaderPrecisionFormat && glDepthRangef && glClearDepthf && glGetProgramBinary && glProgramBinary && glProgramParameteri && glUseProgramStages && glActiveShaderProgram && glCreateShaderProgramv && glBindProgramPipeline && glDeleteProgramPipelines && glGenProgramPipelines && glIsProgramPipeline && glGetProgramPipelineiv && glProgramUniform1i && glProgramUniform1iv && glProgramUniform1f && glProgramUniform1fv && glProgramUniform1d && glProgramUniform1dv && glProgramUniform1ui && glProgramUniform1uiv && glProgramUniform2i && glProgramUniform2iv && glProgramUniform2f && glProgramUniform2fv && glProgramUniform2d && glProgramUniform2dv && glProgramUniform2ui && glProgramUniform2uiv && glProgramUniform3i && glProgramUniform3iv && glProgramUniform3f && glProgramUniform3fv && glProgramUniform3d && glProgramUniform3dv && glProgramUniform3ui && glProgramUniform3uiv && glProgramUniform4i && glProgramUniform4iv && glProgramUniform4f && glProgramUniform4fv && glProgramUniform4d && glProgramUniform4dv && glProgramUniform4ui && glProgramUniform4uiv && glProgramUniformMatrix2fv && glProgramUniformMatrix3fv && glProgramUniformMatrix4fv && glProgramUniformMatrix2dv && glProgramUniformMatrix3dv && glProgramUniformMatrix4dv && glProgramUniformMatrix2x3fv && glProgramUniformMatrix3x2fv && glProgramUniformMatrix2x4fv && glProgramUniformMatrix4x2fv && glProgramUniformMatrix3x4fv && glProgramUniformMatrix4x3fv && glProgramUniformMatrix2x3dv && glProgramUniformMatrix3x2dv && glProgramUniformMatrix2x4dv && glProgramUniformMatrix4x2dv && glProgramUniformMatrix3x4dv && glProgramUniformMatrix4x3dv && glValidateProgramPipeline && glGetProgramPipelineInfoLog && glVertexAttribL1d && glVertexAttribL2d && glVertexAttribL3d && glVertexAttribL4d && glVertexAttribL1dv && glVertexAttribL2dv && glVertexAttribL3dv && glVertexAttribL4dv && glVertexAttribLPointer && glGetVertexAttribLdv && glViewportArrayv && glViewportIndexedf && glViewportIndexedfv && glScissorArrayv && glScissorIndexed && glScissorIndexedv && glDepthRangeArrayv && glDepthRangeIndexed && glGetFloati_v && glGetDoublei_v;
        }
		// GL_VERSION_4_2
		LOAD_GLPROC(glDrawArraysInstancedBaseInstance);
        if(glDrawArraysInstancedBaseInstance)
        {
            LOAD_GLPROC(glDrawElementsInstancedBaseInstance);
            LOAD_GLPROC(glDrawElementsInstancedBaseVertexBaseInstance);
            LOAD_GLPROC(glGetInternalformativ);
            LOAD_GLPROC(glGetActiveAtomicCounterBufferiv);
            LOAD_GLPROC(glBindImageTexture);
            LOAD_GLPROC(glMemoryBarrier);
            LOAD_GLPROC(glTexStorage1D);
            LOAD_GLPROC(glTexStorage2D);
            LOAD_GLPROC(glTexStorage3D);
            LOAD_GLPROC(glDrawTransformFeedbackInstanced);
            LOAD_GLPROC(glDrawTransformFeedbackStreamInstanced);
            _GL_VERSION_4_2 = glDrawArraysInstancedBaseInstance && glDrawElementsInstancedBaseInstance && glDrawElementsInstancedBaseVertexBaseInstance && glGetInternalformativ && glGetActiveAtomicCounterBufferiv && glBindImageTexture && glMemoryBarrier && glTexStorage1D && glTexStorage2D && glTexStorage3D && glDrawTransformFeedbackInstanced && glDrawTransformFeedbackStreamInstanced;
        }
		// GL_VERSION_4_3
		LOAD_GLPROC(glClearBufferData);
        if(glClearBufferData)
        {
            LOAD_GLPROC(glClearBufferSubData);
            LOAD_GLPROC(glDispatchCompute);
            LOAD_GLPROC(glDispatchComputeIndirect);
            LOAD_GLPROC(glCopyImageSubData);
            LOAD_GLPROC(glFramebufferParameteri);
            LOAD_GLPROC(glGetFramebufferParameteriv);
            LOAD_GLPROC(glGetInternalformati64v);
            LOAD_GLPROC(glInvalidateTexSubImage);
            LOAD_GLPROC(glInvalidateTexImage);
            LOAD_GLPROC(glInvalidateBufferSubData);
            LOAD_GLPROC(glInvalidateBufferData);
            LOAD_GLPROC(glInvalidateFramebuffer);
            LOAD_GLPROC(glInvalidateSubFramebuffer);
            LOAD_GLPROC(glMultiDrawArraysIndirect);
            LOAD_GLPROC(glMultiDrawElementsIndirect);
            LOAD_GLPROC(glGetProgramInterfaceiv);
            LOAD_GLPROC(glGetProgramResourceIndex);
            LOAD_GLPROC(glGetProgramResourceName);
            LOAD_GLPROC(glGetProgramResourceiv);
            LOAD_GLPROC(glGetProgramResourceLocation);
            LOAD_GLPROC(glGetProgramResourceLocationIndex);
            LOAD_GLPROC(glShaderStorageBlockBinding);
            LOAD_GLPROC(glTexBufferRange);
            LOAD_GLPROC(glTexStorage2DMultisample);
            LOAD_GLPROC(glTexStorage3DMultisample);
            LOAD_GLPROC(glTextureView);
            LOAD_GLPROC(glBindVertexBuffer);
            LOAD_GLPROC(glVertexAttribFormat);
            LOAD_GLPROC(glVertexAttribIFormat);
            LOAD_GLPROC(glVertexAttribLFormat);
            LOAD_GLPROC(glVertexAttribBinding);
            LOAD_GLPROC(glVertexBindingDivisor);
            LOAD_GLPROC(glDebugMessageControl);
            LOAD_GLPROC(glDebugMessageInsert);
            LOAD_GLPROC(glDebugMessageCallback);
            LOAD_GLPROC(glGetDebugMessageLog);
            LOAD_GLPROC(glPushDebugGroup);
            LOAD_GLPROC(glPopDebugGroup);
            LOAD_GLPROC(glObjectLabel);
            LOAD_GLPROC(glGetObjectLabel);
            LOAD_GLPROC(glObjectPtrLabel);
            LOAD_GLPROC(glGetObjectPtrLabel);
            _GL_VERSION_4_3 = glClearBufferData && glClearBufferSubData && glDispatchCompute && glDispatchComputeIndirect && glCopyImageSubData && glFramebufferParameteri && glGetFramebufferParameteriv && glGetInternalformati64v && glInvalidateTexSubImage && glInvalidateTexImage && glInvalidateBufferSubData && glInvalidateBufferData && glInvalidateFramebuffer && glInvalidateSubFramebuffer && glMultiDrawArraysIndirect && glMultiDrawElementsIndirect && glGetProgramInterfaceiv && glGetProgramResourceIndex && glGetProgramResourceName && glGetProgramResourceiv && glGetProgramResourceLocation && glGetProgramResourceLocationIndex && glShaderStorageBlockBinding && glTexBufferRange && glTexStorage2DMultisample && glTexStorage3DMultisample && glTextureView && glBindVertexBuffer && glVertexAttribFormat && glVertexAttribIFormat && glVertexAttribLFormat && glVertexAttribBinding && glVertexBindingDivisor && glDebugMessageControl && glDebugMessageInsert && glDebugMessageCallback && glGetDebugMessageLog && glPushDebugGroup && glPopDebugGroup && glObjectLabel && glGetObjectLabel && glObjectPtrLabel && glGetObjectPtrLabel;
        }
		// GL_VERSION_4_4
		LOAD_GLPROC(glBufferStorage);
        if(glBufferStorage)
        {
            LOAD_GLPROC(glClearTexImage);
            LOAD_GLPROC(glClearTexSubImage);
            LOAD_GLPROC(glBindBuffersBase);
            LOAD_GLPROC(glBindBuffersRange);
            LOAD_GLPROC(glBindTextures);
            LOAD_GLPROC(glBindSamplers);
            LOAD_GLPROC(glBindImageTextures);
            LOAD_GLPROC(glBindVertexBuffers);
            _GL_VERSION_4_4 = glBufferStorage && glClearTexImage && glClearTexSubImage && glBindBuffersBase && glBindBuffersRange && glBindTextures && glBindSamplers && glBindImageTextures && glBindVertexBuffers;
        }
		// GL_VERSION_4_5
		LOAD_GLPROC(glClipControl);
        if(glClipControl)
        {
            LOAD_GLPROC(glCreateTransformFeedbacks);
            LOAD_GLPROC(glTransformFeedbackBufferBase);
            LOAD_GLPROC(glTransformFeedbackBufferRange);
            LOAD_GLPROC(glGetTransformFeedbackiv);
            LOAD_GLPROC(glGetTransformFeedbacki_v);
            LOAD_GLPROC(glGetTransformFeedbacki64_v);
            LOAD_GLPROC(glCreateBuffers);
            LOAD_GLPROC(glNamedBufferStorage);
            LOAD_GLPROC(glNamedBufferData);
            LOAD_GLPROC(glNamedBufferSubData);
            LOAD_GLPROC(glCopyNamedBufferSubData);
            LOAD_GLPROC(glClearNamedBufferData);
            LOAD_GLPROC(glClearNamedBufferSubData);
            LOAD_GLPROC(glMapNamedBuffer);
            LOAD_GLPROC(glMapNamedBufferRange);
            LOAD_GLPROC(glUnmapNamedBuffer);
            LOAD_GLPROC(glFlushMappedNamedBufferRange);
            LOAD_GLPROC(glGetNamedBufferParameteriv);
            LOAD_GLPROC(glGetNamedBufferParameteri64v);
            LOAD_GLPROC(glGetNamedBufferPointerv);
            LOAD_GLPROC(glGetNamedBufferSubData);
            LOAD_GLPROC(glCreateFramebuffers);
            LOAD_GLPROC(glNamedFramebufferRenderbuffer);
            LOAD_GLPROC(glNamedFramebufferParameteri);
            LOAD_GLPROC(glNamedFramebufferTexture);
            LOAD_GLPROC(glNamedFramebufferTextureLayer);
            LOAD_GLPROC(glNamedFramebufferDrawBuffer);
            LOAD_GLPROC(glNamedFramebufferDrawBuffers);
            LOAD_GLPROC(glNamedFramebufferReadBuffer);
            LOAD_GLPROC(glInvalidateNamedFramebufferData);
            LOAD_GLPROC(glInvalidateNamedFramebufferSubData);
            LOAD_GLPROC(glClearNamedFramebufferiv);
            LOAD_GLPROC(glClearNamedFramebufferuiv);
            LOAD_GLPROC(glClearNamedFramebufferfv);
            LOAD_GLPROC(glClearNamedFramebufferfi);
            LOAD_GLPROC(glBlitNamedFramebuffer);
            LOAD_GLPROC(glCheckNamedFramebufferStatus);
            LOAD_GLPROC(glGetNamedFramebufferParameteriv);
            LOAD_GLPROC(glGetNamedFramebufferAttachmentParameteriv);
            LOAD_GLPROC(glCreateRenderbuffers);
            LOAD_GLPROC(glNamedRenderbufferStorage);
            LOAD_GLPROC(glNamedRenderbufferStorageMultisample);
            LOAD_GLPROC(glGetNamedRenderbufferParameteriv);
            LOAD_GLPROC(glCreateTextures);
            LOAD_GLPROC(glTextureBuffer);
            LOAD_GLPROC(glTextureBufferRange);
            LOAD_GLPROC(glTextureStorage1D);
            LOAD_GLPROC(glTextureStorage2D);
            LOAD_GLPROC(glTextureStorage3D);
            LOAD_GLPROC(glTextureStorage2DMultisample);
            LOAD_GLPROC(glTextureStorage3DMultisample);
            LOAD_GLPROC(glTextureSubImage1D);
            LOAD_GLPROC(glTextureSubImage2D);
            LOAD_GLPROC(glTextureSubImage3D);
            LOAD_GLPROC(glCompressedTextureSubImage1D);
            LOAD_GLPROC(glCompressedTextureSubImage2D);
            LOAD_GLPROC(glCompressedTextureSubImage3D);
            LOAD_GLPROC(glCopyTextureSubImage1D);
            LOAD_GLPROC(glCopyTextureSubImage2D);
            LOAD_GLPROC(glCopyTextureSubImage3D);
            LOAD_GLPROC(glTextureParameterf);
            LOAD_GLPROC(glTextureParameterfv);
            LOAD_GLPROC(glTextureParameteri);
            LOAD_GLPROC(glTextureParameterIiv);
            LOAD_GLPROC(glTextureParameterIuiv);
            LOAD_GLPROC(glTextureParameteriv);
            LOAD_GLPROC(glGenerateTextureMipmap);
            LOAD_GLPROC(glBindTextureUnit);
            LOAD_GLPROC(glGetTextureImage);
            LOAD_GLPROC(glGetCompressedTextureImage);
            LOAD_GLPROC(glGetTextureLevelParameterfv);
            LOAD_GLPROC(glGetTextureLevelParameteriv);
            LOAD_GLPROC(glGetTextureParameterfv);
            LOAD_GLPROC(glGetTextureParameterIiv);
            LOAD_GLPROC(glGetTextureParameterIuiv);
            LOAD_GLPROC(glGetTextureParameteriv);
            LOAD_GLPROC(glCreateVertexArrays);
            LOAD_GLPROC(glDisableVertexArrayAttrib);
            LOAD_GLPROC(glEnableVertexArrayAttrib);
            LOAD_GLPROC(glVertexArrayElementBuffer);
            LOAD_GLPROC(glVertexArrayVertexBuffer);
            LOAD_GLPROC(glVertexArrayVertexBuffers);
            LOAD_GLPROC(glVertexArrayAttribBinding);
            LOAD_GLPROC(glVertexArrayAttribFormat);
            LOAD_GLPROC(glVertexArrayAttribIFormat);
            LOAD_GLPROC(glVertexArrayAttribLFormat);
            LOAD_GLPROC(glVertexArrayBindingDivisor);
            LOAD_GLPROC(glGetVertexArrayiv);
            LOAD_GLPROC(glGetVertexArrayIndexediv);
            LOAD_GLPROC(glGetVertexArrayIndexed64iv);
            LOAD_GLPROC(glCreateSamplers);
            LOAD_GLPROC(glCreateProgramPipelines);
            LOAD_GLPROC(glCreateQueries);
            LOAD_GLPROC(glGetQueryBufferObjecti64v);
            LOAD_GLPROC(glGetQueryBufferObjectiv);
            LOAD_GLPROC(glGetQueryBufferObjectui64v);
            LOAD_GLPROC(glGetQueryBufferObjectuiv);
            LOAD_GLPROC(glMemoryBarrierByRegion);
            LOAD_GLPROC(glGetTextureSubImage);
            LOAD_GLPROC(glGetCompressedTextureSubImage);
            LOAD_GLPROC(glGetGraphicsResetStatus);
            LOAD_GLPROC(glGetnCompressedTexImage);
            LOAD_GLPROC(glGetnTexImage);
            LOAD_GLPROC(glGetnUniformdv);
            LOAD_GLPROC(glGetnUniformfv);
            LOAD_GLPROC(glGetnUniformiv);
            LOAD_GLPROC(glGetnUniformuiv);
            LOAD_GLPROC(glReadnPixels);
            LOAD_GLPROC(glTextureBarrier);
            _GL_VERSION_4_5 = glClipControl && glCreateTransformFeedbacks && glTransformFeedbackBufferBase && glTransformFeedbackBufferRange && glGetTransformFeedbackiv && glGetTransformFeedbacki_v && glGetTransformFeedbacki64_v && glCreateBuffers && glNamedBufferStorage && glNamedBufferData && glNamedBufferSubData && glCopyNamedBufferSubData && glClearNamedBufferData && glClearNamedBufferSubData && glMapNamedBuffer && glMapNamedBufferRange && glUnmapNamedBuffer && glFlushMappedNamedBufferRange && glGetNamedBufferParameteriv && glGetNamedBufferParameteri64v && glGetNamedBufferPointerv && glGetNamedBufferSubData && glCreateFramebuffers && glNamedFramebufferRenderbuffer && glNamedFramebufferParameteri && glNamedFramebufferTexture && glNamedFramebufferTextureLayer && glNamedFramebufferDrawBuffer && glNamedFramebufferDrawBuffers && glNamedFramebufferReadBuffer && glInvalidateNamedFramebufferData && glInvalidateNamedFramebufferSubData && glClearNamedFramebufferiv && glClearNamedFramebufferuiv && glClearNamedFramebufferfv && glClearNamedFramebufferfi && glBlitNamedFramebuffer && glCheckNamedFramebufferStatus && glGetNamedFramebufferParameteriv && glGetNamedFramebufferAttachmentParameteriv && glCreateRenderbuffers && glNamedRenderbufferStorage && glNamedRenderbufferStorageMultisample && glGetNamedRenderbufferParameteriv && glCreateTextures && glTextureBuffer && glTextureBufferRange && glTextureStorage1D && glTextureStorage2D && glTextureStorage3D && glTextureStorage2DMultisample && glTextureStorage3DMultisample && glTextureSubImage1D && glTextureSubImage2D && glTextureSubImage3D && glCompressedTextureSubImage1D && glCompressedTextureSubImage2D && glCompressedTextureSubImage3D && glCopyTextureSubImage1D && glCopyTextureSubImage2D && glCopyTextureSubImage3D && glTextureParameterf && glTextureParameterfv && glTextureParameteri && glTextureParameterIiv && glTextureParameterIuiv && glTextureParameteriv && glGenerateTextureMipmap && glBindTextureUnit && glGetTextureImage && glGetCompressedTextureImage && glGetTextureLevelParameterfv && glGetTextureLevelParameteriv && glGetTextureParameterfv && glGetTextureParameterIiv && glGetTextureParameterIuiv && glGetTextureParameteriv && glCreateVertexArrays && glDisableVertexArrayAttrib && glEnableVertexArrayAttrib && glVertexArrayElementBuffer && glVertexArrayVertexBuffer && glVertexArrayVertexBuffers && glVertexArrayAttribBinding && glVertexArrayAttribFormat && glVertexArrayAttribIFormat && glVertexArrayAttribLFormat && glVertexArrayBindingDivisor && glGetVertexArrayiv && glGetVertexArrayIndexediv && glGetVertexArrayIndexed64iv && glCreateSamplers && glCreateProgramPipelines && glCreateQueries && glGetQueryBufferObjecti64v && glGetQueryBufferObjectiv && glGetQueryBufferObjectui64v && glGetQueryBufferObjectuiv && glMemoryBarrierByRegion && glGetTextureSubImage && glGetCompressedTextureSubImage && glGetGraphicsResetStatus && glGetnCompressedTexImage && glGetnTexImage && glGetnUniformdv && glGetnUniformfv && glGetnUniformiv && glGetnUniformuiv && glReadnPixels && glTextureBarrier;
        }
		// GL_VERSION_4_6
		LOAD_GLPROC(glSpecializeShader);
        if(glSpecializeShader)
        {
            LOAD_GLPROC(glMultiDrawArraysIndirectCount);
            LOAD_GLPROC(glMultiDrawElementsIndirectCount);
            LOAD_GLPROC(glPolygonOffsetClamp);
            _GL_VERSION_4_6 = glSpecializeShader && glMultiDrawArraysIndirectCount && glMultiDrawElementsIndirectCount && glPolygonOffsetClamp;
        }
	}
	{  // namespace GLARB
		// using namespace axl::glfl::core::GLARB;
        bool gl_3_or_higher = false;
        const char *str_ver = (const char*)GL1::glGetString(GL1::GL_VERSION);
        if(!str_ver) return false;
        gl_3_or_higher = (((int)str_ver[0] - '0') >= 3);
        GLint i = 0, num_ext = 0, index = 0, last = 0;
        const char *cur_ext = (const char*)0, *ext = (const char*)0;
        if(gl_3_or_higher)
        {
            GL1::glGetIntegerv(GL3::GL_NUM_EXTENSIONS, &num_ext);
            if(num_ext <= 0) return true;
        }
        else
        {
            ext = (const char*)GL1::glGetString(GL1::GL_EXTENSIONS);
            if(!ext) return false;
        }
        bool done = false;
        while(!done)
        {
            size_t len = 0;
            if(gl_3_or_higher)
            {
                if(i >= num_ext) break;
                cur_ext = (const char*)GL3::glGetStringi(GL1::GL_EXTENSIONS, i++);
                len = strlen(cur_ext);
                if(!cur_ext) break;
            }
            else
            {
                char c = ext[index];
                while(c != '\0' && c != ' ')
                {
                    c = ext[++index];
                }
                if(c == '\0') done = true;
                const char* cur_ext = (const char*)&ext[last];
                len = index - last;
                if(c == ' ')
                    last = ++index;
            }
            switch(len)
            {
                case 11: if(!GLARB::_GL_ARB_sync && strncmp(cur_ext, "GL_ARB_sync", 11) == 0) { GLARB::_GL_ARB_sync = true; }
                    break;
                case 14: if(!GLARB::_GL_ARB_imaging && strncmp(cur_ext, "GL_ARB_imaging", 14) == 0) { GLARB::_GL_ARB_imaging = true; }
                    break;
                case 15: if(!GLARB::_GL_ARB_cl_event && strncmp(cur_ext, "GL_ARB_cl_event", 15) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glCreateSyncFromCLeventARB);
                        _GL_ARB_cl_event = true;
                    }
                    else if(!GLARB::_GL_ARB_gl_spirv && strncmp(cur_ext, "GL_ARB_gl_spirv", 15) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glSpecializeShaderARB);
                        _GL_ARB_gl_spirv = true;
                    }
                    break;
                case 17: if(!GLARB::_GL_ARB_copy_image && strncmp(cur_ext, "GL_ARB_copy_image", 17) == 0) { GLARB::_GL_ARB_copy_image = true; }
                    else if(!GLARB::_GL_ARB_multi_bind && strncmp(cur_ext, "GL_ARB_multi_bind", 17) == 0) { GLARB::_GL_ARB_multi_bind = true; }
                    else if(!GLARB::_GL_ARB_robustness && strncmp(cur_ext, "GL_ARB_robustness", 17) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glGetGraphicsResetStatusARB);
                        LOAD_GLPROC(glGetnTexImageARB);
                        LOAD_GLPROC(glReadnPixelsARB);
                        LOAD_GLPROC(glGetnCompressedTexImageARB);
                        LOAD_GLPROC(glGetnUniformfvARB);
                        LOAD_GLPROC(glGetnUniformivARB);
                        LOAD_GLPROC(glGetnUniformuivARB);
                        LOAD_GLPROC(glGetnUniformdvARB);
                        _GL_ARB_robustness = true;
                    }
                    else if(!GLARB::_GL_ARB_texture_rg && strncmp(cur_ext, "GL_ARB_texture_rg", 17) == 0) { GLARB::_GL_ARB_texture_rg = true; }
                    else if(!GLNV::_GL_NV_gpu_shader5 && strncmp(cur_ext, "GL_NV_gpu_shader5", 17) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glUniform1i64NV);
                        LOAD_GLPROC(glUniform2i64NV);
                        LOAD_GLPROC(glUniform3i64NV);
                        LOAD_GLPROC(glUniform4i64NV);
                        LOAD_GLPROC(glUniform1i64vNV);
                        LOAD_GLPROC(glUniform2i64vNV);
                        LOAD_GLPROC(glUniform3i64vNV);
                        LOAD_GLPROC(glUniform4i64vNV);
                        LOAD_GLPROC(glUniform1ui64NV);
                        LOAD_GLPROC(glUniform2ui64NV);
                        LOAD_GLPROC(glUniform3ui64NV);
                        LOAD_GLPROC(glUniform4ui64NV);
                        LOAD_GLPROC(glUniform1ui64vNV);
                        LOAD_GLPROC(glUniform2ui64vNV);
                        LOAD_GLPROC(glUniform3ui64vNV);
                        LOAD_GLPROC(glUniform4ui64vNV);
                        LOAD_GLPROC(glGetUniformi64vNV);
                        LOAD_GLPROC(glProgramUniform1i64NV);
                        LOAD_GLPROC(glProgramUniform2i64NV);
                        LOAD_GLPROC(glProgramUniform3i64NV);
                        LOAD_GLPROC(glProgramUniform4i64NV);
                        LOAD_GLPROC(glProgramUniform1i64vNV);
                        LOAD_GLPROC(glProgramUniform2i64vNV);
                        LOAD_GLPROC(glProgramUniform3i64vNV);
                        LOAD_GLPROC(glProgramUniform4i64vNV);
                        LOAD_GLPROC(glProgramUniform1ui64NV);
                        LOAD_GLPROC(glProgramUniform2ui64NV);
                        LOAD_GLPROC(glProgramUniform3ui64NV);
                        LOAD_GLPROC(glProgramUniform4ui64NV);
                        LOAD_GLPROC(glProgramUniform1ui64vNV);
                        LOAD_GLPROC(glProgramUniform2ui64vNV);
                        LOAD_GLPROC(glProgramUniform3ui64vNV);
                        LOAD_GLPROC(glProgramUniform4ui64vNV);
                        _GL_NV_gpu_shader5 = true;
                    }
                    else if(!GLNV::_GL_NV_mesh_shader && strncmp(cur_ext, "GL_NV_mesh_shader", 17) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glDrawMeshTasksNV);
                        LOAD_GLPROC(glDrawMeshTasksIndirectNV);
                        LOAD_GLPROC(glMultiDrawMeshTasksIndirectNV);
                        LOAD_GLPROC(glMultiDrawMeshTasksIndirectCountNV);
                        _GL_NV_mesh_shader = true;
                    }
                    break;
                case 18: if(!GLARB::_GL_ARB_copy_buffer && strncmp(cur_ext, "GL_ARB_copy_buffer", 18) == 0) { GLARB::_GL_ARB_copy_buffer = true; }
                    else if(!GLARB::_GL_ARB_depth_clamp && strncmp(cur_ext, "GL_ARB_depth_clamp", 18) == 0) { GLARB::_GL_ARB_depth_clamp = true; }
                    else if(!GLARB::_GL_ARB_gpu_shader5 && strncmp(cur_ext, "GL_ARB_gpu_shader5", 18) == 0) { GLARB::_GL_ARB_gpu_shader5 = true; }
                    else if(!GLARB::_GL_ARB_timer_query && strncmp(cur_ext, "GL_ARB_timer_query", 18) == 0) { GLARB::_GL_ARB_timer_query = true; }
                    else if(!GLNV::_GL_NV_command_list && strncmp(cur_ext, "GL_NV_command_list", 18) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glCreateStatesNV);
                        LOAD_GLPROC(glDeleteStatesNV);
                        LOAD_GLPROC(glIsStateNV);
                        LOAD_GLPROC(glStateCaptureNV);
                        LOAD_GLPROC(glGetCommandHeaderNV);
                        LOAD_GLPROC(glGetStageIndexNV);
                        LOAD_GLPROC(glDrawCommandsNV);
                        LOAD_GLPROC(glDrawCommandsAddressNV);
                        LOAD_GLPROC(glDrawCommandsStatesNV);
                        LOAD_GLPROC(glDrawCommandsStatesAddressNV);
                        LOAD_GLPROC(glCreateCommandListsNV);
                        LOAD_GLPROC(glDeleteCommandListsNV);
                        LOAD_GLPROC(glIsCommandListNV);
                        LOAD_GLPROC(glListDrawCommandsStatesClientNV);
                        LOAD_GLPROC(glCommandListSegmentsNV);
                        LOAD_GLPROC(glCompileCommandListNV);
                        LOAD_GLPROC(glCallCommandListNV);
                        _GL_NV_command_list = true;
                    }
                    break;
                case 19: if(!GLARB::_GL_ARB_clip_control && strncmp(cur_ext, "GL_ARB_clip_control", 19) == 0) { GLARB::_GL_ARB_clip_control = true; }
                    else if(!GLARB::_GL_ARB_debug_output && strncmp(cur_ext, "GL_ARB_debug_output", 19) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glDebugMessageControlARB);
                        LOAD_GLPROC(glDebugMessageInsertARB);
                        LOAD_GLPROC(glDebugMessageCallbackARB);
                        LOAD_GLPROC(glGetDebugMessageLogARB);
                        _GL_ARB_debug_output = true;
                    }
                    else if(!GLARB::_GL_ARB_shader_clock && strncmp(cur_ext, "GL_ARB_shader_clock", 19) == 0) { GLARB::_GL_ARB_shader_clock = true; }
                    else if(!GLARB::_GL_ARB_texture_view && strncmp(cur_ext, "GL_ARB_texture_view", 19) == 0) { GLARB::_GL_ARB_texture_view = true; }
                    break;
                case 20: if(!GLARB::_GL_ARB_base_instance && strncmp(cur_ext, "GL_ARB_base_instance", 20) == 0) { GLARB::_GL_ARB_base_instance = true; }
                    else if(!GLARB::_GL_ARB_clear_texture && strncmp(cur_ext, "GL_ARB_clear_texture", 20) == 0) { GLARB::_GL_ARB_clear_texture = true; }
                    else if(!GLARB::_GL_ARB_cull_distance && strncmp(cur_ext, "GL_ARB_cull_distance", 20) == 0) { GLARB::_GL_ARB_cull_distance = true; }
                    else if(!GLARB::_GL_ARB_draw_indirect && strncmp(cur_ext, "GL_ARB_draw_indirect", 20) == 0) { GLARB::_GL_ARB_draw_indirect = true; }
                    else if(!GLARB::_GL_ARB_shader_ballot && strncmp(cur_ext, "GL_ARB_shader_ballot", 20) == 0) { GLARB::_GL_ARB_shader_ballot = true; }
                    else if(!GLARB::_GL_ARB_sparse_buffer && strncmp(cur_ext, "GL_ARB_sparse_buffer", 20) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glBufferPageCommitmentARB);
                        LOAD_GLPROC(glNamedBufferPageCommitmentEXT);
                        LOAD_GLPROC(glNamedBufferPageCommitmentARB);
                        _GL_ARB_sparse_buffer = true;
                    }
                    else if(!GLNV::_GL_NV_fill_rectangle && strncmp(cur_ext, "GL_NV_fill_rectangle", 20) == 0) { GLNV::_GL_NV_fill_rectangle = true; }
                    else if(!GLNV::_GL_NV_path_rendering && strncmp(cur_ext, "GL_NV_path_rendering", 20) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glGenPathsNV);
                        LOAD_GLPROC(glDeletePathsNV);
                        LOAD_GLPROC(glIsPathNV);
                        LOAD_GLPROC(glPathCommandsNV);
                        LOAD_GLPROC(glPathCoordsNV);
                        LOAD_GLPROC(glPathSubCommandsNV);
                        LOAD_GLPROC(glPathSubCoordsNV);
                        LOAD_GLPROC(glPathStringNV);
                        LOAD_GLPROC(glPathGlyphsNV);
                        LOAD_GLPROC(glPathGlyphRangeNV);
                        LOAD_GLPROC(glWeightPathsNV);
                        LOAD_GLPROC(glCopyPathNV);
                        LOAD_GLPROC(glInterpolatePathsNV);
                        LOAD_GLPROC(glTransformPathNV);
                        LOAD_GLPROC(glPathParameterivNV);
                        LOAD_GLPROC(glPathParameteriNV);
                        LOAD_GLPROC(glPathParameterfvNV);
                        LOAD_GLPROC(glPathParameterfNV);
                        LOAD_GLPROC(glPathDashArrayNV);
                        LOAD_GLPROC(glPathStencilFuncNV);
                        LOAD_GLPROC(glPathStencilDepthOffsetNV);
                        LOAD_GLPROC(glStencilFillPathNV);
                        LOAD_GLPROC(glStencilStrokePathNV);
                        LOAD_GLPROC(glStencilFillPathInstancedNV);
                        LOAD_GLPROC(glStencilStrokePathInstancedNV);
                        LOAD_GLPROC(glPathCoverDepthFuncNV);
                        LOAD_GLPROC(glCoverFillPathNV);
                        LOAD_GLPROC(glCoverStrokePathNV);
                        LOAD_GLPROC(glCoverFillPathInstancedNV);
                        LOAD_GLPROC(glCoverStrokePathInstancedNV);
                        LOAD_GLPROC(glGetPathParameterivNV);
                        LOAD_GLPROC(glGetPathParameterfvNV);
                        LOAD_GLPROC(glGetPathCommandsNV);
                        LOAD_GLPROC(glGetPathCoordsNV);
                        LOAD_GLPROC(glGetPathDashArrayNV);
                        LOAD_GLPROC(glGetPathMetricsNV);
                        LOAD_GLPROC(glGetPathMetricRangeNV);
                        LOAD_GLPROC(glGetPathSpacingNV);
                        LOAD_GLPROC(glIsPointInFillPathNV);
                        LOAD_GLPROC(glIsPointInStrokePathNV);
                        LOAD_GLPROC(glGetPathLengthNV);
                        LOAD_GLPROC(glPointAlongPathNV);
                        LOAD_GLPROC(glMatrixLoad3x2fNV);
                        LOAD_GLPROC(glMatrixLoad3x3fNV);
                        LOAD_GLPROC(glMatrixLoadTranspose3x3fNV);
                        LOAD_GLPROC(glMatrixMult3x2fNV);
                        LOAD_GLPROC(glMatrixMult3x3fNV);
                        LOAD_GLPROC(glMatrixMultTranspose3x3fNV);
                        LOAD_GLPROC(glStencilThenCoverFillPathNV);
                        LOAD_GLPROC(glStencilThenCoverStrokePathNV);
                        LOAD_GLPROC(glStencilThenCoverFillPathInstancedNV);
                        LOAD_GLPROC(glStencilThenCoverStrokePathInstancedNV);
                        LOAD_GLPROC(glPathGlyphIndexRangeNV);
                        LOAD_GLPROC(glPathGlyphIndexArrayNV);
                        LOAD_GLPROC(glPathMemoryGlyphIndexArrayNV);
                        LOAD_GLPROC(glProgramPathFragmentInputGenNV);
                        LOAD_GLPROC(glGetProgramResourcefvNV);
                        _GL_NV_path_rendering = true;
                    }
                    break;
                case 21: if(!GLARB::_GL_ARB_buffer_storage && strncmp(cur_ext, "GL_ARB_buffer_storage", 21) == 0) { GLARB::_GL_ARB_buffer_storage = true; }
                    else if(!GLARB::_GL_ARB_compute_shader && strncmp(cur_ext, "GL_ARB_compute_shader", 21) == 0) { GLARB::_GL_ARB_compute_shader = true; }
                    else if(!GLARB::_GL_ARB_draw_instanced && strncmp(cur_ext, "GL_ARB_draw_instanced", 21) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glDrawArraysInstancedARB);
                        LOAD_GLPROC(glDrawElementsInstancedARB);
                        _GL_ARB_draw_instanced = true;
                    }
                    else if(!GLARB::_GL_ARB_sample_shading && strncmp(cur_ext, "GL_ARB_sample_shading", 21) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glMinSampleShadingARB);
                        _GL_ARB_sample_shading = true;
                    }
                    else if(!GLARB::_GL_ARB_sparse_texture && strncmp(cur_ext, "GL_ARB_sparse_texture", 21) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glTexPageCommitmentARB);
                        _GL_ARB_sparse_texture = true;
                    }
                    else if(!GLARB::_GL_ARB_texture_gather && strncmp(cur_ext, "GL_ARB_texture_gather", 21) == 0) { GLARB::_GL_ARB_texture_gather = true; }
                    else if(!GLARB::_GL_ARB_viewport_array && strncmp(cur_ext, "GL_ARB_viewport_array", 21) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glDepthRangeArraydvNV);
                        LOAD_GLPROC(glDepthRangeIndexeddNV);
                        _GL_ARB_viewport_array = true;
                    }
                    else if(!GLNV::_GL_NV_texture_barrier && strncmp(cur_ext, "GL_NV_texture_barrier", 21) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glTextureBarrierNV);
                        _GL_NV_texture_barrier = true;
                    }
                    else if(!GLNV::_GL_NV_viewport_array2 && strncmp(cur_ext, "GL_NV_viewport_array2", 21) == 0) { GLNV::_GL_NV_viewport_array2 = true; }
                    break;
                case 22: if(!GLARB::_GL_ARB_gpu_shader_fp64 && strncmp(cur_ext, "GL_ARB_gpu_shader_fp64", 22) == 0) { GLARB::_GL_ARB_gpu_shader_fp64 = true; }
                    else if(!GLARB::_GL_ARB_sampler_objects && strncmp(cur_ext, "GL_ARB_sampler_objects", 22) == 0) { GLARB::_GL_ARB_sampler_objects = true; }
                    else if(!GLARB::_GL_ARB_sparse_texture2 && strncmp(cur_ext, "GL_ARB_sparse_texture2", 22) == 0) { GLARB::_GL_ARB_sparse_texture2 = true; }
                    else if(!GLARB::_GL_ARB_texture_barrier && strncmp(cur_ext, "GL_ARB_texture_barrier", 22) == 0) { GLARB::_GL_ARB_texture_barrier = true; }
                    else if(!GLARB::_GL_ARB_texture_storage && strncmp(cur_ext, "GL_ARB_texture_storage", 22) == 0) { GLARB::_GL_ARB_texture_storage = true; }
                    else if(!GLARB::_GL_ARB_texture_swizzle && strncmp(cur_ext, "GL_ARB_texture_swizzle", 22) == 0) { GLARB::_GL_ARB_texture_swizzle = true; }
                    else if(!GLNV::_GL_NV_bindless_texture && strncmp(cur_ext, "GL_NV_bindless_texture", 22) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glGetTextureHandleNV);
                        LOAD_GLPROC(glGetTextureSamplerHandleNV);
                        LOAD_GLPROC(glMakeTextureHandleResidentNV);
                        LOAD_GLPROC(glMakeTextureHandleNonResidentNV);
                        LOAD_GLPROC(glGetImageHandleNV);
                        LOAD_GLPROC(glMakeImageHandleResidentNV);
                        LOAD_GLPROC(glMakeImageHandleNonResidentNV);
                        LOAD_GLPROC(glUniformHandleui64NV);
                        LOAD_GLPROC(glUniformHandleui64vNV);
                        LOAD_GLPROC(glProgramUniformHandleui64NV);
                        LOAD_GLPROC(glProgramUniformHandleui64vNV);
                        LOAD_GLPROC(glIsTextureHandleResidentNV);
                        LOAD_GLPROC(glIsImageHandleResidentNV);
                        _GL_NV_bindless_texture = true;
                    }
                    else if(!GLNV::_GL_NV_sample_locations && strncmp(cur_ext, "GL_NV_sample_locations", 22) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glFramebufferSampleLocationsfvNV);
                        LOAD_GLPROC(glNamedFramebufferSampleLocationsfvNV);
                        LOAD_GLPROC(glResolveDepthValuesNV);
                        _GL_NV_sample_locations = true;
                    }
                    else if(!GLNV::_GL_NV_viewport_swizzle && strncmp(cur_ext, "GL_NV_viewport_swizzle", 22) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glViewportSwizzleNV);
                        _GL_NV_viewport_swizzle = true;
                    }
                    break;
                case 23: if(!GLARB::_GL_ARB_arrays_of_arrays && strncmp(cur_ext, "GL_ARB_arrays_of_arrays", 23) == 0) { GLARB::_GL_ARB_arrays_of_arrays = true; }
                    else if(!GLARB::_GL_ARB_bindless_texture && strncmp(cur_ext, "GL_ARB_bindless_texture", 23) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glGetTextureHandleARB);
                        LOAD_GLPROC(glGetTextureSamplerHandleARB);
                        LOAD_GLPROC(glMakeTextureHandleResidentARB);
                        LOAD_GLPROC(glMakeTextureHandleNonResidentARB);
                        LOAD_GLPROC(glGetImageHandleARB);
                        LOAD_GLPROC(glMakeImageHandleResidentARB);
                        LOAD_GLPROC(glMakeImageHandleNonResidentARB);
                        LOAD_GLPROC(glUniformHandleui64ARB);
                        LOAD_GLPROC(glUniformHandleui64vARB);
                        LOAD_GLPROC(glProgramUniformHandleui64ARB);
                        LOAD_GLPROC(glProgramUniformHandleui64vARB);
                        LOAD_GLPROC(glIsTextureHandleResidentARB);
                        LOAD_GLPROC(glIsImageHandleResidentARB);
                        LOAD_GLPROC(glVertexAttribL1ui64ARB);
                        LOAD_GLPROC(glVertexAttribL1ui64vARB);
                        LOAD_GLPROC(glGetVertexAttribLui64vARB);
                        _GL_ARB_bindless_texture = true;
                    }
                    else if(!GLARB::_GL_ARB_enhanced_layouts && strncmp(cur_ext, "GL_ARB_enhanced_layouts", 23) == 0) { GLARB::_GL_ARB_enhanced_layouts = true; }
                    else if(!GLARB::_GL_ARB_framebuffer_sRGB && strncmp(cur_ext, "GL_ARB_framebuffer_sRGB", 23) == 0) { GLARB::_GL_ARB_framebuffer_sRGB = true; }
                    else if(!GLARB::_GL_ARB_geometry_shader4 && strncmp(cur_ext, "GL_ARB_geometry_shader4", 23) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glProgramParameteriARB);
                        LOAD_GLPROC(glFramebufferTextureARB);
                        LOAD_GLPROC(glFramebufferTextureLayerARB);
                        LOAD_GLPROC(glFramebufferTextureFaceARB);
                        _GL_ARB_geometry_shader4 = true;
                    }
                    else if(!GLARB::_GL_ARB_gpu_shader_int64 && strncmp(cur_ext, "GL_ARB_gpu_shader_int64", 23) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glUniform1i64ARB);
                        LOAD_GLPROC(glUniform2i64ARB);
                        LOAD_GLPROC(glUniform3i64ARB);
                        LOAD_GLPROC(glUniform4i64ARB);
                        LOAD_GLPROC(glUniform1i64vARB);
                        LOAD_GLPROC(glUniform2i64vARB);
                        LOAD_GLPROC(glUniform3i64vARB);
                        LOAD_GLPROC(glUniform4i64vARB);
                        LOAD_GLPROC(glUniform1ui64ARB);
                        LOAD_GLPROC(glUniform2ui64ARB);
                        LOAD_GLPROC(glUniform3ui64ARB);
                        LOAD_GLPROC(glUniform4ui64ARB);
                        LOAD_GLPROC(glUniform1ui64vARB);
                        LOAD_GLPROC(glUniform2ui64vARB);
                        LOAD_GLPROC(glUniform3ui64vARB);
                        LOAD_GLPROC(glUniform4ui64vARB);
                        LOAD_GLPROC(glGetUniformi64vARB);
                        LOAD_GLPROC(glGetUniformui64vARB);
                        LOAD_GLPROC(glGetnUniformi64vARB);
                        LOAD_GLPROC(glGetnUniformui64vARB);
                        LOAD_GLPROC(glProgramUniform1i64ARB);
                        LOAD_GLPROC(glProgramUniform2i64ARB);
                        LOAD_GLPROC(glProgramUniform3i64ARB);
                        LOAD_GLPROC(glProgramUniform4i64ARB);
                        LOAD_GLPROC(glProgramUniform1i64vARB);
                        LOAD_GLPROC(glProgramUniform2i64vARB);
                        LOAD_GLPROC(glProgramUniform3i64vARB);
                        LOAD_GLPROC(glProgramUniform4i64vARB);
                        LOAD_GLPROC(glProgramUniform1ui64ARB);
                        LOAD_GLPROC(glProgramUniform2ui64ARB);
                        LOAD_GLPROC(glProgramUniform3ui64ARB);
                        LOAD_GLPROC(glProgramUniform4ui64ARB);
                        LOAD_GLPROC(glProgramUniform1ui64vARB);
                        LOAD_GLPROC(glProgramUniform2ui64vARB);
                        LOAD_GLPROC(glProgramUniform3ui64vARB);
                        LOAD_GLPROC(glProgramUniform4ui64vARB);
                        _GL_ARB_gpu_shader_int64 = true;
                    }
                    else if(!GLARB::_GL_ARB_instanced_arrays && strncmp(cur_ext, "GL_ARB_instanced_arrays", 23) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glVertexAttribDivisorARB);
                        _GL_ARB_instanced_arrays = true;
                    }
                    else if(!GLARB::_GL_ARB_map_buffer_range && strncmp(cur_ext, "GL_ARB_map_buffer_range", 23) == 0) { GLARB::_GL_ARB_map_buffer_range = true; }
                    else if(!GLARB::_GL_ARB_occlusion_query2 && strncmp(cur_ext, "GL_ARB_occlusion_query2", 23) == 0) { GLARB::_GL_ARB_occlusion_query2 = true; }
                    else if(!GLARB::_GL_ARB_provoking_vertex && strncmp(cur_ext, "GL_ARB_provoking_vertex", 23) == 0) { GLARB::_GL_ARB_provoking_vertex = true; }
                    else if(!GLARB::_GL_ARB_sample_locations && strncmp(cur_ext, "GL_ARB_sample_locations", 23) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glFramebufferSampleLocationsfvARB);
                        LOAD_GLPROC(glNamedFramebufferSampleLocationsfvARB);
                        LOAD_GLPROC(glEvaluateDepthValuesARB);
                        _GL_ARB_sample_locations = true;
                    }
                    else if(!GLARB::_GL_ARB_shader_precision && strncmp(cur_ext, "GL_ARB_shader_precision", 23) == 0) { GLARB::_GL_ARB_shader_precision = true; }
                    else if(!GLARB::_GL_ARB_spirv_extensions && strncmp(cur_ext, "GL_ARB_spirv_extensions", 23) == 0) { GLARB::_GL_ARB_spirv_extensions = true; }
                    else if(!GLARB::_GL_ARB_texture_stencil8 && strncmp(cur_ext, "GL_ARB_texture_stencil8", 23) == 0) { GLARB::_GL_ARB_texture_stencil8 = true; }
                    else if(!GLNV::_GL_NV_draw_vulkan_image && strncmp(cur_ext, "GL_NV_draw_vulkan_image", 23) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glDrawVkImageNV);
                        LOAD_GLPROC(glGetVkProcAddrNV);
                        LOAD_GLPROC(glWaitVkSemaphoreNV);
                        LOAD_GLPROC(glSignalVkSemaphoreNV);
                        LOAD_GLPROC(glSignalVkFenceNV);
                        _GL_NV_draw_vulkan_image = true;
                    }
                    else if(!GLNV::_GL_NV_memory_attachment && strncmp(cur_ext, "GL_NV_memory_attachment", 23) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glGetMemoryObjectDetachedResourcesuivNV);
                        LOAD_GLPROC(glResetMemoryObjectParameterNV);
                        LOAD_GLPROC(glTexAttachMemoryNV);
                        LOAD_GLPROC(glBufferAttachMemoryNV);
                        LOAD_GLPROC(glTextureAttachMemoryNV);
                        LOAD_GLPROC(glNamedBufferAttachMemoryNV);
                        _GL_NV_memory_attachment = true;
                    }
                    else if(!GLNV::_GL_NV_scissor_exclusive && strncmp(cur_ext, "GL_NV_scissor_exclusive", 23) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glScissorExclusiveNV);
                        LOAD_GLPROC(glScissorExclusiveArrayvNV);
                        _GL_NV_scissor_exclusive = true;
                    }
                    break;
                case 24: if(!GLARB::_GL_ARB_ES2_compatibility && strncmp(cur_ext, "GL_ARB_ES2_compatibility", 24) == 0) { GLARB::_GL_ARB_ES2_compatibility = true; }
                    else if(!GLARB::_GL_ARB_ES3_compatibility && strncmp(cur_ext, "GL_ARB_ES3_compatibility", 24) == 0) { GLARB::_GL_ARB_ES3_compatibility = true; }
                    else if(!GLARB::_GL_ARB_half_float_vertex && strncmp(cur_ext, "GL_ARB_half_float_vertex", 24) == 0) { GLARB::_GL_ARB_half_float_vertex = true; }
                    else if(!GLARB::_GL_ARB_seamless_cube_map && strncmp(cur_ext, "GL_ARB_seamless_cube_map", 24) == 0) { GLARB::_GL_ARB_seamless_cube_map = true; }
                    else if(!GLARB::_GL_ARB_shader_group_vote && strncmp(cur_ext, "GL_ARB_shader_group_vote", 24) == 0) { GLARB::_GL_ARB_shader_group_vote = true; }
                    else if(!GLARB::_GL_ARB_shader_image_size && strncmp(cur_ext, "GL_ARB_shader_image_size", 24) == 0) { GLARB::_GL_ARB_shader_image_size = true; }
                    else if(!GLARB::_GL_ARB_shader_subroutine && strncmp(cur_ext, "GL_ARB_shader_subroutine", 24) == 0) { GLARB::_GL_ARB_shader_subroutine = true; }
                    else if(!GLARB::_GL_ARB_stencil_texturing && strncmp(cur_ext, "GL_ARB_stencil_texturing", 24) == 0) { GLARB::_GL_ARB_stencil_texturing = true; }
                    else if(!GLARB::_GL_ARB_texture_query_lod && strncmp(cur_ext, "GL_ARB_texture_query_lod", 24) == 0) { GLARB::_GL_ARB_texture_query_lod = true; }
                    else if(!GLARB::_GL_ARB_vertex_array_bgra && strncmp(cur_ext, "GL_ARB_vertex_array_bgra", 24) == 0) { GLARB::_GL_ARB_vertex_array_bgra = true; }
                    else if(!GLNV::_GL_NV_conditional_render && strncmp(cur_ext, "GL_NV_conditional_render", 24) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glBeginConditionalRenderNV);
                        LOAD_GLPROC(glEndConditionalRenderNV);
                        _GL_NV_conditional_render = true;
                    }
                    else if(!GLNV::_GL_NV_depth_buffer_float && strncmp(cur_ext, "GL_NV_depth_buffer_float", 24) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glDepthRangedNV);
                        LOAD_GLPROC(glClearDepthdNV);
                        LOAD_GLPROC(glDepthBoundsdNV);
                        _GL_NV_depth_buffer_float = true;
                    }
                    else if(!GLNV::_GL_NV_shader_buffer_load && strncmp(cur_ext, "GL_NV_shader_buffer_load", 24) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glMakeBufferResidentNV);
                        LOAD_GLPROC(glMakeBufferNonResidentNV);
                        LOAD_GLPROC(glIsBufferResidentNV);
                        LOAD_GLPROC(glMakeNamedBufferResidentNV);
                        LOAD_GLPROC(glMakeNamedBufferNonResidentNV);
                        LOAD_GLPROC(glIsNamedBufferResidentNV);
                        LOAD_GLPROC(glGetBufferParameterui64vNV);
                        LOAD_GLPROC(glGetNamedBufferParameterui64vNV);
                        LOAD_GLPROC(glGetIntegerui64vNV);
                        LOAD_GLPROC(glUniformui64NV);
                        LOAD_GLPROC(glUniformui64vNV);
                        LOAD_GLPROC(glGetUniformui64vNV);
                        LOAD_GLPROC(glProgramUniformui64NV);
                        LOAD_GLPROC(glProgramUniformui64vNV);
                        _GL_NV_shader_buffer_load = true;
                    }
                    else if(!GLNV::_GL_NV_shading_rate_image && strncmp(cur_ext, "GL_NV_shading_rate_image", 24) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glBindShadingRateImageNV);
                        LOAD_GLPROC(glGetShadingRateImagePaletteNV);
                        LOAD_GLPROC(glGetShadingRateSampleLocationivNV);
                        LOAD_GLPROC(glShadingRateImageBarrierNV);
                        LOAD_GLPROC(glShadingRateImagePaletteNV);
                        LOAD_GLPROC(glShadingRateSampleOrderNV);
                        LOAD_GLPROC(glShadingRateSampleOrderCustomNV);
                        _GL_NV_shading_rate_image = true;
                    }
                    break;
                case 25: if(!GLARB::_GL_ARB_conservative_depth && strncmp(cur_ext, "GL_ARB_conservative_depth", 25) == 0) { GLARB::_GL_ARB_conservative_depth = true; }
                    else if(!GLARB::_GL_ARB_depth_buffer_float && strncmp(cur_ext, "GL_ARB_depth_buffer_float", 25) == 0) { GLARB::_GL_ARB_depth_buffer_float = true; }
                    else if(!GLARB::_GL_ARB_derivative_control && strncmp(cur_ext, "GL_ARB_derivative_control", 25) == 0) { GLARB::_GL_ARB_derivative_control = true; }
                    else if(!GLARB::_GL_ARB_draw_buffers_blend && strncmp(cur_ext, "GL_ARB_draw_buffers_blend", 25) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glBlendEquationiARB);
                        LOAD_GLPROC(glBlendEquationSeparateiARB);
                        LOAD_GLPROC(glBlendFunciARB);
                        LOAD_GLPROC(glBlendFuncSeparateiARB);
                        _GL_ARB_draw_buffers_blend = true;
                    }
                    else if(!GLARB::_GL_ARB_framebuffer_object && strncmp(cur_ext, "GL_ARB_framebuffer_object", 25) == 0) { GLARB::_GL_ARB_framebuffer_object = true; }
                    else if(!GLARB::_GL_ARB_get_program_binary && strncmp(cur_ext, "GL_ARB_get_program_binary", 25) == 0) { GLARB::_GL_ARB_get_program_binary = true; }
                    else if(!GLARB::_GL_ARB_invalidate_subdata && strncmp(cur_ext, "GL_ARB_invalidate_subdata", 25) == 0) { GLARB::_GL_ARB_invalidate_subdata = true; }
                    else if(!GLARB::_GL_ARB_texture_rgb10_a2ui && strncmp(cur_ext, "GL_ARB_texture_rgb10_a2ui", 25) == 0) { GLARB::_GL_ARB_texture_rgb10_a2ui = true; }
                    else if(!GLNV::_GL_NV_blend_minmax_factor && strncmp(cur_ext, "GL_NV_blend_minmax_factor", 25) == 0) { GLNV::_GL_NV_blend_minmax_factor = true; }
                    else if(!GLNV::_GL_NV_conservative_raster && strncmp(cur_ext, "GL_NV_conservative_raster", 25) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glSubpixelPrecisionBiasNV);
                        _GL_NV_conservative_raster = true;
                    }
                    else if(!GLNV::_GL_NV_shader_atomic_float && strncmp(cur_ext, "GL_NV_shader_atomic_float", 25) == 0) { GLNV::_GL_NV_shader_atomic_float = true; }
                    else if(!GLNV::_GL_NV_shader_atomic_int64 && strncmp(cur_ext, "GL_NV_shader_atomic_int64", 25) == 0) { GLNV::_GL_NV_shader_atomic_int64 = true; }
                    else if(!GLNV::_GL_NV_shader_buffer_store && strncmp(cur_ext, "GL_NV_shader_buffer_store", 25) == 0) { GLNV::_GL_NV_shader_buffer_store = true; }
                    else if(!GLNV::_GL_NV_shader_thread_group && strncmp(cur_ext, "GL_NV_shader_thread_group", 25) == 0) { GLNV::_GL_NV_shader_thread_group = true; }
                    break;
                case 26: if(!GLARB::_GL_ARB_ES3_1_compatibility && strncmp(cur_ext, "GL_ARB_ES3_1_compatibility", 26) == 0) { GLARB::_GL_ARB_ES3_1_compatibility = true; }
                    else if(!GLARB::_GL_ARB_ES3_2_compatibility && strncmp(cur_ext, "GL_ARB_ES3_2_compatibility", 26) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glPrimitiveBoundingBoxARB);
                        _GL_ARB_ES3_2_compatibility = true;
                    }
                    else if(!GLARB::_GL_ARB_blend_func_extended && strncmp(cur_ext, "GL_ARB_blend_func_extended", 26) == 0) { GLARB::_GL_ARB_blend_func_extended = true; }
                    else if(!GLARB::_GL_ARB_clear_buffer_object && strncmp(cur_ext, "GL_ARB_clear_buffer_object", 26) == 0) { GLARB::_GL_ARB_clear_buffer_object = true; }
                    else if(!GLARB::_GL_ARB_direct_state_access && strncmp(cur_ext, "GL_ARB_direct_state_access", 26) == 0) { GLARB::_GL_ARB_direct_state_access = true; }
                    else if(!GLARB::_GL_ARB_indirect_parameters && strncmp(cur_ext, "GL_ARB_indirect_parameters", 26) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glMultiDrawArraysIndirectCountARB);
                        LOAD_GLPROC(glMultiDrawElementsIndirectCountARB);
                        _GL_ARB_indirect_parameters = true;
                    }
                    else if(!GLARB::_GL_ARB_multi_draw_indirect && strncmp(cur_ext, "GL_ARB_multi_draw_indirect", 26) == 0) { GLARB::_GL_ARB_multi_draw_indirect = true; }
                    else if(!GLARB::_GL_ARB_pixel_buffer_object && strncmp(cur_ext, "GL_ARB_pixel_buffer_object", 26) == 0) { GLARB::_GL_ARB_pixel_buffer_object = true; }
                    else if(!GLARB::_GL_ARB_post_depth_coverage && strncmp(cur_ext, "GL_ARB_post_depth_coverage", 26) == 0) { GLARB::_GL_ARB_post_depth_coverage = true; }
                    else if(!GLARB::_GL_ARB_query_buffer_object && strncmp(cur_ext, "GL_ARB_query_buffer_object", 26) == 0) { GLARB::_GL_ARB_query_buffer_object = true; }
                    else if(!GLARB::_GL_ARB_shader_bit_encoding && strncmp(cur_ext, "GL_ARB_shader_bit_encoding", 26) == 0) { GLARB::_GL_ARB_shader_bit_encoding = true; }
                    else if(!GLARB::_GL_ARB_tessellation_shader && strncmp(cur_ext, "GL_ARB_tessellation_shader", 26) == 0) { GLARB::_GL_ARB_tessellation_shader = true; }
                    else if(!GLARB::_GL_ARB_texture_multisample && strncmp(cur_ext, "GL_ARB_texture_multisample", 26) == 0) { GLARB::_GL_ARB_texture_multisample = true; }
                    else if(!GLARB::_GL_ARB_transform_feedback2 && strncmp(cur_ext, "GL_ARB_transform_feedback2", 26) == 0) { GLARB::_GL_ARB_transform_feedback2 = true; }
                    else if(!GLARB::_GL_ARB_transform_feedback3 && strncmp(cur_ext, "GL_ARB_transform_feedback3", 26) == 0) { GLARB::_GL_ARB_transform_feedback3 = true; }
                    else if(!GLARB::_GL_ARB_vertex_array_object && strncmp(cur_ext, "GL_ARB_vertex_array_object", 26) == 0) { GLARB::_GL_ARB_vertex_array_object = true; }
                    else if(!GLARB::_GL_ARB_vertex_attrib_64bit && strncmp(cur_ext, "GL_ARB_vertex_attrib_64bit", 26) == 0) { GLARB::_GL_ARB_vertex_attrib_64bit = true; }
                    else if(!GLNV::_GL_NV_clip_space_w_scaling && strncmp(cur_ext, "GL_NV_clip_space_w_scaling", 26) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glViewportPositionWScaleNV);
                        _GL_NV_clip_space_w_scaling = true;
                    }
                    else if(!GLNV::_GL_NV_memory_object_sparse && strncmp(cur_ext, "GL_NV_memory_object_sparse", 26) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glBufferPageCommitmentMemNV);
                        LOAD_GLPROC(glTexPageCommitmentMemNV);
                        LOAD_GLPROC(glNamedBufferPageCommitmentMemNV);
                        LOAD_GLPROC(glTexturePageCommitmentMemNV);
                        _GL_NV_memory_object_sparse = true;
                    }
                    break;
                case 27: if(!GLARB::_GL_ARB_internalformat_query && strncmp(cur_ext, "GL_ARB_internalformat_query", 27) == 0) { GLARB::_GL_ARB_internalformat_query = true; }
                    else if(!GLARB::_GL_ARB_map_buffer_alignment && strncmp(cur_ext, "GL_ARB_map_buffer_alignment", 27) == 0) { GLARB::_GL_ARB_map_buffer_alignment = true; }
                    else if(!GLARB::_GL_ARB_polygon_offset_clamp && strncmp(cur_ext, "GL_ARB_polygon_offset_clamp", 27) == 0) { GLARB::_GL_ARB_polygon_offset_clamp = true; }
                    else if(!GLARB::_GL_ARB_robustness_isolation && strncmp(cur_ext, "GL_ARB_robustness_isolation", 27) == 0) { GLARB::_GL_ARB_robustness_isolation = true; }
                    else if(!GLARB::_GL_ARB_sparse_texture_clamp && strncmp(cur_ext, "GL_ARB_sparse_texture_clamp", 27) == 0) { GLARB::_GL_ARB_sparse_texture_clamp = true; }
                    else if(!GLARB::_GL_ARB_texture_border_clamp && strncmp(cur_ext, "GL_ARB_texture_border_clamp", 27) == 0) { GLARB::_GL_ARB_texture_border_clamp = true; }
                    else if(!GLARB::_GL_ARB_texture_buffer_range && strncmp(cur_ext, "GL_ARB_texture_buffer_range", 27) == 0) { GLARB::_GL_ARB_texture_buffer_range = true; }
                    else if(!GLARB::_GL_ARB_texture_query_levels && strncmp(cur_ext, "GL_ARB_texture_query_levels", 27) == 0) { GLARB::_GL_ARB_texture_query_levels = true; }
                    else if(!GLNV::_GL_NV_shader_atomic_float64 && strncmp(cur_ext, "GL_NV_shader_atomic_float64", 27) == 0) { GLNV::_GL_NV_shader_atomic_float64 = true; }
                    else if(!GLNV::_GL_NV_shader_thread_shuffle && strncmp(cur_ext, "GL_NV_shader_thread_shuffle", 27) == 0) { GLNV::_GL_NV_shader_thread_shuffle = true; }
                    else if(!GLNV::_GL_NV_stereo_view_rendering && strncmp(cur_ext, "GL_NV_stereo_view_rendering", 27) == 0) { GLNV::_GL_NV_stereo_view_rendering = true; }
                    break;
                case 28: if(!GLARB::_GL_ARB_get_texture_sub_image && strncmp(cur_ext, "GL_ARB_get_texture_sub_image", 28) == 0) { GLARB::_GL_ARB_get_texture_sub_image = true; }
                    else if(!GLARB::_GL_ARB_internalformat_query2 && strncmp(cur_ext, "GL_ARB_internalformat_query2", 28) == 0) { GLARB::_GL_ARB_internalformat_query2 = true; }
                    else if(!GLARB::_GL_ARB_shader_stencil_export && strncmp(cur_ext, "GL_ARB_shader_stencil_export", 28) == 0) { GLARB::_GL_ARB_shader_stencil_export = true; }
                    else if(!GLARB::_GL_ARB_texture_buffer_object && strncmp(cur_ext, "GL_ARB_texture_buffer_object", 28) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glTexBufferARB);
                        _GL_ARB_texture_buffer_object = true;
                    }
                    else if(!GLARB::_GL_ARB_texture_filter_minmax && strncmp(cur_ext, "GL_ARB_texture_filter_minmax", 28) == 0) { GLARB::_GL_ARB_texture_filter_minmax = true; }
                    else if(!GLARB::_GL_ARB_uniform_buffer_object && strncmp(cur_ext, "GL_ARB_uniform_buffer_object", 28) == 0) { GLARB::_GL_ARB_uniform_buffer_object = true; }
                    else if(!GLARB::_GL_ARB_vertex_attrib_binding && strncmp(cur_ext, "GL_ARB_vertex_attrib_binding", 28) == 0) { GLARB::_GL_ARB_vertex_attrib_binding = true; }
                    else if(!GLNV::_GL_NV_primitive_shading_rate && strncmp(cur_ext, "GL_NV_primitive_shading_rate", 28) == 0) { GLNV::_GL_NV_primitive_shading_rate = true; }
                    else if(!GLNV::_GL_NV_shader_atomic_counters && strncmp(cur_ext, "GL_NV_shader_atomic_counters", 28) == 0) { GLNV::_GL_NV_shader_atomic_counters = true; }
                    break;
                case 29: if(!GLARB::_GL_ARB_shader_atomic_counters && strncmp(cur_ext, "GL_ARB_shader_atomic_counters", 29) == 0) { GLARB::_GL_ARB_shader_atomic_counters = true; }
                    else if(!GLARB::_GL_ARB_shader_draw_parameters && strncmp(cur_ext, "GL_ARB_shader_draw_parameters", 29) == 0) { GLARB::_GL_ARB_shader_draw_parameters = true; }
                    else if(!GLARB::_GL_ARB_texture_cube_map_array && strncmp(cur_ext, "GL_ARB_texture_cube_map_array", 29) == 0) { GLARB::_GL_ARB_texture_cube_map_array = true; }
                    else if(!GLNV::_GL_NV_blend_equation_advanced && strncmp(cur_ext, "GL_NV_blend_equation_advanced", 29) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glBlendParameteriNV);
                        LOAD_GLPROC(glBlendBarrierNV);
                        _GL_NV_blend_equation_advanced = true;
                    }
                    break;
                case 30: if(!GLARB::_GL_ARB_fragment_layer_viewport && strncmp(cur_ext, "GL_ARB_fragment_layer_viewport", 30) == 0) { GLARB::_GL_ARB_fragment_layer_viewport = true; }
                    else if(!GLARB::_GL_ARB_parallel_shader_compile && strncmp(cur_ext, "GL_ARB_parallel_shader_compile", 30) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glMaxShaderCompilerThreadsARB);
                        _GL_ARB_parallel_shader_compile = true;
                    }
                    else if(!GLARB::_GL_ARB_program_interface_query && strncmp(cur_ext, "GL_ARB_program_interface_query", 30) == 0) { GLARB::_GL_ARB_program_interface_query = true; }
                    else if(!GLARB::_GL_ARB_separate_shader_objects && strncmp(cur_ext, "GL_ARB_separate_shader_objects", 30) == 0) { GLARB::_GL_ARB_separate_shader_objects = true; }
                    else if(!GLARB::_GL_ARB_shader_image_load_store && strncmp(cur_ext, "GL_ARB_shader_image_load_store", 30) == 0) { GLARB::_GL_ARB_shader_image_load_store = true; }
                    else if(!GLARB::_GL_ARB_texture_mirrored_repeat && strncmp(cur_ext, "GL_ARB_texture_mirrored_repeat", 30) == 0) { GLARB::_GL_ARB_texture_mirrored_repeat = true; }
                    else if(!GLNV::_GL_NV_shader_texture_footprint && strncmp(cur_ext, "GL_NV_shader_texture_footprint", 30) == 0) { GLNV::_GL_NV_shader_texture_footprint = true; }
                    break;
                case 31: if(!GLARB::_GL_ARB_explicit_attrib_location && strncmp(cur_ext, "GL_ARB_explicit_attrib_location", 31) == 0) { GLARB::_GL_ARB_explicit_attrib_location = true; }
                    else if(!GLARB::_GL_ARB_shading_language_420pack && strncmp(cur_ext, "GL_ARB_shading_language_420pack", 31) == 0) { GLARB::_GL_ARB_shading_language_420pack = true; }
                    else if(!GLARB::_GL_ARB_shading_language_include && strncmp(cur_ext, "GL_ARB_shading_language_include", 31) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glNamedStringARB);
                        LOAD_GLPROC(glDeleteNamedStringARB);
                        LOAD_GLPROC(glCompileShaderIncludeARB);
                        LOAD_GLPROC(glIsNamedStringARB);
                        LOAD_GLPROC(glGetNamedStringARB);
                        LOAD_GLPROC(glGetNamedStringivARB);
                        _GL_ARB_shading_language_include = true;
                    }
                    else if(!GLARB::_GL_ARB_shading_language_packing && strncmp(cur_ext, "GL_ARB_shading_language_packing", 31) == 0) { GLARB::_GL_ARB_shading_language_packing = true; }
                    else if(!GLARB::_GL_ARB_texture_compression_bptc && strncmp(cur_ext, "GL_ARB_texture_compression_bptc", 31) == 0) { GLARB::_GL_ARB_texture_compression_bptc = true; }
                    else if(!GLARB::_GL_ARB_texture_compression_rgtc && strncmp(cur_ext, "GL_ARB_texture_compression_rgtc", 31) == 0) { GLARB::_GL_ARB_texture_compression_rgtc = true; }
                    else if(!GLARB::_GL_ARB_texture_non_power_of_two && strncmp(cur_ext, "GL_ARB_texture_non_power_of_two", 31) == 0) { GLARB::_GL_ARB_texture_non_power_of_two = true; }
                    else if(!GLNV::_GL_NV_fragment_shader_interlock && strncmp(cur_ext, "GL_NV_fragment_shader_interlock", 31) == 0) { GLNV::_GL_NV_fragment_shader_interlock = true; }
                    else if(!GLNV::_GL_NV_framebuffer_mixed_samples && strncmp(cur_ext, "GL_NV_framebuffer_mixed_samples", 31) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glCoverageModulationTableNV);
                        LOAD_GLPROC(glGetCoverageModulationTableNV);
                        LOAD_GLPROC(glCoverageModulationNV);
                        _GL_NV_framebuffer_mixed_samples = true;
                    }
                    else if(!GLNV::_GL_NV_shader_atomic_fp16_vector && strncmp(cur_ext, "GL_NV_shader_atomic_fp16_vector", 31) == 0) { GLNV::_GL_NV_shader_atomic_fp16_vector = true; }
                    break;
                case 32: if(!GLARB::_GL_ARB_draw_elements_base_vertex && strncmp(cur_ext, "GL_ARB_draw_elements_base_vertex", 32) == 0) { GLARB::_GL_ARB_draw_elements_base_vertex = true; }
                    else if(!GLARB::_GL_ARB_explicit_uniform_location && strncmp(cur_ext, "GL_ARB_explicit_uniform_location", 32) == 0) { GLARB::_GL_ARB_explicit_uniform_location = true; }
                    else if(!GLARB::_GL_ARB_fragment_shader_interlock && strncmp(cur_ext, "GL_ARB_fragment_shader_interlock", 32) == 0) { GLARB::_GL_ARB_fragment_shader_interlock = true; }
                    else if(!GLARB::_GL_ARB_pipeline_statistics_query && strncmp(cur_ext, "GL_ARB_pipeline_statistics_query", 32) == 0) { GLARB::_GL_ARB_pipeline_statistics_query = true; }
                    else if(!GLARB::_GL_ARB_shader_atomic_counter_ops && strncmp(cur_ext, "GL_ARB_shader_atomic_counter_ops", 32) == 0) { GLARB::_GL_ARB_shader_atomic_counter_ops = true; }
                    else if(!GLARB::_GL_ARB_fragment_coord_conventions && strncmp(cur_ext, "GL_ARB_fragment_coord_conventions", 33) == 0) { GLARB::_GL_ARB_fragment_coord_conventions = true; }
                    else if(!GLARB::_GL_ARB_framebuffer_no_attachments && strncmp(cur_ext, "GL_ARB_framebuffer_no_attachments", 33) == 0) { GLARB::_GL_ARB_framebuffer_no_attachments = true; }
                    else if(!GLARB::_GL_ARB_texture_filter_anisotropic && strncmp(cur_ext, "GL_ARB_texture_filter_anisotropic", 33) == 0) { GLARB::_GL_ARB_texture_filter_anisotropic = true; }
                    else if(!GLARB::_GL_ARB_vertex_type_2_10_10_10_rev && strncmp(cur_ext, "GL_ARB_vertex_type_2_10_10_10_rev", 33) == 0) { GLARB::_GL_ARB_vertex_type_2_10_10_10_rev = true; }
                    else if(!GLNV::_GL_NV_compute_shader_derivatives && strncmp(cur_ext, "GL_NV_compute_shader_derivatives", 32) == 0) { GLNV::_GL_NV_compute_shader_derivatives = true; }
                    else if(!GLNV::_GL_NV_conservative_raster_dilate && strncmp(cur_ext, "GL_NV_conservative_raster_dilate", 32) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glConservativeRasterParameterfNV);
                        _GL_NV_conservative_raster_dilate = true;
                    }
                    else if(!GLNV::_GL_NV_fragment_coverage_to_color && strncmp(cur_ext, "GL_NV_fragment_coverage_to_color", 32) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glFragmentCoverageColorNV);
                        _GL_NV_fragment_coverage_to_color = true;
                    }
                    else if(!GLNV::_GL_NV_path_rendering_shared_edge && strncmp(cur_ext, "GL_NV_path_rendering_shared_edge", 32) == 0) { GLNV::_GL_NV_path_rendering_shared_edge = true; }
                    break;
                case 33: if(!GLNV::_GL_NV_fragment_shader_barycentric && strncmp(cur_ext, "GL_NV_fragment_shader_barycentric", 33) == 0) { GLNV::_GL_NV_fragment_shader_barycentric = true; }
                    else if(!GLNV::_GL_NV_geometry_shader_passthrough && strncmp(cur_ext, "GL_NV_geometry_shader_passthrough", 33) == 0) { GLNV::_GL_NV_geometry_shader_passthrough = true; }
                    else if(!GLNV::_GL_NV_internalformat_sample_query && strncmp(cur_ext, "GL_NV_internalformat_sample_query", 33) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glGetInternalformatSampleivNV);
                        _GL_NV_internalformat_sample_query = true;
                    }
                    else if(!GLNV::_GL_NV_shader_subgroup_partitioned && strncmp(cur_ext, "GL_NV_shader_subgroup_partitioned", 33) == 0) { GLNV::_GL_NV_shader_subgroup_partitioned = true; }
                    else if(!GLNV::_GL_NV_vertex_attrib_integer_64bit && strncmp(cur_ext, "GL_NV_vertex_attrib_integer_64bit", 33) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glVertexAttribL1i64NV);
                        LOAD_GLPROC(glVertexAttribL2i64NV);
                        LOAD_GLPROC(glVertexAttribL3i64NV);
                        LOAD_GLPROC(glVertexAttribL4i64NV);
                        LOAD_GLPROC(glVertexAttribL1i64vNV);
                        LOAD_GLPROC(glVertexAttribL2i64vNV);
                        LOAD_GLPROC(glVertexAttribL3i64vNV);
                        LOAD_GLPROC(glVertexAttribL4i64vNV);
                        LOAD_GLPROC(glVertexAttribL1ui64NV);
                        LOAD_GLPROC(glVertexAttribL2ui64NV);
                        LOAD_GLPROC(glVertexAttribL3ui64NV);
                        LOAD_GLPROC(glVertexAttribL4ui64NV);
                        LOAD_GLPROC(glVertexAttribL1ui64vNV);
                        LOAD_GLPROC(glVertexAttribL2ui64vNV);
                        LOAD_GLPROC(glVertexAttribL3ui64vNV);
                        LOAD_GLPROC(glVertexAttribL4ui64vNV);
                        LOAD_GLPROC(glGetVertexAttribLi64vNV);
                        LOAD_GLPROC(glGetVertexAttribLui64vNV);
                        LOAD_GLPROC(glVertexAttribLFormatNV);
                        _GL_NV_vertex_attrib_integer_64bit = true;
                    }
                    break;
                case 34: if(!GLARB::_GL_ARB_compute_variable_group_size && strncmp(cur_ext, "GL_ARB_compute_variable_group_size", 34) == 0)
                    {
                        using namespace axl::glfl::core::GLARB;
                        LOAD_GLPROC(glDispatchComputeGroupSizeARB);
                        _GL_ARB_compute_variable_group_size = true;
                    }
                    else if(!GLARB::_GL_ARB_conditional_render_inverted && strncmp(cur_ext, "GL_ARB_conditional_render_inverted", 34) == 0) { GLARB::_GL_ARB_conditional_render_inverted = true; }
                    else if(!GLARB::_GL_ARB_shader_viewport_layer_array && strncmp(cur_ext, "GL_ARB_shader_viewport_layer_array", 34) == 0) { GLARB::_GL_ARB_shader_viewport_layer_array = true; }
                    else if(!GLARB::_GL_ARB_texture_buffer_object_rgb32 && strncmp(cur_ext, "GL_ARB_texture_buffer_object_rgb32", 34) == 0) { GLARB::_GL_ARB_texture_buffer_object_rgb32 = true; }
                    else if(!GLARB::_GL_ARB_texture_storage_multisample && strncmp(cur_ext, "GL_ARB_texture_storage_multisample", 34) == 0) { GLARB::_GL_ARB_texture_storage_multisample = true; }
                    else if(!GLARB::_GL_ARB_vertex_type_10f_11f_11f_rev && strncmp(cur_ext, "GL_ARB_vertex_type_10f_11f_11f_rev", 34) == 0) { GLARB::_GL_ARB_vertex_type_10f_11f_11f_rev = true; }
                    else if(!GLNV::_GL_NV_bindless_multi_draw_indirect && strncmp(cur_ext, "GL_NV_bindless_multi_draw_indirect", 34) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glMultiDrawArraysIndirectBindlessNV);
                        LOAD_GLPROC(glMultiDrawElementsIndirectBindlessNV);
                        _GL_NV_bindless_multi_draw_indirect = true;
                    }
                    else if(!GLNV::_GL_NV_conservative_raster_pre_snap && strncmp(cur_ext, "GL_NV_conservative_raster_pre_snap", 34) == 0) { GLNV::_GL_NV_conservative_raster_pre_snap = true; }
                    else if(!GLNV::_GL_NV_representative_fragment_test && strncmp(cur_ext, "GL_NV_representative_fragment_test", 34) == 0) { GLNV::_GL_NV_representative_fragment_test = true; }
                    else if(!GLNV::_GL_NV_texture_rectangle_compressed && strncmp(cur_ext, "GL_NV_texture_rectangle_compressed", 34) == 0) { GLNV::_GL_NV_texture_rectangle_compressed = true; }
                    else if(!GLNV::_GL_NV_vertex_buffer_unified_memory && strncmp(cur_ext, "GL_NV_vertex_buffer_unified_memory", 34) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glBufferAddressRangeNV);
                        LOAD_GLPROC(glVertexFormatNV);
                        LOAD_GLPROC(glNormalFormatNV);
                        LOAD_GLPROC(glColorFormatNV);
                        LOAD_GLPROC(glIndexFormatNV);
                        LOAD_GLPROC(glTexCoordFormatNV);
                        LOAD_GLPROC(glEdgeFlagFormatNV);
                        LOAD_GLPROC(glSecondaryColorFormatNV);
                        LOAD_GLPROC(glFogCoordFormatNV);
                        LOAD_GLPROC(glVertexAttribFormatNV);
                        LOAD_GLPROC(glVertexAttribIFormatNV);
                        LOAD_GLPROC(glGetIntegerui64i_vNV);
                        _GL_NV_vertex_buffer_unified_memory = true;
                    }
                    break;
                case 35: if(!GLARB::_GL_ARB_seamless_cubemap_per_texture && strncmp(cur_ext, "GL_ARB_seamless_cubemap_per_texture", 35) == 0) { GLARB::_GL_ARB_seamless_cubemap_per_texture = true; }
                    else if(!GLARB::_GL_ARB_shader_storage_buffer_object && strncmp(cur_ext, "GL_ARB_shader_storage_buffer_object", 35) == 0) { GLARB::_GL_ARB_shader_storage_buffer_object = true; }
                    else if(!GLARB::_GL_ARB_shader_texture_image_samples && strncmp(cur_ext, "GL_ARB_shader_texture_image_samples", 35) == 0) { GLARB::_GL_ARB_shader_texture_image_samples = true; }
                    else if(!GLARB::_GL_ARB_texture_mirror_clamp_to_edge && strncmp(cur_ext, "GL_ARB_texture_mirror_clamp_to_edge", 35) == 0) { GLARB::_GL_ARB_texture_mirror_clamp_to_edge = true; }
                    else if(!GLARB::_GL_ARB_transform_feedback_instanced && strncmp(cur_ext, "GL_ARB_transform_feedback_instanced", 35) == 0) { GLARB::_GL_ARB_transform_feedback_instanced = true; }
                    else if(!GLNV::_GL_NV_sample_mask_override_coverage && strncmp(cur_ext, "GL_NV_sample_mask_override_coverage", 35) == 0) { GLNV::_GL_NV_sample_mask_override_coverage = true; }
                    else if(!GLNV::_GL_NV_uniform_buffer_unified_memory && strncmp(cur_ext, "GL_NV_uniform_buffer_unified_memory", 35) == 0) { GLNV::_GL_NV_uniform_buffer_unified_memory = true; }
                    break;
                case 36: if(!GLARB::_GL_ARB_robust_buffer_access_behavior && strncmp(cur_ext, "GL_ARB_robust_buffer_access_behavior", 36) == 0) { GLARB::_GL_ARB_robust_buffer_access_behavior = true; }
                    break;
                case 38: if(!GLNV::_GL_NV_blend_equation_advanced_coherent && strncmp(cur_ext, "GL_NV_blend_equation_advanced_coherent", 38) == 0) { GLNV::_GL_NV_blend_equation_advanced_coherent = true; }
                    else if(!GLNV::_GL_NV_framebuffer_multisample_coverage && strncmp(cur_ext, "GL_NV_framebuffer_multisample_coverage", 38) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glRenderbufferStorageMultisampleCoverageNV);
                        _GL_NV_framebuffer_multisample_coverage = true;
                    }
                    break;
                case 39: if(!GLARB::_GL_ARB_compressed_texture_pixel_storage && strncmp(cur_ext, "GL_ARB_compressed_texture_pixel_storage", 39) == 0) { GLARB::_GL_ARB_compressed_texture_pixel_storage = true; }
                    break;
                case 40: if(!GLARB::_GL_ARB_transform_feedback_overflow_query && strncmp(cur_ext, "GL_ARB_transform_feedback_overflow_query", 40) == 0) { GLARB::_GL_ARB_transform_feedback_overflow_query = true; }
                    else if(!GLNV::_GL_NV_bindless_multi_draw_indirect_count && strncmp(cur_ext, "GL_NV_bindless_multi_draw_indirect_count", 40) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glMultiDrawArraysIndirectBindlessCountNV);
                        LOAD_GLPROC(glMultiDrawElementsIndirectBindlessCountNV);
                        _GL_NV_bindless_multi_draw_indirect_count = true;
                    }
                    break;
                case 41: if(!GLNV::_GL_NV_conservative_raster_underestimation && strncmp(cur_ext, "GL_NV_conservative_raster_underestimation", 41) == 0) { GLNV::_GL_NV_conservative_raster_underestimation = true; }
                    break;
                case 44: if(!GLNV::_GL_NV_conservative_raster_pre_snap_triangles && strncmp(cur_ext, "GL_NV_conservative_raster_pre_snap_triangles", 44) == 0)
                    {
                        using namespace axl::glfl::core::GLNV;
                        LOAD_GLPROC(glConservativeRasterParameteriNV);
                        _GL_NV_conservative_raster_pre_snap_triangles = true;
                    }
                    break;
            }
        }
        
    } // namespace GLARB
	{ // namespace KHR
		using namespace axl::glfl::core::GLKHR; 
		// GL_KHR_blend_equation_advanced
		if(!_GL_KHR_blend_equation_advanced && checkExtension("GL_KHR_blend_equation_advanced"))
		{
			LOAD_GLPROC(glBlendBarrierKHR);
			_GL_KHR_blend_equation_advanced = true;
		}
		// GL_KHR_blend_equation_advanced_coherent
		if(!_GL_KHR_blend_equation_advanced_coherent && checkExtension("GL_KHR_blend_equation_advanced_coherent"))
		{
			_GL_KHR_blend_equation_advanced_coherent = true;
		}
		// GL_KHR_context_flush_control
		if(!_GL_KHR_context_flush_control && checkExtension("GL_KHR_context_flush_control"))
		{
			_GL_KHR_context_flush_control = true;
		}
		// GL_KHR_debug
		if(!_GL_KHR_debug && checkExtension("GL_KHR_debug"))
		{
			_GL_KHR_debug = true;
		}
		// GL_KHR_no_error
		if(!_GL_KHR_no_error && checkExtension("GL_KHR_no_error"))
		{
			_GL_KHR_no_error = true;
		}
		// GL_KHR_parallel_shader_compile
		if(!_GL_KHR_parallel_shader_compile && checkExtension("GL_KHR_parallel_shader_compile"))
		{
			LOAD_GLPROC(glMaxShaderCompilerThreadsKHR);
			_GL_KHR_parallel_shader_compile = true;
		}
		// GL_KHR_robust_buffer_access_behavior
		if(!_GL_KHR_robust_buffer_access_behavior && checkExtension("GL_KHR_robust_buffer_access_behavior"))
		{
			_GL_KHR_robust_buffer_access_behavior = true;
		}
		// GL_KHR_robustness
		if(!_GL_KHR_robustness && checkExtension("GL_KHR_robustness"))
		{
			_GL_KHR_robustness = true;
		}
		// GL_KHR_shader_subgroup
		if(!_GL_KHR_shader_subgroup && checkExtension("GL_KHR_shader_subgroup"))
		{
			_GL_KHR_shader_subgroup = true;
		}
		// GL_KHR_texture_compression_astc_hdr
		if(!_GL_KHR_texture_compression_astc_hdr && checkExtension("GL_KHR_texture_compression_astc_hdr"))
		{
			_GL_KHR_texture_compression_astc_hdr = true;
		}
		// GL_KHR_texture_compression_astc_ldr
		if(!_GL_KHR_texture_compression_astc_ldr && checkExtension("GL_KHR_texture_compression_astc_ldr"))
		{
			_GL_KHR_texture_compression_astc_ldr = true;
		}
		// GL_KHR_texture_compression_astc_sliced_3d
		if(!_GL_KHR_texture_compression_astc_sliced_3d && checkExtension("GL_KHR_texture_compression_astc_sliced_3d"))
		{
			_GL_KHR_texture_compression_astc_sliced_3d = true;
		}
	} // namespace GLKHR
	{
		using namespace axl::glfl::core::GLAMD;
		// GL_AMD_framebuffer_multisample_advanced
		if(!_GL_AMD_framebuffer_multisample_advanced && checkExtension("GL_AMD_framebuffer_multisample_advanced"))
		{
			LOAD_GLPROC(glRenderbufferStorageMultisampleAdvancedAMD);
			LOAD_GLPROC(glNamedRenderbufferStorageMultisampleAdvancedAMD);
			_GL_AMD_framebuffer_multisample_advanced = true;
		}
		// GL_AMD_performance_monitor
		if(!_GL_AMD_performance_monitor && checkExtension("GL_AMD_performance_monitor"))
		{
			LOAD_GLPROC(glGetPerfMonitorGroupsAMD);
			LOAD_GLPROC(glGetPerfMonitorCountersAMD);
			LOAD_GLPROC(glGetPerfMonitorGroupStringAMD);
			LOAD_GLPROC(glGetPerfMonitorCounterStringAMD);
			LOAD_GLPROC(glGetPerfMonitorCounterInfoAMD);
			LOAD_GLPROC(glGenPerfMonitorsAMD);
			LOAD_GLPROC(glDeletePerfMonitorsAMD);
			LOAD_GLPROC(glSelectPerfMonitorCountersAMD);
			LOAD_GLPROC(glBeginPerfMonitorAMD);
			LOAD_GLPROC(glEndPerfMonitorAMD);
			LOAD_GLPROC(glGetPerfMonitorCounterDataAMD);
			_GL_AMD_performance_monitor = true;
		}
	} // namespace GLAMD
	{
		using namespace axl::glfl::core::GLAPPLE;
		// GL_APPLE_rgb_422
		if(!_GL_APPLE_rgb_422 && checkExtension("GL_APPLE_rgb_422"))
		{
			_GL_APPLE_rgb_422 = true;
		}
	} // namespace GLAPPLE
	{
		using namespace axl::glfl::core::GLEXT;
		// GL_EXT_EGL_image_storage
		if(!_GL_EXT_EGL_image_storage && checkExtension("GL_EXT_EGL_image_storage"))
		{
			LOAD_GLPROC(glEGLImageTargetTexStorageEXT);
			LOAD_GLPROC(glEGLImageTargetTextureStorageEXT);
			_GL_EXT_EGL_image_storage = true;
		}
		// GL_EXT_EGL_sync
		if(!_GL_EXT_EGL_sync && checkExtension("GL_EXT_EGL_sync"))
		{
			_GL_EXT_EGL_sync = true;
		}
		// GL_EXT_debug_label
		if(!_GL_EXT_debug_label && checkExtension("GL_EXT_debug_label"))
		{
			LOAD_GLPROC(glLabelObjectEXT);
			LOAD_GLPROC(glGetObjectLabelEXT);
			_GL_EXT_debug_label = true;
		}
		// GL_EXT_debug_marker
		if(!_GL_EXT_debug_marker && checkExtension("GL_EXT_debug_marker"))
		{
			LOAD_GLPROC(glInsertEventMarkerEXT);
			LOAD_GLPROC(glPushGroupMarkerEXT);
			LOAD_GLPROC(glPopGroupMarkerEXT);
			_GL_EXT_debug_marker = true;
		}
		// GL_EXT_direct_state_access
		if(!_GL_EXT_direct_state_access && checkExtension("GL_EXT_direct_state_access"))
		{
			LOAD_GLPROC(glMatrixLoadfEXT);
			LOAD_GLPROC(glMatrixLoaddEXT);
			LOAD_GLPROC(glMatrixMultfEXT);
			LOAD_GLPROC(glMatrixMultdEXT);
			LOAD_GLPROC(glMatrixLoadIdentityEXT);
			LOAD_GLPROC(glMatrixRotatefEXT);
			LOAD_GLPROC(glMatrixRotatedEXT);
			LOAD_GLPROC(glMatrixScalefEXT);
			LOAD_GLPROC(glMatrixScaledEXT);
			LOAD_GLPROC(glMatrixTranslatefEXT);
			LOAD_GLPROC(glMatrixTranslatedEXT);
			LOAD_GLPROC(glMatrixFrustumEXT);
			LOAD_GLPROC(glMatrixOrthoEXT);
			LOAD_GLPROC(glMatrixPopEXT);
			LOAD_GLPROC(glMatrixPushEXT);
			LOAD_GLPROC(glClientAttribDefaultEXT);
			LOAD_GLPROC(glPushClientAttribDefaultEXT);
			LOAD_GLPROC(glTextureParameterfEXT);
			LOAD_GLPROC(glTextureParameterfvEXT);
			LOAD_GLPROC(glTextureParameteriEXT);
			LOAD_GLPROC(glTextureParameterivEXT);
			LOAD_GLPROC(glTextureImage1DEXT);
			LOAD_GLPROC(glTextureImage2DEXT);
			LOAD_GLPROC(glTextureSubImage1DEXT);
			LOAD_GLPROC(glTextureSubImage2DEXT);
			LOAD_GLPROC(glCopyTextureImage1DEXT);
			LOAD_GLPROC(glCopyTextureImage2DEXT);
			LOAD_GLPROC(glCopyTextureSubImage1DEXT);
			LOAD_GLPROC(glCopyTextureSubImage2DEXT);
			LOAD_GLPROC(glGetTextureImageEXT);
			LOAD_GLPROC(glGetTextureParameterfvEXT);
			LOAD_GLPROC(glGetTextureParameterivEXT);
			LOAD_GLPROC(glGetTextureLevelParameterfvEXT);
			LOAD_GLPROC(glGetTextureLevelParameterivEXT);
			LOAD_GLPROC(glTextureImage3DEXT);
			LOAD_GLPROC(glTextureSubImage3DEXT);
			LOAD_GLPROC(glCopyTextureSubImage3DEXT);
			LOAD_GLPROC(glBindMultiTextureEXT);
			LOAD_GLPROC(glMultiTexCoordPointerEXT);
			LOAD_GLPROC(glMultiTexEnvfEXT);
			LOAD_GLPROC(glMultiTexEnvfvEXT);
			LOAD_GLPROC(glMultiTexEnviEXT);
			LOAD_GLPROC(glMultiTexEnvivEXT);
			LOAD_GLPROC(glMultiTexGendEXT);
			LOAD_GLPROC(glMultiTexGendvEXT);
			LOAD_GLPROC(glMultiTexGenfEXT);
			LOAD_GLPROC(glMultiTexGenfvEXT);
			LOAD_GLPROC(glMultiTexGeniEXT);
			LOAD_GLPROC(glMultiTexGenivEXT);
			LOAD_GLPROC(glGetMultiTexEnvfvEXT);
			LOAD_GLPROC(glGetMultiTexEnvivEXT);
			LOAD_GLPROC(glGetMultiTexGendvEXT);
			LOAD_GLPROC(glGetMultiTexGenfvEXT);
			LOAD_GLPROC(glGetMultiTexGenivEXT);
			LOAD_GLPROC(glMultiTexParameteriEXT);
			LOAD_GLPROC(glMultiTexParameterivEXT);
			LOAD_GLPROC(glMultiTexParameterfEXT);
			LOAD_GLPROC(glMultiTexParameterfvEXT);
			LOAD_GLPROC(glMultiTexImage1DEXT);
			LOAD_GLPROC(glMultiTexImage2DEXT);
			LOAD_GLPROC(glMultiTexSubImage1DEXT);
			LOAD_GLPROC(glMultiTexSubImage2DEXT);
			LOAD_GLPROC(glCopyMultiTexImage1DEXT);
			LOAD_GLPROC(glCopyMultiTexImage2DEXT);
			LOAD_GLPROC(glCopyMultiTexSubImage1DEXT);
			LOAD_GLPROC(glCopyMultiTexSubImage2DEXT);
			LOAD_GLPROC(glGetMultiTexImageEXT);
			LOAD_GLPROC(glGetMultiTexParameterfvEXT);
			LOAD_GLPROC(glGetMultiTexParameterivEXT);
			LOAD_GLPROC(glGetMultiTexLevelParameterfvEXT);
			LOAD_GLPROC(glGetMultiTexLevelParameterivEXT);
			LOAD_GLPROC(glMultiTexImage3DEXT);
			LOAD_GLPROC(glMultiTexSubImage3DEXT);
			LOAD_GLPROC(glCopyMultiTexSubImage3DEXT);
			LOAD_GLPROC(glEnableClientStateIndexedEXT);
			LOAD_GLPROC(glDisableClientStateIndexedEXT);
			LOAD_GLPROC(glGetFloatIndexedvEXT);
			LOAD_GLPROC(glGetDoubleIndexedvEXT);
			LOAD_GLPROC(glGetPointerIndexedvEXT);
			LOAD_GLPROC(glEnableIndexedEXT);
			LOAD_GLPROC(glDisableIndexedEXT);
			LOAD_GLPROC(glIsEnabledIndexedEXT);
			LOAD_GLPROC(glGetIntegerIndexedvEXT);
			LOAD_GLPROC(glGetBooleanIndexedvEXT);
			LOAD_GLPROC(glCompressedTextureImage3DEXT);
			LOAD_GLPROC(glCompressedTextureImage2DEXT);
			LOAD_GLPROC(glCompressedTextureImage1DEXT);
			LOAD_GLPROC(glCompressedTextureSubImage3DEXT);
			LOAD_GLPROC(glCompressedTextureSubImage2DEXT);
			LOAD_GLPROC(glCompressedTextureSubImage1DEXT);
			LOAD_GLPROC(glGetCompressedTextureImageEXT);
			LOAD_GLPROC(glCompressedMultiTexImage3DEXT);
			LOAD_GLPROC(glCompressedMultiTexImage2DEXT);
			LOAD_GLPROC(glCompressedMultiTexImage1DEXT);
			LOAD_GLPROC(glCompressedMultiTexSubImage3DEXT);
			LOAD_GLPROC(glCompressedMultiTexSubImage2DEXT);
			LOAD_GLPROC(glCompressedMultiTexSubImage1DEXT);
			LOAD_GLPROC(glGetCompressedMultiTexImageEXT);
			LOAD_GLPROC(glMatrixLoadTransposefEXT);
			LOAD_GLPROC(glMatrixLoadTransposedEXT);
			LOAD_GLPROC(glMatrixMultTransposefEXT);
			LOAD_GLPROC(glMatrixMultTransposedEXT);
			LOAD_GLPROC(glNamedBufferDataEXT);
			LOAD_GLPROC(glNamedBufferSubDataEXT);
			LOAD_GLPROC(glMapNamedBufferEXT);
			LOAD_GLPROC(glUnmapNamedBufferEXT);
			LOAD_GLPROC(glGetNamedBufferParameterivEXT);
			LOAD_GLPROC(glGetNamedBufferPointervEXT);
			LOAD_GLPROC(glGetNamedBufferSubDataEXT);
			LOAD_GLPROC(glProgramUniform1fEXT);
			LOAD_GLPROC(glProgramUniform2fEXT);
			LOAD_GLPROC(glProgramUniform3fEXT);
			LOAD_GLPROC(glProgramUniform4fEXT);
			LOAD_GLPROC(glProgramUniform1iEXT);
			LOAD_GLPROC(glProgramUniform2iEXT);
			LOAD_GLPROC(glProgramUniform3iEXT);
			LOAD_GLPROC(glProgramUniform4iEXT);
			LOAD_GLPROC(glProgramUniform1fvEXT);
			LOAD_GLPROC(glProgramUniform2fvEXT);
			LOAD_GLPROC(glProgramUniform3fvEXT);
			LOAD_GLPROC(glProgramUniform4fvEXT);
			LOAD_GLPROC(glProgramUniform1ivEXT);
			LOAD_GLPROC(glProgramUniform2ivEXT);
			LOAD_GLPROC(glProgramUniform3ivEXT);
			LOAD_GLPROC(glProgramUniform4ivEXT);
			LOAD_GLPROC(glProgramUniformMatrix2fvEXT);
			LOAD_GLPROC(glProgramUniformMatrix3fvEXT);
			LOAD_GLPROC(glProgramUniformMatrix4fvEXT);
			LOAD_GLPROC(glProgramUniformMatrix2x3fvEXT);
			LOAD_GLPROC(glProgramUniformMatrix3x2fvEXT);
			LOAD_GLPROC(glProgramUniformMatrix2x4fvEXT);
			LOAD_GLPROC(glProgramUniformMatrix4x2fvEXT);
			LOAD_GLPROC(glProgramUniformMatrix3x4fvEXT);
			LOAD_GLPROC(glProgramUniformMatrix4x3fvEXT);
			LOAD_GLPROC(glTextureBufferEXT);
			LOAD_GLPROC(glMultiTexBufferEXT);
			LOAD_GLPROC(glTextureParameterIivEXT);
			LOAD_GLPROC(glTextureParameterIuivEXT);
			LOAD_GLPROC(glGetTextureParameterIivEXT);
			LOAD_GLPROC(glGetTextureParameterIuivEXT);
			LOAD_GLPROC(glMultiTexParameterIivEXT);
			LOAD_GLPROC(glMultiTexParameterIuivEXT);
			LOAD_GLPROC(glGetMultiTexParameterIivEXT);
			LOAD_GLPROC(glGetMultiTexParameterIuivEXT);
			LOAD_GLPROC(glProgramUniform1uiEXT);
			LOAD_GLPROC(glProgramUniform2uiEXT);
			LOAD_GLPROC(glProgramUniform3uiEXT);
			LOAD_GLPROC(glProgramUniform4uiEXT);
			LOAD_GLPROC(glProgramUniform1uivEXT);
			LOAD_GLPROC(glProgramUniform2uivEXT);
			LOAD_GLPROC(glProgramUniform3uivEXT);
			LOAD_GLPROC(glProgramUniform4uivEXT);
			LOAD_GLPROC(glNamedProgramLocalParameters4fvEXT);
			LOAD_GLPROC(glNamedProgramLocalParameterI4iEXT);
			LOAD_GLPROC(glNamedProgramLocalParameterI4ivEXT);
			LOAD_GLPROC(glNamedProgramLocalParametersI4ivEXT);
			LOAD_GLPROC(glNamedProgramLocalParameterI4uiEXT);
			LOAD_GLPROC(glNamedProgramLocalParameterI4uivEXT);
			LOAD_GLPROC(glNamedProgramLocalParametersI4uivEXT);
			LOAD_GLPROC(glGetNamedProgramLocalParameterIivEXT);
			LOAD_GLPROC(glGetNamedProgramLocalParameterIuivEXT);
			LOAD_GLPROC(glEnableClientStateiEXT);
			LOAD_GLPROC(glDisableClientStateiEXT);
			LOAD_GLPROC(glGetFloati_vEXT);
			LOAD_GLPROC(glGetDoublei_vEXT);
			LOAD_GLPROC(glGetPointeri_vEXT);
			LOAD_GLPROC(glNamedProgramStringEXT);
			LOAD_GLPROC(glNamedProgramLocalParameter4dEXT);
			LOAD_GLPROC(glNamedProgramLocalParameter4dvEXT);
			LOAD_GLPROC(glNamedProgramLocalParameter4fEXT);
			LOAD_GLPROC(glNamedProgramLocalParameter4fvEXT);
			LOAD_GLPROC(glGetNamedProgramLocalParameterdvEXT);
			LOAD_GLPROC(glGetNamedProgramLocalParameterfvEXT);
			LOAD_GLPROC(glGetNamedProgramivEXT);
			LOAD_GLPROC(glGetNamedProgramStringEXT);
			LOAD_GLPROC(glNamedRenderbufferStorageEXT);
			LOAD_GLPROC(glGetNamedRenderbufferParameterivEXT);
			LOAD_GLPROC(glNamedRenderbufferStorageMultisampleEXT);
			LOAD_GLPROC(glNamedRenderbufferStorageMultisampleCoverageEXT);
			LOAD_GLPROC(glCheckNamedFramebufferStatusEXT);
			LOAD_GLPROC(glNamedFramebufferTexture1DEXT);
			LOAD_GLPROC(glNamedFramebufferTexture2DEXT);
			LOAD_GLPROC(glNamedFramebufferTexture3DEXT);
			LOAD_GLPROC(glNamedFramebufferRenderbufferEXT);
			LOAD_GLPROC(glGetNamedFramebufferAttachmentParameterivEXT);
			LOAD_GLPROC(glGenerateTextureMipmapEXT);
			LOAD_GLPROC(glGenerateMultiTexMipmapEXT);
			LOAD_GLPROC(glFramebufferDrawBufferEXT);
			LOAD_GLPROC(glFramebufferDrawBuffersEXT);
			LOAD_GLPROC(glFramebufferReadBufferEXT);
			LOAD_GLPROC(glGetFramebufferParameterivEXT);
			LOAD_GLPROC(glNamedCopyBufferSubDataEXT);
			LOAD_GLPROC(glNamedFramebufferTextureEXT);
			LOAD_GLPROC(glNamedFramebufferTextureLayerEXT);
			LOAD_GLPROC(glNamedFramebufferTextureFaceEXT);
			LOAD_GLPROC(glTextureRenderbufferEXT);
			LOAD_GLPROC(glMultiTexRenderbufferEXT);
			LOAD_GLPROC(glVertexArrayVertexOffsetEXT);
			LOAD_GLPROC(glVertexArrayColorOffsetEXT);
			LOAD_GLPROC(glVertexArrayEdgeFlagOffsetEXT);
			LOAD_GLPROC(glVertexArrayIndexOffsetEXT);
			LOAD_GLPROC(glVertexArrayNormalOffsetEXT);
			LOAD_GLPROC(glVertexArrayTexCoordOffsetEXT);
			LOAD_GLPROC(glVertexArrayMultiTexCoordOffsetEXT);
			LOAD_GLPROC(glVertexArrayFogCoordOffsetEXT);
			LOAD_GLPROC(glVertexArraySecondaryColorOffsetEXT);
			LOAD_GLPROC(glVertexArrayVertexAttribOffsetEXT);
			LOAD_GLPROC(glVertexArrayVertexAttribIOffsetEXT);
			LOAD_GLPROC(glEnableVertexArrayEXT);
			LOAD_GLPROC(glDisableVertexArrayEXT);
			LOAD_GLPROC(glEnableVertexArrayAttribEXT);
			LOAD_GLPROC(glDisableVertexArrayAttribEXT);
			LOAD_GLPROC(glGetVertexArrayIntegervEXT);
			LOAD_GLPROC(glGetVertexArrayPointervEXT);
			LOAD_GLPROC(glGetVertexArrayIntegeri_vEXT);
			LOAD_GLPROC(glGetVertexArrayPointeri_vEXT);
			LOAD_GLPROC(glMapNamedBufferRangeEXT);
			LOAD_GLPROC(glFlushMappedNamedBufferRangeEXT);
			LOAD_GLPROC(glNamedBufferStorageEXT);
			LOAD_GLPROC(glClearNamedBufferDataEXT);
			LOAD_GLPROC(glClearNamedBufferSubDataEXT);
			LOAD_GLPROC(glNamedFramebufferParameteriEXT);
			LOAD_GLPROC(glGetNamedFramebufferParameterivEXT);
			LOAD_GLPROC(glProgramUniform1dEXT);
			LOAD_GLPROC(glProgramUniform2dEXT);
			LOAD_GLPROC(glProgramUniform3dEXT);
			LOAD_GLPROC(glProgramUniform4dEXT);
			LOAD_GLPROC(glProgramUniform1dvEXT);
			LOAD_GLPROC(glProgramUniform2dvEXT);
			LOAD_GLPROC(glProgramUniform3dvEXT);
			LOAD_GLPROC(glProgramUniform4dvEXT);
			LOAD_GLPROC(glProgramUniformMatrix2dvEXT);
			LOAD_GLPROC(glProgramUniformMatrix3dvEXT);
			LOAD_GLPROC(glProgramUniformMatrix4dvEXT);
			LOAD_GLPROC(glProgramUniformMatrix2x3dvEXT);
			LOAD_GLPROC(glProgramUniformMatrix2x4dvEXT);
			LOAD_GLPROC(glProgramUniformMatrix3x2dvEXT);
			LOAD_GLPROC(glProgramUniformMatrix3x4dvEXT);
			LOAD_GLPROC(glProgramUniformMatrix4x2dvEXT);
			LOAD_GLPROC(glProgramUniformMatrix4x3dvEXT);
			LOAD_GLPROC(glTextureBufferRangeEXT);
			LOAD_GLPROC(glTextureStorage1DEXT);
			LOAD_GLPROC(glTextureStorage2DEXT);
			LOAD_GLPROC(glTextureStorage3DEXT);
			LOAD_GLPROC(glTextureStorage2DMultisampleEXT);
			LOAD_GLPROC(glTextureStorage3DMultisampleEXT);
			LOAD_GLPROC(glVertexArrayBindVertexBufferEXT);
			LOAD_GLPROC(glVertexArrayVertexAttribFormatEXT);
			LOAD_GLPROC(glVertexArrayVertexAttribIFormatEXT);
			LOAD_GLPROC(glVertexArrayVertexAttribLFormatEXT);
			LOAD_GLPROC(glVertexArrayVertexAttribBindingEXT);
			LOAD_GLPROC(glVertexArrayVertexBindingDivisorEXT);
			LOAD_GLPROC(glVertexArrayVertexAttribLOffsetEXT);
			LOAD_GLPROC(glTexturePageCommitmentEXT);
			LOAD_GLPROC(glVertexArrayVertexAttribDivisorEXT);
			_GL_EXT_direct_state_access = true;
		}
		// GL_EXT_draw_instanced
		if(!_GL_EXT_draw_instanced && checkExtension("GL_EXT_draw_instanced"))
		{
			LOAD_GLPROC(glDrawArraysInstancedEXT);
			LOAD_GLPROC(glDrawElementsInstancedEXT);
			_GL_EXT_draw_instanced = true;
		}
		// GL_EXT_multiview_tessellation_geometry_shader
		if(!_GL_EXT_multiview_tessellation_geometry_shader && checkExtension("GL_EXT_multiview_tessellation_geometry_shader"))
		{
			_GL_EXT_multiview_tessellation_geometry_shader = true;
		}
		// GL_EXT_multiview_texture_multisample
		if(!_GL_EXT_multiview_texture_multisample && checkExtension("GL_EXT_multiview_texture_multisample"))
		{
			_GL_EXT_multiview_texture_multisample = true;
		}
		// GL_EXT_multiview_timer_query
		if(!_GL_EXT_multiview_timer_query && checkExtension("GL_EXT_multiview_timer_query"))
		{
			_GL_EXT_multiview_timer_query = true;
		}
		// GL_EXT_polygon_offset_clamp
		if(!_GL_EXT_polygon_offset_clamp && checkExtension("GL_EXT_polygon_offset_clamp"))
		{
			LOAD_GLPROC(glPolygonOffsetClampEXT);
			_GL_EXT_polygon_offset_clamp = true;
		}
		// GL_EXT_post_depth_coverage
		if(!_GL_EXT_post_depth_coverage && checkExtension("GL_EXT_post_depth_coverage"))
		{
			_GL_EXT_post_depth_coverage = true;
		}
		// GL_EXT_raster_multisample
		if(!_GL_EXT_raster_multisample && checkExtension("GL_EXT_raster_multisample"))
		{
			LOAD_GLPROC(glRasterSamplesEXT);
			_GL_EXT_raster_multisample = true;
		}
		// GL_EXT_separate_shader_objects
		if(!_GL_EXT_separate_shader_objects && checkExtension("GL_EXT_separate_shader_objects"))
		{
			LOAD_GLPROC(glUseShaderProgramEXT);
			LOAD_GLPROC(glActiveProgramEXT);
			LOAD_GLPROC(glCreateShaderProgramEXT);
			_GL_EXT_separate_shader_objects = true;
		}
		// GL_EXT_shader_framebuffer_fetch
		if(!_GL_EXT_shader_framebuffer_fetch && checkExtension("GL_EXT_shader_framebuffer_fetch"))
		{
			_GL_EXT_shader_framebuffer_fetch = true;
		}
		// GL_EXT_shader_framebuffer_fetch_non_coherent
		if(!_GL_EXT_shader_framebuffer_fetch_non_coherent && checkExtension("GL_EXT_shader_framebuffer_fetch_non_coherent"))
		{
			LOAD_GLPROC(glFramebufferFetchBarrierEXT);
			_GL_EXT_shader_framebuffer_fetch_non_coherent = true;
		}
		// GL_EXT_shader_integer_mix
		if(!_GL_EXT_shader_integer_mix && checkExtension("GL_EXT_shader_integer_mix"))
		{
			_GL_EXT_shader_integer_mix = true;
		}
		// GL_EXT_texture_compression_s3tc
		if(!_GL_EXT_texture_compression_s3tc && checkExtension("GL_EXT_texture_compression_s3tc"))
		{
			_GL_EXT_texture_compression_s3tc = true;
		}
		// GL_EXT_texture_filter_minmax
		if(!_GL_EXT_texture_filter_minmax && checkExtension("GL_EXT_texture_filter_minmax"))
		{
			_GL_EXT_texture_filter_minmax = true;
		}
		// GL_EXT_texture_sRGB_R8
		if(!_GL_EXT_texture_sRGB_R8 && checkExtension("GL_EXT_texture_sRGB_R8"))
		{
			_GL_EXT_texture_sRGB_R8 = true;
		}
		// GL_EXT_texture_sRGB_decode
		if(!_GL_EXT_texture_sRGB_decode && checkExtension("GL_EXT_texture_sRGB_decode"))
		{
			_GL_EXT_texture_sRGB_decode = true;
		}
		// GL_EXT_texture_shadow_lod
		if(!_GL_EXT_texture_shadow_lod && checkExtension("GL_EXT_texture_shadow_lod"))
		{
			_GL_EXT_texture_shadow_lod = true;
		}
		// GL_EXT_window_rectangles
		if(!_GL_EXT_window_rectangles && checkExtension("GL_EXT_window_rectangles"))
		{
			LOAD_GLPROC(glWindowRectanglesEXT);
			_GL_EXT_window_rectangles = true;
		}

	} // namespace GLEXT
	{
		using namespace axl::glfl::core::GLINTEL;
		// GL_INTEL_blackhole_render
		if(!_GL_INTEL_blackhole_render && checkExtension("GL_INTEL_blackhole_render"))
		{
			_GL_INTEL_blackhole_render = true;
		}
		// GL_INTEL_conservative_rasterization
		if(!_GL_INTEL_conservative_rasterization && checkExtension("GL_INTEL_conservative_rasterization"))
		{
			_GL_INTEL_conservative_rasterization = true;
		}
		// GL_INTEL_framebuffer_CMAA
		if(!_GL_INTEL_framebuffer_CMAA && checkExtension("GL_INTEL_framebuffer_CMAA"))
		{
			LOAD_GLPROC(glApplyFramebufferAttachmentCMAAINTEL);
			_GL_INTEL_framebuffer_CMAA = true;
		}
		// GL_INTEL_performance_query
		if(!_GL_INTEL_performance_query && checkExtension("GL_INTEL_performance_query"))
		{
			LOAD_GLPROC(glBeginPerfQueryINTEL);
			LOAD_GLPROC(glCreatePerfQueryINTEL);
			LOAD_GLPROC(glDeletePerfQueryINTEL);
			LOAD_GLPROC(glEndPerfQueryINTEL);
			LOAD_GLPROC(glGetFirstPerfQueryIdINTEL);
			LOAD_GLPROC(glGetNextPerfQueryIdINTEL);
			LOAD_GLPROC(glGetPerfCounterInfoINTEL);
			LOAD_GLPROC(glGetPerfQueryDataINTEL);
			LOAD_GLPROC(glGetPerfQueryIdByNameINTEL);
			LOAD_GLPROC(glGetPerfQueryInfoINTEL);
			_GL_INTEL_performance_query = true;
		}
	} // namespace GLINTEL
	{
		using namespace axl::glfl::core::GLMESA;
		// GL_MESA_framebuffer_flip_x
		if(!_GL_MESA_framebuffer_flip_x && checkExtension("GL_MESA_framebuffer_flip_x"))
		{
			_GL_MESA_framebuffer_flip_x = true;
		}
		// GL_MESA_framebuffer_flip_y
		if(!_GL_MESA_framebuffer_flip_y && checkExtension("GL_MESA_framebuffer_flip_y"))
		{
			LOAD_GLPROC(glFramebufferParameteriMESA);
			LOAD_GLPROC(glGetFramebufferParameterivMESA);
			_GL_MESA_framebuffer_flip_y = true;
		}
		// GL_MESA_framebuffer_swap_xy
		if(!_GL_MESA_framebuffer_swap_xy && checkExtension("GL_MESA_framebuffer_swap_xy"))
		{
			_GL_MESA_framebuffer_swap_xy = true;
		}
	} // namespace GLMESA
	{
    } // namespace GLNV
	{
		using namespace axl::glfl::core::GLOVR;
		if(!_GL_OVR_multiview && checkExtension("GL_OVR_multiview"))
		{
			LOAD_GLPROC(glFramebufferTextureMultiviewOVR);
			_GL_OVR_multiview = true;
		}
		if(!_GL_OVR_multiview2 && checkExtension("GL_OVR_multiview2"))
		{
			_GL_OVR_multiview2 = true;
		}
	} // namespace GLOVR
	return (initialized = true);
}

bool checkExtension(const char* extension_name)
{
	if(!GLOBAL_DUMMY.isInitialized()) GLOBAL_DUMMY.init();
	if(!GLOBAL_DUMMY.isInitialized() || !GLOBAL_DUMMY.makeCurrent())
		return false;
	using namespace axl::glfl::core::GL1;
	using namespace axl::glfl::core::GL3;
	bool gl_3_or_higher = false;
	const char *str_ver = (const char*)glGetString(GL_VERSION);
	if(!str_ver) return false;
    const size_t ext_len = strlen(extension_name);
	gl_3_or_higher = (((int)str_ver[0] - '0') >= 3);
	GLint i = 0, num_ext = 0, index = 0, last = 0;
	const char *cur_ext = (const char*)0, *ext = (const char*)0;
	if(gl_3_or_higher)
	{
		glGetIntegerv(GL_NUM_EXTENSIONS, &num_ext);
		if(num_ext <= 0) return true;
	}
	else
	{
		ext = (const char*)glGetString(GL_EXTENSIONS);
		if(!ext) return false;
	}
	bool done = false;
	while(!done)
	{
        size_t len = 0;
		if(gl_3_or_higher)
		{
			if(i >= num_ext) break;
			cur_ext = (const char*)glGetStringi(GL_EXTENSIONS, i++);
            len = strlen(cur_ext);
			if(!cur_ext) break;
		}
		else
		{
			char c = ext[index];
			while(c != '\0' && c != ' ')
			{
				c = ext[++index];
			}
			if(c == '\0') done = true;
			const char* cur_ext = (const char*)&ext[last];
            len = index - last;
			if(c == ' ')
				last = ++index;
		}
		if(len == ext_len && strncmp(cur_ext, extension_name, len) == 0)
			return true;
	}
	return false;
}

} // namespace axl::glfl::core
} // namespace axl::glfl
} // namespace axl