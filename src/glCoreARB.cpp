#include <axl.glfl/platform.h>

#if PLATFORM==PLATFORM_WINDOWS
#	define WIN32_LEAN_AND_MEAN 1
#	include <windows.h>
#	include <axl.glfl/glfl.hpp>
#	include <axl.glfl/Dummy.hpp>
#	include <axl.glfl/glCoreARB.hpp>
#	define LOAD_GLPROC(Name) (!(Name = (PFN::Name)wglGetProcAddress(#Name)) ? (Name = (PFN::Name)GetProcAddress(GLMODULE, #Name)) : Name)
#	define LOAD_GLPROC_ALT(Name) Name = (PFN::Name)GetProcAddress(GLMODULE, #Name)
#else
#	error("Unsupported platform!")
#endif

#define DECL_GLPROC(Name) PFN::##Name Name = (PFN::##Name)0

namespace axl {
namespace glfl {
namespace core {

namespace GL1 {

bool _GL_VERSION_1_0 = false;
const bool& GL_VERSION_1_0 = _GL_VERSION_1_0;
DECL_GLPROC(glCullFace);
DECL_GLPROC(glFrontFace);
DECL_GLPROC(glHint);
DECL_GLPROC(glLineWidth);
DECL_GLPROC(glPointSize);
DECL_GLPROC(glPolygonMode);
DECL_GLPROC(glScissor);
DECL_GLPROC(glTexParameterf);
DECL_GLPROC(glTexParameterfv);
DECL_GLPROC(glTexParameteri);
DECL_GLPROC(glTexParameteriv);
DECL_GLPROC(glTexImage1D);
DECL_GLPROC(glTexImage2D);
DECL_GLPROC(glDrawBuffer);
DECL_GLPROC(glClear);
DECL_GLPROC(glClearColor);
DECL_GLPROC(glClearStencil);
DECL_GLPROC(glClearDepth);
DECL_GLPROC(glStencilMask);
DECL_GLPROC(glColorMask);
DECL_GLPROC(glDepthMask);
DECL_GLPROC(glDisable);
DECL_GLPROC(glEnable);
DECL_GLPROC(glFinish);
DECL_GLPROC(glFlush);
DECL_GLPROC(glBlendFunc);
DECL_GLPROC(glLogicOp);
DECL_GLPROC(glStencilFunc);
DECL_GLPROC(glStencilOp);
DECL_GLPROC(glDepthFunc);
DECL_GLPROC(glPixelStoref);
DECL_GLPROC(glPixelStorei);
DECL_GLPROC(glReadBuffer);
DECL_GLPROC(glReadPixels);
DECL_GLPROC(glGetBooleanv);
DECL_GLPROC(glGetDoublev);
DECL_GLPROC(glGetError);
DECL_GLPROC(glGetFloatv);
DECL_GLPROC(glGetIntegerv);
DECL_GLPROC(glGetString);
DECL_GLPROC(glGetTexImage);
DECL_GLPROC(glGetTexParameterfv);
DECL_GLPROC(glGetTexParameteriv);
DECL_GLPROC(glGetTexLevelParameterfv);
DECL_GLPROC(glGetTexLevelParameteriv);
DECL_GLPROC(glIsEnabled);
DECL_GLPROC(glDepthRange);
DECL_GLPROC(glViewport);

bool _GL_VERSION_1_1 = false;
const bool& GL_VERSION_1_1 = _GL_VERSION_1_1;
DECL_GLPROC(glDrawArrays);
DECL_GLPROC(glDrawElements);
DECL_GLPROC(glGetPointerv);
DECL_GLPROC(glPolygonOffset);
DECL_GLPROC(glCopyTexImage1D);
DECL_GLPROC(glCopyTexImage2D);
DECL_GLPROC(glCopyTexSubImage1D);
DECL_GLPROC(glCopyTexSubImage2D);
DECL_GLPROC(glTexSubImage1D);
DECL_GLPROC(glTexSubImage2D);
DECL_GLPROC(glBindTexture);
DECL_GLPROC(glDeleteTextures);
DECL_GLPROC(glGenTextures);
DECL_GLPROC(glIsTexture);

bool _GL_VERSION_1_2 = false;
const bool& GL_VERSION_1_2 = _GL_VERSION_1_2;
DECL_GLPROC(glDrawRangeElements);
DECL_GLPROC(glTexImage3D);
DECL_GLPROC(glTexSubImage3D);
DECL_GLPROC(glCopyTexSubImage3D);

bool _GL_VERSION_1_3 = false;
const bool& GL_VERSION_1_3 = _GL_VERSION_1_3;
DECL_GLPROC(glActiveTexture);
DECL_GLPROC(glSampleCoverage);
DECL_GLPROC(glCompressedTexImage3D);
DECL_GLPROC(glCompressedTexImage2D);
DECL_GLPROC(glCompressedTexImage1D);
DECL_GLPROC(glCompressedTexSubImage3D);
DECL_GLPROC(glCompressedTexSubImage2D);
DECL_GLPROC(glCompressedTexSubImage1D);
DECL_GLPROC(glGetCompressedTexImage);

bool _GL_VERSION_1_4 = false;
const bool& GL_VERSION_1_4 = _GL_VERSION_1_4;
DECL_GLPROC(glBlendFuncSeparate);
DECL_GLPROC(glMultiDrawArrays);
DECL_GLPROC(glMultiDrawElements);
DECL_GLPROC(glPointParameterf);
DECL_GLPROC(glPointParameterfv);
DECL_GLPROC(glPointParameteri);
DECL_GLPROC(glPointParameteriv);
DECL_GLPROC(glBlendColor);
DECL_GLPROC(glBlendEquation);

bool _GL_VERSION_1_5 = false;
const bool& GL_VERSION_1_5 = _GL_VERSION_1_5;
DECL_GLPROC(glGenQueries);
DECL_GLPROC(glDeleteQueries);
DECL_GLPROC(glIsQuery);
DECL_GLPROC(glBeginQuery);
DECL_GLPROC(glEndQuery);
DECL_GLPROC(glGetQueryiv);
DECL_GLPROC(glGetQueryObjectiv);
DECL_GLPROC(glGetQueryObjectuiv);
DECL_GLPROC(glBindBuffer);
DECL_GLPROC(glDeleteBuffers);
DECL_GLPROC(glGenBuffers);
DECL_GLPROC(glIsBuffer);
DECL_GLPROC(glBufferData);
DECL_GLPROC(glBufferSubData);
DECL_GLPROC(glGetBufferSubData);
DECL_GLPROC(glMapBuffer);
DECL_GLPROC(glUnmapBuffer);
DECL_GLPROC(glGetBufferParameteriv);
DECL_GLPROC(glGetBufferPointerv);

}

namespace GL2 {

bool _GL_VERSION_2_0 = false;
const bool& GL_VERSION_2_0 = _GL_VERSION_2_0;
DECL_GLPROC(glBlendEquationSeparate);
DECL_GLPROC(glDrawBuffers);
DECL_GLPROC(glStencilOpSeparate);
DECL_GLPROC(glStencilFuncSeparate);
DECL_GLPROC(glStencilMaskSeparate);
DECL_GLPROC(glAttachShader);
DECL_GLPROC(glBindAttribLocation);
DECL_GLPROC(glCompileShader);
DECL_GLPROC(glCreateProgram);
DECL_GLPROC(glCreateShader);
DECL_GLPROC(glDeleteProgram);
DECL_GLPROC(glDeleteShader);
DECL_GLPROC(glDetachShader);
DECL_GLPROC(glDisableVertexAttribArray);
DECL_GLPROC(glEnableVertexAttribArray);
DECL_GLPROC(glGetActiveAttrib);
DECL_GLPROC(glGetActiveUniform);
DECL_GLPROC(glGetAttachedShaders);
DECL_GLPROC(glGetAttribLocation);
DECL_GLPROC(glGetProgramiv);
DECL_GLPROC(glGetProgramInfoLog);
DECL_GLPROC(glGetShaderiv);
DECL_GLPROC(glGetShaderInfoLog);
DECL_GLPROC(glGetShaderSource);
DECL_GLPROC(glGetUniformLocation);
DECL_GLPROC(glGetUniformfv);
DECL_GLPROC(glGetUniformiv);
DECL_GLPROC(glGetVertexAttribdv);
DECL_GLPROC(glGetVertexAttribfv);
DECL_GLPROC(glGetVertexAttribiv);
DECL_GLPROC(glGetVertexAttribPointerv);
DECL_GLPROC(glIsProgram);
DECL_GLPROC(glIsShader);
DECL_GLPROC(glLinkProgram);
DECL_GLPROC(glShaderSource);
DECL_GLPROC(glUseProgram);
DECL_GLPROC(glUniform1f);
DECL_GLPROC(glUniform2f);
DECL_GLPROC(glUniform3f);
DECL_GLPROC(glUniform4f);
DECL_GLPROC(glUniform1i);
DECL_GLPROC(glUniform2i);
DECL_GLPROC(glUniform3i);
DECL_GLPROC(glUniform4i);
DECL_GLPROC(glUniform1fv);
DECL_GLPROC(glUniform2fv);
DECL_GLPROC(glUniform3fv);
DECL_GLPROC(glUniform4fv);
DECL_GLPROC(glUniform1iv);
DECL_GLPROC(glUniform2iv);
DECL_GLPROC(glUniform3iv);
DECL_GLPROC(glUniform4iv);
DECL_GLPROC(glUniformMatrix2fv);
DECL_GLPROC(glUniformMatrix3fv);
DECL_GLPROC(glUniformMatrix4fv);
DECL_GLPROC(glValidateProgram);
DECL_GLPROC(glVertexAttrib1d);
DECL_GLPROC(glVertexAttrib1dv);
DECL_GLPROC(glVertexAttrib1f);
DECL_GLPROC(glVertexAttrib1fv);
DECL_GLPROC(glVertexAttrib1s);
DECL_GLPROC(glVertexAttrib1sv);
DECL_GLPROC(glVertexAttrib2d);
DECL_GLPROC(glVertexAttrib2dv);
DECL_GLPROC(glVertexAttrib2f);
DECL_GLPROC(glVertexAttrib2fv);
DECL_GLPROC(glVertexAttrib2s);
DECL_GLPROC(glVertexAttrib2sv);
DECL_GLPROC(glVertexAttrib3d);
DECL_GLPROC(glVertexAttrib3dv);
DECL_GLPROC(glVertexAttrib3f);
DECL_GLPROC(glVertexAttrib3fv);
DECL_GLPROC(glVertexAttrib3s);
DECL_GLPROC(glVertexAttrib3sv);
DECL_GLPROC(glVertexAttrib4Nbv);
DECL_GLPROC(glVertexAttrib4Niv);
DECL_GLPROC(glVertexAttrib4Nsv);
DECL_GLPROC(glVertexAttrib4Nub);
DECL_GLPROC(glVertexAttrib4Nubv);
DECL_GLPROC(glVertexAttrib4Nuiv);
DECL_GLPROC(glVertexAttrib4Nusv);
DECL_GLPROC(glVertexAttrib4bv);
DECL_GLPROC(glVertexAttrib4d);
DECL_GLPROC(glVertexAttrib4dv);
DECL_GLPROC(glVertexAttrib4f);
DECL_GLPROC(glVertexAttrib4fv);
DECL_GLPROC(glVertexAttrib4iv);
DECL_GLPROC(glVertexAttrib4s);
DECL_GLPROC(glVertexAttrib4sv);
DECL_GLPROC(glVertexAttrib4ubv);
DECL_GLPROC(glVertexAttrib4uiv);
DECL_GLPROC(glVertexAttrib4usv);
DECL_GLPROC(glVertexAttribPointer);

bool _GL_VERSION_2_1 = false;
const bool& GL_VERSION_2_1 = _GL_VERSION_2_1;
DECL_GLPROC(glUniformMatrix2x3fv);
DECL_GLPROC(glUniformMatrix3x2fv);
DECL_GLPROC(glUniformMatrix2x4fv);
DECL_GLPROC(glUniformMatrix4x2fv);
DECL_GLPROC(glUniformMatrix3x4fv);
DECL_GLPROC(glUniformMatrix4x3fv);

}

namespace GL3 {
	
bool _GL_VERSION_3_0 = false;
const bool& GL_VERSION_3_0 = _GL_VERSION_3_0;
DECL_GLPROC(glColorMaski);
DECL_GLPROC(glGetBooleani_v);
DECL_GLPROC(glGetIntegeri_v);
DECL_GLPROC(glEnablei);
DECL_GLPROC(glDisablei);
DECL_GLPROC(glIsEnabledi);
DECL_GLPROC(glBeginTransformFeedback);
DECL_GLPROC(glEndTransformFeedback);
DECL_GLPROC(glBindBufferRange);
DECL_GLPROC(glBindBufferBase);
DECL_GLPROC(glTransformFeedbackVaryings);
DECL_GLPROC(glGetTransformFeedbackVarying);
DECL_GLPROC(glClampColor);
DECL_GLPROC(glBeginConditionalRender);
DECL_GLPROC(glEndConditionalRender);
DECL_GLPROC(glVertexAttribIPointer);
DECL_GLPROC(glGetVertexAttribIiv);
DECL_GLPROC(glGetVertexAttribIuiv);
DECL_GLPROC(glVertexAttribI1i);
DECL_GLPROC(glVertexAttribI2i);
DECL_GLPROC(glVertexAttribI3i);
DECL_GLPROC(glVertexAttribI4i);
DECL_GLPROC(glVertexAttribI1ui);
DECL_GLPROC(glVertexAttribI2ui);
DECL_GLPROC(glVertexAttribI3ui);
DECL_GLPROC(glVertexAttribI4ui);
DECL_GLPROC(glVertexAttribI1iv);
DECL_GLPROC(glVertexAttribI2iv);
DECL_GLPROC(glVertexAttribI3iv);
DECL_GLPROC(glVertexAttribI4iv);
DECL_GLPROC(glVertexAttribI1uiv);
DECL_GLPROC(glVertexAttribI2uiv);
DECL_GLPROC(glVertexAttribI3uiv);
DECL_GLPROC(glVertexAttribI4uiv);
DECL_GLPROC(glVertexAttribI4bv);
DECL_GLPROC(glVertexAttribI4sv);
DECL_GLPROC(glVertexAttribI4ubv);
DECL_GLPROC(glVertexAttribI4usv);
DECL_GLPROC(glGetUniformuiv);
DECL_GLPROC(glBindFragDataLocation);
DECL_GLPROC(glGetFragDataLocation);
DECL_GLPROC(glUniform1ui);
DECL_GLPROC(glUniform2ui);
DECL_GLPROC(glUniform3ui);
DECL_GLPROC(glUniform4ui);
DECL_GLPROC(glUniform1uiv);
DECL_GLPROC(glUniform2uiv);
DECL_GLPROC(glUniform3uiv);
DECL_GLPROC(glUniform4uiv);
DECL_GLPROC(glTexParameterIiv);
DECL_GLPROC(glTexParameterIuiv);
DECL_GLPROC(glGetTexParameterIiv);
DECL_GLPROC(glGetTexParameterIuiv);
DECL_GLPROC(glClearBufferiv);
DECL_GLPROC(glClearBufferuiv);
DECL_GLPROC(glClearBufferfv);
DECL_GLPROC(glClearBufferfi);
DECL_GLPROC(glGetStringi);
DECL_GLPROC(glIsRenderbuffer);
DECL_GLPROC(glBindRenderbuffer);
DECL_GLPROC(glDeleteRenderbuffers);
DECL_GLPROC(glGenRenderbuffers);
DECL_GLPROC(glRenderbufferStorage);
DECL_GLPROC(glGetRenderbufferParameteriv);
DECL_GLPROC(glIsFramebuffer);
DECL_GLPROC(glBindFramebuffer);
DECL_GLPROC(glDeleteFramebuffers);
DECL_GLPROC(glGenFramebuffers);
DECL_GLPROC(glCheckFramebufferStatus);
DECL_GLPROC(glFramebufferTexture1D);
DECL_GLPROC(glFramebufferTexture2D);
DECL_GLPROC(glFramebufferTexture3D);
DECL_GLPROC(glFramebufferRenderbuffer);
DECL_GLPROC(glGetFramebufferAttachmentParameteriv);
DECL_GLPROC(glGenerateMipmap);
DECL_GLPROC(glBlitFramebuffer);
DECL_GLPROC(glRenderbufferStorageMultisample);
DECL_GLPROC(glFramebufferTextureLayer);
DECL_GLPROC(glMapBufferRange);
DECL_GLPROC(glFlushMappedBufferRange);
DECL_GLPROC(glBindVertexArray);
DECL_GLPROC(glDeleteVertexArrays);
DECL_GLPROC(glGenVertexArrays);
DECL_GLPROC(glIsVertexArray);

bool _GL_VERSION_3_1 = false;
const bool& GL_VERSION_3_1 = _GL_VERSION_3_1;
DECL_GLPROC(glDrawArraysInstanced);
DECL_GLPROC(glDrawElementsInstanced);
DECL_GLPROC(glTexBuffer);
DECL_GLPROC(glPrimitiveRestartIndex);
DECL_GLPROC(glCopyBufferSubData);
DECL_GLPROC(glGetUniformIndices);
DECL_GLPROC(glGetActiveUniformsiv);
DECL_GLPROC(glGetActiveUniformName);
DECL_GLPROC(glGetUniformBlockIndex);
DECL_GLPROC(glGetActiveUniformBlockiv);
DECL_GLPROC(glGetActiveUniformBlockName);
DECL_GLPROC(glUniformBlockBinding);

bool _GL_VERSION_3_2 = false;
const bool& GL_VERSION_3_2 = _GL_VERSION_3_2;
DECL_GLPROC(glDrawElementsBaseVertex);
DECL_GLPROC(glDrawRangeElementsBaseVertex);
DECL_GLPROC(glDrawElementsInstancedBaseVertex);
DECL_GLPROC(glMultiDrawElementsBaseVertex);
DECL_GLPROC(glProvokingVertex);
DECL_GLPROC(glFenceSync);
DECL_GLPROC(glIsSync);
DECL_GLPROC(glDeleteSync);
DECL_GLPROC(glClientWaitSync);
DECL_GLPROC(glWaitSync);
DECL_GLPROC(glGetInteger64v);
DECL_GLPROC(glGetSynciv);
DECL_GLPROC(glGetInteger64i_v);
DECL_GLPROC(glGetBufferParameteri64v);
DECL_GLPROC(glFramebufferTexture);
DECL_GLPROC(glTexImage2DMultisample);
DECL_GLPROC(glTexImage3DMultisample);
DECL_GLPROC(glGetMultisamplefv);
DECL_GLPROC(glSampleMaski);

bool _GL_VERSION_3_3 = false;
const bool& GL_VERSION_3_3 = _GL_VERSION_3_3;
DECL_GLPROC(glBindFragDataLocationIndexed);
DECL_GLPROC(glGetFragDataIndex);
DECL_GLPROC(glGenSamplers);
DECL_GLPROC(glDeleteSamplers);
DECL_GLPROC(glIsSampler);
DECL_GLPROC(glBindSampler);
DECL_GLPROC(glSamplerParameteri);
DECL_GLPROC(glSamplerParameteriv);
DECL_GLPROC(glSamplerParameterf);
DECL_GLPROC(glSamplerParameterfv);
DECL_GLPROC(glSamplerParameterIiv);
DECL_GLPROC(glSamplerParameterIuiv);
DECL_GLPROC(glGetSamplerParameteriv);
DECL_GLPROC(glGetSamplerParameterIiv);
DECL_GLPROC(glGetSamplerParameterfv);
DECL_GLPROC(glGetSamplerParameterIuiv);
DECL_GLPROC(glQueryCounter);
DECL_GLPROC(glGetQueryObjecti64v);
DECL_GLPROC(glGetQueryObjectui64v);
DECL_GLPROC(glVertexAttribDivisor);
DECL_GLPROC(glVertexAttribP1ui);
DECL_GLPROC(glVertexAttribP1uiv);
DECL_GLPROC(glVertexAttribP2ui);
DECL_GLPROC(glVertexAttribP2uiv);
DECL_GLPROC(glVertexAttribP3ui);
DECL_GLPROC(glVertexAttribP3uiv);
DECL_GLPROC(glVertexAttribP4ui);
DECL_GLPROC(glVertexAttribP4uiv);

}

namespace GL4 {

bool _GL_VERSION_4_0 = false;
const bool& GL_VERSION_4_0 = _GL_VERSION_4_0;
DECL_GLPROC(glMinSampleShading);
DECL_GLPROC(glBlendEquationi);
DECL_GLPROC(glBlendEquationSeparatei);
DECL_GLPROC(glBlendFunci);
DECL_GLPROC(glBlendFuncSeparatei);
DECL_GLPROC(glDrawArraysIndirect);
DECL_GLPROC(glDrawElementsIndirect);
DECL_GLPROC(glUniform1d);
DECL_GLPROC(glUniform2d);
DECL_GLPROC(glUniform3d);
DECL_GLPROC(glUniform4d);
DECL_GLPROC(glUniform1dv);
DECL_GLPROC(glUniform2dv);
DECL_GLPROC(glUniform3dv);
DECL_GLPROC(glUniform4dv);
DECL_GLPROC(glUniformMatrix2dv);
DECL_GLPROC(glUniformMatrix3dv);
DECL_GLPROC(glUniformMatrix4dv);
DECL_GLPROC(glUniformMatrix2x3dv);
DECL_GLPROC(glUniformMatrix2x4dv);
DECL_GLPROC(glUniformMatrix3x2dv);
DECL_GLPROC(glUniformMatrix3x4dv);
DECL_GLPROC(glUniformMatrix4x2dv);
DECL_GLPROC(glUniformMatrix4x3dv);
DECL_GLPROC(glGetUniformdv);
DECL_GLPROC(glGetSubroutineUniformLocation);
DECL_GLPROC(glGetSubroutineIndex);
DECL_GLPROC(glGetActiveSubroutineUniformiv);
DECL_GLPROC(glGetActiveSubroutineUniformName);
DECL_GLPROC(glGetActiveSubroutineName);
DECL_GLPROC(glUniformSubroutinesuiv);
DECL_GLPROC(glGetUniformSubroutineuiv);
DECL_GLPROC(glGetProgramStageiv);
DECL_GLPROC(glPatchParameteri);
DECL_GLPROC(glPatchParameterfv);
DECL_GLPROC(glBindTransformFeedback);
DECL_GLPROC(glDeleteTransformFeedbacks);
DECL_GLPROC(glGenTransformFeedbacks);
DECL_GLPROC(glIsTransformFeedback);
DECL_GLPROC(glPauseTransformFeedback);
DECL_GLPROC(glResumeTransformFeedback);
DECL_GLPROC(glDrawTransformFeedback);
DECL_GLPROC(glDrawTransformFeedbackStream);
DECL_GLPROC(glBeginQueryIndexed);
DECL_GLPROC(glEndQueryIndexed);
DECL_GLPROC(glGetQueryIndexediv);

bool _GL_VERSION_4_1 = false;
const bool& GL_VERSION_4_1 = _GL_VERSION_4_1;

DECL_GLPROC(glReleaseShaderCompiler);
DECL_GLPROC(glShaderBinary);
DECL_GLPROC(glGetShaderPrecisionFormat);
DECL_GLPROC(glDepthRangef);
DECL_GLPROC(glClearDepthf);
DECL_GLPROC(glGetProgramBinary);
DECL_GLPROC(glProgramBinary);
DECL_GLPROC(glProgramParameteri);
DECL_GLPROC(glUseProgramStages);
DECL_GLPROC(glActiveShaderProgram);
DECL_GLPROC(glCreateShaderProgramv);
DECL_GLPROC(glBindProgramPipeline);
DECL_GLPROC(glDeleteProgramPipelines);
DECL_GLPROC(glGenProgramPipelines);
DECL_GLPROC(glIsProgramPipeline);
DECL_GLPROC(glGetProgramPipelineiv);
DECL_GLPROC(glProgramUniform1i);
DECL_GLPROC(glProgramUniform1iv);
DECL_GLPROC(glProgramUniform1f);
DECL_GLPROC(glProgramUniform1fv);
DECL_GLPROC(glProgramUniform1d);
DECL_GLPROC(glProgramUniform1dv);
DECL_GLPROC(glProgramUniform1ui);
DECL_GLPROC(glProgramUniform1uiv);
DECL_GLPROC(glProgramUniform2i);
DECL_GLPROC(glProgramUniform2iv);
DECL_GLPROC(glProgramUniform2f);
DECL_GLPROC(glProgramUniform2fv);
DECL_GLPROC(glProgramUniform2d);
DECL_GLPROC(glProgramUniform2dv);
DECL_GLPROC(glProgramUniform2ui);
DECL_GLPROC(glProgramUniform2uiv);
DECL_GLPROC(glProgramUniform3i);
DECL_GLPROC(glProgramUniform3iv);
DECL_GLPROC(glProgramUniform3f);
DECL_GLPROC(glProgramUniform3fv);
DECL_GLPROC(glProgramUniform3d);
DECL_GLPROC(glProgramUniform3dv);
DECL_GLPROC(glProgramUniform3ui);
DECL_GLPROC(glProgramUniform3uiv);
DECL_GLPROC(glProgramUniform4i);
DECL_GLPROC(glProgramUniform4iv);
DECL_GLPROC(glProgramUniform4f);
DECL_GLPROC(glProgramUniform4fv);
DECL_GLPROC(glProgramUniform4d);
DECL_GLPROC(glProgramUniform4dv);
DECL_GLPROC(glProgramUniform4ui);
DECL_GLPROC(glProgramUniform4uiv);
DECL_GLPROC(glProgramUniformMatrix2fv);
DECL_GLPROC(glProgramUniformMatrix3fv);
DECL_GLPROC(glProgramUniformMatrix4fv);
DECL_GLPROC(glProgramUniformMatrix2dv);
DECL_GLPROC(glProgramUniformMatrix3dv);
DECL_GLPROC(glProgramUniformMatrix4dv);
DECL_GLPROC(glProgramUniformMatrix2x3fv);
DECL_GLPROC(glProgramUniformMatrix3x2fv);
DECL_GLPROC(glProgramUniformMatrix2x4fv);
DECL_GLPROC(glProgramUniformMatrix4x2fv);
DECL_GLPROC(glProgramUniformMatrix3x4fv);
DECL_GLPROC(glProgramUniformMatrix4x3fv);
DECL_GLPROC(glProgramUniformMatrix2x3dv);
DECL_GLPROC(glProgramUniformMatrix3x2dv);
DECL_GLPROC(glProgramUniformMatrix2x4dv);
DECL_GLPROC(glProgramUniformMatrix4x2dv);
DECL_GLPROC(glProgramUniformMatrix3x4dv);
DECL_GLPROC(glProgramUniformMatrix4x3dv);
DECL_GLPROC(glValidateProgramPipeline);
DECL_GLPROC(glGetProgramPipelineInfoLog);
DECL_GLPROC(glVertexAttribL1d);
DECL_GLPROC(glVertexAttribL2d);
DECL_GLPROC(glVertexAttribL3d);
DECL_GLPROC(glVertexAttribL4d);
DECL_GLPROC(glVertexAttribL1dv);
DECL_GLPROC(glVertexAttribL2dv);
DECL_GLPROC(glVertexAttribL3dv);
DECL_GLPROC(glVertexAttribL4dv);
DECL_GLPROC(glVertexAttribLPointer);
DECL_GLPROC(glGetVertexAttribLdv);
DECL_GLPROC(glViewportArrayv);
DECL_GLPROC(glViewportIndexedf);
DECL_GLPROC(glViewportIndexedfv);
DECL_GLPROC(glScissorArrayv);
DECL_GLPROC(glScissorIndexed);
DECL_GLPROC(glScissorIndexedv);
DECL_GLPROC(glDepthRangeArrayv);
DECL_GLPROC(glDepthRangeIndexed);
DECL_GLPROC(glGetFloati_v);
DECL_GLPROC(glGetDoublei_v);

bool _GL_VERSION_4_2 = false;
const bool& GL_VERSION_4_2 = _GL_VERSION_4_2;
DECL_GLPROC(glDrawArraysInstancedBaseInstance);
DECL_GLPROC(glDrawElementsInstancedBaseInstance);
DECL_GLPROC(glDrawElementsInstancedBaseVertexBaseInstance);
DECL_GLPROC(glGetInternalformativ);
DECL_GLPROC(glGetActiveAtomicCounterBufferiv);
DECL_GLPROC(glBindImageTexture);
DECL_GLPROC(glMemoryBarrier);
DECL_GLPROC(glTexStorage1D);
DECL_GLPROC(glTexStorage2D);
DECL_GLPROC(glTexStorage3D);
DECL_GLPROC(glDrawTransformFeedbackInstanced);
DECL_GLPROC(glDrawTransformFeedbackStreamInstanced);

bool _GL_VERSION_4_3 = false;
const bool& GL_VERSION_4_3 = _GL_VERSION_4_3;
DECL_GLPROC(glClearBufferData);
DECL_GLPROC(glClearBufferSubData);
DECL_GLPROC(glDispatchCompute);
DECL_GLPROC(glDispatchComputeIndirect);
DECL_GLPROC(glCopyImageSubData);
DECL_GLPROC(glFramebufferParameteri);
DECL_GLPROC(glGetFramebufferParameteriv);
DECL_GLPROC(glGetInternalformati64v);
DECL_GLPROC(glInvalidateTexSubImage);
DECL_GLPROC(glInvalidateTexImage);
DECL_GLPROC(glInvalidateBufferSubData);
DECL_GLPROC(glInvalidateBufferData);
DECL_GLPROC(glInvalidateFramebuffer);
DECL_GLPROC(glInvalidateSubFramebuffer);
DECL_GLPROC(glMultiDrawArraysIndirect);
DECL_GLPROC(glMultiDrawElementsIndirect);
DECL_GLPROC(glGetProgramInterfaceiv);
DECL_GLPROC(glGetProgramResourceIndex);
DECL_GLPROC(glGetProgramResourceName);
DECL_GLPROC(glGetProgramResourceiv);
DECL_GLPROC(glGetProgramResourceLocation);
DECL_GLPROC(glGetProgramResourceLocationIndex);
DECL_GLPROC(glShaderStorageBlockBinding);
DECL_GLPROC(glTexBufferRange);
DECL_GLPROC(glTexStorage2DMultisample);
DECL_GLPROC(glTexStorage3DMultisample);
DECL_GLPROC(glTextureView);
DECL_GLPROC(glBindVertexBuffer);
DECL_GLPROC(glVertexAttribFormat);
DECL_GLPROC(glVertexAttribIFormat);
DECL_GLPROC(glVertexAttribLFormat);
DECL_GLPROC(glVertexAttribBinding);
DECL_GLPROC(glVertexBindingDivisor);
DECL_GLPROC(glDebugMessageControl);
DECL_GLPROC(glDebugMessageInsert);
DECL_GLPROC(glDebugMessageCallback);
DECL_GLPROC(glGetDebugMessageLog);
DECL_GLPROC(glPushDebugGroup);
DECL_GLPROC(glPopDebugGroup);
DECL_GLPROC(glObjectLabel);
DECL_GLPROC(glGetObjectLabel);
DECL_GLPROC(glObjectPtrLabel);
DECL_GLPROC(glGetObjectPtrLabel);

bool _GL_VERSION_4_4 = false;
const bool& GL_VERSION_4_4 = _GL_VERSION_4_4;
DECL_GLPROC(glBufferStorage);
DECL_GLPROC(glClearTexImage);
DECL_GLPROC(glClearTexSubImage);
DECL_GLPROC(glBindBuffersBase);
DECL_GLPROC(glBindBuffersRange);
DECL_GLPROC(glBindTextures);
DECL_GLPROC(glBindSamplers);
DECL_GLPROC(glBindImageTextures);
DECL_GLPROC(glBindVertexBuffers);

bool _GL_VERSION_4_5 = false;
const bool& GL_VERSION_4_5 = _GL_VERSION_4_5;
DECL_GLPROC(glClipControl);
DECL_GLPROC(glCreateTransformFeedbacks);
DECL_GLPROC(glTransformFeedbackBufferBase);
DECL_GLPROC(glTransformFeedbackBufferRange);
DECL_GLPROC(glGetTransformFeedbackiv);
DECL_GLPROC(glGetTransformFeedbacki_v);
DECL_GLPROC(glGetTransformFeedbacki64_v);
DECL_GLPROC(glCreateBuffers);
DECL_GLPROC(glNamedBufferStorage);
DECL_GLPROC(glNamedBufferData);
DECL_GLPROC(glNamedBufferSubData);
DECL_GLPROC(glCopyNamedBufferSubData);
DECL_GLPROC(glClearNamedBufferData);
DECL_GLPROC(glClearNamedBufferSubData);
DECL_GLPROC(glMapNamedBuffer);
DECL_GLPROC(glMapNamedBufferRange);
DECL_GLPROC(glUnmapNamedBuffer);
DECL_GLPROC(glFlushMappedNamedBufferRange);
DECL_GLPROC(glGetNamedBufferParameteriv);
DECL_GLPROC(glGetNamedBufferParameteri64v);
DECL_GLPROC(glGetNamedBufferPointerv);
DECL_GLPROC(glGetNamedBufferSubData);
DECL_GLPROC(glCreateFramebuffers);
DECL_GLPROC(glNamedFramebufferRenderbuffer);
DECL_GLPROC(glNamedFramebufferParameteri);
DECL_GLPROC(glNamedFramebufferTexture);
DECL_GLPROC(glNamedFramebufferTextureLayer);
DECL_GLPROC(glNamedFramebufferDrawBuffer);
DECL_GLPROC(glNamedFramebufferDrawBuffers);
DECL_GLPROC(glNamedFramebufferReadBuffer);
DECL_GLPROC(glInvalidateNamedFramebufferData);
DECL_GLPROC(glInvalidateNamedFramebufferSubData);
DECL_GLPROC(glClearNamedFramebufferiv);
DECL_GLPROC(glClearNamedFramebufferuiv);
DECL_GLPROC(glClearNamedFramebufferfv);
DECL_GLPROC(glClearNamedFramebufferfi);
DECL_GLPROC(glBlitNamedFramebuffer);
DECL_GLPROC(glCheckNamedFramebufferStatus);
DECL_GLPROC(glGetNamedFramebufferParameteriv);
DECL_GLPROC(glGetNamedFramebufferAttachmentParameteriv);
DECL_GLPROC(glCreateRenderbuffers);
DECL_GLPROC(glNamedRenderbufferStorage);
DECL_GLPROC(glNamedRenderbufferStorageMultisample);
DECL_GLPROC(glGetNamedRenderbufferParameteriv);
DECL_GLPROC(glCreateTextures);
DECL_GLPROC(glTextureBuffer);
DECL_GLPROC(glTextureBufferRange);
DECL_GLPROC(glTextureStorage1D);
DECL_GLPROC(glTextureStorage2D);
DECL_GLPROC(glTextureStorage3D);
DECL_GLPROC(glTextureStorage2DMultisample);
DECL_GLPROC(glTextureStorage3DMultisample);
DECL_GLPROC(glTextureSubImage1D);
DECL_GLPROC(glTextureSubImage2D);
DECL_GLPROC(glTextureSubImage3D);
DECL_GLPROC(glCompressedTextureSubImage1D);
DECL_GLPROC(glCompressedTextureSubImage2D);
DECL_GLPROC(glCompressedTextureSubImage3D);
DECL_GLPROC(glCopyTextureSubImage1D);
DECL_GLPROC(glCopyTextureSubImage2D);
DECL_GLPROC(glCopyTextureSubImage3D);
DECL_GLPROC(glTextureParameterf);
DECL_GLPROC(glTextureParameterfv);
DECL_GLPROC(glTextureParameteri);
DECL_GLPROC(glTextureParameterIiv);
DECL_GLPROC(glTextureParameterIuiv);
DECL_GLPROC(glTextureParameteriv);
DECL_GLPROC(glGenerateTextureMipmap);
DECL_GLPROC(glBindTextureUnit);
DECL_GLPROC(glGetTextureImage);
DECL_GLPROC(glGetCompressedTextureImage);
DECL_GLPROC(glGetTextureLevelParameterfv);
DECL_GLPROC(glGetTextureLevelParameteriv);
DECL_GLPROC(glGetTextureParameterfv);
DECL_GLPROC(glGetTextureParameterIiv);
DECL_GLPROC(glGetTextureParameterIuiv);
DECL_GLPROC(glGetTextureParameteriv);
DECL_GLPROC(glCreateVertexArrays);
DECL_GLPROC(glDisableVertexArrayAttrib);
DECL_GLPROC(glEnableVertexArrayAttrib);
DECL_GLPROC(glVertexArrayElementBuffer);
DECL_GLPROC(glVertexArrayVertexBuffer);
DECL_GLPROC(glVertexArrayVertexBuffers);
DECL_GLPROC(glVertexArrayAttribBinding);
DECL_GLPROC(glVertexArrayAttribFormat);
DECL_GLPROC(glVertexArrayAttribIFormat);
DECL_GLPROC(glVertexArrayAttribLFormat);
DECL_GLPROC(glVertexArrayBindingDivisor);
DECL_GLPROC(glGetVertexArrayiv);
DECL_GLPROC(glGetVertexArrayIndexediv);
DECL_GLPROC(glGetVertexArrayIndexed64iv);
DECL_GLPROC(glCreateSamplers);
DECL_GLPROC(glCreateProgramPipelines);
DECL_GLPROC(glCreateQueries);
DECL_GLPROC(glGetQueryBufferObjecti64v);
DECL_GLPROC(glGetQueryBufferObjectiv);
DECL_GLPROC(glGetQueryBufferObjectui64v);
DECL_GLPROC(glGetQueryBufferObjectuiv);
DECL_GLPROC(glMemoryBarrierByRegion);
DECL_GLPROC(glGetTextureSubImage);
DECL_GLPROC(glGetCompressedTextureSubImage);
DECL_GLPROC(glGetGraphicsResetStatus);
DECL_GLPROC(glGetnCompressedTexImage);
DECL_GLPROC(glGetnTexImage);
DECL_GLPROC(glGetnUniformdv);
DECL_GLPROC(glGetnUniformfv);
DECL_GLPROC(glGetnUniformiv);
DECL_GLPROC(glGetnUniformuiv);
DECL_GLPROC(glReadnPixels);
DECL_GLPROC(glTextureBarrier);

bool _GL_VERSION_4_6 = false;
const bool& GL_VERSION_4_6 = _GL_VERSION_4_6;
DECL_GLPROC(glSpecializeShader);
DECL_GLPROC(glMultiDrawArraysIndirectCount);
DECL_GLPROC(glMultiDrawElementsIndirectCount);
DECL_GLPROC(glPolygonOffsetClamp);

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
DECL_GLPROC(glPrimitiveBoundingBoxARB);

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
DECL_GLPROC(glGetTextureHandleARB);
DECL_GLPROC(glGetTextureSamplerHandleARB);
DECL_GLPROC(glMakeTextureHandleResidentARB);
DECL_GLPROC(glMakeTextureHandleNonResidentARB);
DECL_GLPROC(glGetImageHandleARB);
DECL_GLPROC(glMakeImageHandleResidentARB);
DECL_GLPROC(glMakeImageHandleNonResidentARB);
DECL_GLPROC(glUniformHandleui64ARB);
DECL_GLPROC(glUniformHandleui64vARB);
DECL_GLPROC(glProgramUniformHandleui64ARB);
DECL_GLPROC(glProgramUniformHandleui64vARB);
DECL_GLPROC(glIsTextureHandleResidentARB);
DECL_GLPROC(glIsImageHandleResidentARB);
DECL_GLPROC(glVertexAttribL1ui64ARB);
DECL_GLPROC(glVertexAttribL1ui64vARB);
DECL_GLPROC(glGetVertexAttribLui64vARB);

// GL_ARB_blend_func_extended
bool _GL_ARB_blend_func_extended = false;
const bool& GL_ARB_blend_func_extended = _GL_ARB_blend_func_extended;

// GL_ARB_buffer_storage
bool _GL_ARB_buffer_storage = false;
const bool& GL_ARB_buffer_storage = _GL_ARB_buffer_storage;

// GL_ARB_cl_event
bool _GL_ARB_cl_event = false;
const bool& GL_ARB_cl_event = _GL_ARB_cl_event;
DECL_GLPROC(glCreateSyncFromCLeventARB);

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
DECL_GLPROC(glDispatchComputeGroupSizeARB);

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
DECL_GLPROC(glDebugMessageControlARB);
DECL_GLPROC(glDebugMessageInsertARB);
DECL_GLPROC(glDebugMessageCallbackARB);
DECL_GLPROC(glGetDebugMessageLogARB);

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
DECL_GLPROC(glBlendEquationiARB);
DECL_GLPROC(glBlendEquationSeparateiARB);
DECL_GLPROC(glBlendFunciARB);
DECL_GLPROC(glBlendFuncSeparateiARB);

// GL_ARB_draw_elements_base_vertex
bool _GL_ARB_draw_elements_base_vertex = false;
const bool& GL_ARB_draw_elements_base_vertex = _GL_ARB_draw_elements_base_vertex;

// GL_ARB_draw_indirect
bool _GL_ARB_draw_indirect = false;
const bool& GL_ARB_draw_indirect = _GL_ARB_draw_indirect;

// GL_ARB_draw_instanced
bool _GL_ARB_draw_instanced = false;
const bool& GL_ARB_draw_instanced = _GL_ARB_draw_instanced;
DECL_GLPROC(glDrawArraysInstancedARB);
DECL_GLPROC(glDrawElementsInstancedARB);

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
DECL_GLPROC(glProgramParameteriARB);
DECL_GLPROC(glFramebufferTextureARB);
DECL_GLPROC(glFramebufferTextureLayerARB);
DECL_GLPROC(glFramebufferTextureFaceARB);

// GL_ARB_get_program_binary
bool _GL_ARB_get_program_binary = false;
const bool& GL_ARB_get_program_binary = _GL_ARB_get_program_binary;

// GL_ARB_get_texture_sub_image
bool _GL_ARB_get_texture_sub_image = false;
const bool& GL_ARB_get_texture_sub_image = _GL_ARB_get_texture_sub_image;

// GL_ARB_gl_spirv
bool _GL_ARB_gl_spirv = false;
const bool& GL_ARB_gl_spirv = _GL_ARB_gl_spirv;
DECL_GLPROC(glSpecializeShaderARB);

// GL_ARB_gpu_shader5
bool _GL_ARB_gpu_shader5 = false;
const bool& GL_ARB_gpu_shader5 = _GL_ARB_gpu_shader5;

// GL_ARB_gpu_shader_fp64
bool _GL_ARB_gpu_shader_fp64 = false;
const bool& GL_ARB_gpu_shader_fp64 = _GL_ARB_gpu_shader_fp64;

// GL_ARB_gpu_shader_int64
bool _GL_ARB_gpu_shader_int64 = false;
const bool& GL_ARB_gpu_shader_int64 = _GL_ARB_gpu_shader_int64;
DECL_GLPROC(glUniform1i64ARB);
DECL_GLPROC(glUniform2i64ARB);
DECL_GLPROC(glUniform3i64ARB);
DECL_GLPROC(glUniform4i64ARB);
DECL_GLPROC(glUniform1i64vARB);
DECL_GLPROC(glUniform2i64vARB);
DECL_GLPROC(glUniform3i64vARB);
DECL_GLPROC(glUniform4i64vARB);
DECL_GLPROC(glUniform1ui64ARB);
DECL_GLPROC(glUniform2ui64ARB);
DECL_GLPROC(glUniform3ui64ARB);
DECL_GLPROC(glUniform4ui64ARB);
DECL_GLPROC(glUniform1ui64vARB);
DECL_GLPROC(glUniform2ui64vARB);
DECL_GLPROC(glUniform3ui64vARB);
DECL_GLPROC(glUniform4ui64vARB);
DECL_GLPROC(glGetUniformi64vARB);
DECL_GLPROC(glGetUniformui64vARB);
DECL_GLPROC(glGetnUniformi64vARB);
DECL_GLPROC(glGetnUniformui64vARB);
DECL_GLPROC(glProgramUniform1i64ARB);
DECL_GLPROC(glProgramUniform2i64ARB);
DECL_GLPROC(glProgramUniform3i64ARB);
DECL_GLPROC(glProgramUniform4i64ARB);
DECL_GLPROC(glProgramUniform1i64vARB);
DECL_GLPROC(glProgramUniform2i64vARB);
DECL_GLPROC(glProgramUniform3i64vARB);
DECL_GLPROC(glProgramUniform4i64vARB);
DECL_GLPROC(glProgramUniform1ui64ARB);
DECL_GLPROC(glProgramUniform2ui64ARB);
DECL_GLPROC(glProgramUniform3ui64ARB);
DECL_GLPROC(glProgramUniform4ui64ARB);
DECL_GLPROC(glProgramUniform1ui64vARB);
DECL_GLPROC(glProgramUniform2ui64vARB);
DECL_GLPROC(glProgramUniform3ui64vARB);
DECL_GLPROC(glProgramUniform4ui64vARB);

// GL_ARB_half_float_vertex
bool _GL_ARB_half_float_vertex = false;
const bool& GL_ARB_half_float_vertex = _GL_ARB_half_float_vertex;

// GL_ARB_imaging
bool _GL_ARB_imaging = false;
const bool& GL_ARB_imaging = _GL_ARB_imaging;

// GL_ARB_indirect_parameters
bool _GL_ARB_indirect_parameters = false;
const bool& GL_ARB_indirect_parameters = _GL_ARB_indirect_parameters;
DECL_GLPROC(glMultiDrawArraysIndirectCountARB);
DECL_GLPROC(glMultiDrawElementsIndirectCountARB);

// GL_ARB_instanced_arrays
bool _GL_ARB_instanced_arrays = false;
const bool& GL_ARB_instanced_arrays = _GL_ARB_instanced_arrays;
DECL_GLPROC(glVertexAttribDivisorARB);

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
DECL_GLPROC(glMaxShaderCompilerThreadsARB);

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
DECL_GLPROC(glGetGraphicsResetStatusARB);
DECL_GLPROC(glGetnTexImageARB);
DECL_GLPROC(glReadnPixelsARB);
DECL_GLPROC(glGetnCompressedTexImageARB);
DECL_GLPROC(glGetnUniformfvARB);
DECL_GLPROC(glGetnUniformivARB);
DECL_GLPROC(glGetnUniformuivARB);
DECL_GLPROC(glGetnUniformdvARB);

// GL_ARB_robustness_isolation
bool _GL_ARB_robustness_isolation = false;
const bool& GL_ARB_robustness_isolation = _GL_ARB_robustness_isolation;

// GL_ARB_sample_locations
bool _GL_ARB_sample_locations = false;
const bool& GL_ARB_sample_locations = _GL_ARB_sample_locations;
DECL_GLPROC(glFramebufferSampleLocationsfvARB);
DECL_GLPROC(glNamedFramebufferSampleLocationsfvARB);
DECL_GLPROC(glEvaluateDepthValuesARB);

// GL_ARB_sample_shading
bool _GL_ARB_sample_shading = false;
const bool& GL_ARB_sample_shading = _GL_ARB_sample_shading;
DECL_GLPROC(glMinSampleShadingARB);

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
DECL_GLPROC(glNamedStringARB);
DECL_GLPROC(glDeleteNamedStringARB);
DECL_GLPROC(glCompileShaderIncludeARB);
DECL_GLPROC(glIsNamedStringARB);
DECL_GLPROC(glGetNamedStringARB);
DECL_GLPROC(glGetNamedStringivARB);

// GL_ARB_shading_language_packing
bool _GL_ARB_shading_language_packing = false;
const bool& GL_ARB_shading_language_packing = _GL_ARB_shading_language_packing;

// GL_ARB_sparse_buffer
bool _GL_ARB_sparse_buffer = false;
const bool& GL_ARB_sparse_buffer = _GL_ARB_sparse_buffer;
DECL_GLPROC(glBufferPageCommitmentARB);
DECL_GLPROC(glNamedBufferPageCommitmentEXT);
DECL_GLPROC(glNamedBufferPageCommitmentARB);

// GL_ARB_sparse_texture
bool _GL_ARB_sparse_texture = false;
const bool& GL_ARB_sparse_texture = _GL_ARB_sparse_texture;
DECL_GLPROC(glTexPageCommitmentARB);

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
DECL_GLPROC(glTexBufferARB);

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
DECL_GLPROC(glDepthRangeArraydvNV);
DECL_GLPROC(glDepthRangeIndexeddNV);

} // namespace GLARB

namespace GLKHR {

// GL_KHR_blend_equation_advanced
bool _GL_KHR_blend_equation_advanced = false;
const bool& GL_KHR_blend_equation_advanced = _GL_KHR_blend_equation_advanced;
DECL_GLPROC(glBlendBarrierKHR);

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
DECL_GLPROC(glMaxShaderCompilerThreadsKHR);

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
DECL_GLPROC(glRenderbufferStorageMultisampleAdvancedAMD);
DECL_GLPROC(glNamedRenderbufferStorageMultisampleAdvancedAMD);

// GL_AMD_performance_monitor
bool _GL_AMD_performance_monitor = false;
const bool& GL_AMD_performance_monitor = _GL_AMD_performance_monitor;
DECL_GLPROC(glGetPerfMonitorGroupsAMD);
DECL_GLPROC(glGetPerfMonitorCountersAMD);
DECL_GLPROC(glGetPerfMonitorGroupStringAMD);
DECL_GLPROC(glGetPerfMonitorCounterStringAMD);
DECL_GLPROC(glGetPerfMonitorCounterInfoAMD);
DECL_GLPROC(glGenPerfMonitorsAMD);
DECL_GLPROC(glDeletePerfMonitorsAMD);
DECL_GLPROC(glSelectPerfMonitorCountersAMD);
DECL_GLPROC(glBeginPerfMonitorAMD);
DECL_GLPROC(glEndPerfMonitorAMD);
DECL_GLPROC(glGetPerfMonitorCounterDataAMD);

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
DECL_GLPROC(glEGLImageTargetTexStorageEXT);
DECL_GLPROC(glEGLImageTargetTextureStorageEXT);

// GL_EXT_EGL_sync
bool _GL_EXT_EGL_sync = false;
const bool& GL_EXT_EGL_sync = _GL_EXT_EGL_sync;

// GL_EXT_debug_label
bool _GL_EXT_debug_label = false;
const bool& GL_EXT_debug_label = _GL_EXT_debug_label;
DECL_GLPROC(glLabelObjectEXT);
DECL_GLPROC(glGetObjectLabelEXT);

// GL_EXT_debug_marker
bool _GL_EXT_debug_marker = false;
const bool& GL_EXT_debug_marker = _GL_EXT_debug_marker;
DECL_GLPROC(glInsertEventMarkerEXT);
DECL_GLPROC(glPushGroupMarkerEXT);
DECL_GLPROC(glPopGroupMarkerEXT);

// GL_EXT_direct_state_access
bool _GL_EXT_direct_state_access = false;
const bool& GL_EXT_direct_state_access = _GL_EXT_direct_state_access;
DECL_GLPROC(glMatrixLoadfEXT);
DECL_GLPROC(glMatrixLoaddEXT);
DECL_GLPROC(glMatrixMultfEXT);
DECL_GLPROC(glMatrixMultdEXT);
DECL_GLPROC(glMatrixLoadIdentityEXT);
DECL_GLPROC(glMatrixRotatefEXT);
DECL_GLPROC(glMatrixRotatedEXT);
DECL_GLPROC(glMatrixScalefEXT);
DECL_GLPROC(glMatrixScaledEXT);
DECL_GLPROC(glMatrixTranslatefEXT);
DECL_GLPROC(glMatrixTranslatedEXT);
DECL_GLPROC(glMatrixFrustumEXT);
DECL_GLPROC(glMatrixOrthoEXT);
DECL_GLPROC(glMatrixPopEXT);
DECL_GLPROC(glMatrixPushEXT);
DECL_GLPROC(glClientAttribDefaultEXT);
DECL_GLPROC(glPushClientAttribDefaultEXT);
DECL_GLPROC(glTextureParameterfEXT);
DECL_GLPROC(glTextureParameterfvEXT);
DECL_GLPROC(glTextureParameteriEXT);
DECL_GLPROC(glTextureParameterivEXT);
DECL_GLPROC(glTextureImage1DEXT);
DECL_GLPROC(glTextureImage2DEXT);
DECL_GLPROC(glTextureSubImage1DEXT);
DECL_GLPROC(glTextureSubImage2DEXT);
DECL_GLPROC(glCopyTextureImage1DEXT);
DECL_GLPROC(glCopyTextureImage2DEXT);
DECL_GLPROC(glCopyTextureSubImage1DEXT);
DECL_GLPROC(glCopyTextureSubImage2DEXT);
DECL_GLPROC(glGetTextureImageEXT);
DECL_GLPROC(glGetTextureParameterfvEXT);
DECL_GLPROC(glGetTextureParameterivEXT);
DECL_GLPROC(glGetTextureLevelParameterfvEXT);
DECL_GLPROC(glGetTextureLevelParameterivEXT);
DECL_GLPROC(glTextureImage3DEXT);
DECL_GLPROC(glTextureSubImage3DEXT);
DECL_GLPROC(glCopyTextureSubImage3DEXT);
DECL_GLPROC(glBindMultiTextureEXT);
DECL_GLPROC(glMultiTexCoordPointerEXT);
DECL_GLPROC(glMultiTexEnvfEXT);
DECL_GLPROC(glMultiTexEnvfvEXT);
DECL_GLPROC(glMultiTexEnviEXT);
DECL_GLPROC(glMultiTexEnvivEXT);
DECL_GLPROC(glMultiTexGendEXT);
DECL_GLPROC(glMultiTexGendvEXT);
DECL_GLPROC(glMultiTexGenfEXT);
DECL_GLPROC(glMultiTexGenfvEXT);
DECL_GLPROC(glMultiTexGeniEXT);
DECL_GLPROC(glMultiTexGenivEXT);
DECL_GLPROC(glGetMultiTexEnvfvEXT);
DECL_GLPROC(glGetMultiTexEnvivEXT);
DECL_GLPROC(glGetMultiTexGendvEXT);
DECL_GLPROC(glGetMultiTexGenfvEXT);
DECL_GLPROC(glGetMultiTexGenivEXT);
DECL_GLPROC(glMultiTexParameteriEXT);
DECL_GLPROC(glMultiTexParameterivEXT);
DECL_GLPROC(glMultiTexParameterfEXT);
DECL_GLPROC(glMultiTexParameterfvEXT);
DECL_GLPROC(glMultiTexImage1DEXT);
DECL_GLPROC(glMultiTexImage2DEXT);
DECL_GLPROC(glMultiTexSubImage1DEXT);
DECL_GLPROC(glMultiTexSubImage2DEXT);
DECL_GLPROC(glCopyMultiTexImage1DEXT);
DECL_GLPROC(glCopyMultiTexImage2DEXT);
DECL_GLPROC(glCopyMultiTexSubImage1DEXT);
DECL_GLPROC(glCopyMultiTexSubImage2DEXT);
DECL_GLPROC(glGetMultiTexImageEXT);
DECL_GLPROC(glGetMultiTexParameterfvEXT);
DECL_GLPROC(glGetMultiTexParameterivEXT);
DECL_GLPROC(glGetMultiTexLevelParameterfvEXT);
DECL_GLPROC(glGetMultiTexLevelParameterivEXT);
DECL_GLPROC(glMultiTexImage3DEXT);
DECL_GLPROC(glMultiTexSubImage3DEXT);
DECL_GLPROC(glCopyMultiTexSubImage3DEXT);
DECL_GLPROC(glEnableClientStateIndexedEXT);
DECL_GLPROC(glDisableClientStateIndexedEXT);
DECL_GLPROC(glGetFloatIndexedvEXT);
DECL_GLPROC(glGetDoubleIndexedvEXT);
DECL_GLPROC(glGetPointerIndexedvEXT);
DECL_GLPROC(glEnableIndexedEXT);
DECL_GLPROC(glDisableIndexedEXT);
DECL_GLPROC(glIsEnabledIndexedEXT);
DECL_GLPROC(glGetIntegerIndexedvEXT);
DECL_GLPROC(glGetBooleanIndexedvEXT);
DECL_GLPROC(glCompressedTextureImage3DEXT);
DECL_GLPROC(glCompressedTextureImage2DEXT);
DECL_GLPROC(glCompressedTextureImage1DEXT);
DECL_GLPROC(glCompressedTextureSubImage3DEXT);
DECL_GLPROC(glCompressedTextureSubImage2DEXT);
DECL_GLPROC(glCompressedTextureSubImage1DEXT);
DECL_GLPROC(glGetCompressedTextureImageEXT);
DECL_GLPROC(glCompressedMultiTexImage3DEXT);
DECL_GLPROC(glCompressedMultiTexImage2DEXT);
DECL_GLPROC(glCompressedMultiTexImage1DEXT);
DECL_GLPROC(glCompressedMultiTexSubImage3DEXT);
DECL_GLPROC(glCompressedMultiTexSubImage2DEXT);
DECL_GLPROC(glCompressedMultiTexSubImage1DEXT);
DECL_GLPROC(glGetCompressedMultiTexImageEXT);
DECL_GLPROC(glMatrixLoadTransposefEXT);
DECL_GLPROC(glMatrixLoadTransposedEXT);
DECL_GLPROC(glMatrixMultTransposefEXT);
DECL_GLPROC(glMatrixMultTransposedEXT);
DECL_GLPROC(glNamedBufferDataEXT);
DECL_GLPROC(glNamedBufferSubDataEXT);
DECL_GLPROC(glMapNamedBufferEXT);
DECL_GLPROC(glUnmapNamedBufferEXT);
DECL_GLPROC(glGetNamedBufferParameterivEXT);
DECL_GLPROC(glGetNamedBufferPointervEXT);
DECL_GLPROC(glGetNamedBufferSubDataEXT);
DECL_GLPROC(glProgramUniform1fEXT);
DECL_GLPROC(glProgramUniform2fEXT);
DECL_GLPROC(glProgramUniform3fEXT);
DECL_GLPROC(glProgramUniform4fEXT);
DECL_GLPROC(glProgramUniform1iEXT);
DECL_GLPROC(glProgramUniform2iEXT);
DECL_GLPROC(glProgramUniform3iEXT);
DECL_GLPROC(glProgramUniform4iEXT);
DECL_GLPROC(glProgramUniform1fvEXT);
DECL_GLPROC(glProgramUniform2fvEXT);
DECL_GLPROC(glProgramUniform3fvEXT);
DECL_GLPROC(glProgramUniform4fvEXT);
DECL_GLPROC(glProgramUniform1ivEXT);
DECL_GLPROC(glProgramUniform2ivEXT);
DECL_GLPROC(glProgramUniform3ivEXT);
DECL_GLPROC(glProgramUniform4ivEXT);
DECL_GLPROC(glProgramUniformMatrix2fvEXT);
DECL_GLPROC(glProgramUniformMatrix3fvEXT);
DECL_GLPROC(glProgramUniformMatrix4fvEXT);
DECL_GLPROC(glProgramUniformMatrix2x3fvEXT);
DECL_GLPROC(glProgramUniformMatrix3x2fvEXT);
DECL_GLPROC(glProgramUniformMatrix2x4fvEXT);
DECL_GLPROC(glProgramUniformMatrix4x2fvEXT);
DECL_GLPROC(glProgramUniformMatrix3x4fvEXT);
DECL_GLPROC(glProgramUniformMatrix4x3fvEXT);
DECL_GLPROC(glTextureBufferEXT);
DECL_GLPROC(glMultiTexBufferEXT);
DECL_GLPROC(glTextureParameterIivEXT);
DECL_GLPROC(glTextureParameterIuivEXT);
DECL_GLPROC(glGetTextureParameterIivEXT);
DECL_GLPROC(glGetTextureParameterIuivEXT);
DECL_GLPROC(glMultiTexParameterIivEXT);
DECL_GLPROC(glMultiTexParameterIuivEXT);
DECL_GLPROC(glGetMultiTexParameterIivEXT);
DECL_GLPROC(glGetMultiTexParameterIuivEXT);
DECL_GLPROC(glProgramUniform1uiEXT);
DECL_GLPROC(glProgramUniform2uiEXT);
DECL_GLPROC(glProgramUniform3uiEXT);
DECL_GLPROC(glProgramUniform4uiEXT);
DECL_GLPROC(glProgramUniform1uivEXT);
DECL_GLPROC(glProgramUniform2uivEXT);
DECL_GLPROC(glProgramUniform3uivEXT);
DECL_GLPROC(glProgramUniform4uivEXT);
DECL_GLPROC(glNamedProgramLocalParameters4fvEXT);
DECL_GLPROC(glNamedProgramLocalParameterI4iEXT);
DECL_GLPROC(glNamedProgramLocalParameterI4ivEXT);
DECL_GLPROC(glNamedProgramLocalParametersI4ivEXT);
DECL_GLPROC(glNamedProgramLocalParameterI4uiEXT);
DECL_GLPROC(glNamedProgramLocalParameterI4uivEXT);
DECL_GLPROC(glNamedProgramLocalParametersI4uivEXT);
DECL_GLPROC(glGetNamedProgramLocalParameterIivEXT);
DECL_GLPROC(glGetNamedProgramLocalParameterIuivEXT);
DECL_GLPROC(glEnableClientStateiEXT);
DECL_GLPROC(glDisableClientStateiEXT);
DECL_GLPROC(glGetFloati_vEXT);
DECL_GLPROC(glGetDoublei_vEXT);
DECL_GLPROC(glGetPointeri_vEXT);
DECL_GLPROC(glNamedProgramStringEXT);
DECL_GLPROC(glNamedProgramLocalParameter4dEXT);
DECL_GLPROC(glNamedProgramLocalParameter4dvEXT);
DECL_GLPROC(glNamedProgramLocalParameter4fEXT);
DECL_GLPROC(glNamedProgramLocalParameter4fvEXT);
DECL_GLPROC(glGetNamedProgramLocalParameterdvEXT);
DECL_GLPROC(glGetNamedProgramLocalParameterfvEXT);
DECL_GLPROC(glGetNamedProgramivEXT);
DECL_GLPROC(glGetNamedProgramStringEXT);
DECL_GLPROC(glNamedRenderbufferStorageEXT);
DECL_GLPROC(glGetNamedRenderbufferParameterivEXT);
DECL_GLPROC(glNamedRenderbufferStorageMultisampleEXT);
DECL_GLPROC(glNamedRenderbufferStorageMultisampleCoverageEXT);
DECL_GLPROC(glCheckNamedFramebufferStatusEXT);
DECL_GLPROC(glNamedFramebufferTexture1DEXT);
DECL_GLPROC(glNamedFramebufferTexture2DEXT);
DECL_GLPROC(glNamedFramebufferTexture3DEXT);
DECL_GLPROC(glNamedFramebufferRenderbufferEXT);
DECL_GLPROC(glGetNamedFramebufferAttachmentParameterivEXT);
DECL_GLPROC(glGenerateTextureMipmapEXT);
DECL_GLPROC(glGenerateMultiTexMipmapEXT);
DECL_GLPROC(glFramebufferDrawBufferEXT);
DECL_GLPROC(glFramebufferDrawBuffersEXT);
DECL_GLPROC(glFramebufferReadBufferEXT);
DECL_GLPROC(glGetFramebufferParameterivEXT);
DECL_GLPROC(glNamedCopyBufferSubDataEXT);
DECL_GLPROC(glNamedFramebufferTextureEXT);
DECL_GLPROC(glNamedFramebufferTextureLayerEXT);
DECL_GLPROC(glNamedFramebufferTextureFaceEXT);
DECL_GLPROC(glTextureRenderbufferEXT);
DECL_GLPROC(glMultiTexRenderbufferEXT);
DECL_GLPROC(glVertexArrayVertexOffsetEXT);
DECL_GLPROC(glVertexArrayColorOffsetEXT);
DECL_GLPROC(glVertexArrayEdgeFlagOffsetEXT);
DECL_GLPROC(glVertexArrayIndexOffsetEXT);
DECL_GLPROC(glVertexArrayNormalOffsetEXT);
DECL_GLPROC(glVertexArrayTexCoordOffsetEXT);
DECL_GLPROC(glVertexArrayMultiTexCoordOffsetEXT);
DECL_GLPROC(glVertexArrayFogCoordOffsetEXT);
DECL_GLPROC(glVertexArraySecondaryColorOffsetEXT);
DECL_GLPROC(glVertexArrayVertexAttribOffsetEXT);
DECL_GLPROC(glVertexArrayVertexAttribIOffsetEXT);
DECL_GLPROC(glEnableVertexArrayEXT);
DECL_GLPROC(glDisableVertexArrayEXT);
DECL_GLPROC(glEnableVertexArrayAttribEXT);
DECL_GLPROC(glDisableVertexArrayAttribEXT);
DECL_GLPROC(glGetVertexArrayIntegervEXT);
DECL_GLPROC(glGetVertexArrayPointervEXT);
DECL_GLPROC(glGetVertexArrayIntegeri_vEXT);
DECL_GLPROC(glGetVertexArrayPointeri_vEXT);
DECL_GLPROC(glMapNamedBufferRangeEXT);
DECL_GLPROC(glFlushMappedNamedBufferRangeEXT);
DECL_GLPROC(glNamedBufferStorageEXT);
DECL_GLPROC(glClearNamedBufferDataEXT);
DECL_GLPROC(glClearNamedBufferSubDataEXT);
DECL_GLPROC(glNamedFramebufferParameteriEXT);
DECL_GLPROC(glGetNamedFramebufferParameterivEXT);
DECL_GLPROC(glProgramUniform1dEXT);
DECL_GLPROC(glProgramUniform2dEXT);
DECL_GLPROC(glProgramUniform3dEXT);
DECL_GLPROC(glProgramUniform4dEXT);
DECL_GLPROC(glProgramUniform1dvEXT);
DECL_GLPROC(glProgramUniform2dvEXT);
DECL_GLPROC(glProgramUniform3dvEXT);
DECL_GLPROC(glProgramUniform4dvEXT);
DECL_GLPROC(glProgramUniformMatrix2dvEXT);
DECL_GLPROC(glProgramUniformMatrix3dvEXT);
DECL_GLPROC(glProgramUniformMatrix4dvEXT);
DECL_GLPROC(glProgramUniformMatrix2x3dvEXT);
DECL_GLPROC(glProgramUniformMatrix2x4dvEXT);
DECL_GLPROC(glProgramUniformMatrix3x2dvEXT);
DECL_GLPROC(glProgramUniformMatrix3x4dvEXT);
DECL_GLPROC(glProgramUniformMatrix4x2dvEXT);
DECL_GLPROC(glProgramUniformMatrix4x3dvEXT);
DECL_GLPROC(glTextureBufferRangeEXT);
DECL_GLPROC(glTextureStorage1DEXT);
DECL_GLPROC(glTextureStorage2DEXT);
DECL_GLPROC(glTextureStorage3DEXT);
DECL_GLPROC(glTextureStorage2DMultisampleEXT);
DECL_GLPROC(glTextureStorage3DMultisampleEXT);
DECL_GLPROC(glVertexArrayBindVertexBufferEXT);
DECL_GLPROC(glVertexArrayVertexAttribFormatEXT);
DECL_GLPROC(glVertexArrayVertexAttribIFormatEXT);
DECL_GLPROC(glVertexArrayVertexAttribLFormatEXT);
DECL_GLPROC(glVertexArrayVertexAttribBindingEXT);
DECL_GLPROC(glVertexArrayVertexBindingDivisorEXT);
DECL_GLPROC(glVertexArrayVertexAttribLOffsetEXT);
DECL_GLPROC(glTexturePageCommitmentEXT);
DECL_GLPROC(glVertexArrayVertexAttribDivisorEXT);

// GL_EXT_draw_instanced
bool _GL_EXT_draw_instanced = false;
const bool& GL_EXT_draw_instanced = _GL_EXT_draw_instanced;
DECL_GLPROC(glDrawArraysInstancedEXT);
DECL_GLPROC(glDrawElementsInstancedEXT);

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
DECL_GLPROC(glPolygonOffsetClampEXT);

// GL_EXT_post_depth_coverage
bool _GL_EXT_post_depth_coverage = false;
const bool& GL_EXT_post_depth_coverage = _GL_EXT_post_depth_coverage;

// GL_EXT_raster_multisample
bool _GL_EXT_raster_multisample = false;
const bool& GL_EXT_raster_multisample = _GL_EXT_raster_multisample;
DECL_GLPROC(glRasterSamplesEXT);

// GL_EXT_separate_shader_objects
bool _GL_EXT_separate_shader_objects = false;
const bool& GL_EXT_separate_shader_objects = _GL_EXT_separate_shader_objects;
DECL_GLPROC(glUseShaderProgramEXT);
DECL_GLPROC(glActiveProgramEXT);
DECL_GLPROC(glCreateShaderProgramEXT);

// GL_EXT_shader_framebuffer_fetch
bool _GL_EXT_shader_framebuffer_fetch = false;
const bool& GL_EXT_shader_framebuffer_fetch = _GL_EXT_shader_framebuffer_fetch;

// GL_EXT_shader_framebuffer_fetch_non_coherent
bool _GL_EXT_shader_framebuffer_fetch_non_coherent = false;
const bool& GL_EXT_shader_framebuffer_fetch_non_coherent = _GL_EXT_shader_framebuffer_fetch_non_coherent;
DECL_GLPROC(glFramebufferFetchBarrierEXT);

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
DECL_GLPROC(glWindowRectanglesEXT);

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
DECL_GLPROC(glApplyFramebufferAttachmentCMAAINTEL);

// GL_INTEL_performance_query
bool _GL_INTEL_performance_query = false;
const bool& GL_INTEL_performance_query = _GL_INTEL_performance_query;
DECL_GLPROC(glBeginPerfQueryINTEL);
DECL_GLPROC(glCreatePerfQueryINTEL);
DECL_GLPROC(glDeletePerfQueryINTEL);
DECL_GLPROC(glEndPerfQueryINTEL);
DECL_GLPROC(glGetFirstPerfQueryIdINTEL);
DECL_GLPROC(glGetNextPerfQueryIdINTEL);
DECL_GLPROC(glGetPerfCounterInfoINTEL);
DECL_GLPROC(glGetPerfQueryDataINTEL);
DECL_GLPROC(glGetPerfQueryIdByNameINTEL);
DECL_GLPROC(glGetPerfQueryInfoINTEL);

} // namespace GLINTEL

namespace GLMESA {

// GL_MESA_framebuffer_flip_x
bool _GL_MESA_framebuffer_flip_x = false;
const bool& GL_MESA_framebuffer_flip_x = _GL_MESA_framebuffer_flip_x;

// GL_MESA_framebuffer_flip_y
bool _GL_MESA_framebuffer_flip_y = false;
const bool& GL_MESA_framebuffer_flip_y = _GL_MESA_framebuffer_flip_y;
DECL_GLPROC(glFramebufferParameteriMESA);
DECL_GLPROC(glGetFramebufferParameterivMESA);

// GL_MESA_framebuffer_swap_xy
bool _GL_MESA_framebuffer_swap_xy = false;
const bool& GL_MESA_framebuffer_swap_xy = _GL_MESA_framebuffer_swap_xy;

} // namespace GLMESA

namespace GLNV {

// GL_NV_bindless_multi_draw_indirect
bool _GL_NV_bindless_multi_draw_indirect = false;
const bool& GL_NV_bindless_multi_draw_indirect = _GL_NV_bindless_multi_draw_indirect;
DECL_GLPROC(glMultiDrawArraysIndirectBindlessNV);
DECL_GLPROC(glMultiDrawElementsIndirectBindlessNV);

// GL_NV_bindless_multi_draw_indirect_count
bool _GL_NV_bindless_multi_draw_indirect_count = false;
const bool& GL_NV_bindless_multi_draw_indirect_count = _GL_NV_bindless_multi_draw_indirect_count;
DECL_GLPROC(glMultiDrawArraysIndirectBindlessCountNV);
DECL_GLPROC(glMultiDrawElementsIndirectBindlessCountNV);

// GL_NV_bindless_texture
bool _GL_NV_bindless_texture = false;
const bool& GL_NV_bindless_texture = _GL_NV_bindless_texture;
DECL_GLPROC(glGetTextureHandleNV);
DECL_GLPROC(glGetTextureSamplerHandleNV);
DECL_GLPROC(glMakeTextureHandleResidentNV);
DECL_GLPROC(glMakeTextureHandleNonResidentNV);
DECL_GLPROC(glGetImageHandleNV);
DECL_GLPROC(glMakeImageHandleResidentNV);
DECL_GLPROC(glMakeImageHandleNonResidentNV);
DECL_GLPROC(glUniformHandleui64NV);
DECL_GLPROC(glUniformHandleui64vNV);
DECL_GLPROC(glProgramUniformHandleui64NV);
DECL_GLPROC(glProgramUniformHandleui64vNV);
DECL_GLPROC(glIsTextureHandleResidentNV);
DECL_GLPROC(glIsImageHandleResidentNV);

// GL_NV_blend_equation_advanced
bool _GL_NV_blend_equation_advanced = false;
const bool& GL_NV_blend_equation_advanced = _GL_NV_blend_equation_advanced;
DECL_GLPROC(glBlendParameteriNV);
DECL_GLPROC(glBlendBarrierNV);

// GL_NV_blend_equation_advanced_coherent
bool _GL_NV_blend_equation_advanced_coherent = false;
const bool& GL_NV_blend_equation_advanced_coherent = _GL_NV_blend_equation_advanced_coherent;

// GL_NV_blend_minmax_factor
bool _GL_NV_blend_minmax_factor = false;
const bool& GL_NV_blend_minmax_factor = _GL_NV_blend_minmax_factor;

// GL_NV_clip_space_w_scaling
bool _GL_NV_clip_space_w_scaling = false;
const bool& GL_NV_clip_space_w_scaling = _GL_NV_clip_space_w_scaling;
DECL_GLPROC(glViewportPositionWScaleNV);

// GL_NV_command_list
bool _GL_NV_command_list = false;
const bool& GL_NV_command_list = _GL_NV_command_list;
DECL_GLPROC(glCreateStatesNV);
DECL_GLPROC(glDeleteStatesNV);
DECL_GLPROC(glIsStateNV);
DECL_GLPROC(glStateCaptureNV);
DECL_GLPROC(glGetCommandHeaderNV);
DECL_GLPROC(glGetStageIndexNV);
DECL_GLPROC(glDrawCommandsNV);
DECL_GLPROC(glDrawCommandsAddressNV);
DECL_GLPROC(glDrawCommandsStatesNV);
DECL_GLPROC(glDrawCommandsStatesAddressNV);
DECL_GLPROC(glCreateCommandListsNV);
DECL_GLPROC(glDeleteCommandListsNV);
DECL_GLPROC(glIsCommandListNV);
DECL_GLPROC(glListDrawCommandsStatesClientNV);
DECL_GLPROC(glCommandListSegmentsNV);
DECL_GLPROC(glCompileCommandListNV);
DECL_GLPROC(glCallCommandListNV);

// GL_NV_compute_shader_derivatives
bool _GL_NV_compute_shader_derivatives = false;
const bool& GL_NV_compute_shader_derivatives = _GL_NV_compute_shader_derivatives;

// GL_NV_conditional_render
bool _GL_NV_conditional_render = false;
const bool& GL_NV_conditional_render = _GL_NV_conditional_render;
DECL_GLPROC(glBeginConditionalRenderNV);
DECL_GLPROC(glEndConditionalRenderNV);

// GL_NV_conservative_raster
bool _GL_NV_conservative_raster = false;
const bool& GL_NV_conservative_raster = _GL_NV_conservative_raster;
DECL_GLPROC(glSubpixelPrecisionBiasNV);

// GL_NV_conservative_raster_dilate
bool _GL_NV_conservative_raster_dilate = false;
const bool& GL_NV_conservative_raster_dilate = _GL_NV_conservative_raster_dilate;
DECL_GLPROC(glConservativeRasterParameterfNV);

// GL_NV_conservative_raster_pre_snap
bool _GL_NV_conservative_raster_pre_snap = false;
const bool& GL_NV_conservative_raster_pre_snap = _GL_NV_conservative_raster_pre_snap;

// GL_NV_conservative_raster_pre_snap_triangles
bool _GL_NV_conservative_raster_pre_snap_triangles = false;
const bool& GL_NV_conservative_raster_pre_snap_triangles = _GL_NV_conservative_raster_pre_snap_triangles;
DECL_GLPROC(glConservativeRasterParameteriNV);

// GL_NV_conservative_raster_underestimation
bool _GL_NV_conservative_raster_underestimation = false;
const bool& GL_NV_conservative_raster_underestimation = _GL_NV_conservative_raster_underestimation;

// GL_NV_depth_buffer_float
bool _GL_NV_depth_buffer_float = false;
const bool& GL_NV_depth_buffer_float = _GL_NV_depth_buffer_float;
DECL_GLPROC(glDepthRangedNV);
DECL_GLPROC(glClearDepthdNV);
DECL_GLPROC(glDepthBoundsdNV);

// GL_NV_draw_vulkan_image
bool _GL_NV_draw_vulkan_image = false;
const bool& GL_NV_draw_vulkan_image = _GL_NV_draw_vulkan_image;
DECL_GLPROC(glDrawVkImageNV);
DECL_GLPROC(glGetVkProcAddrNV);
DECL_GLPROC(glWaitVkSemaphoreNV);
DECL_GLPROC(glSignalVkSemaphoreNV);
DECL_GLPROC(glSignalVkFenceNV);

// GL_NV_fill_rectangle
bool _GL_NV_fill_rectangle = false;
const bool& GL_NV_fill_rectangle = _GL_NV_fill_rectangle;

// GL_NV_fragment_coverage_to_color
bool _GL_NV_fragment_coverage_to_color = false;
const bool& GL_NV_fragment_coverage_to_color = _GL_NV_fragment_coverage_to_color;
DECL_GLPROC(glFragmentCoverageColorNV);

// GL_NV_fragment_shader_barycentric
bool _GL_NV_fragment_shader_barycentric = false;
const bool& GL_NV_fragment_shader_barycentric = _GL_NV_fragment_shader_barycentric;

// GL_NV_fragment_shader_interlock
bool _GL_NV_fragment_shader_interlock = false;
const bool& GL_NV_fragment_shader_interlock = _GL_NV_fragment_shader_interlock;

// GL_NV_framebuffer_mixed_samples
bool _GL_NV_framebuffer_mixed_samples = false;
const bool& GL_NV_framebuffer_mixed_samples = _GL_NV_framebuffer_mixed_samples;
DECL_GLPROC(glCoverageModulationTableNV);
DECL_GLPROC(glGetCoverageModulationTableNV);
DECL_GLPROC(glCoverageModulationNV);

// GL_NV_framebuffer_multisample_coverage
bool _GL_NV_framebuffer_multisample_coverage = false;
const bool& GL_NV_framebuffer_multisample_coverage = _GL_NV_framebuffer_multisample_coverage;
DECL_GLPROC(glRenderbufferStorageMultisampleCoverageNV);

// GL_NV_geometry_shader_passthrough
bool _GL_NV_geometry_shader_passthrough = false;
const bool& GL_NV_geometry_shader_passthrough = _GL_NV_geometry_shader_passthrough;

// GL_NV_gpu_shader5
bool _GL_NV_gpu_shader5 = false;
const bool& GL_NV_gpu_shader5 = _GL_NV_gpu_shader5;
DECL_GLPROC(glUniform1i64NV);
DECL_GLPROC(glUniform2i64NV);
DECL_GLPROC(glUniform3i64NV);
DECL_GLPROC(glUniform4i64NV);
DECL_GLPROC(glUniform1i64vNV);
DECL_GLPROC(glUniform2i64vNV);
DECL_GLPROC(glUniform3i64vNV);
DECL_GLPROC(glUniform4i64vNV);
DECL_GLPROC(glUniform1ui64NV);
DECL_GLPROC(glUniform2ui64NV);
DECL_GLPROC(glUniform3ui64NV);
DECL_GLPROC(glUniform4ui64NV);
DECL_GLPROC(glUniform1ui64vNV);
DECL_GLPROC(glUniform2ui64vNV);
DECL_GLPROC(glUniform3ui64vNV);
DECL_GLPROC(glUniform4ui64vNV);
DECL_GLPROC(glGetUniformi64vNV);
DECL_GLPROC(glProgramUniform1i64NV);
DECL_GLPROC(glProgramUniform2i64NV);
DECL_GLPROC(glProgramUniform3i64NV);
DECL_GLPROC(glProgramUniform4i64NV);
DECL_GLPROC(glProgramUniform1i64vNV);
DECL_GLPROC(glProgramUniform2i64vNV);
DECL_GLPROC(glProgramUniform3i64vNV);
DECL_GLPROC(glProgramUniform4i64vNV);
DECL_GLPROC(glProgramUniform1ui64NV);
DECL_GLPROC(glProgramUniform2ui64NV);
DECL_GLPROC(glProgramUniform3ui64NV);
DECL_GLPROC(glProgramUniform4ui64NV);
DECL_GLPROC(glProgramUniform1ui64vNV);
DECL_GLPROC(glProgramUniform2ui64vNV);
DECL_GLPROC(glProgramUniform3ui64vNV);
DECL_GLPROC(glProgramUniform4ui64vNV);

// GL_NV_internalformat_sample_query
bool _GL_NV_internalformat_sample_query = false;
const bool& GL_NV_internalformat_sample_query = _GL_NV_internalformat_sample_query;
DECL_GLPROC(glGetInternalformatSampleivNV);

// GL_NV_memory_attachment
bool _GL_NV_memory_attachment = false;
const bool& GL_NV_memory_attachment = _GL_NV_memory_attachment;
DECL_GLPROC(glGetMemoryObjectDetachedResourcesuivNV);
DECL_GLPROC(glResetMemoryObjectParameterNV);
DECL_GLPROC(glTexAttachMemoryNV);
DECL_GLPROC(glBufferAttachMemoryNV);
DECL_GLPROC(glTextureAttachMemoryNV);
DECL_GLPROC(glNamedBufferAttachMemoryNV);

// GL_NV_memory_object_sparse
bool _GL_NV_memory_object_sparse = false;
const bool& GL_NV_memory_object_sparse = _GL_NV_memory_object_sparse;
DECL_GLPROC(glBufferPageCommitmentMemNV);
DECL_GLPROC(glTexPageCommitmentMemNV);
DECL_GLPROC(glNamedBufferPageCommitmentMemNV);
DECL_GLPROC(glTexturePageCommitmentMemNV);

// GL_NV_mesh_shader
bool _GL_NV_mesh_shader = false;
const bool& GL_NV_mesh_shader = _GL_NV_mesh_shader;
DECL_GLPROC(glDrawMeshTasksNV);
DECL_GLPROC(glDrawMeshTasksIndirectNV);
DECL_GLPROC(glMultiDrawMeshTasksIndirectNV);
DECL_GLPROC(glMultiDrawMeshTasksIndirectCountNV);

// GL_NV_path_rendering
bool _GL_NV_path_rendering = false;
const bool& GL_NV_path_rendering = _GL_NV_path_rendering;
DECL_GLPROC(glGenPathsNV);
DECL_GLPROC(glDeletePathsNV);
DECL_GLPROC(glIsPathNV);
DECL_GLPROC(glPathCommandsNV);
DECL_GLPROC(glPathCoordsNV);
DECL_GLPROC(glPathSubCommandsNV);
DECL_GLPROC(glPathSubCoordsNV);
DECL_GLPROC(glPathStringNV);
DECL_GLPROC(glPathGlyphsNV);
DECL_GLPROC(glPathGlyphRangeNV);
DECL_GLPROC(glWeightPathsNV);
DECL_GLPROC(glCopyPathNV);
DECL_GLPROC(glInterpolatePathsNV);
DECL_GLPROC(glTransformPathNV);
DECL_GLPROC(glPathParameterivNV);
DECL_GLPROC(glPathParameteriNV);
DECL_GLPROC(glPathParameterfvNV);
DECL_GLPROC(glPathParameterfNV);
DECL_GLPROC(glPathDashArrayNV);
DECL_GLPROC(glPathStencilFuncNV);
DECL_GLPROC(glPathStencilDepthOffsetNV);
DECL_GLPROC(glStencilFillPathNV);
DECL_GLPROC(glStencilStrokePathNV);
DECL_GLPROC(glStencilFillPathInstancedNV);
DECL_GLPROC(glStencilStrokePathInstancedNV);
DECL_GLPROC(glPathCoverDepthFuncNV);
DECL_GLPROC(glCoverFillPathNV);
DECL_GLPROC(glCoverStrokePathNV);
DECL_GLPROC(glCoverFillPathInstancedNV);
DECL_GLPROC(glCoverStrokePathInstancedNV);
DECL_GLPROC(glGetPathParameterivNV);
DECL_GLPROC(glGetPathParameterfvNV);
DECL_GLPROC(glGetPathCommandsNV);
DECL_GLPROC(glGetPathCoordsNV);
DECL_GLPROC(glGetPathDashArrayNV);
DECL_GLPROC(glGetPathMetricsNV);
DECL_GLPROC(glGetPathMetricRangeNV);
DECL_GLPROC(glGetPathSpacingNV);
DECL_GLPROC(glIsPointInFillPathNV);
DECL_GLPROC(glIsPointInStrokePathNV);
DECL_GLPROC(glGetPathLengthNV);
DECL_GLPROC(glPointAlongPathNV);
DECL_GLPROC(glMatrixLoad3x2fNV);
DECL_GLPROC(glMatrixLoad3x3fNV);
DECL_GLPROC(glMatrixLoadTranspose3x3fNV);
DECL_GLPROC(glMatrixMult3x2fNV);
DECL_GLPROC(glMatrixMult3x3fNV);
DECL_GLPROC(glMatrixMultTranspose3x3fNV);
DECL_GLPROC(glStencilThenCoverFillPathNV);
DECL_GLPROC(glStencilThenCoverStrokePathNV);
DECL_GLPROC(glStencilThenCoverFillPathInstancedNV);
DECL_GLPROC(glStencilThenCoverStrokePathInstancedNV);
DECL_GLPROC(glPathGlyphIndexRangeNV);
DECL_GLPROC(glPathGlyphIndexArrayNV);
DECL_GLPROC(glPathMemoryGlyphIndexArrayNV);
DECL_GLPROC(glProgramPathFragmentInputGenNV);
DECL_GLPROC(glGetProgramResourcefvNV);

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
DECL_GLPROC(glFramebufferSampleLocationsfvNV);
DECL_GLPROC(glNamedFramebufferSampleLocationsfvNV);
DECL_GLPROC(glResolveDepthValuesNV);

// GL_NV_sample_mask_override_coverage
bool _GL_NV_sample_mask_override_coverage = false;
const bool& GL_NV_sample_mask_override_coverage = _GL_NV_sample_mask_override_coverage;

// GL_NV_scissor_exclusive
bool _GL_NV_scissor_exclusive = false;
const bool& GL_NV_scissor_exclusive = _GL_NV_scissor_exclusive;
DECL_GLPROC(glScissorExclusiveNV);
DECL_GLPROC(glScissorExclusiveArrayvNV);

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
DECL_GLPROC(glMakeBufferResidentNV);
DECL_GLPROC(glMakeBufferNonResidentNV);
DECL_GLPROC(glIsBufferResidentNV);
DECL_GLPROC(glMakeNamedBufferResidentNV);
DECL_GLPROC(glMakeNamedBufferNonResidentNV);
DECL_GLPROC(glIsNamedBufferResidentNV);
DECL_GLPROC(glGetBufferParameterui64vNV);
DECL_GLPROC(glGetNamedBufferParameterui64vNV);
DECL_GLPROC(glGetIntegerui64vNV);
DECL_GLPROC(glUniformui64NV);
DECL_GLPROC(glUniformui64vNV);
DECL_GLPROC(glGetUniformui64vNV);
DECL_GLPROC(glProgramUniformui64NV);
DECL_GLPROC(glProgramUniformui64vNV);

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
DECL_GLPROC(glBindShadingRateImageNV);
DECL_GLPROC(glGetShadingRateImagePaletteNV);
DECL_GLPROC(glGetShadingRateSampleLocationivNV);
DECL_GLPROC(glShadingRateImageBarrierNV);
DECL_GLPROC(glShadingRateImagePaletteNV);
DECL_GLPROC(glShadingRateSampleOrderNV);
DECL_GLPROC(glShadingRateSampleOrderCustomNV);

// GL_NV_stereo_view_rendering
bool _GL_NV_stereo_view_rendering = false;
const bool& GL_NV_stereo_view_rendering = _GL_NV_stereo_view_rendering;

// GL_NV_texture_barrier
bool _GL_NV_texture_barrier = false;
const bool& GL_NV_texture_barrier = _GL_NV_texture_barrier;
DECL_GLPROC(glTextureBarrierNV);

// GL_NV_texture_rectangle_compressed
bool _GL_NV_texture_rectangle_compressed = false;
const bool& GL_NV_texture_rectangle_compressed = _GL_NV_texture_rectangle_compressed;

// GL_NV_uniform_buffer_unified_memory
bool _GL_NV_uniform_buffer_unified_memory = false;
const bool& GL_NV_uniform_buffer_unified_memory = _GL_NV_uniform_buffer_unified_memory;

// GL_NV_vertex_attrib_integer_64bit
bool _GL_NV_vertex_attrib_integer_64bit = false;
const bool& GL_NV_vertex_attrib_integer_64bit = _GL_NV_vertex_attrib_integer_64bit;
DECL_GLPROC(glVertexAttribL1i64NV);
DECL_GLPROC(glVertexAttribL2i64NV);
DECL_GLPROC(glVertexAttribL3i64NV);
DECL_GLPROC(glVertexAttribL4i64NV);
DECL_GLPROC(glVertexAttribL1i64vNV);
DECL_GLPROC(glVertexAttribL2i64vNV);
DECL_GLPROC(glVertexAttribL3i64vNV);
DECL_GLPROC(glVertexAttribL4i64vNV);
DECL_GLPROC(glVertexAttribL1ui64NV);
DECL_GLPROC(glVertexAttribL2ui64NV);
DECL_GLPROC(glVertexAttribL3ui64NV);
DECL_GLPROC(glVertexAttribL4ui64NV);
DECL_GLPROC(glVertexAttribL1ui64vNV);
DECL_GLPROC(glVertexAttribL2ui64vNV);
DECL_GLPROC(glVertexAttribL3ui64vNV);
DECL_GLPROC(glVertexAttribL4ui64vNV);
DECL_GLPROC(glGetVertexAttribLi64vNV);
DECL_GLPROC(glGetVertexAttribLui64vNV);
DECL_GLPROC(glVertexAttribLFormatNV);

// GL_NV_vertex_buffer_unified_memory
bool _GL_NV_vertex_buffer_unified_memory = false;
const bool& GL_NV_vertex_buffer_unified_memory = _GL_NV_vertex_buffer_unified_memory;
DECL_GLPROC(glBufferAddressRangeNV);
DECL_GLPROC(glVertexFormatNV);
DECL_GLPROC(glNormalFormatNV);
DECL_GLPROC(glColorFormatNV);
DECL_GLPROC(glIndexFormatNV);
DECL_GLPROC(glTexCoordFormatNV);
DECL_GLPROC(glEdgeFlagFormatNV);
DECL_GLPROC(glSecondaryColorFormatNV);
DECL_GLPROC(glFogCoordFormatNV);
DECL_GLPROC(glVertexAttribFormatNV);
DECL_GLPROC(glVertexAttribIFormatNV);
DECL_GLPROC(glGetIntegerui64i_vNV);

// GL_NV_viewport_array2
bool _GL_NV_viewport_array2 = false;
const bool& GL_NV_viewport_array2 = _GL_NV_viewport_array2;

// GL_NV_viewport_swizzle
bool _GL_NV_viewport_swizzle = false;
const bool& GL_NV_viewport_swizzle = _GL_NV_viewport_swizzle;
DECL_GLPROC(glViewportSwizzleNV);

} // namespace GLNV

namespace GLOVR {

// GL_OVR_multiview
bool _GL_OVR_multiview = false;
const bool& GL_OVR_multiview = _GL_OVR_multiview;
DECL_GLPROC(glFramebufferTextureMultiviewOVR);
bool _GL_OVR_multiview2 = false;
const bool& GL_OVR_multiview2 = _GL_OVR_multiview2;

} // namespace GLOVR



bool checkExtensions();

bool load()
{
	HMODULE GLMODULE = NULL;
	static bool initialized = false;
	if(initialized) return true;
	if(Dummy::InitError::IERR_NONE != GLOBAL_DUMMY.init() || !GLOBAL_DUMMY.makeCurrent() || !(GLMODULE = LoadLibraryW(L"opengl32.dll")))
		return false;
	{
		using namespace GL1;
		// GL_VERSION_1_0
		LOAD_GLPROC(glCullFace);
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
		// GL_VERSION_1_1
		LOAD_GLPROC(glDrawArrays);
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
		// GL_VERSION_1_2
		LOAD_GLPROC(glDrawRangeElements);
		LOAD_GLPROC(glTexImage3D);
		LOAD_GLPROC(glTexSubImage3D);
		LOAD_GLPROC(glCopyTexSubImage3D);
		_GL_VERSION_1_2 = glDrawRangeElements && glTexImage3D && glTexSubImage3D && glCopyTexSubImage3D;

		// GL_VERSION_1_3
		LOAD_GLPROC(glActiveTexture);
		LOAD_GLPROC(glSampleCoverage);
		LOAD_GLPROC(glCompressedTexImage3D);
		LOAD_GLPROC(glCompressedTexImage2D);
		LOAD_GLPROC(glCompressedTexImage1D);
		LOAD_GLPROC(glCompressedTexSubImage3D);
		LOAD_GLPROC(glCompressedTexSubImage2D);
		LOAD_GLPROC(glCompressedTexSubImage1D);
		LOAD_GLPROC(glGetCompressedTexImage);
		_GL_VERSION_1_3 = glActiveTexture && glSampleCoverage && glCompressedTexImage3D && glCompressedTexImage2D && glCompressedTexImage1D && glCompressedTexSubImage3D && glCompressedTexSubImage2D && glCompressedTexSubImage1D && glGetCompressedTexImage;

		// GL_VERSION_1_4
		LOAD_GLPROC(glBlendFuncSeparate);
		LOAD_GLPROC(glMultiDrawArrays);
		LOAD_GLPROC(glMultiDrawElements);
		LOAD_GLPROC(glPointParameterf);
		LOAD_GLPROC(glPointParameterfv);
		LOAD_GLPROC(glPointParameteri);
		LOAD_GLPROC(glPointParameteriv);
		LOAD_GLPROC(glBlendColor);
		LOAD_GLPROC(glBlendEquation);
		_GL_VERSION_1_4 = glBlendFuncSeparate && glMultiDrawArrays && glMultiDrawElements && glPointParameterf && glPointParameterfv && glPointParameteri && glPointParameteriv && glBlendColor && glBlendEquation;

		// GL_VERSION_1_5
		LOAD_GLPROC(glGenQueries);
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
	{
		using namespace axl::glfl::core::GL2;
		// GL_VERSION_2_0
		LOAD_GLPROC(glBlendEquationSeparate);
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
		
		// GL_VERSION_2_1
		LOAD_GLPROC(glUniformMatrix2x3fv);
		LOAD_GLPROC(glUniformMatrix3x2fv);
		LOAD_GLPROC(glUniformMatrix2x4fv);
		LOAD_GLPROC(glUniformMatrix4x2fv);
		LOAD_GLPROC(glUniformMatrix3x4fv);
		LOAD_GLPROC(glUniformMatrix4x3fv);
		_GL_VERSION_2_1 = glUniformMatrix2x3fv && glUniformMatrix3x2fv && glUniformMatrix2x4fv && glUniformMatrix4x2fv && glUniformMatrix3x4fv && glUniformMatrix4x3fv;
	}
	{
		using namespace axl::glfl::core::GL3;
		// GL_VERSION_3_0
		LOAD_GLPROC(glColorMaski);
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

		// GL_VERSION_3_1
		LOAD_GLPROC(glDrawArraysInstanced);
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

		// GL_VERSION_3_2
		LOAD_GLPROC(glDrawElementsBaseVertex);
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

		// GL_VERSION_3_3
		LOAD_GLPROC(glBindFragDataLocationIndexed);
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
	{
		using namespace axl::glfl::core::GL4;
		// GL_VERSION_4_0
		LOAD_GLPROC(glMinSampleShading);
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

		// GL_VERSION_4_1
		LOAD_GLPROC(glReleaseShaderCompiler);
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

		// GL_VERSION_4_2
		LOAD_GLPROC(glDrawArraysInstancedBaseInstance);
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

		// GL_VERSION_4_3
		LOAD_GLPROC(glClearBufferData);
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

		// GL_VERSION_4_4
		LOAD_GLPROC(glBufferStorage);
		LOAD_GLPROC(glClearTexImage);
		LOAD_GLPROC(glClearTexSubImage);
		LOAD_GLPROC(glBindBuffersBase);
		LOAD_GLPROC(glBindBuffersRange);
		LOAD_GLPROC(glBindTextures);
		LOAD_GLPROC(glBindSamplers);
		LOAD_GLPROC(glBindImageTextures);
		LOAD_GLPROC(glBindVertexBuffers);
		_GL_VERSION_4_4 = glBufferStorage && glClearTexImage && glClearTexSubImage && glBindBuffersBase && glBindBuffersRange && glBindTextures && glBindSamplers && glBindImageTextures && glBindVertexBuffers;

		// GL_VERSION_4_5
		LOAD_GLPROC(glClipControl);
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

		// GL_VERSION_4_6
		LOAD_GLPROC(glSpecializeShader);
		LOAD_GLPROC(glMultiDrawArraysIndirectCount);
		LOAD_GLPROC(glMultiDrawElementsIndirectCount);
		LOAD_GLPROC(glPolygonOffsetClamp);
		_GL_VERSION_4_6 = glSpecializeShader && glMultiDrawArraysIndirectCount && glMultiDrawElementsIndirectCount && glPolygonOffsetClamp;
	}
	{  // namespace GLARB
		using namespace axl::glfl::core::GLARB; 
		// GL_ARB_ES2_compatibility
		_GL_ARB_ES2_compatibility = false;
		// GL_ARB_ES3_1_compatibility
		_GL_ARB_ES3_1_compatibility = false;
		// GL_ARB_ES3_2_compatibility
		LOAD_GLPROC(glPrimitiveBoundingBoxARB);
		_GL_ARB_ES3_2_compatibility = 0 != glPrimitiveBoundingBoxARB;

		// GL_ARB_ES3_compatibility
		_GL_ARB_ES3_compatibility = false;
		// GL_ARB_arrays_of_arrays
		_GL_ARB_arrays_of_arrays = false;
		// GL_ARB_base_instance
		_GL_ARB_base_instance = false;
		// GL_ARB_bindless_texture
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
		_GL_ARB_bindless_texture = glGetTextureHandleARB && glGetTextureSamplerHandleARB && glMakeTextureHandleResidentARB && glMakeTextureHandleNonResidentARB && glGetImageHandleARB && glMakeImageHandleResidentARB && glMakeImageHandleNonResidentARB && glUniformHandleui64ARB && glUniformHandleui64vARB && glProgramUniformHandleui64ARB && glProgramUniformHandleui64vARB && glIsTextureHandleResidentARB && glIsImageHandleResidentARB && glVertexAttribL1ui64ARB && glVertexAttribL1ui64vARB && glGetVertexAttribLui64vARB;

		// GL_ARB_blend_func_extended
		_GL_ARB_blend_func_extended = false;
		// GL_ARB_buffer_storage
		_GL_ARB_buffer_storage = false;
		// GL_ARB_cl_event
		LOAD_GLPROC(glCreateSyncFromCLeventARB);
		_GL_ARB_cl_event = 0 != glCreateSyncFromCLeventARB;

		// GL_ARB_cl_event

		// GL_ARB_clear_buffer_object
		_GL_ARB_clear_buffer_object = false;
		// GL_ARB_clear_texture
		_GL_ARB_clear_texture = false;
		// GL_ARB_clip_control
		_GL_ARB_clip_control = false;
		// GL_ARB_compressed_texture_pixel_storage
		_GL_ARB_compressed_texture_pixel_storage = false;
		// GL_ARB_compute_shader
		_GL_ARB_compute_shader = false;
		// GL_ARB_compute_variable_group_size
		LOAD_GLPROC(glDispatchComputeGroupSizeARB);
		_GL_ARB_compute_variable_group_size = 0 != glDispatchComputeGroupSizeARB;

		// GL_ARB_conditional_render_inverted
		_GL_ARB_conditional_render_inverted = false;
		// GL_ARB_conservative_depth
		_GL_ARB_conservative_depth = false;
		// GL_ARB_copy_buffer
		_GL_ARB_copy_buffer = false;
		// GL_ARB_copy_image
		_GL_ARB_copy_image = false;
		// GL_ARB_cull_distance
		_GL_ARB_cull_distance = false;
		// GL_ARB_debug_output
		LOAD_GLPROC(glDebugMessageControlARB);
		LOAD_GLPROC(glDebugMessageInsertARB);
		LOAD_GLPROC(glDebugMessageCallbackARB);
		LOAD_GLPROC(glGetDebugMessageLogARB);
		_GL_ARB_debug_output = glDebugMessageControlARB && glDebugMessageInsertARB && glDebugMessageCallbackARB && glGetDebugMessageLogARB;

		// GL_ARB_depth_buffer_float
		_GL_ARB_depth_buffer_float = false;
		// GL_ARB_depth_clamp
		_GL_ARB_depth_clamp = false;
		// GL_ARB_derivative_control
		_GL_ARB_derivative_control = false;
		// GL_ARB_direct_state_access
		_GL_ARB_direct_state_access = false;
		// GL_ARB_draw_buffers_blend
		LOAD_GLPROC(glBlendEquationiARB);
		LOAD_GLPROC(glBlendEquationSeparateiARB);
		LOAD_GLPROC(glBlendFunciARB);
		LOAD_GLPROC(glBlendFuncSeparateiARB);
		_GL_ARB_draw_buffers_blend = glBlendEquationiARB && glBlendEquationSeparateiARB && glBlendFunciARB && glBlendFuncSeparateiARB;

		// GL_ARB_draw_elements_base_vertex
		_GL_ARB_draw_elements_base_vertex = false;
		// GL_ARB_draw_indirect
		_GL_ARB_draw_indirect = false;
		// GL_ARB_draw_instanced
		LOAD_GLPROC(glDrawArraysInstancedARB);
		LOAD_GLPROC(glDrawElementsInstancedARB);
		_GL_ARB_draw_instanced = glDrawArraysInstancedARB && glDrawElementsInstancedARB;

		// GL_ARB_enhanced_layouts
		_GL_ARB_enhanced_layouts = false;
		// GL_ARB_explicit_attrib_location
		_GL_ARB_explicit_attrib_location = false;
		// GL_ARB_explicit_uniform_location
		_GL_ARB_explicit_uniform_location = false;
		// GL_ARB_fragment_coord_conventions
		_GL_ARB_fragment_coord_conventions = false;
		// GL_ARB_fragment_layer_viewport
		_GL_ARB_fragment_layer_viewport = false;
		// GL_ARB_fragment_shader_interlock
		_GL_ARB_fragment_shader_interlock = false;
		// GL_ARB_framebuffer_no_attachments
		_GL_ARB_framebuffer_no_attachments = false;
		// GL_ARB_framebuffer_object
		_GL_ARB_framebuffer_object = false;
		// GL_ARB_framebuffer_sRGB
		_GL_ARB_framebuffer_sRGB = false;
		// GL_ARB_geometry_shader4
		LOAD_GLPROC(glProgramParameteriARB);
		LOAD_GLPROC(glFramebufferTextureARB);
		LOAD_GLPROC(glFramebufferTextureLayerARB);
		LOAD_GLPROC(glFramebufferTextureFaceARB);
		_GL_ARB_geometry_shader4 = glProgramParameteriARB && glFramebufferTextureARB && glFramebufferTextureLayerARB && glFramebufferTextureFaceARB;

		// GL_ARB_get_program_binary
		_GL_ARB_get_program_binary = false;
		// GL_ARB_get_texture_sub_image
		_GL_ARB_get_texture_sub_image = false;
		// GL_ARB_gl_spirv
		LOAD_GLPROC(glSpecializeShaderARB);
		_GL_ARB_gl_spirv = 0 != glSpecializeShaderARB;

		// GL_ARB_gpu_shader5
		_GL_ARB_gpu_shader5 = false;
		// GL_ARB_gpu_shader_fp64
		_GL_ARB_gpu_shader_fp64 = false;
		// GL_ARB_gpu_shader_int64
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
		_GL_ARB_gpu_shader_int64 = glUniform1i64ARB && glUniform2i64ARB && glUniform3i64ARB && glUniform4i64ARB && glUniform1i64vARB && glUniform2i64vARB && glUniform3i64vARB && glUniform4i64vARB && glUniform1ui64ARB && glUniform2ui64ARB && glUniform3ui64ARB && glUniform4ui64ARB && glUniform1ui64vARB && glUniform2ui64vARB && glUniform3ui64vARB && glUniform4ui64vARB && glGetUniformi64vARB && glGetUniformui64vARB && glGetnUniformi64vARB && glGetnUniformui64vARB && glProgramUniform1i64ARB && glProgramUniform2i64ARB && glProgramUniform3i64ARB && glProgramUniform4i64ARB && glProgramUniform1i64vARB && glProgramUniform2i64vARB && glProgramUniform3i64vARB && glProgramUniform4i64vARB && glProgramUniform1ui64ARB && glProgramUniform2ui64ARB && glProgramUniform3ui64ARB && glProgramUniform4ui64ARB && glProgramUniform1ui64vARB && glProgramUniform2ui64vARB && glProgramUniform3ui64vARB && glProgramUniform4ui64vARB;

		// GL_ARB_half_float_vertex
		_GL_ARB_half_float_vertex = false;
		// GL_ARB_imaging
		_GL_ARB_imaging = false;
		// GL_ARB_indirect_parameters
		LOAD_GLPROC(glMultiDrawArraysIndirectCountARB);
		LOAD_GLPROC(glMultiDrawElementsIndirectCountARB);
		_GL_ARB_indirect_parameters = glMultiDrawArraysIndirectCountARB && glMultiDrawElementsIndirectCountARB;

		// GL_ARB_instanced_arrays
		LOAD_GLPROC(glVertexAttribDivisorARB);
		_GL_ARB_instanced_arrays = 0 != glVertexAttribDivisorARB;

		// GL_ARB_internalformat_query
		_GL_ARB_internalformat_query = false;
		// GL_ARB_internalformat_query2
		_GL_ARB_internalformat_query2 = false;
		// GL_ARB_invalidate_subdata
		_GL_ARB_invalidate_subdata = false;
		// GL_ARB_map_buffer_alignment
		_GL_ARB_map_buffer_alignment = false;
		// GL_ARB_map_buffer_range
		_GL_ARB_map_buffer_range = false;
		// GL_ARB_multi_bind
		_GL_ARB_multi_bind = false;
		// GL_ARB_multi_draw_indirect
		_GL_ARB_multi_draw_indirect = false;
		// GL_ARB_occlusion_query2
		_GL_ARB_occlusion_query2 = false;
		// GL_ARB_parallel_shader_compile
		LOAD_GLPROC(glMaxShaderCompilerThreadsARB);
		_GL_ARB_parallel_shader_compile = 0 != glMaxShaderCompilerThreadsARB;

		// GL_ARB_pipeline_statistics_query
		_GL_ARB_pipeline_statistics_query = false;
		// GL_ARB_pixel_buffer_object
		_GL_ARB_pixel_buffer_object = false;
		// GL_ARB_polygon_offset_clamp
		_GL_ARB_polygon_offset_clamp = false;
		// GL_ARB_post_depth_coverage
		_GL_ARB_post_depth_coverage = false;
		// GL_ARB_program_interface_query
		_GL_ARB_program_interface_query = false;
		// GL_ARB_provoking_vertex
		_GL_ARB_provoking_vertex = false;
		// GL_ARB_query_buffer_object
		_GL_ARB_query_buffer_object = false;
		// GL_ARB_robust_buffer_access_behavior
		_GL_ARB_robust_buffer_access_behavior = false;
		// GL_ARB_robustness
		LOAD_GLPROC(glGetGraphicsResetStatusARB);
		LOAD_GLPROC(glGetnTexImageARB);
		LOAD_GLPROC(glReadnPixelsARB);
		LOAD_GLPROC(glGetnCompressedTexImageARB);
		LOAD_GLPROC(glGetnUniformfvARB);
		LOAD_GLPROC(glGetnUniformivARB);
		LOAD_GLPROC(glGetnUniformuivARB);
		LOAD_GLPROC(glGetnUniformdvARB);
		_GL_ARB_robustness = glGetGraphicsResetStatusARB && glGetnTexImageARB && glReadnPixelsARB && glGetnCompressedTexImageARB && glGetnUniformfvARB && glGetnUniformivARB && glGetnUniformuivARB && glGetnUniformdvARB;

		// GL_ARB_robustness_isolation
		_GL_ARB_robustness_isolation = false;
		// GL_ARB_sample_locations
		LOAD_GLPROC(glFramebufferSampleLocationsfvARB);
		LOAD_GLPROC(glNamedFramebufferSampleLocationsfvARB);
		LOAD_GLPROC(glEvaluateDepthValuesARB);
		_GL_ARB_sample_locations = glFramebufferSampleLocationsfvARB && glNamedFramebufferSampleLocationsfvARB && glEvaluateDepthValuesARB;

		// GL_ARB_sample_shading
		LOAD_GLPROC(glMinSampleShadingARB);
		_GL_ARB_sample_shading = 0 != glMinSampleShadingARB;

		// GL_ARB_sampler_objects
		_GL_ARB_sampler_objects = false;
		// GL_ARB_seamless_cube_map
		_GL_ARB_seamless_cube_map = false;
		// GL_ARB_seamless_cubemap_per_texture
		_GL_ARB_seamless_cubemap_per_texture = false;
		// GL_ARB_separate_shader_objects
		_GL_ARB_separate_shader_objects = false;
		// GL_ARB_shader_atomic_counter_ops
		_GL_ARB_shader_atomic_counter_ops = false;
		// GL_ARB_shader_atomic_counters
		_GL_ARB_shader_atomic_counters = false;
		// GL_ARB_shader_ballot
		_GL_ARB_shader_ballot = false;
		// GL_ARB_shader_bit_encoding
		_GL_ARB_shader_bit_encoding = false;
		// GL_ARB_shader_clock
		_GL_ARB_shader_clock = false;
		// GL_ARB_shader_draw_parameters
		_GL_ARB_shader_draw_parameters = false;
		// GL_ARB_shader_group_vote
		_GL_ARB_shader_group_vote = false;
		// GL_ARB_shader_image_load_store
		_GL_ARB_shader_image_load_store = false;
		// GL_ARB_shader_image_size
		_GL_ARB_shader_image_size = false;
		// GL_ARB_shader_precision
		_GL_ARB_shader_precision = false;
		// GL_ARB_shader_stencil_export
		_GL_ARB_shader_stencil_export = false;
		// GL_ARB_shader_storage_buffer_object
		_GL_ARB_shader_storage_buffer_object = false;
		// GL_ARB_shader_subroutine
		_GL_ARB_shader_subroutine = false;
		// GL_ARB_shader_texture_image_samples
		_GL_ARB_shader_texture_image_samples = false;
		// GL_ARB_shader_viewport_layer_array
		_GL_ARB_shader_viewport_layer_array = false;
		// GL_ARB_shading_language_420pack
		_GL_ARB_shading_language_420pack = false;
		// GL_ARB_shading_language_include
		LOAD_GLPROC(glNamedStringARB);
		LOAD_GLPROC(glDeleteNamedStringARB);
		LOAD_GLPROC(glCompileShaderIncludeARB);
		LOAD_GLPROC(glIsNamedStringARB);
		LOAD_GLPROC(glGetNamedStringARB);
		LOAD_GLPROC(glGetNamedStringivARB);
		_GL_ARB_shading_language_include = glNamedStringARB && glDeleteNamedStringARB && glCompileShaderIncludeARB && glIsNamedStringARB && glGetNamedStringARB && glGetNamedStringivARB;

		// GL_ARB_shading_language_packing
		_GL_ARB_shading_language_packing = false;
		// GL_ARB_sparse_buffer
		LOAD_GLPROC(glBufferPageCommitmentARB);
		LOAD_GLPROC(glNamedBufferPageCommitmentEXT);
		LOAD_GLPROC(glNamedBufferPageCommitmentARB);
		_GL_ARB_sparse_buffer = glBufferPageCommitmentARB && glNamedBufferPageCommitmentEXT && glNamedBufferPageCommitmentARB;

		// GL_ARB_sparse_texture
		LOAD_GLPROC(glTexPageCommitmentARB);
		_GL_ARB_sparse_texture = 0 != glTexPageCommitmentARB;

		// GL_ARB_sparse_texture2
		_GL_ARB_sparse_texture2 = false;
		// GL_ARB_sparse_texture_clamp
		_GL_ARB_sparse_texture_clamp = false;
		// GL_ARB_spirv_extensions
		_GL_ARB_spirv_extensions = false;
		// GL_ARB_stencil_texturing
		_GL_ARB_stencil_texturing = false;
		// GL_ARB_sync
		_GL_ARB_sync = false;
		// GL_ARB_tessellation_shader
		_GL_ARB_tessellation_shader = false;
		// GL_ARB_texture_barrier
		_GL_ARB_texture_barrier = false;
		// GL_ARB_texture_border_clamp
		_GL_ARB_texture_border_clamp = false;
		// GL_ARB_texture_buffer_object
		LOAD_GLPROC(glTexBufferARB);
		_GL_ARB_texture_buffer_object = 0 != glTexBufferARB;

		// GL_ARB_texture_buffer_object_rgb32
		_GL_ARB_texture_buffer_object_rgb32 = false;
		// GL_ARB_texture_buffer_range
		_GL_ARB_texture_buffer_range = false;
		// GL_ARB_texture_compression_bptc
		_GL_ARB_texture_compression_bptc = false;
		// GL_ARB_texture_compression_rgtc
		_GL_ARB_texture_compression_rgtc = false;
		// GL_ARB_texture_cube_map_array
		_GL_ARB_texture_cube_map_array = false;
		// GL_ARB_texture_filter_anisotropic
		_GL_ARB_texture_filter_anisotropic = false;
		// GL_ARB_texture_filter_minmax
		_GL_ARB_texture_filter_minmax = false;
		// GL_ARB_texture_gather
		_GL_ARB_texture_gather = false;
		// GL_ARB_texture_mirror_clamp_to_edge
		_GL_ARB_texture_mirror_clamp_to_edge = false;
		// GL_ARB_texture_mirrored_repeat
		_GL_ARB_texture_mirrored_repeat = false;
		// GL_ARB_texture_multisample
		_GL_ARB_texture_multisample = false;
		// GL_ARB_texture_non_power_of_two
		_GL_ARB_texture_non_power_of_two = false;
		// GL_ARB_texture_query_levels
		_GL_ARB_texture_query_levels = false;
		// GL_ARB_texture_query_lod
		_GL_ARB_texture_query_lod = false;
		// GL_ARB_texture_rg
		_GL_ARB_texture_rg = false;
		// GL_ARB_texture_rgb10_a2ui
		_GL_ARB_texture_rgb10_a2ui = false;
		// GL_ARB_texture_stencil8
		_GL_ARB_texture_stencil8 = false;
		// GL_ARB_texture_storage
		_GL_ARB_texture_storage = false;
		// GL_ARB_texture_storage_multisample
		_GL_ARB_texture_storage_multisample = false;
		// GL_ARB_texture_swizzle
		_GL_ARB_texture_swizzle = false;
		// GL_ARB_texture_view
		_GL_ARB_texture_view = false;
		// GL_ARB_timer_query
		_GL_ARB_timer_query = false;
		// GL_ARB_transform_feedback2
		_GL_ARB_transform_feedback2 = false;
		// GL_ARB_transform_feedback3
		_GL_ARB_transform_feedback3 = false;
		// GL_ARB_transform_feedback_instanced
		_GL_ARB_transform_feedback_instanced = false;
		// GL_ARB_transform_feedback_overflow_query
		_GL_ARB_transform_feedback_overflow_query = false;
		// GL_ARB_uniform_buffer_object
		_GL_ARB_uniform_buffer_object = false;
		// GL_ARB_vertex_array_bgra
		_GL_ARB_vertex_array_bgra = false;
		// GL_ARB_vertex_array_object
		_GL_ARB_vertex_array_object = false;
		// GL_ARB_vertex_attrib_64bit
		_GL_ARB_vertex_attrib_64bit = false;
		// GL_ARB_vertex_attrib_binding
		_GL_ARB_vertex_attrib_binding = false;
		// GL_ARB_vertex_type_10f_11f_11f_rev
		_GL_ARB_vertex_type_10f_11f_11f_rev = false;
		// GL_ARB_vertex_type_2_10_10_10_rev
		_GL_ARB_vertex_type_2_10_10_10_rev = false;
		// GL_ARB_viewport_array
		LOAD_GLPROC(glDepthRangeArraydvNV);
		LOAD_GLPROC(glDepthRangeIndexeddNV);
		_GL_ARB_viewport_array = glDepthRangeArraydvNV && glDepthRangeIndexeddNV;

	} // namespace GLARB
	{ // namespace KHR
		using namespace axl::glfl::core::GLKHR; 
		// GL_KHR_blend_equation_advanced
		LOAD_GLPROC(glBlendBarrierKHR);
		_GL_KHR_blend_equation_advanced = 0 != glBlendBarrierKHR;
		// GL_KHR_blend_equation_advanced_coherent
		_GL_KHR_blend_equation_advanced_coherent = false;
		// GL_KHR_context_flush_control
		_GL_KHR_context_flush_control = false;
		// GL_KHR_debug
		_GL_KHR_debug = false;
		// GL_KHR_no_error
		_GL_KHR_no_error = false;
		// GL_KHR_parallel_shader_compile
		LOAD_GLPROC(glMaxShaderCompilerThreadsKHR);
		_GL_KHR_parallel_shader_compile = 0 != glMaxShaderCompilerThreadsKHR;
		// GL_KHR_robust_buffer_access_behavior
		_GL_KHR_robust_buffer_access_behavior = false;
		// GL_KHR_robustness
		_GL_KHR_robustness = false;
		// GL_KHR_shader_subgroup
		_GL_KHR_shader_subgroup = false;
		// GL_KHR_texture_compression_astc_hdr
		_GL_KHR_texture_compression_astc_hdr = false;
		// GL_KHR_texture_compression_astc_ldr
		_GL_KHR_texture_compression_astc_ldr = false;
		// GL_KHR_texture_compression_astc_sliced_3d
		_GL_KHR_texture_compression_astc_sliced_3d = false;
	} // namespace GLKHR
	{
		using namespace axl::glfl::core::GLAMD;
		// GL_AMD_framebuffer_multisample_advanced
		LOAD_GLPROC(glRenderbufferStorageMultisampleAdvancedAMD);
		LOAD_GLPROC(glNamedRenderbufferStorageMultisampleAdvancedAMD);
		_GL_AMD_framebuffer_multisample_advanced = glRenderbufferStorageMultisampleAdvancedAMD && glNamedRenderbufferStorageMultisampleAdvancedAMD;
		// GL_AMD_performance_monitor
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
		_GL_AMD_performance_monitor = glGetPerfMonitorGroupsAMD && glGetPerfMonitorCountersAMD && glGetPerfMonitorGroupStringAMD && glGetPerfMonitorCounterStringAMD && glGetPerfMonitorCounterInfoAMD && glGenPerfMonitorsAMD && glDeletePerfMonitorsAMD && glSelectPerfMonitorCountersAMD && glBeginPerfMonitorAMD && glEndPerfMonitorAMD && glGetPerfMonitorCounterDataAMD;
	} // namespace GLAMD
	{
		using namespace axl::glfl::core::GLAPPLE;
		// GL_APPLE_rgb_422
		_GL_APPLE_rgb_422 = false;
	} // namespace GLAPPLE
	{
		using namespace axl::glfl::core::GLEXT;
		// GL_EXT_EGL_image_storage
		LOAD_GLPROC(glEGLImageTargetTexStorageEXT);
		LOAD_GLPROC(glEGLImageTargetTextureStorageEXT);
		_GL_EXT_EGL_image_storage = glEGLImageTargetTexStorageEXT && glEGLImageTargetTextureStorageEXT;
		// GL_EXT_EGL_sync
		_GL_EXT_EGL_sync = false;
		// GL_EXT_debug_label
		LOAD_GLPROC(glLabelObjectEXT);
		LOAD_GLPROC(glGetObjectLabelEXT);
		_GL_EXT_debug_label = glLabelObjectEXT && glGetObjectLabelEXT;
		// GL_EXT_debug_marker
		LOAD_GLPROC(glInsertEventMarkerEXT);
		LOAD_GLPROC(glPushGroupMarkerEXT);
		LOAD_GLPROC(glPopGroupMarkerEXT);
		_GL_EXT_debug_marker = glInsertEventMarkerEXT && glPushGroupMarkerEXT && glPopGroupMarkerEXT;
		// GL_EXT_direct_state_access
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
		_GL_EXT_direct_state_access = glMatrixLoadfEXT && glMatrixLoaddEXT && glMatrixMultfEXT && glMatrixMultdEXT && glMatrixLoadIdentityEXT && glMatrixRotatefEXT && glMatrixRotatedEXT && glMatrixScalefEXT && glMatrixScaledEXT && glMatrixTranslatefEXT && glMatrixTranslatedEXT && glMatrixFrustumEXT && glMatrixOrthoEXT && glMatrixPopEXT && glMatrixPushEXT && glClientAttribDefaultEXT && glPushClientAttribDefaultEXT && glTextureParameterfEXT && glTextureParameterfvEXT && glTextureParameteriEXT && glTextureParameterivEXT && glTextureImage1DEXT && glTextureImage2DEXT && glTextureSubImage1DEXT && glTextureSubImage2DEXT && glCopyTextureImage1DEXT && glCopyTextureImage2DEXT && glCopyTextureSubImage1DEXT && glCopyTextureSubImage2DEXT && glGetTextureImageEXT && glGetTextureParameterfvEXT && glGetTextureParameterivEXT && glGetTextureLevelParameterfvEXT && glGetTextureLevelParameterivEXT && glTextureImage3DEXT && glTextureSubImage3DEXT && glCopyTextureSubImage3DEXT && glBindMultiTextureEXT && glMultiTexCoordPointerEXT && glMultiTexEnvfEXT && glMultiTexEnvfvEXT && glMultiTexEnviEXT && glMultiTexEnvivEXT && glMultiTexGendEXT && glMultiTexGendvEXT && glMultiTexGenfEXT && glMultiTexGenfvEXT && glMultiTexGeniEXT && glMultiTexGenivEXT && glGetMultiTexEnvfvEXT && glGetMultiTexEnvivEXT && glGetMultiTexGendvEXT && glGetMultiTexGenfvEXT && glGetMultiTexGenivEXT && glMultiTexParameteriEXT && glMultiTexParameterivEXT && glMultiTexParameterfEXT && glMultiTexParameterfvEXT && glMultiTexImage1DEXT && glMultiTexImage2DEXT && glMultiTexSubImage1DEXT && glMultiTexSubImage2DEXT && glCopyMultiTexImage1DEXT && glCopyMultiTexImage2DEXT && glCopyMultiTexSubImage1DEXT && glCopyMultiTexSubImage2DEXT && glGetMultiTexImageEXT && glGetMultiTexParameterfvEXT && glGetMultiTexParameterivEXT && glGetMultiTexLevelParameterfvEXT && glGetMultiTexLevelParameterivEXT && glMultiTexImage3DEXT && glMultiTexSubImage3DEXT && glCopyMultiTexSubImage3DEXT && glEnableClientStateIndexedEXT && glDisableClientStateIndexedEXT && glGetFloatIndexedvEXT && glGetDoubleIndexedvEXT && glGetPointerIndexedvEXT && glEnableIndexedEXT && glDisableIndexedEXT && glIsEnabledIndexedEXT && glGetIntegerIndexedvEXT && glGetBooleanIndexedvEXT && glCompressedTextureImage3DEXT && glCompressedTextureImage2DEXT && glCompressedTextureImage1DEXT && glCompressedTextureSubImage3DEXT && glCompressedTextureSubImage2DEXT && glCompressedTextureSubImage1DEXT && glGetCompressedTextureImageEXT && glCompressedMultiTexImage3DEXT && glCompressedMultiTexImage2DEXT && glCompressedMultiTexImage1DEXT && glCompressedMultiTexSubImage3DEXT && glCompressedMultiTexSubImage2DEXT && glCompressedMultiTexSubImage1DEXT && glGetCompressedMultiTexImageEXT && glMatrixLoadTransposefEXT && glMatrixLoadTransposedEXT && glMatrixMultTransposefEXT && glMatrixMultTransposedEXT && glNamedBufferDataEXT && glNamedBufferSubDataEXT && glMapNamedBufferEXT && glUnmapNamedBufferEXT && glGetNamedBufferParameterivEXT && glGetNamedBufferPointervEXT && glGetNamedBufferSubDataEXT && glProgramUniform1fEXT && glProgramUniform2fEXT && glProgramUniform3fEXT && glProgramUniform4fEXT && glProgramUniform1iEXT && glProgramUniform2iEXT && glProgramUniform3iEXT && glProgramUniform4iEXT && glProgramUniform1fvEXT && glProgramUniform2fvEXT && glProgramUniform3fvEXT && glProgramUniform4fvEXT && glProgramUniform1ivEXT && glProgramUniform2ivEXT && glProgramUniform3ivEXT && glProgramUniform4ivEXT && glProgramUniformMatrix2fvEXT && glProgramUniformMatrix3fvEXT && glProgramUniformMatrix4fvEXT && glProgramUniformMatrix2x3fvEXT && glProgramUniformMatrix3x2fvEXT && glProgramUniformMatrix2x4fvEXT && glProgramUniformMatrix4x2fvEXT && glProgramUniformMatrix3x4fvEXT && glProgramUniformMatrix4x3fvEXT && glTextureBufferEXT && glMultiTexBufferEXT && glTextureParameterIivEXT && glTextureParameterIuivEXT && glGetTextureParameterIivEXT && glGetTextureParameterIuivEXT && glMultiTexParameterIivEXT && glMultiTexParameterIuivEXT && glGetMultiTexParameterIivEXT && glGetMultiTexParameterIuivEXT && glProgramUniform1uiEXT && glProgramUniform2uiEXT && glProgramUniform3uiEXT && glProgramUniform4uiEXT && glProgramUniform1uivEXT && glProgramUniform2uivEXT && glProgramUniform3uivEXT && glProgramUniform4uivEXT && glNamedProgramLocalParameters4fvEXT && glNamedProgramLocalParameterI4iEXT && glNamedProgramLocalParameterI4ivEXT && glNamedProgramLocalParametersI4ivEXT && glNamedProgramLocalParameterI4uiEXT && glNamedProgramLocalParameterI4uivEXT && glNamedProgramLocalParametersI4uivEXT && glGetNamedProgramLocalParameterIivEXT && glGetNamedProgramLocalParameterIuivEXT && glEnableClientStateiEXT && glDisableClientStateiEXT && glGetFloati_vEXT && glGetDoublei_vEXT && glGetPointeri_vEXT && glNamedProgramStringEXT && glNamedProgramLocalParameter4dEXT && glNamedProgramLocalParameter4dvEXT && glNamedProgramLocalParameter4fEXT && glNamedProgramLocalParameter4fvEXT && glGetNamedProgramLocalParameterdvEXT && glGetNamedProgramLocalParameterfvEXT && glGetNamedProgramivEXT && glGetNamedProgramStringEXT && glNamedRenderbufferStorageEXT && glGetNamedRenderbufferParameterivEXT && glNamedRenderbufferStorageMultisampleEXT && glNamedRenderbufferStorageMultisampleCoverageEXT && glCheckNamedFramebufferStatusEXT && glNamedFramebufferTexture1DEXT && glNamedFramebufferTexture2DEXT && glNamedFramebufferTexture3DEXT && glNamedFramebufferRenderbufferEXT && glGetNamedFramebufferAttachmentParameterivEXT && glGenerateTextureMipmapEXT && glGenerateMultiTexMipmapEXT && glFramebufferDrawBufferEXT && glFramebufferDrawBuffersEXT && glFramebufferReadBufferEXT && glGetFramebufferParameterivEXT && glNamedCopyBufferSubDataEXT && glNamedFramebufferTextureEXT && glNamedFramebufferTextureLayerEXT && glNamedFramebufferTextureFaceEXT && glTextureRenderbufferEXT && glMultiTexRenderbufferEXT && glVertexArrayVertexOffsetEXT && glVertexArrayColorOffsetEXT && glVertexArrayEdgeFlagOffsetEXT && glVertexArrayIndexOffsetEXT && glVertexArrayNormalOffsetEXT && glVertexArrayTexCoordOffsetEXT && glVertexArrayMultiTexCoordOffsetEXT && glVertexArrayFogCoordOffsetEXT && glVertexArraySecondaryColorOffsetEXT && glVertexArrayVertexAttribOffsetEXT && glVertexArrayVertexAttribIOffsetEXT && glEnableVertexArrayEXT && glDisableVertexArrayEXT && glEnableVertexArrayAttribEXT && glDisableVertexArrayAttribEXT && glGetVertexArrayIntegervEXT && glGetVertexArrayPointervEXT && glGetVertexArrayIntegeri_vEXT && glGetVertexArrayPointeri_vEXT && glMapNamedBufferRangeEXT && glFlushMappedNamedBufferRangeEXT && glNamedBufferStorageEXT && glClearNamedBufferDataEXT && glClearNamedBufferSubDataEXT && glNamedFramebufferParameteriEXT && glGetNamedFramebufferParameterivEXT && glProgramUniform1dEXT && glProgramUniform2dEXT && glProgramUniform3dEXT && glProgramUniform4dEXT && glProgramUniform1dvEXT && glProgramUniform2dvEXT && glProgramUniform3dvEXT && glProgramUniform4dvEXT && glProgramUniformMatrix2dvEXT && glProgramUniformMatrix3dvEXT && glProgramUniformMatrix4dvEXT && glProgramUniformMatrix2x3dvEXT && glProgramUniformMatrix2x4dvEXT && glProgramUniformMatrix3x2dvEXT && glProgramUniformMatrix3x4dvEXT && glProgramUniformMatrix4x2dvEXT && glProgramUniformMatrix4x3dvEXT && glTextureBufferRangeEXT && glTextureStorage1DEXT && glTextureStorage2DEXT && glTextureStorage3DEXT && glTextureStorage2DMultisampleEXT && glTextureStorage3DMultisampleEXT && glVertexArrayBindVertexBufferEXT && glVertexArrayVertexAttribFormatEXT && glVertexArrayVertexAttribIFormatEXT && glVertexArrayVertexAttribLFormatEXT && glVertexArrayVertexAttribBindingEXT && glVertexArrayVertexBindingDivisorEXT && glVertexArrayVertexAttribLOffsetEXT && glTexturePageCommitmentEXT && glVertexArrayVertexAttribDivisorEXT;
		// GL_EXT_draw_instanced
		LOAD_GLPROC(glDrawArraysInstancedEXT);
		LOAD_GLPROC(glDrawElementsInstancedEXT);
		_GL_EXT_draw_instanced = glDrawArraysInstancedEXT && glDrawElementsInstancedEXT;
		// GL_EXT_multiview_tessellation_geometry_shader
		_GL_EXT_multiview_tessellation_geometry_shader = false;
		// GL_EXT_multiview_texture_multisample
		_GL_EXT_multiview_texture_multisample = false;
		// GL_EXT_multiview_timer_query
		_GL_EXT_multiview_timer_query = false;
		// GL_EXT_polygon_offset_clamp
		LOAD_GLPROC(glPolygonOffsetClampEXT);
		_GL_EXT_polygon_offset_clamp = 0 != glPolygonOffsetClampEXT;
		// GL_EXT_post_depth_coverage
		_GL_EXT_post_depth_coverage = false;
		// GL_EXT_raster_multisample
		LOAD_GLPROC(glRasterSamplesEXT);
		_GL_EXT_raster_multisample = 0 != glRasterSamplesEXT;
		// GL_EXT_separate_shader_objects
		LOAD_GLPROC(glUseShaderProgramEXT);
		LOAD_GLPROC(glActiveProgramEXT);
		LOAD_GLPROC(glCreateShaderProgramEXT);
		_GL_EXT_separate_shader_objects = glUseShaderProgramEXT && glActiveProgramEXT && glCreateShaderProgramEXT;
		// GL_EXT_shader_framebuffer_fetch
		_GL_EXT_shader_framebuffer_fetch = false;
		// GL_EXT_shader_framebuffer_fetch_non_coherent
		LOAD_GLPROC(glFramebufferFetchBarrierEXT);
		_GL_EXT_shader_framebuffer_fetch_non_coherent = 0 != glFramebufferFetchBarrierEXT;
		// GL_EXT_shader_integer_mix
		_GL_EXT_shader_integer_mix = false;
		// GL_EXT_texture_compression_s3tc
		_GL_EXT_texture_compression_s3tc = false;
		// GL_EXT_texture_filter_minmax
		_GL_EXT_texture_filter_minmax = false;
		// GL_EXT_texture_sRGB_R8
		_GL_EXT_texture_sRGB_R8 = false;
		// GL_EXT_texture_sRGB_decode
		_GL_EXT_texture_sRGB_decode = false;
		// GL_EXT_texture_shadow_lod
		_GL_EXT_texture_shadow_lod = false;
		// GL_EXT_window_rectangles
		LOAD_GLPROC(glWindowRectanglesEXT);
		_GL_EXT_window_rectangles = 0 != glWindowRectanglesEXT;

	} // namespace GLEXT
	{
		using namespace axl::glfl::core::GLINTEL;
		// GL_INTEL_blackhole_render
		_GL_INTEL_blackhole_render = false;
		// GL_INTEL_conservative_rasterization
		_GL_INTEL_conservative_rasterization = false;
		// GL_INTEL_framebuffer_CMAA
		LOAD_GLPROC(glApplyFramebufferAttachmentCMAAINTEL);
		_GL_INTEL_framebuffer_CMAA = 0 != glApplyFramebufferAttachmentCMAAINTEL;
		// GL_INTEL_performance_query
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
		_GL_INTEL_performance_query = glBeginPerfQueryINTEL && glCreatePerfQueryINTEL && glDeletePerfQueryINTEL && glEndPerfQueryINTEL && glGetFirstPerfQueryIdINTEL && glGetNextPerfQueryIdINTEL && glGetPerfCounterInfoINTEL && glGetPerfQueryDataINTEL && glGetPerfQueryIdByNameINTEL && glGetPerfQueryInfoINTEL;
	} // namespace GLINTEL
	{
		using namespace axl::glfl::core::GLMESA;
		// GL_MESA_framebuffer_flip_x
		_GL_MESA_framebuffer_flip_x = false;
		// GL_MESA_framebuffer_flip_y
		LOAD_GLPROC(glFramebufferParameteriMESA);
		LOAD_GLPROC(glGetFramebufferParameterivMESA);
		_GL_MESA_framebuffer_flip_y = glFramebufferParameteriMESA &&glGetFramebufferParameterivMESA;
		// GL_MESA_framebuffer_swap_xy
		_GL_MESA_framebuffer_swap_xy = false;
	} // namespace GLMESA
	{
		using namespace axl::glfl::core::GLNV;
		// GL_NV_bindless_multi_draw_indirect
		LOAD_GLPROC(glMultiDrawArraysIndirectBindlessNV);
		LOAD_GLPROC(glMultiDrawElementsIndirectBindlessNV);
		_GL_NV_bindless_multi_draw_indirect = glMultiDrawArraysIndirectBindlessNV && glMultiDrawElementsIndirectBindlessNV;
		// GL_NV_bindless_multi_draw_indirect_count
		LOAD_GLPROC(glMultiDrawArraysIndirectBindlessCountNV);
		LOAD_GLPROC(glMultiDrawElementsIndirectBindlessCountNV);
		_GL_NV_bindless_multi_draw_indirect_count = glMultiDrawArraysIndirectBindlessCountNV && glMultiDrawElementsIndirectBindlessCountNV;
		// GL_NV_bindless_texture
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
		_GL_NV_bindless_texture = glGetTextureHandleNV && glGetTextureSamplerHandleNV && glMakeTextureHandleResidentNV && glMakeTextureHandleNonResidentNV && glGetImageHandleNV && glMakeImageHandleResidentNV && glMakeImageHandleNonResidentNV && glUniformHandleui64NV && glUniformHandleui64vNV && glProgramUniformHandleui64NV && glProgramUniformHandleui64vNV && glIsTextureHandleResidentNV && glIsImageHandleResidentNV;
		// GL_NV_blend_equation_advanced
		LOAD_GLPROC(glBlendParameteriNV);
		LOAD_GLPROC(glBlendBarrierNV);
		_GL_NV_blend_equation_advanced = glBlendParameteriNV && glBlendBarrierNV;
		// GL_NV_blend_equation_advanced_coherent
		_GL_NV_blend_equation_advanced_coherent = false;
		// GL_NV_blend_minmax_factor
		_GL_NV_blend_minmax_factor = false;
		// GL_NV_clip_space_w_scaling
		LOAD_GLPROC(glViewportPositionWScaleNV);
		_GL_NV_clip_space_w_scaling = 0 != glViewportPositionWScaleNV;
		// GL_NV_command_list
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
		_GL_NV_command_list = glCreateStatesNV && glDeleteStatesNV && glIsStateNV && glStateCaptureNV && glGetCommandHeaderNV && glGetStageIndexNV && glDrawCommandsNV && glDrawCommandsAddressNV && glDrawCommandsStatesNV && glDrawCommandsStatesAddressNV && glCreateCommandListsNV && glDeleteCommandListsNV && glIsCommandListNV && glListDrawCommandsStatesClientNV && glCommandListSegmentsNV && glCompileCommandListNV && glCallCommandListNV;
		// GL_NV_compute_shader_derivatives
		_GL_NV_compute_shader_derivatives = false;
		// GL_NV_conditional_render
		LOAD_GLPROC(glBeginConditionalRenderNV);
		LOAD_GLPROC(glEndConditionalRenderNV);
		_GL_NV_conditional_render = glBeginConditionalRenderNV && glEndConditionalRenderNV;
		// GL_NV_conservative_raster
		LOAD_GLPROC(glSubpixelPrecisionBiasNV);
		_GL_NV_conservative_raster = 0 != glSubpixelPrecisionBiasNV;
		// GL_NV_conservative_raster_dilate
		LOAD_GLPROC(glConservativeRasterParameterfNV);
		_GL_NV_conservative_raster_dilate = 0 != glConservativeRasterParameterfNV;
		// GL_NV_conservative_raster_pre_snap
		_GL_NV_conservative_raster_pre_snap = false;
		// GL_NV_conservative_raster_pre_snap_triangles
		LOAD_GLPROC(glConservativeRasterParameteriNV);
		_GL_NV_conservative_raster_pre_snap_triangles = 0 != glConservativeRasterParameteriNV;
		// GL_NV_conservative_raster_underestimation
		_GL_NV_conservative_raster_underestimation = false;
		// GL_NV_depth_buffer_float
		LOAD_GLPROC(glDepthRangedNV);
		LOAD_GLPROC(glClearDepthdNV);
		LOAD_GLPROC(glDepthBoundsdNV);
		_GL_NV_depth_buffer_float = glDepthRangedNV && glClearDepthdNV && glDepthBoundsdNV;
		// GL_NV_draw_vulkan_image
		LOAD_GLPROC(glDrawVkImageNV);
		LOAD_GLPROC(glGetVkProcAddrNV);
		LOAD_GLPROC(glWaitVkSemaphoreNV);
		LOAD_GLPROC(glSignalVkSemaphoreNV);
		LOAD_GLPROC(glSignalVkFenceNV);
		_GL_NV_draw_vulkan_image = glDrawVkImageNV && glGetVkProcAddrNV && glWaitVkSemaphoreNV && glSignalVkSemaphoreNV && glSignalVkFenceNV;
		// GL_NV_fill_rectangle
		_GL_NV_fill_rectangle = false;
		// GL_NV_fragment_coverage_to_color
		LOAD_GLPROC(glFragmentCoverageColorNV);
		_GL_NV_fragment_coverage_to_color = 0 != glFragmentCoverageColorNV;
		// GL_NV_fragment_shader_barycentric
		_GL_NV_fragment_shader_barycentric = false;
		// GL_NV_fragment_shader_interlock
		_GL_NV_fragment_shader_interlock = false;
		// GL_NV_framebuffer_mixed_samples
		LOAD_GLPROC(glCoverageModulationTableNV);
		LOAD_GLPROC(glGetCoverageModulationTableNV);
		LOAD_GLPROC(glCoverageModulationNV);
		_GL_NV_framebuffer_mixed_samples = glCoverageModulationTableNV && glGetCoverageModulationTableNV && glCoverageModulationNV;
		// GL_NV_framebuffer_multisample_coverage
		LOAD_GLPROC(glRenderbufferStorageMultisampleCoverageNV);
		_GL_NV_framebuffer_multisample_coverage = 0 != glRenderbufferStorageMultisampleCoverageNV;
		// GL_NV_geometry_shader_passthrough
		_GL_NV_geometry_shader_passthrough = false;
		// GL_NV_gpu_shader5
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
		_GL_NV_gpu_shader5 = glUniform1i64NV && glUniform2i64NV && glUniform3i64NV && glUniform4i64NV && glUniform1i64vNV && glUniform2i64vNV && glUniform3i64vNV && glUniform4i64vNV && glUniform1ui64NV && glUniform2ui64NV && glUniform3ui64NV && glUniform4ui64NV && glUniform1ui64vNV && glUniform2ui64vNV && glUniform3ui64vNV && glUniform4ui64vNV && glGetUniformi64vNV && glProgramUniform1i64NV && glProgramUniform2i64NV && glProgramUniform3i64NV && glProgramUniform4i64NV && glProgramUniform1i64vNV && glProgramUniform2i64vNV && glProgramUniform3i64vNV && glProgramUniform4i64vNV && glProgramUniform1ui64NV && glProgramUniform2ui64NV && glProgramUniform3ui64NV && glProgramUniform4ui64NV && glProgramUniform1ui64vNV && glProgramUniform2ui64vNV && glProgramUniform3ui64vNV && glProgramUniform4ui64vNV;
		// GL_NV_internalformat_sample_query
		LOAD_GLPROC(glGetInternalformatSampleivNV);
		_GL_NV_internalformat_sample_query = 0 != glGetInternalformatSampleivNV;
		// GL_NV_memory_attachment
		LOAD_GLPROC(glGetMemoryObjectDetachedResourcesuivNV);
		LOAD_GLPROC(glResetMemoryObjectParameterNV);
		LOAD_GLPROC(glTexAttachMemoryNV);
		LOAD_GLPROC(glBufferAttachMemoryNV);
		LOAD_GLPROC(glTextureAttachMemoryNV);
		LOAD_GLPROC(glNamedBufferAttachMemoryNV);
		_GL_NV_memory_attachment = glGetMemoryObjectDetachedResourcesuivNV && glResetMemoryObjectParameterNV && glTexAttachMemoryNV && glBufferAttachMemoryNV && glTextureAttachMemoryNV && glNamedBufferAttachMemoryNV;

		// GL_NV_memory_object_sparse
		LOAD_GLPROC(glBufferPageCommitmentMemNV);
		LOAD_GLPROC(glTexPageCommitmentMemNV);
		LOAD_GLPROC(glNamedBufferPageCommitmentMemNV);
		LOAD_GLPROC(glTexturePageCommitmentMemNV);
		_GL_NV_memory_object_sparse = glBufferPageCommitmentMemNV && glTexPageCommitmentMemNV && glNamedBufferPageCommitmentMemNV && glTexturePageCommitmentMemNV;

		// GL_NV_mesh_shader
		LOAD_GLPROC(glDrawMeshTasksNV);
		LOAD_GLPROC(glDrawMeshTasksIndirectNV);
		LOAD_GLPROC(glMultiDrawMeshTasksIndirectNV);
		LOAD_GLPROC(glMultiDrawMeshTasksIndirectCountNV);
		_GL_NV_mesh_shader = glDrawMeshTasksNV && glDrawMeshTasksIndirectNV && glMultiDrawMeshTasksIndirectNV && glMultiDrawMeshTasksIndirectCountNV;

		// GL_NV_path_rendering
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
		_GL_NV_path_rendering = glGenPathsNV && glDeletePathsNV && glIsPathNV && glPathCommandsNV && glPathCoordsNV && glPathSubCommandsNV && glPathSubCoordsNV && glPathStringNV && glPathGlyphsNV && glPathGlyphRangeNV && glWeightPathsNV && glCopyPathNV && glInterpolatePathsNV && glTransformPathNV && glPathParameterivNV && glPathParameteriNV && glPathParameterfvNV && glPathParameterfNV && glPathDashArrayNV && glPathStencilFuncNV && glPathStencilDepthOffsetNV && glStencilFillPathNV && glStencilStrokePathNV && glStencilFillPathInstancedNV && glStencilStrokePathInstancedNV && glPathCoverDepthFuncNV && glCoverFillPathNV && glCoverStrokePathNV && glCoverFillPathInstancedNV && glCoverStrokePathInstancedNV && glGetPathParameterivNV && glGetPathParameterfvNV && glGetPathCommandsNV && glGetPathCoordsNV && glGetPathDashArrayNV && glGetPathMetricsNV && glGetPathMetricRangeNV && glGetPathSpacingNV && glIsPointInFillPathNV && glIsPointInStrokePathNV && glGetPathLengthNV && glPointAlongPathNV && glMatrixLoad3x2fNV && glMatrixLoad3x3fNV && glMatrixLoadTranspose3x3fNV && glMatrixMult3x2fNV && glMatrixMult3x3fNV && glMatrixMultTranspose3x3fNV && glStencilThenCoverFillPathNV && glStencilThenCoverStrokePathNV && glStencilThenCoverFillPathInstancedNV && glStencilThenCoverStrokePathInstancedNV && glPathGlyphIndexRangeNV && glPathGlyphIndexArrayNV && glPathMemoryGlyphIndexArrayNV && glProgramPathFragmentInputGenNV && glGetProgramResourcefvNV;
		// GL_NV_path_rendering_shared_edge
		_GL_NV_path_rendering_shared_edge = false;
		// GL_NV_primitive_shading_rate
		_GL_NV_primitive_shading_rate = false;
		// GL_NV_representative_fragment_test
		_GL_NV_representative_fragment_test = false;
		// GL_NV_sample_locations
		LOAD_GLPROC(glFramebufferSampleLocationsfvNV);
		LOAD_GLPROC(glNamedFramebufferSampleLocationsfvNV);
		LOAD_GLPROC(glResolveDepthValuesNV);
		_GL_NV_sample_locations = glFramebufferSampleLocationsfvNV && glNamedFramebufferSampleLocationsfvNV && glResolveDepthValuesNV;
		// GL_NV_sample_mask_override_coverage
		_GL_NV_sample_mask_override_coverage = false;
		// GL_NV_scissor_exclusive
		LOAD_GLPROC(glScissorExclusiveNV);
		LOAD_GLPROC(glScissorExclusiveArrayvNV);
		_GL_NV_scissor_exclusive = glScissorExclusiveNV && glScissorExclusiveArrayvNV;
		// GL_NV_shader_atomic_counters
		_GL_NV_shader_atomic_counters = false;
		// GL_NV_shader_atomic_float
		_GL_NV_shader_atomic_float = false;
		// GL_NV_shader_atomic_float64
		_GL_NV_shader_atomic_float64 = false;
		// GL_NV_shader_atomic_fp16_vector
		_GL_NV_shader_atomic_fp16_vector = false;
		// GL_NV_shader_atomic_int64
		_GL_NV_shader_atomic_int64 = false;
		// GL_NV_shader_buffer_load
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
		_GL_NV_shader_buffer_load = glMakeBufferResidentNV && glMakeBufferNonResidentNV && glIsBufferResidentNV && glMakeNamedBufferResidentNV && glMakeNamedBufferNonResidentNV && glIsNamedBufferResidentNV && glGetBufferParameterui64vNV && glGetNamedBufferParameterui64vNV && glGetIntegerui64vNV && glUniformui64NV && glUniformui64vNV && glGetUniformui64vNV && glProgramUniformui64NV && glProgramUniformui64vNV;
		// GL_NV_shader_buffer_store
		_GL_NV_shader_buffer_store = false;
		// GL_NV_shader_subgroup_partitioned
		_GL_NV_shader_subgroup_partitioned = false;
		// GL_NV_shader_texture_footprint
		_GL_NV_shader_texture_footprint = false;
		// GL_NV_shader_thread_group
		_GL_NV_shader_thread_group = false;
		// GL_NV_shader_thread_shuffle
		_GL_NV_shader_thread_shuffle = false;
		// GL_NV_shading_rate_image
		LOAD_GLPROC(glBindShadingRateImageNV);
		LOAD_GLPROC(glGetShadingRateImagePaletteNV);
		LOAD_GLPROC(glGetShadingRateSampleLocationivNV);
		LOAD_GLPROC(glShadingRateImageBarrierNV);
		LOAD_GLPROC(glShadingRateImagePaletteNV);
		LOAD_GLPROC(glShadingRateSampleOrderNV);
		LOAD_GLPROC(glShadingRateSampleOrderCustomNV);
		_GL_NV_shading_rate_image = glBindShadingRateImageNV && glGetShadingRateImagePaletteNV && glGetShadingRateSampleLocationivNV && glShadingRateImageBarrierNV && glShadingRateImagePaletteNV && glShadingRateSampleOrderNV && glShadingRateSampleOrderCustomNV;

		// GL_NV_stereo_view_rendering
		_GL_NV_stereo_view_rendering = false;
		// GL_NV_texture_barrier
		LOAD_GLPROC(glTextureBarrierNV);
		_GL_NV_texture_barrier = 0 != glTextureBarrierNV;

		// GL_NV_texture_rectangle_compressed
		_GL_NV_texture_rectangle_compressed = false;
		// GL_NV_uniform_buffer_unified_memory
		_GL_NV_uniform_buffer_unified_memory = false;
		// GL_NV_vertex_attrib_integer_64bit
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
		_GL_NV_vertex_attrib_integer_64bit = glVertexAttribL1i64NV && glVertexAttribL2i64NV && glVertexAttribL3i64NV && glVertexAttribL4i64NV && glVertexAttribL1i64vNV && glVertexAttribL2i64vNV && glVertexAttribL3i64vNV && glVertexAttribL4i64vNV && glVertexAttribL1ui64NV && glVertexAttribL2ui64NV && glVertexAttribL3ui64NV && glVertexAttribL4ui64NV && glVertexAttribL1ui64vNV && glVertexAttribL2ui64vNV && glVertexAttribL3ui64vNV && glVertexAttribL4ui64vNV && glGetVertexAttribLi64vNV && glGetVertexAttribLui64vNV && glVertexAttribLFormatNV;
		// GL_NV_vertex_buffer_unified_memory
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
		_GL_NV_vertex_buffer_unified_memory = glBufferAddressRangeNV && glVertexFormatNV && glNormalFormatNV && glColorFormatNV && glIndexFormatNV && glTexCoordFormatNV && glEdgeFlagFormatNV && glSecondaryColorFormatNV && glFogCoordFormatNV && glVertexAttribFormatNV && glVertexAttribIFormatNV && glGetIntegerui64i_vNV;
		// GL_NV_viewport_array2
		_GL_NV_viewport_array2 = false;
		// GL_NV_viewport_swizzle
		LOAD_GLPROC(glViewportSwizzleNV);
		_GL_NV_viewport_swizzle = 0 != glViewportSwizzleNV;

	} // namespace GLNV
	{
		using namespace axl::glfl::core::GLOVR;
		// GL_OVR_multiview
		LOAD_GLPROC(glFramebufferTextureMultiviewOVR);
		_GL_OVR_multiview = 0 != glFramebufferTextureMultiviewOVR;
		_GL_OVR_multiview2 = false;
	} // namespace GLOVR
	return (initialized = true) && checkExtensions();
}

#include <stdio.h>
#include <string.h>
bool checkExtensions()
{
	static bool initialized = false;
	if(initialized) return false;
	if(Dummy::InitError::IERR_NONE != GLOBAL_DUMMY.init() || !GLOBAL_DUMMY.makeCurrent())
		return false;
	using namespace axl::glfl::core::GL1;
	const char* str_ver = (const char*)glGetString(GL_VERSION);
	if(!str_ver) return false;
	if(((int)str_ver[0]-'0') >= 3)
	{
		using namespace axl::glfl::core::GL2;
		using namespace axl::glfl::core::GL3;
		using namespace axl::glfl::core::GLARB;
		using namespace axl::glfl::core::GLAMD;
		using namespace axl::glfl::core::GLAPPLE;
		using namespace axl::glfl::core::GLEXT;
		using namespace axl::glfl::core::GLINTEL;
		using namespace axl::glfl::core::GLKHR;
		using namespace axl::glfl::core::GLMESA;
		using namespace axl::glfl::core::GLNV;
		using namespace axl::glfl::core::GLOVR;
		GLint num_extensions;
		glGetIntegerv(GL_NUM_EXTENSIONS, &num_extensions);
		for(int i = 0; i < num_extensions; ++i)
		{
			const char* cur_ext = (const char*)glGetStringi(GL_EXTENSIONS, i);
			if(!GL_ARB_ES2_compatibility && strcmp("GL_ARB_ES2_compatibility", cur_ext) == 0) { _GL_ARB_ES2_compatibility = true; continue; }
			else if(!GL_ARB_ES3_1_compatibility && strcmp("GL_ARB_ES3_1_compatibility", cur_ext) == 0) { _GL_ARB_ES3_1_compatibility = true; continue; }
			else if(!GL_ARB_ES3_2_compatibility && strcmp("GL_ARB_ES3_2_compatibility", cur_ext) == 0) { _GL_ARB_ES3_2_compatibility = true; continue; }
			else if(!GL_ARB_arrays_of_arrays && strcmp("GL_ARB_arrays_of_arrays", cur_ext) == 0) { _GL_ARB_arrays_of_arrays = true; continue; }
			else if(!GL_ARB_base_instance && strcmp("GL_ARB_base_instance", cur_ext) == 0) { _GL_ARB_base_instance = true; continue; }
			else if(!GL_ARB_blend_func_extended && strcmp("GL_ARB_blend_func_extended", cur_ext) == 0) { _GL_ARB_blend_func_extended = true; continue; }
			else if(!GL_ARB_buffer_storage && strcmp("GL_ARB_buffer_storage", cur_ext) == 0) { _GL_ARB_buffer_storage = true; continue; }
			else if(!GL_ARB_clear_buffer_object && strcmp("GL_ARB_clear_buffer_object", cur_ext) == 0) { _GL_ARB_clear_buffer_object = true; continue; }
			else if(!GL_ARB_clear_texture && strcmp("GL_ARB_clear_texture", cur_ext) == 0) { _GL_ARB_clear_texture = true; continue; }
			else if(!GL_ARB_clip_control && strcmp("GL_ARB_clip_control", cur_ext) == 0) { _GL_ARB_clip_control = true; continue; }
			else if(!GL_ARB_compressed_texture_pixel_storage && strcmp("GL_ARB_compressed_texture_pixel_storage", cur_ext) == 0) { _GL_ARB_compressed_texture_pixel_storage = true; continue; }
			else if(!GL_ARB_compute_shader && strcmp("GL_ARB_compute_shader", cur_ext) == 0) { _GL_ARB_compute_shader = true; continue; }
			else if(!GL_ARB_conditional_render_inverted && strcmp("GL_ARB_conditional_render_inverted", cur_ext) == 0) { _GL_ARB_conditional_render_inverted = true; continue; }
			else if(!GL_ARB_conservative_depth && strcmp("GL_ARB_conservative_depth", cur_ext) == 0) { _GL_ARB_conservative_depth = true; continue; }
			else if(!GL_ARB_copy_buffer && strcmp("GL_ARB_copy_buffer", cur_ext) == 0) { _GL_ARB_copy_buffer = true; continue; }
			else if(!GL_ARB_copy_image && strcmp("GL_ARB_copy_image", cur_ext) == 0) { _GL_ARB_copy_image = true; continue; }
			else if(!GL_ARB_cull_distance && strcmp("GL_ARB_cull_distance", cur_ext) == 0) { _GL_ARB_cull_distance = true; continue; }
			else if(!GL_ARB_depth_buffer_float && strcmp("GL_ARB_depth_buffer_float", cur_ext) == 0) { _GL_ARB_depth_buffer_float = true; continue; }
			else if(!GL_ARB_depth_clamp && strcmp("GL_ARB_depth_clamp", cur_ext) == 0) { _GL_ARB_depth_clamp = true; continue; }
			else if(!GL_ARB_derivative_control && strcmp("GL_ARB_derivative_control", cur_ext) == 0) { _GL_ARB_derivative_control = true; continue; }
			else if(!GL_ARB_direct_state_access && strcmp("GL_ARB_direct_state_access", cur_ext) == 0) { _GL_ARB_direct_state_access = true; continue; }
			else if(!GL_ARB_draw_elements_base_vertex && strcmp("GL_ARB_draw_elements_base_vertex", cur_ext) == 0) { _GL_ARB_draw_elements_base_vertex = true; continue; }
			else if(!GL_ARB_draw_indirect && strcmp("GL_ARB_draw_indirect", cur_ext) == 0) { _GL_ARB_draw_indirect = true; continue; }
			else if(!GL_ARB_draw_instanced && strcmp("GL_ARB_draw_instanced", cur_ext) == 0) { _GL_ARB_draw_instanced = true; continue; }
			else if(!GL_ARB_enhanced_layouts && strcmp("GL_ARB_enhanced_layouts", cur_ext) == 0) { _GL_ARB_enhanced_layouts = true; continue; }
			else if(!GL_ARB_explicit_attrib_location && strcmp("GL_ARB_explicit_attrib_location", cur_ext) == 0) { _GL_ARB_explicit_attrib_location = true; continue; }
			else if(!GL_ARB_explicit_uniform_location && strcmp("GL_ARB_explicit_uniform_location", cur_ext) == 0) { _GL_ARB_explicit_uniform_location = true; continue; }
			else if(!GL_ARB_fragment_coord_conventions && strcmp("GL_ARB_fragment_coord_conventions", cur_ext) == 0) { _GL_ARB_fragment_coord_conventions = true; continue; }
			else if(!GL_ARB_fragment_layer_viewport && strcmp("GL_ARB_fragment_layer_viewport", cur_ext) == 0) { _GL_ARB_fragment_layer_viewport = true; continue; }
			else if(!GL_ARB_fragment_shader_interlock && strcmp("GL_ARB_fragment_shader_interlock", cur_ext) == 0) { _GL_ARB_fragment_shader_interlock = true; continue; }
			else if(!GL_ARB_framebuffer_no_attachments && strcmp("GL_ARB_framebuffer_no_attachments", cur_ext) == 0) { _GL_ARB_framebuffer_no_attachments = true; continue; }
			else if(!GL_ARB_framebuffer_object && strcmp("GL_ARB_framebuffer_object", cur_ext) == 0) { _GL_ARB_framebuffer_object = true; continue; }
			else if(!GL_ARB_framebuffer_sRGB && strcmp("GL_ARB_framebuffer_sRGB", cur_ext) == 0) { _GL_ARB_framebuffer_sRGB = true; continue; }
			else if(!GL_ARB_get_program_binary && strcmp("GL_ARB_get_program_binary", cur_ext) == 0) { _GL_ARB_get_program_binary = true; continue; }
			else if(!GL_ARB_get_texture_sub_image && strcmp("GL_ARB_get_texture_sub_image", cur_ext) == 0) { _GL_ARB_get_texture_sub_image = true; continue; }
			else if(!GL_ARB_gpu_shader5 && strcmp("GL_ARB_gpu_shader5", cur_ext) == 0) { _GL_ARB_gpu_shader5 = true; continue; }
			else if(!GL_ARB_gpu_shader_fp64 && strcmp("GL_ARB_gpu_shader_fp64", cur_ext) == 0) { _GL_ARB_gpu_shader_fp64 = true; continue; }
			else if(!GL_ARB_half_float_vertex && strcmp("GL_ARB_half_float_vertex", cur_ext) == 0) { _GL_ARB_half_float_vertex = true; continue; }
			else if(!GL_ARB_imaging && strcmp("GL_ARB_imaging", cur_ext) == 0) { _GL_ARB_imaging = true; continue; }
			else if(!GL_ARB_internalformat_query && strcmp("GL_ARB_internalformat_query", cur_ext) == 0) { _GL_ARB_internalformat_query = true; continue; }
			else if(!GL_ARB_invalidate_subdata && strcmp("GL_ARB_invalidate_subdata", cur_ext) == 0) { _GL_ARB_invalidate_subdata = true; continue; }
			else if(!GL_ARB_map_buffer_alignment && strcmp("GL_ARB_map_buffer_alignment", cur_ext) == 0) { _GL_ARB_map_buffer_alignment = true; continue; }
			else if(!GL_ARB_map_buffer_range && strcmp("GL_ARB_map_buffer_range", cur_ext) == 0) { _GL_ARB_map_buffer_range = true; continue; }
			else if(!GL_ARB_multi_bind && strcmp("GL_ARB_multi_bind", cur_ext) == 0) { _GL_ARB_multi_bind = true; continue; }
			else if(!GL_ARB_multi_draw_indirect && strcmp("GL_ARB_multi_draw_indirect", cur_ext) == 0) { _GL_ARB_multi_draw_indirect = true; continue; }
			else if(!GL_ARB_occlusion_query2 && strcmp("GL_ARB_occlusion_query2", cur_ext) == 0) { _GL_ARB_occlusion_query2 = true; continue; }
			else if(!GL_ARB_polygon_offset_clamp && strcmp("GL_ARB_polygon_offset_clamp", cur_ext) == 0) { _GL_ARB_polygon_offset_clamp = true; continue; }
			else if(!GL_ARB_post_depth_coverage && strcmp("GL_ARB_post_depth_coverage", cur_ext) == 0) { _GL_ARB_post_depth_coverage = true; continue; }
			else if(!GL_ARB_program_interface_query && strcmp("GL_ARB_program_interface_query", cur_ext) == 0) { _GL_ARB_program_interface_query = true; continue; }
			else if(!GL_ARB_provoking_vertex && strcmp("GL_ARB_provoking_vertex", cur_ext) == 0) { _GL_ARB_provoking_vertex = true; continue; }
			else if(!GL_ARB_query_buffer_object && strcmp("GL_ARB_query_buffer_object", cur_ext) == 0) { _GL_ARB_query_buffer_object = true; continue; }
			else if(!GL_ARB_robust_buffer_access_behavior && strcmp("GL_ARB_robust_buffer_access_behavior", cur_ext) == 0) { _GL_ARB_robust_buffer_access_behavior = true; continue; }
			else if(!GL_ARB_robustness_isolation && strcmp("GL_ARB_robustness_isolation", cur_ext) == 0) { _GL_ARB_robustness_isolation = true; continue; }
			else if(!GL_ARB_sampler_objects && strcmp("GL_ARB_sampler_objects", cur_ext) == 0) { _GL_ARB_sampler_objects = true; continue; }
			else if(!GL_ARB_seamless_cube_map && strcmp("GL_ARB_seamless_cube_map", cur_ext) == 0) { _GL_ARB_seamless_cube_map = true; continue; }
			else if(!GL_ARB_seamless_cubemap_per_texture && strcmp("GL_ARB_seamless_cubemap_per_texture", cur_ext) == 0) { _GL_ARB_seamless_cubemap_per_texture = true; continue; }
			else if(!GL_ARB_separate_shader_objects && strcmp("GL_ARB_separate_shader_objects", cur_ext) == 0) { _GL_ARB_separate_shader_objects = true; continue; }
			else if(!GL_ARB_shader_atomic_counter_ops && strcmp("GL_ARB_shader_atomic_counter_ops", cur_ext) == 0) { _GL_ARB_shader_atomic_counter_ops = true; continue; }
			else if(!GL_ARB_shader_atomic_counters && strcmp("GL_ARB_shader_atomic_counters", cur_ext) == 0) { _GL_ARB_shader_atomic_counters = true; continue; }
			else if(!GL_ARB_shader_ballot && strcmp("GL_ARB_shader_ballot", cur_ext) == 0) { _GL_ARB_shader_ballot = true; continue; }
			else if(!GL_ARB_shader_bit_encoding && strcmp("GL_ARB_shader_bit_encoding", cur_ext) == 0) { _GL_ARB_shader_bit_encoding = true; continue; }
			else if(!GL_ARB_shader_clock && strcmp("GL_ARB_shader_clock", cur_ext) == 0) { _GL_ARB_shader_clock = true; continue; }
			else if(!GL_ARB_shader_draw_parameters && strcmp("GL_ARB_shader_draw_parameters", cur_ext) == 0) { _GL_ARB_shader_draw_parameters = true; continue; }
			else if(!GL_ARB_shader_group_vote && strcmp("GL_ARB_shader_group_vote", cur_ext) == 0) { _GL_ARB_shader_group_vote = true; continue; }
			else if(!GL_ARB_shader_image_load_store && strcmp("GL_ARB_shader_image_load_store", cur_ext) == 0) { _GL_ARB_shader_image_load_store = true; continue; }
			else if(!GL_ARB_shader_image_size && strcmp("GL_ARB_shader_image_size", cur_ext) == 0) { _GL_ARB_shader_image_size = true; continue; }
			else if(!GL_ARB_shader_precision && strcmp("GL_ARB_shader_precision", cur_ext) == 0) { _GL_ARB_shader_precision = true; continue; }
			else if(!GL_ARB_shader_stencil_export && strcmp("GL_ARB_shader_stencil_export", cur_ext) == 0) { _GL_ARB_shader_stencil_export = true; continue; }
			else if(!GL_ARB_shader_storage_buffer_object && strcmp("GL_ARB_shader_storage_buffer_object", cur_ext) == 0) { _GL_ARB_shader_storage_buffer_object = true; continue; }
			else if(!GL_ARB_shader_subroutine && strcmp("GL_ARB_shader_subroutine", cur_ext) == 0) { _GL_ARB_shader_subroutine = true; continue; }
			else if(!GL_ARB_shader_texture_image_samples && strcmp("GL_ARB_shader_texture_image_samples", cur_ext) == 0) { _GL_ARB_shader_texture_image_samples = true; continue; }
			else if(!GL_ARB_shader_viewport_layer_array && strcmp("GL_ARB_shader_viewport_layer_array", cur_ext) == 0) { _GL_ARB_shader_viewport_layer_array = true; continue; }
			else if(!GL_ARB_shading_language_420pack && strcmp("GL_ARB_shading_language_420pack", cur_ext) == 0) { _GL_ARB_shading_language_420pack = true; continue; }
			else if(!GL_ARB_sparse_texture2 && strcmp("GL_ARB_sparse_texture2", cur_ext) == 0) { _GL_ARB_sparse_texture2 = true; continue; }
			else if(!GL_ARB_sparse_texture_clamp && strcmp("GL_ARB_sparse_texture_clamp", cur_ext) == 0) { _GL_ARB_sparse_texture_clamp = true; continue; }
			else if(!GL_ARB_spirv_extensions && strcmp("GL_ARB_spirv_extensions", cur_ext) == 0) { _GL_ARB_spirv_extensions = true; continue; }
			else if(!GL_ARB_stencil_texturing && strcmp("GL_ARB_stencil_texturing", cur_ext) == 0) { _GL_ARB_stencil_texturing = true; continue; }
			else if(!GL_ARB_sync && strcmp("GL_ARB_sync", cur_ext) == 0) { _GL_ARB_sync = true; continue; }
			else if(!GL_ARB_tessellation_shader && strcmp("GL_ARB_tessellation_shader", cur_ext) == 0) { _GL_ARB_tessellation_shader = true; continue; }
			else if(!GL_ARB_texture_barrier && strcmp("GL_ARB_texture_barrier", cur_ext) == 0) { _GL_ARB_texture_barrier = true; continue; }
			else if(!GL_ARB_texture_border_clamp && strcmp("GL_ARB_texture_border_clamp", cur_ext) == 0) { _GL_ARB_texture_border_clamp = true; continue; }
			else if(!GL_ARB_texture_buffer_object_rgb32 && strcmp("GL_ARB_texture_buffer_object_rgb32", cur_ext) == 0) { _GL_ARB_texture_buffer_object_rgb32 = true; continue; }
			else if(!GL_ARB_texture_buffer_range && strcmp("GL_ARB_texture_buffer_range", cur_ext) == 0) { _GL_ARB_texture_buffer_range = true; continue; }
			else if(!GL_ARB_texture_compression_bptc && strcmp("GL_ARB_texture_compression_bptc", cur_ext) == 0) { _GL_ARB_texture_compression_bptc = true; continue; }
			else if(!GL_ARB_texture_compression_rgtc && strcmp("GL_ARB_texture_compression_rgtc", cur_ext) == 0) { _GL_ARB_texture_compression_rgtc = true; continue; }
			else if(!GL_ARB_texture_cube_map_array && strcmp("GL_ARB_texture_cube_map_array", cur_ext) == 0) { _GL_ARB_texture_cube_map_array = true; continue; }
			else if(!GL_ARB_texture_filter_anisotropic && strcmp("GL_ARB_texture_filter_anisotropic", cur_ext) == 0) { _GL_ARB_texture_filter_anisotropic = true; continue; }
			else if(!GL_ARB_texture_filter_minmax && strcmp("GL_ARB_texture_filter_minmax", cur_ext) == 0) { _GL_ARB_texture_filter_minmax = true; continue; }
			else if(!GL_ARB_texture_gather && strcmp("GL_ARB_texture_gather", cur_ext) == 0) { _GL_ARB_texture_gather = true; continue; }
			else if(!GL_ARB_texture_mirror_clamp_to_edge && strcmp("GL_ARB_texture_mirror_clamp_to_edge", cur_ext) == 0) { _GL_ARB_texture_mirror_clamp_to_edge = true; continue; }
			else if(!GL_ARB_texture_mirrored_repeat && strcmp("GL_ARB_texture_mirrored_repeat", cur_ext) == 0) { _GL_ARB_texture_mirrored_repeat = true; continue; }
			else if(!GL_ARB_texture_multisample && strcmp("GL_ARB_texture_multisample", cur_ext) == 0) { _GL_ARB_texture_multisample = true; continue; }
			else if(!GL_ARB_texture_non_power_of_two && strcmp("GL_ARB_texture_non_power_of_two", cur_ext) == 0) { _GL_ARB_texture_non_power_of_two = true; continue; }
			else if(!GL_ARB_texture_query_levels && strcmp("GL_ARB_texture_query_levels", cur_ext) == 0) { _GL_ARB_texture_query_levels = true; continue; }
			else if(!GL_ARB_texture_query_lod && strcmp("GL_ARB_texture_query_lod", cur_ext) == 0) { _GL_ARB_texture_query_lod = true; continue; }
			else if(!GL_ARB_texture_rg && strcmp("GL_ARB_texture_rg", cur_ext) == 0) { _GL_ARB_texture_rg = true; continue; }
			else if(!GL_ARB_texture_rgb10_a2ui && strcmp("GL_ARB_texture_rgb10_a2ui", cur_ext) == 0) { _GL_ARB_texture_rgb10_a2ui = true; continue; }
			else if(!GL_ARB_texture_stencil8 && strcmp("GL_ARB_texture_stencil8", cur_ext) == 0) { _GL_ARB_texture_stencil8 = true; continue; }
			else if(!GL_ARB_texture_storage && strcmp("GL_ARB_texture_storage", cur_ext) == 0) { _GL_ARB_texture_storage = true; continue; }
			else if(!GL_ARB_texture_storage_multisample && strcmp("GL_ARB_texture_storage_multisample", cur_ext) == 0) { _GL_ARB_texture_storage_multisample = true; continue; }
			else if(!GL_ARB_texture_swizzle && strcmp("GL_ARB_texture_swizzle", cur_ext) == 0) { _GL_ARB_texture_swizzle = true; continue; }
			else if(!GL_ARB_texture_view && strcmp("GL_ARB_texture_view", cur_ext) == 0) { _GL_ARB_texture_view = true; continue; }
			else if(!GL_ARB_timer_query && strcmp("GL_ARB_timer_query", cur_ext) == 0) { _GL_ARB_timer_query = true; continue; }
			else if(!GL_ARB_transform_feedback2 && strcmp("GL_ARB_transform_feedback2", cur_ext) == 0) { _GL_ARB_transform_feedback2 = true; continue; }
			else if(!GL_ARB_transform_feedback3 && strcmp("GL_ARB_transform_feedback3", cur_ext) == 0) { _GL_ARB_transform_feedback3 = true; continue; }
			else if(!GL_ARB_transform_feedback_instanced && strcmp("GL_ARB_transform_feedback_instanced", cur_ext) == 0) { _GL_ARB_transform_feedback_instanced = true; continue; }
			else if(!GL_ARB_transform_feedback_overflow_query && strcmp("GL_ARB_transform_feedback_overflow_query", cur_ext) == 0) { _GL_ARB_transform_feedback_overflow_query = true; continue; }
			else if(!GL_ARB_uniform_buffer_object && strcmp("GL_ARB_uniform_buffer_object", cur_ext) == 0) { _GL_ARB_uniform_buffer_object = true; continue; }
			else if(!GL_ARB_vertex_array_bgra && strcmp("GL_ARB_vertex_array_bgra", cur_ext) == 0) { _GL_ARB_vertex_array_bgra = true; continue; }
			else if(!GL_ARB_vertex_array_object && strcmp("GL_ARB_vertex_array_object", cur_ext) == 0) { _GL_ARB_vertex_array_object = true; continue; }
			else if(!GL_ARB_vertex_attrib_64bit && strcmp("GL_ARB_vertex_attrib_64bit", cur_ext) == 0) { _GL_ARB_vertex_attrib_64bit = true; continue; }
			else if(!GL_ARB_vertex_attrib_binding && strcmp("GL_ARB_vertex_attrib_binding", cur_ext) == 0) { _GL_ARB_vertex_attrib_binding = true; continue; }
			else if(!GL_ARB_vertex_type_10f_11f_11f_rev && strcmp("GL_ARB_vertex_type_10f_11f_11f_rev", cur_ext) == 0) { _GL_ARB_vertex_type_10f_11f_11f_rev = true; continue; }
			else if(!GL_ARB_vertex_type_2_10_10_10_rev && strcmp("GL_ARB_vertex_type_2_10_10_10_rev", cur_ext) == 0) { _GL_ARB_vertex_type_2_10_10_10_rev = true; continue; }
			else if(!GL_KHR_blend_equation_advanced_coherent && strcmp("GL_KHR_blend_equation_advanced_coherent", cur_ext) == 0) { _GL_KHR_blend_equation_advanced_coherent = true; continue; }
			else if(!GL_KHR_context_flush_control && strcmp("GL_KHR_context_flush_control", cur_ext) == 0) { _GL_KHR_context_flush_control = true; continue; }
			else if(!GL_KHR_debug && strcmp("GL_KHR_debug", cur_ext) == 0) { _GL_KHR_debug = true; continue; }
			else if(!GL_KHR_no_error && strcmp("GL_KHR_no_error", cur_ext) == 0) { _GL_KHR_no_error = true; continue; }
			else if(!GL_KHR_robust_buffer_access_behavior && strcmp("GL_KHR_robust_buffer_access_behavior", cur_ext) == 0) { _GL_KHR_robust_buffer_access_behavior = true; continue; }
			else if(!GL_KHR_robustness && strcmp("GL_KHR_robustness", cur_ext) == 0) { _GL_KHR_robustness = true; continue; }
			if(!GL_KHR_shader_subgroup && strcmp("GL_KHR_shader_subgroup", cur_ext) == 0) { _GL_KHR_shader_subgroup = true; continue; }
			else if(!GL_KHR_texture_compression_astc_hdr && strcmp("GL_KHR_texture_compression_astc_hdr", cur_ext) == 0) { _GL_KHR_texture_compression_astc_hdr = true; continue; }
			else if(!GL_KHR_texture_compression_astc_ldr && strcmp("GL_KHR_texture_compression_astc_ldr", cur_ext) == 0) { _GL_KHR_texture_compression_astc_ldr = true; continue; }
			else if(!GL_KHR_texture_compression_astc_sliced_3d && strcmp("GL_KHR_texture_compression_astc_sliced_3d", cur_ext) == 0) { _GL_KHR_texture_compression_astc_sliced_3d = true; continue; }
			else if(!GL_APPLE_rgb_422 && strcmp("GL_APPLE_rgb_422", cur_ext) == 0) { _GL_APPLE_rgb_422 = true; continue; }
			else if(!GL_EXT_EGL_sync && strcmp("GL_EXT_EGL_sync", cur_ext) == 0) { _GL_EXT_EGL_sync = true; continue; }
			else if(!GL_EXT_multiview_tessellation_geometry_shader && strcmp("GL_EXT_multiview_tessellation_geometry_shader", cur_ext) == 0) { _GL_EXT_multiview_tessellation_geometry_shader = true; continue; }
			else if(!GL_EXT_multiview_texture_multisample && strcmp("GL_EXT_multiview_texture_multisample", cur_ext) == 0) { _GL_EXT_multiview_texture_multisample = true; continue; }
			else if(!GL_EXT_multiview_timer_query && strcmp("GL_EXT_multiview_timer_query", cur_ext) == 0) { _GL_EXT_multiview_timer_query = true; continue; }
			else if(!GL_EXT_post_depth_coverage && strcmp("GL_EXT_post_depth_coverage", cur_ext) == 0) { _GL_EXT_post_depth_coverage = true; continue; }
			else if(!GL_EXT_shader_framebuffer_fetch && strcmp("GL_EXT_shader_framebuffer_fetch", cur_ext) == 0) { _GL_EXT_shader_framebuffer_fetch = true; continue; }
			else if(!GL_EXT_shader_integer_mix && strcmp("GL_EXT_shader_integer_mix", cur_ext) == 0) { _GL_EXT_shader_integer_mix = true; continue; }
			else if(!GL_EXT_texture_compression_s3tc && strcmp("GL_EXT_texture_compression_s3tc", cur_ext) == 0) { _GL_EXT_texture_compression_s3tc = true; continue; }
			else if(!GL_EXT_texture_filter_minmax && strcmp("GL_EXT_texture_filter_minmax", cur_ext) == 0) { _GL_EXT_texture_filter_minmax = true; continue; }
			else if(!GL_EXT_texture_sRGB_R8 && strcmp("GL_EXT_texture_sRGB_R8", cur_ext) == 0) { _GL_EXT_texture_sRGB_R8 = true; continue; }
			else if(!GL_EXT_texture_sRGB_decode && strcmp("GL_EXT_texture_sRGB_decode", cur_ext) == 0) { _GL_EXT_texture_sRGB_decode = true; continue; }
			else if(!GL_EXT_texture_shadow_lod && strcmp("GL_EXT_texture_shadow_lod", cur_ext) == 0) { _GL_EXT_texture_shadow_lod = true; continue; }
			else if(!GL_INTEL_blackhole_render && strcmp("GL_INTEL_blackhole_render", cur_ext) == 0) { _GL_INTEL_blackhole_render = true; continue; }
			else if(!GL_INTEL_conservative_rasterization && strcmp("GL_INTEL_conservative_rasterization", cur_ext) == 0) { _GL_INTEL_conservative_rasterization = true; continue; }
			else if(!GL_MESA_framebuffer_flip_x && strcmp("GL_MESA_framebuffer_flip_x", cur_ext) == 0) { _GL_MESA_framebuffer_flip_x = true; continue; }
			else if(!GL_MESA_framebuffer_swap_xy && strcmp("GL_MESA_framebuffer_swap_xy", cur_ext) == 0) { _GL_MESA_framebuffer_swap_xy = true; continue; }
			else if(!GL_NV_blend_equation_advanced_coherent && strcmp("GL_NV_blend_equation_advanced_coherent", cur_ext) == 0) { _GL_NV_blend_equation_advanced_coherent = true; continue; }
			else if(!GL_NV_blend_minmax_factor && strcmp("GL_NV_blend_minmax_factor", cur_ext) == 0) { _GL_NV_blend_minmax_factor = true; continue; }
			else if(!GL_NV_compute_shader_derivatives && strcmp("GL_NV_compute_shader_derivatives", cur_ext) == 0) { _GL_NV_compute_shader_derivatives = true; continue; }
			else if(!GL_NV_conservative_raster_pre_snap && strcmp("GL_NV_conservative_raster_pre_snap", cur_ext) == 0) { _GL_NV_conservative_raster_pre_snap = true; continue; }
			else if(!GL_NV_conservative_raster_underestimation && strcmp("GL_NV_conservative_raster_underestimation", cur_ext) == 0) { _GL_NV_conservative_raster_underestimation = true; continue; }
			else if(!GL_NV_fill_rectangle && strcmp("GL_NV_fill_rectangle", cur_ext) == 0) { _GL_NV_fill_rectangle = true; continue; }
			else if(!GL_NV_fragment_shader_barycentric && strcmp("GL_NV_fragment_shader_barycentric", cur_ext) == 0) { _GL_NV_fragment_shader_barycentric = true; continue; }
			else if(!GL_NV_fragment_shader_interlock && strcmp("GL_NV_fragment_shader_interlock", cur_ext) == 0) { _GL_NV_fragment_shader_interlock = true; continue; }
			else if(!GL_NV_geometry_shader_passthrough && strcmp("GL_NV_geometry_shader_passthrough", cur_ext) == 0) { _GL_NV_geometry_shader_passthrough = true; continue; }
			else if(!GL_NV_path_rendering_shared_edge && strcmp("GL_NV_path_rendering_shared_edge", cur_ext) == 0) { _GL_NV_path_rendering_shared_edge = true; continue; }
			else if(!GL_NV_primitive_shading_rate && strcmp("GL_NV_primitive_shading_rate", cur_ext) == 0) { _GL_NV_primitive_shading_rate = true; continue; }
			else if(!GL_NV_representative_fragment_test && strcmp("GL_NV_representative_fragment_test", cur_ext) == 0) { _GL_NV_representative_fragment_test = true; continue; }
			else if(!GL_NV_sample_mask_override_coverage && strcmp("GL_NV_sample_mask_override_coverage", cur_ext) == 0) { _GL_NV_sample_mask_override_coverage = true; continue; }
			else if(!GL_NV_shader_atomic_counters && strcmp("GL_NV_shader_atomic_counters", cur_ext) == 0) { _GL_NV_shader_atomic_counters = true; continue; }
			else if(!GL_NV_shader_atomic_float && strcmp("GL_NV_shader_atomic_float", cur_ext) == 0) { _GL_NV_shader_atomic_float = true; continue; }
			else if(!GL_NV_shader_atomic_float64 && strcmp("GL_NV_shader_atomic_float64", cur_ext) == 0) { _GL_NV_shader_atomic_float64 = true; continue; }
			else if(!GL_NV_shader_atomic_fp16_vector && strcmp("GL_NV_shader_atomic_fp16_vector", cur_ext) == 0) { _GL_NV_shader_atomic_fp16_vector = true; continue; }
			else if(!GL_NV_shader_atomic_int64 && strcmp("GL_NV_shader_atomic_int64", cur_ext) == 0) { _GL_NV_shader_atomic_int64 = true; continue; }
			else if(!GL_NV_shader_buffer_store && strcmp("GL_NV_shader_buffer_store", cur_ext) == 0) { _GL_NV_shader_buffer_store = true; continue; }
			else if(!GL_NV_shader_subgroup_partitioned && strcmp("GL_NV_shader_subgroup_partitioned", cur_ext) == 0) { _GL_NV_shader_subgroup_partitioned = true; continue; }
			else if(!GL_NV_shader_texture_footprint && strcmp("GL_NV_shader_texture_footprint", cur_ext) == 0) { _GL_NV_shader_texture_footprint = true; continue; }
			else if(!GL_NV_shader_thread_group && strcmp("GL_NV_shader_thread_group", cur_ext) == 0) { _GL_NV_shader_thread_group = true; continue; }
			else if(!GL_NV_shader_thread_shuffle && strcmp("GL_NV_shader_thread_shuffle", cur_ext) == 0) { _GL_NV_shader_thread_shuffle = true; continue; }
			else if(!GL_NV_stereo_view_rendering && strcmp("GL_NV_stereo_view_rendering", cur_ext) == 0) { _GL_NV_stereo_view_rendering = true; continue; }
			else if(!GL_NV_texture_rectangle_compressed && strcmp("GL_NV_texture_rectangle_compressed", cur_ext) == 0) { _GL_NV_texture_rectangle_compressed = true; continue; }
			else if(!GL_NV_uniform_buffer_unified_memory && strcmp("GL_NV_uniform_buffer_unified_memory", cur_ext) == 0) { _GL_NV_uniform_buffer_unified_memory = true; continue; }
			else if(!GL_NV_viewport_array2 && strcmp("GL_NV_viewport_array2", cur_ext) == 0) { _GL_NV_viewport_array2 = true; continue; }
			else if(!GL_OVR_multiview2 && strcmp("GL_OVR_multiview2", cur_ext) == 0) { _GL_OVR_multiview2 = true; continue; }
		}
	}
	else
	{
		using namespace axl::glfl::core::GL2;
		using namespace axl::glfl::core::GL3;
		using namespace axl::glfl::core::GLARB;
		using namespace axl::glfl::core::GLAMD;
		using namespace axl::glfl::core::GLAPPLE;
		using namespace axl::glfl::core::GLEXT;
		using namespace axl::glfl::core::GLINTEL;
		using namespace axl::glfl::core::GLKHR;
		using namespace axl::glfl::core::GLMESA;
		using namespace axl::glfl::core::GLNV;
		using namespace axl::glfl::core::GLOVR;
		int index = 0, last = 0;
		bool done = false;
		const char* ext = (const char*)glGetString(GL_EXTENSIONS);
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
			if(!GL_ARB_ES2_compatibility && strncmp("GL_ARB_ES2_compatibility ", cur_ext, 24) == 0) { _GL_ARB_ES2_compatibility = true; continue; }
			else if(!GL_ARB_ES3_1_compatibility && strncmp("GL_ARB_ES3_1_compatibility ", cur_ext, 26) == 0) { _GL_ARB_ES3_1_compatibility = true; continue; }
			else if(!GL_ARB_ES3_2_compatibility && strncmp("GL_ARB_ES3_2_compatibility ", cur_ext, 26) == 0) { _GL_ARB_ES3_2_compatibility = true; continue; }
			else if(!GL_ARB_arrays_of_arrays && strncmp("GL_ARB_arrays_of_arrays ", cur_ext, 23) == 0) { _GL_ARB_arrays_of_arrays = true; continue; }
			else if(!GL_ARB_base_instance && strncmp("GL_ARB_base_instance ", cur_ext, 20) == 0) { _GL_ARB_base_instance = true; continue; }
			else if(!GL_ARB_blend_func_extended && strncmp("GL_ARB_blend_func_extended ", cur_ext, 26) == 0) { _GL_ARB_blend_func_extended = true; continue; }
			else if(!GL_ARB_buffer_storage && strncmp("GL_ARB_buffer_storage ", cur_ext, 21) == 0) { _GL_ARB_buffer_storage = true; continue; }
			else if(!GL_ARB_clear_buffer_object && strncmp("GL_ARB_clear_buffer_object ", cur_ext, 26) == 0) { _GL_ARB_clear_buffer_object = true; continue; }
			else if(!GL_ARB_clear_texture && strncmp("GL_ARB_clear_texture ", cur_ext, 20) == 0) { _GL_ARB_clear_texture = true; continue; }
			else if(!GL_ARB_clip_control && strncmp("GL_ARB_clip_control ", cur_ext, 19) == 0) { _GL_ARB_clip_control = true; continue; }
			else if(!GL_ARB_compressed_texture_pixel_storage && strncmp("GL_ARB_compressed_texture_pixel_storage ", cur_ext, 39) == 0) { _GL_ARB_compressed_texture_pixel_storage = true; continue; }
			else if(!GL_ARB_compute_shader && strncmp("GL_ARB_compute_shader ", cur_ext, 21) == 0) { _GL_ARB_compute_shader = true; continue; }
			else if(!GL_ARB_conditional_render_inverted && strncmp("GL_ARB_conditional_render_inverted ", cur_ext, 34) == 0) { _GL_ARB_conditional_render_inverted = true; continue; }
			else if(!GL_ARB_conservative_depth && strncmp("GL_ARB_conservative_depth ", cur_ext, 25) == 0) { _GL_ARB_conservative_depth = true; continue; }
			else if(!GL_ARB_copy_buffer && strncmp("GL_ARB_copy_buffer ", cur_ext, 18) == 0) { _GL_ARB_copy_buffer = true; continue; }
			else if(!GL_ARB_copy_image && strncmp("GL_ARB_copy_image ", cur_ext, 17) == 0) { _GL_ARB_copy_image = true; continue; }
			else if(!GL_ARB_cull_distance && strncmp("GL_ARB_cull_distance ", cur_ext, 20) == 0) { _GL_ARB_cull_distance = true; continue; }
			else if(!GL_ARB_depth_buffer_float && strncmp("GL_ARB_depth_buffer_float ", cur_ext, 25) == 0) { _GL_ARB_depth_buffer_float = true; continue; }
			else if(!GL_ARB_depth_clamp && strncmp("GL_ARB_depth_clamp ", cur_ext, 18) == 0) { _GL_ARB_depth_clamp = true; continue; }
			else if(!GL_ARB_derivative_control && strncmp("GL_ARB_derivative_control ", cur_ext, 25) == 0) { _GL_ARB_derivative_control = true; continue; }
			else if(!GL_ARB_direct_state_access && strncmp("GL_ARB_direct_state_access ", cur_ext, 26) == 0) { _GL_ARB_direct_state_access = true; continue; }
			else if(!GL_ARB_draw_elements_base_vertex && strncmp("GL_ARB_draw_elements_base_vertex ", cur_ext, 32) == 0) { _GL_ARB_draw_elements_base_vertex = true; continue; }
			else if(!GL_ARB_draw_indirect && strncmp("GL_ARB_draw_indirect ", cur_ext, 20) == 0) { _GL_ARB_draw_indirect = true; continue; }
			else if(!GL_ARB_draw_instanced && strncmp("GL_ARB_draw_instanced ", cur_ext, 21) == 0) { _GL_ARB_draw_instanced = true; continue; }
			else if(!GL_ARB_enhanced_layouts && strncmp("GL_ARB_enhanced_layouts ", cur_ext, 23) == 0) { _GL_ARB_enhanced_layouts = true; continue; }
			else if(!GL_ARB_explicit_attrib_location && strncmp("GL_ARB_explicit_attrib_location ", cur_ext, 31) == 0) { _GL_ARB_explicit_attrib_location = true; continue; }
			else if(!GL_ARB_explicit_uniform_location && strncmp("GL_ARB_explicit_uniform_location ", cur_ext, 32) == 0) { _GL_ARB_explicit_uniform_location = true; continue; }
			else if(!GL_ARB_fragment_coord_conventions && strncmp("GL_ARB_fragment_coord_conventions ", cur_ext, 33) == 0) { _GL_ARB_fragment_coord_conventions = true; continue; }
			else if(!GL_ARB_fragment_layer_viewport && strncmp("GL_ARB_fragment_layer_viewport ", cur_ext, 30) == 0) { _GL_ARB_fragment_layer_viewport = true; continue; }
			else if(!GL_ARB_fragment_shader_interlock && strncmp("GL_ARB_fragment_shader_interlock ", cur_ext, 32) == 0) { _GL_ARB_fragment_shader_interlock = true; continue; }
			else if(!GL_ARB_framebuffer_no_attachments && strncmp("GL_ARB_framebuffer_no_attachments ", cur_ext, 33) == 0) { _GL_ARB_framebuffer_no_attachments = true; continue; }
			else if(!GL_ARB_framebuffer_object && strncmp("GL_ARB_framebuffer_object ", cur_ext, 25) == 0) { _GL_ARB_framebuffer_object = true; continue; }
			else if(!GL_ARB_framebuffer_sRGB && strncmp("GL_ARB_framebuffer_sRGB ", cur_ext, 23) == 0) { _GL_ARB_framebuffer_sRGB = true; continue; }
			else if(!GL_ARB_get_program_binary && strncmp("GL_ARB_get_program_binary ", cur_ext, 25) == 0) { _GL_ARB_get_program_binary = true; continue; }
			else if(!GL_ARB_get_texture_sub_image && strncmp("GL_ARB_get_texture_sub_image ", cur_ext, 28) == 0) { _GL_ARB_get_texture_sub_image = true; continue; }
			else if(!GL_ARB_gpu_shader5 && strncmp("GL_ARB_gpu_shader5 ", cur_ext, 18) == 0) { _GL_ARB_gpu_shader5 = true; continue; }
			else if(!GL_ARB_gpu_shader_fp64 && strncmp("GL_ARB_gpu_shader_fp64 ", cur_ext, 22) == 0) { _GL_ARB_gpu_shader_fp64 = true; continue; }
			else if(!GL_ARB_half_float_vertex && strncmp("GL_ARB_half_float_vertex ", cur_ext, 24) == 0) { _GL_ARB_half_float_vertex = true; continue; }
			else if(!GL_ARB_imaging && strncmp("GL_ARB_imaging ", cur_ext, 14) == 0) { _GL_ARB_imaging = true; continue; }
			else if(!GL_ARB_internalformat_query && strncmp("GL_ARB_internalformat_query ", cur_ext, 27) == 0) { _GL_ARB_internalformat_query = true; continue; }
			else if(!GL_ARB_invalidate_subdata && strncmp("GL_ARB_invalidate_subdata ", cur_ext, 25) == 0) { _GL_ARB_invalidate_subdata = true; continue; }
			else if(!GL_ARB_map_buffer_alignment && strncmp("GL_ARB_map_buffer_alignment ", cur_ext, 27) == 0) { _GL_ARB_map_buffer_alignment = true; continue; }
			else if(!GL_ARB_map_buffer_range && strncmp("GL_ARB_map_buffer_range ", cur_ext, 23) == 0) { _GL_ARB_map_buffer_range = true; continue; }
			else if(!GL_ARB_multi_bind && strncmp("GL_ARB_multi_bind ", cur_ext, 17) == 0) { _GL_ARB_multi_bind = true; continue; }
			else if(!GL_ARB_multi_draw_indirect && strncmp("GL_ARB_multi_draw_indirect ", cur_ext, 26) == 0) { _GL_ARB_multi_draw_indirect = true; continue; }
			else if(!GL_ARB_occlusion_query2 && strncmp("GL_ARB_occlusion_query2 ", cur_ext, 23) == 0) { _GL_ARB_occlusion_query2 = true; continue; }
			else if(!GL_ARB_polygon_offset_clamp && strncmp("GL_ARB_polygon_offset_clamp ", cur_ext, 27) == 0) { _GL_ARB_polygon_offset_clamp = true; continue; }
			else if(!GL_ARB_post_depth_coverage && strncmp("GL_ARB_post_depth_coverage ", cur_ext, 26) == 0) { _GL_ARB_post_depth_coverage = true; continue; }
			else if(!GL_ARB_program_interface_query && strncmp("GL_ARB_program_interface_query ", cur_ext, 30) == 0) { _GL_ARB_program_interface_query = true; continue; }
			else if(!GL_ARB_provoking_vertex && strncmp("GL_ARB_provoking_vertex ", cur_ext, 23) == 0) { _GL_ARB_provoking_vertex = true; continue; }
			else if(!GL_ARB_query_buffer_object && strncmp("GL_ARB_query_buffer_object ", cur_ext, 26) == 0) { _GL_ARB_query_buffer_object = true; continue; }
			else if(!GL_ARB_robust_buffer_access_behavior && strncmp("GL_ARB_robust_buffer_access_behavior ", cur_ext, 36) == 0) { _GL_ARB_robust_buffer_access_behavior = true; continue; }
			else if(!GL_ARB_robustness_isolation && strncmp("GL_ARB_robustness_isolation ", cur_ext, 27) == 0) { _GL_ARB_robustness_isolation = true; continue; }
			else if(!GL_ARB_sampler_objects && strncmp("GL_ARB_sampler_objects ", cur_ext, 22) == 0) { _GL_ARB_sampler_objects = true; continue; }
			else if(!GL_ARB_seamless_cube_map && strncmp("GL_ARB_seamless_cube_map ", cur_ext, 24) == 0) { _GL_ARB_seamless_cube_map = true; continue; }
			else if(!GL_ARB_seamless_cubemap_per_texture && strncmp("GL_ARB_seamless_cubemap_per_texture ", cur_ext, 35) == 0) { _GL_ARB_seamless_cubemap_per_texture = true; continue; }
			else if(!GL_ARB_separate_shader_objects && strncmp("GL_ARB_separate_shader_objects ", cur_ext, 30) == 0) { _GL_ARB_separate_shader_objects = true; continue; }
			else if(!GL_ARB_shader_atomic_counter_ops && strncmp("GL_ARB_shader_atomic_counter_ops ", cur_ext, 32) == 0) { _GL_ARB_shader_atomic_counter_ops = true; continue; }
			else if(!GL_ARB_shader_atomic_counters && strncmp("GL_ARB_shader_atomic_counters ", cur_ext, 29) == 0) { _GL_ARB_shader_atomic_counters = true; continue; }
			else if(!GL_ARB_shader_ballot && strncmp("GL_ARB_shader_ballot ", cur_ext, 20) == 0) { _GL_ARB_shader_ballot = true; continue; }
			else if(!GL_ARB_shader_bit_encoding && strncmp("GL_ARB_shader_bit_encoding ", cur_ext, 26) == 0) { _GL_ARB_shader_bit_encoding = true; continue; }
			else if(!GL_ARB_shader_clock && strncmp("GL_ARB_shader_clock ", cur_ext, 19) == 0) { _GL_ARB_shader_clock = true; continue; }
			else if(!GL_ARB_shader_draw_parameters && strncmp("GL_ARB_shader_draw_parameters ", cur_ext, 29) == 0) { _GL_ARB_shader_draw_parameters = true; continue; }
			else if(!GL_ARB_shader_group_vote && strncmp("GL_ARB_shader_group_vote ", cur_ext, 24) == 0) { _GL_ARB_shader_group_vote = true; continue; }
			else if(!GL_ARB_shader_image_load_store && strncmp("GL_ARB_shader_image_load_store ", cur_ext, 30) == 0) { _GL_ARB_shader_image_load_store = true; continue; }
			else if(!GL_ARB_shader_image_size && strncmp("GL_ARB_shader_image_size ", cur_ext, 24) == 0) { _GL_ARB_shader_image_size = true; continue; }
			else if(!GL_ARB_shader_precision && strncmp("GL_ARB_shader_precision ", cur_ext, 23) == 0) { _GL_ARB_shader_precision = true; continue; }
			else if(!GL_ARB_shader_stencil_export && strncmp("GL_ARB_shader_stencil_export ", cur_ext, 28) == 0) { _GL_ARB_shader_stencil_export = true; continue; }
			else if(!GL_ARB_shader_storage_buffer_object && strncmp("GL_ARB_shader_storage_buffer_object ", cur_ext, 35) == 0) { _GL_ARB_shader_storage_buffer_object = true; continue; }
			else if(!GL_ARB_shader_subroutine && strncmp("GL_ARB_shader_subroutine ", cur_ext, 25) == 0) { _GL_ARB_shader_subroutine = true; continue; }
			else if(!GL_ARB_shader_texture_image_samples && strncmp("GL_ARB_shader_texture_image_samples ", cur_ext, 35) == 0) { _GL_ARB_shader_texture_image_samples = true; continue; }
			else if(!GL_ARB_shader_viewport_layer_array && strncmp("GL_ARB_shader_viewport_layer_array ", cur_ext, 34) == 0) { _GL_ARB_shader_viewport_layer_array = true; continue; }
			else if(!GL_ARB_shading_language_420pack && strncmp("GL_ARB_shading_language_420pack ", cur_ext, 31) == 0) { _GL_ARB_shading_language_420pack = true; continue; }
			else if(!GL_ARB_sparse_texture2 && strncmp("GL_ARB_sparse_texture2 ", cur_ext, 22) == 0) { _GL_ARB_sparse_texture2 = true; continue; }
			else if(!GL_ARB_sparse_texture_clamp && strncmp("GL_ARB_sparse_texture_clamp ", cur_ext, 27) == 0) { _GL_ARB_sparse_texture_clamp = true; continue; }
			else if(!GL_ARB_spirv_extensions && strncmp("GL_ARB_spirv_extensions ", cur_ext, 23) == 0) { _GL_ARB_spirv_extensions = true; continue; }
			else if(!GL_ARB_stencil_texturing && strncmp("GL_ARB_stencil_texturing ", cur_ext, 24) == 0) { _GL_ARB_stencil_texturing = true; continue; }
			else if(!GL_ARB_sync && strncmp("GL_ARB_sync ", cur_ext, 11) == 0) { _GL_ARB_sync = true; continue; }
			else if(!GL_ARB_tessellation_shader && strncmp("GL_ARB_tessellation_shader ", cur_ext, 26) == 0) { _GL_ARB_tessellation_shader = true; continue; }
			else if(!GL_ARB_texture_barrier && strncmp("GL_ARB_texture_barrier ", cur_ext, 22) == 0) { _GL_ARB_texture_barrier = true; continue; }
			else if(!GL_ARB_texture_border_clamp && strncmp("GL_ARB_texture_border_clamp ", cur_ext, 27) == 0) { _GL_ARB_texture_border_clamp = true; continue; }
			else if(!GL_ARB_texture_buffer_object_rgb32 && strncmp("GL_ARB_texture_buffer_object_rgb32 ", cur_ext, 34) == 0) { _GL_ARB_texture_buffer_object_rgb32 = true; continue; }
			else if(!GL_ARB_texture_buffer_range && strncmp("GL_ARB_texture_buffer_range ", cur_ext, 27) == 0) { _GL_ARB_texture_buffer_range = true; continue; }
			else if(!GL_ARB_texture_compression_bptc && strncmp("GL_ARB_texture_compression_bptc ", cur_ext, 31) == 0) { _GL_ARB_texture_compression_bptc = true; continue; }
			else if(!GL_ARB_texture_compression_rgtc && strncmp("GL_ARB_texture_compression_rgtc ", cur_ext, 31) == 0) { _GL_ARB_texture_compression_rgtc = true; continue; }
			else if(!GL_ARB_texture_cube_map_array && strncmp("GL_ARB_texture_cube_map_array ", cur_ext, 29) == 0) { _GL_ARB_texture_cube_map_array = true; continue; }
			else if(!GL_ARB_texture_filter_anisotropic && strncmp("GL_ARB_texture_filter_anisotropic ", cur_ext, 33) == 0) { _GL_ARB_texture_filter_anisotropic = true; continue; }
			else if(!GL_ARB_texture_filter_minmax && strncmp("GL_ARB_texture_filter_minmax ", cur_ext, 28) == 0) { _GL_ARB_texture_filter_minmax = true; continue; }
			else if(!GL_ARB_texture_gather && strncmp("GL_ARB_texture_gather ", cur_ext, 21) == 0) { _GL_ARB_texture_gather = true; continue; }
			else if(!GL_ARB_texture_mirror_clamp_to_edge && strncmp("GL_ARB_texture_mirror_clamp_to_edge ", cur_ext, 35) == 0) { _GL_ARB_texture_mirror_clamp_to_edge = true; continue; }
			else if(!GL_ARB_texture_mirrored_repeat && strncmp("GL_ARB_texture_mirrored_repeat ", cur_ext, 30) == 0) { _GL_ARB_texture_mirrored_repeat = true; continue; }
			else if(!GL_ARB_texture_multisample && strncmp("GL_ARB_texture_multisample ", cur_ext, 26) == 0) { _GL_ARB_texture_multisample = true; continue; }
			else if(!GL_ARB_texture_non_power_of_two && strncmp("GL_ARB_texture_non_power_of_two ", cur_ext, 31) == 0) { _GL_ARB_texture_non_power_of_two = true; continue; }
			else if(!GL_ARB_texture_query_levels && strncmp("GL_ARB_texture_query_levels ", cur_ext, 27) == 0) { _GL_ARB_texture_query_levels = true; continue; }
			else if(!GL_ARB_texture_query_lod && strncmp("GL_ARB_texture_query_lod ", cur_ext, 24) == 0) { _GL_ARB_texture_query_lod = true; continue; }
			else if(!GL_ARB_texture_rg && strncmp("GL_ARB_texture_rg ", cur_ext, 17) == 0) { _GL_ARB_texture_rg = true; continue; }
			else if(!GL_ARB_texture_rgb10_a2ui && strncmp("GL_ARB_texture_rgb10_a2ui ", cur_ext, 25) == 0) { _GL_ARB_texture_rgb10_a2ui = true; continue; }
			else if(!GL_ARB_texture_stencil8 && strncmp("GL_ARB_texture_stencil8 ", cur_ext, 23) == 0) { _GL_ARB_texture_stencil8 = true; continue; }
			else if(!GL_ARB_texture_storage && strncmp("GL_ARB_texture_storage ", cur_ext, 22) == 0) { _GL_ARB_texture_storage = true; continue; }
			else if(!GL_ARB_texture_storage_multisample && strncmp("GL_ARB_texture_storage_multisample ", cur_ext, 34) == 0) { _GL_ARB_texture_storage_multisample = true; continue; }
			else if(!GL_ARB_texture_swizzle && strncmp("GL_ARB_texture_swizzle ", cur_ext, 22) == 0) { _GL_ARB_texture_swizzle = true; continue; }
			else if(!GL_ARB_texture_view && strncmp("GL_ARB_texture_view ", cur_ext, 19) == 0) { _GL_ARB_texture_view = true; continue; }
			else if(!GL_ARB_timer_query && strncmp("GL_ARB_timer_query ", cur_ext, 18) == 0) { _GL_ARB_timer_query = true; continue; }
			else if(!GL_ARB_transform_feedback2 && strncmp("GL_ARB_transform_feedback2 ", cur_ext, 26) == 0) { _GL_ARB_transform_feedback2 = true; continue; }
			else if(!GL_ARB_transform_feedback3 && strncmp("GL_ARB_transform_feedback3 ", cur_ext, 26) == 0) { _GL_ARB_transform_feedback3 = true; continue; }
			else if(!GL_ARB_transform_feedback_instanced && strncmp("GL_ARB_transform_feedback_instanced ", cur_ext, 35) == 0) { _GL_ARB_transform_feedback_instanced = true; continue; }
			else if(!GL_ARB_transform_feedback_overflow_query && strncmp("GL_ARB_transform_feedback_overflow_query ", cur_ext, 40) == 0) { _GL_ARB_transform_feedback_overflow_query = true; continue; }
			else if(!GL_ARB_uniform_buffer_object && strncmp("GL_ARB_uniform_buffer_object ", cur_ext, 28) == 0) { _GL_ARB_uniform_buffer_object = true; continue; }
			else if(!GL_ARB_vertex_array_bgra && strncmp("GL_ARB_vertex_array_bgra ", cur_ext, 24) == 0) { _GL_ARB_vertex_array_bgra = true; continue; }
			else if(!GL_ARB_vertex_array_object && strncmp("GL_ARB_vertex_array_object ", cur_ext, 26) == 0) { _GL_ARB_vertex_array_object = true; continue; }
			else if(!GL_ARB_vertex_attrib_64bit && strncmp("GL_ARB_vertex_attrib_64bit ", cur_ext, 26) == 0) { _GL_ARB_vertex_attrib_64bit = true; continue; }
			else if(!GL_ARB_vertex_attrib_binding && strncmp("GL_ARB_vertex_attrib_binding ", cur_ext, 28) == 0) { _GL_ARB_vertex_attrib_binding = true; continue; }
			else if(!GL_ARB_vertex_type_10f_11f_11f_rev && strncmp("GL_ARB_vertex_type_10f_11f_11f_rev ", cur_ext, 34) == 0) { _GL_ARB_vertex_type_10f_11f_11f_rev = true; continue; }
			else if(!GL_ARB_vertex_type_2_10_10_10_rev && strncmp("GL_ARB_vertex_type_2_10_10_10_rev ", cur_ext, 33) == 0) { _GL_ARB_vertex_type_2_10_10_10_rev = true; continue; }
			else if(!GL_KHR_blend_equation_advanced_coherent && strncmp("GL_KHR_blend_equation_advanced_coherent ", cur_ext, 39) == 0) { _GL_KHR_blend_equation_advanced_coherent = true; continue; }
			else if(!GL_KHR_context_flush_control && strncmp("GL_KHR_context_flush_control ", cur_ext, 28) == 0) { _GL_KHR_context_flush_control = true; continue; }
			else if(!GL_KHR_debug && strncmp("GL_KHR_debug ", cur_ext, 12) == 0) { _GL_KHR_debug = true; continue; }
			else if(!GL_KHR_no_error && strncmp("GL_KHR_no_error ", cur_ext, 15) == 0) { _GL_KHR_no_error = true; continue; }
			else if(!GL_KHR_robust_buffer_access_behavior && strncmp("GL_KHR_robust_buffer_access_behavior ", cur_ext, 36) == 0) { _GL_KHR_robust_buffer_access_behavior = true; continue; }
			else if(!GL_KHR_robustness && strncmp("GL_KHR_robustness ", cur_ext, 17) == 0) { _GL_KHR_robustness = true; continue; }
			if(!GL_KHR_shader_subgroup && strncmp("GL_KHR_shader_subgroup", cur_ext , 22) == 0) { _GL_KHR_shader_subgroup = true; continue; }
			else if(!GL_KHR_texture_compression_astc_hdr && strncmp("GL_KHR_texture_compression_astc_hdr ", cur_ext, 35) == 0) { _GL_KHR_texture_compression_astc_hdr = true; continue; }
			else if(!GL_KHR_texture_compression_astc_ldr && strncmp("GL_KHR_texture_compression_astc_ldr ", cur_ext, 35) == 0) { _GL_KHR_texture_compression_astc_ldr = true; continue; }
			else if(!GL_KHR_texture_compression_astc_sliced_3d && strncmp("GL_KHR_texture_compression_astc_sliced_3d ", cur_ext, 42) == 0) { _GL_KHR_texture_compression_astc_sliced_3d = true; continue; }
			else if(!GL_APPLE_rgb_422 && strncmp("GL_APPLE_rgb_422 ", cur_ext, 16) == 0) { _GL_APPLE_rgb_422 = true; continue; }
			else if(!GL_EXT_EGL_sync && strncmp("GL_EXT_EGL_sync ", cur_ext, 15) == 0) { _GL_EXT_EGL_sync = true; continue; }
			else if(!GL_EXT_multiview_tessellation_geometry_shader && strncmp("GL_EXT_multiview_tessellation_geometry_shader ", cur_ext, 45) == 0) { _GL_EXT_multiview_tessellation_geometry_shader = true; continue; }
			else if(!GL_EXT_multiview_texture_multisample && strncmp("GL_EXT_multiview_texture_multisample ", cur_ext, 36) == 0) { _GL_EXT_multiview_texture_multisample = true; continue; }
			else if(!GL_EXT_multiview_timer_query && strncmp("GL_EXT_multiview_timer_query ", cur_ext, 28) == 0) { _GL_EXT_multiview_timer_query = true; continue; }
			else if(!GL_EXT_post_depth_coverage && strncmp("GL_EXT_post_depth_coverage ", cur_ext, 26) == 0) { _GL_EXT_post_depth_coverage = true; continue; }
			else if(!GL_EXT_shader_framebuffer_fetch && strncmp("GL_EXT_shader_framebuffer_fetch ", cur_ext, 31) == 0) { _GL_EXT_shader_framebuffer_fetch = true; continue; }
			else if(!GL_EXT_shader_integer_mix && strncmp("GL_EXT_shader_integer_mix ", cur_ext, 25) == 0) { _GL_EXT_shader_integer_mix = true; continue; }
			else if(!GL_EXT_texture_compression_s3tc && strncmp("GL_EXT_texture_compression_s3tc ", cur_ext, 31) == 0) { _GL_EXT_texture_compression_s3tc = true; continue; }
			else if(!GL_EXT_texture_filter_minmax && strncmp("GL_EXT_texture_filter_minmax ", cur_ext, 28) == 0) { _GL_EXT_texture_filter_minmax = true; continue; }
			else if(!GL_EXT_texture_sRGB_R8 && strncmp("GL_EXT_texture_sRGB_R8 ", cur_ext, 22) == 0) { _GL_EXT_texture_sRGB_R8 = true; continue; }
			else if(!GL_EXT_texture_sRGB_decode && strncmp("GL_EXT_texture_sRGB_decode ", cur_ext, 26) == 0) { _GL_EXT_texture_sRGB_decode = true; continue; }
			else if(!GL_EXT_texture_shadow_lod && strncmp("GL_EXT_texture_shadow_lod ", cur_ext, 25) == 0) { _GL_EXT_texture_shadow_lod = true; continue; }
			else if(!GL_INTEL_blackhole_render && strncmp("GL_INTEL_blackhole_render ", cur_ext, 25) == 0) { _GL_INTEL_blackhole_render = true; continue; }
			else if(!GL_INTEL_conservative_rasterization && strncmp("GL_INTEL_conservative_rasterization ", cur_ext, 35) == 0) { _GL_INTEL_conservative_rasterization = true; continue; }
			else if(!GL_MESA_framebuffer_flip_x && strncmp("GL_MESA_framebuffer_flip_x ", cur_ext, 26) == 0) { _GL_MESA_framebuffer_flip_x = true; continue; }
			else if(!GL_MESA_framebuffer_swap_xy && strncmp("GL_MESA_framebuffer_swap_xy ", cur_ext, 27) == 0) { _GL_MESA_framebuffer_swap_xy = true; continue; }
			else if(!GL_NV_blend_equation_advanced_coherent && strncmp("GL_NV_blend_equation_advanced_coherent ", cur_ext, 38) == 0) { _GL_NV_blend_equation_advanced_coherent = true; continue; }
			else if(!GL_NV_blend_minmax_factor && strncmp("GL_NV_blend_minmax_factor ", cur_ext, 25) == 0) { _GL_NV_blend_minmax_factor = true; continue; }
			else if(!GL_NV_compute_shader_derivatives && strncmp("GL_NV_compute_shader_derivatives ", cur_ext, 32) == 0) { _GL_NV_compute_shader_derivatives = true; continue; }
			else if(!GL_NV_conservative_raster_pre_snap && strncmp("GL_NV_conservative_raster_pre_snap ", cur_ext, 34) == 0) { _GL_NV_conservative_raster_pre_snap = true; continue; }
			else if(!GL_NV_conservative_raster_underestimation && strncmp("GL_NV_conservative_raster_underestimation ", cur_ext, 41) == 0) { _GL_NV_conservative_raster_underestimation = true; continue; }
			else if(!GL_NV_fill_rectangle && strncmp("GL_NV_fill_rectangle ", cur_ext, 20) == 0) { _GL_NV_fill_rectangle = true; continue; }
			else if(!GL_NV_fragment_shader_barycentric && strncmp("GL_NV_fragment_shader_barycentric ", cur_ext, 33) == 0) { _GL_NV_fragment_shader_barycentric = true; continue; }
			else if(!GL_NV_fragment_shader_interlock && strncmp("GL_NV_fragment_shader_interlock ", cur_ext, 31) == 0) { _GL_NV_fragment_shader_interlock = true; continue; }
			else if(!GL_NV_geometry_shader_passthrough && strncmp("GL_NV_geometry_shader_passthrough ", cur_ext, 33) == 0) { _GL_NV_geometry_shader_passthrough = true; continue; }
			else if(!GL_NV_path_rendering_shared_edge && strncmp("GL_NV_path_rendering_shared_edge ", cur_ext, 32) == 0) { _GL_NV_path_rendering_shared_edge = true; continue; }
			else if(!GL_NV_primitive_shading_rate && strncmp("GL_NV_primitive_shading_rate ", cur_ext, 28) == 0) { _GL_NV_primitive_shading_rate = true; continue; }
			else if(!GL_NV_representative_fragment_test && strncmp("GL_NV_representative_fragment_test ", cur_ext, 34) == 0) { _GL_NV_representative_fragment_test = true; continue; }
			else if(!GL_NV_sample_mask_override_coverage && strncmp("GL_NV_sample_mask_override_coverage ", cur_ext, 35) == 0) { _GL_NV_sample_mask_override_coverage = true; continue; }
			else if(!GL_NV_shader_atomic_counters && strncmp("GL_NV_shader_atomic_counters ", cur_ext, 28) == 0) { _GL_NV_shader_atomic_counters = true; continue; }
			else if(!GL_NV_shader_atomic_float && strncmp("GL_NV_shader_atomic_float ", cur_ext, 25) == 0) { _GL_NV_shader_atomic_float = true; continue; }
			else if(!GL_NV_shader_atomic_float64 && strncmp("GL_NV_shader_atomic_float64 ", cur_ext, 27) == 0) { _GL_NV_shader_atomic_float64 = true; continue; }
			else if(!GL_NV_shader_atomic_fp16_vector && strncmp("GL_NV_shader_atomic_fp16_vector ", cur_ext, 31) == 0) { _GL_NV_shader_atomic_fp16_vector = true; continue; }
			else if(!GL_NV_shader_atomic_int64 && strncmp("GL_NV_shader_atomic_int64 ", cur_ext, 25) == 0) { _GL_NV_shader_atomic_int64 = true; continue; }
			else if(!GL_NV_shader_buffer_store && strncmp("GL_NV_shader_buffer_store ", cur_ext, 25) == 0) { _GL_NV_shader_buffer_store = true; continue; }
			else if(!GL_NV_shader_subgroup_partitioned && strncmp("GL_NV_shader_subgroup_partitioned ", cur_ext, 33) == 0) { _GL_NV_shader_subgroup_partitioned = true; continue; }
			else if(!GL_NV_shader_texture_footprint && strncmp("GL_NV_shader_texture_footprint ", cur_ext, 30) == 0) { _GL_NV_shader_texture_footprint = true; continue; }
			else if(!GL_NV_shader_thread_group && strncmp("GL_NV_shader_thread_group ", cur_ext, 25) == 0) { _GL_NV_shader_thread_group = true; continue; }
			else if(!GL_NV_shader_thread_shuffle && strncmp("GL_NV_shader_thread_shuffle ", cur_ext, 27) == 0) { _GL_NV_shader_thread_shuffle = true; continue; }
			else if(!GL_NV_stereo_view_rendering && strncmp("GL_NV_stereo_view_rendering ", cur_ext, 27) == 0) { _GL_NV_stereo_view_rendering = true; continue; }
			else if(!GL_NV_texture_rectangle_compressed && strncmp("GL_NV_texture_rectangle_compressed ", cur_ext, 34) == 0) { _GL_NV_texture_rectangle_compressed = true; continue; }
			else if(!GL_NV_uniform_buffer_unified_memory && strncmp("GL_NV_uniform_buffer_unified_memory ", cur_ext, 35) == 0) { _GL_NV_uniform_buffer_unified_memory = true; continue; }
			else if(!GL_NV_viewport_array2 && strncmp("GL_NV_viewport_array2 ", cur_ext, 21) == 0) { _GL_NV_viewport_array2 = true; continue; }
			else if(!GL_OVR_multiview2 && strncmp("GL_OVR_multiview2 ", cur_ext, 17) == 0) { _GL_OVR_multiview2 = true; continue; }
		}
	}
	return (initialized = true);
}

} // namespace axl::glfl::core
} // namespace axl::glfl
} // namespace axl