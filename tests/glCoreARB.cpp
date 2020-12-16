#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <axl.glfl/lib.hpp>
#include <axl.glfl/glCoreARB.hpp>
#include "Assert.hpp"

#define LOG_B(b) printf("%c - %s - "#b"\n", (b ? ' ' : '*'), (b ? "OK" : "NA"));

int main(int argc, char *argv[])
{
	bool verbose = argc > 1 && (0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--verbose"));
	using namespace axl::glfl;
	using namespace axl::glfl::lib;
	printf(">> axl.glfl %s library %u.%u.%u - glCoreARB test\n", (BUILD == Build::SHARED ? "SHARED" : "STATIC"), VERSION.major, VERSION.minor, VERSION.patch);
	puts("----------------------------------------");
	{
		Assertve(core::load(), verbose);
		{
			using namespace axl::glfl::core::GL1;
			if(GL_VERSION_1_0)
			{
				LOG_B(GL_VERSION_1_0);
				Assertv((glCullFace), verbose);
				Assertv((glFrontFace), verbose);
				Assertv((glHint), verbose);
				Assertv((glLineWidth), verbose);
				Assertv((glPointSize), verbose);
				Assertv((glPolygonMode), verbose);
				Assertv((glScissor), verbose);
				Assertv((glTexParameterf), verbose);
				Assertv((glTexParameterfv), verbose);
				Assertv((glTexParameteri), verbose);
				Assertv((glTexParameteriv), verbose);
				Assertv((glTexImage1D), verbose);
				Assertv((glTexImage2D), verbose);
				Assertv((glDrawBuffer), verbose);
				Assertv((glClear), verbose);
				Assertv((glClearColor), verbose);
				Assertv((glClearStencil), verbose);
				Assertv((glClearDepth), verbose);
				Assertv((glStencilMask), verbose);
				Assertv((glColorMask), verbose);
				Assertv((glDepthMask), verbose);
				Assertv((glDisable), verbose);
				Assertv((glEnable), verbose);
				Assertv((glFinish), verbose);
				Assertv((glFlush), verbose);
				Assertv((glBlendFunc), verbose);
				Assertv((glLogicOp), verbose);
				Assertv((glStencilFunc), verbose);
				Assertv((glStencilOp), verbose);
				Assertv((glDepthFunc), verbose);
				Assertv((glPixelStoref), verbose);
				Assertv((glPixelStorei), verbose);
				Assertv((glReadBuffer), verbose);
				Assertv((glReadPixels), verbose);
				Assertv((glGetBooleanv), verbose);
				Assertv((glGetDoublev), verbose);
				Assertv((glGetError), verbose);
				Assertv((glGetFloatv), verbose);
				Assertv((glGetIntegerv), verbose);
				Assertv((glGetString), verbose);
				Assertv((glGetTexImage), verbose);
				Assertv((glGetTexParameterfv), verbose);
				Assertv((glGetTexParameteriv), verbose);
				Assertv((glGetTexLevelParameterfv), verbose);
				Assertv((glGetTexLevelParameteriv), verbose);
				Assertv((glIsEnabled), verbose);
				Assertv((glDepthRange), verbose);
				Assertv((glViewport), verbose);
			}
			if(GL_VERSION_1_1)
			{
				LOG_B(GL_VERSION_1_1);
				Assertv((glDrawArrays), verbose);
				Assertv((glDrawElements), verbose);
				Assertv((glGetPointerv), verbose);
				Assertv((glPolygonOffset), verbose);
				Assertv((glCopyTexImage1D), verbose);
				Assertv((glCopyTexImage2D), verbose);
				Assertv((glCopyTexSubImage1D), verbose);
				Assertv((glCopyTexSubImage2D), verbose);
				Assertv((glTexSubImage1D), verbose);
				Assertv((glTexSubImage2D), verbose);
				Assertv((glBindTexture), verbose);
				Assertv((glDeleteTextures), verbose);
				Assertv((glGenTextures), verbose);
				Assertv((glIsTexture), verbose);
			}
			if(GL_VERSION_1_2)
			{
				LOG_B(GL_VERSION_1_2);
				Assertv((glDrawRangeElements), verbose);
				Assertv((glTexImage3D), verbose);
				Assertv((glTexSubImage3D), verbose);
				Assertv((glCopyTexSubImage3D), verbose);
			}
			if(GL_VERSION_1_3)
			{
				LOG_B(GL_VERSION_1_3);
				Assertv((glActiveTexture), verbose);
				Assertv((glSampleCoverage), verbose);
				Assertv((glCompressedTexImage3D), verbose);
				Assertv((glCompressedTexImage2D), verbose);
				Assertv((glCompressedTexImage1D), verbose);
				Assertv((glCompressedTexSubImage3D), verbose);
				Assertv((glCompressedTexSubImage2D), verbose);
				Assertv((glCompressedTexSubImage1D), verbose);
				Assertv((glGetCompressedTexImage), verbose);
			}
			if(GL_VERSION_1_4)
			{
				LOG_B(GL_VERSION_1_4);
				Assertv((glBlendFuncSeparate), verbose);
				Assertv((glMultiDrawArrays), verbose);
				Assertv((glMultiDrawElements), verbose);
				Assertv((glPointParameterf), verbose);
				Assertv((glPointParameterfv), verbose);
				Assertv((glPointParameteri), verbose);
				Assertv((glPointParameteriv), verbose);
				Assertv((glBlendColor), verbose);
				Assertv((glBlendEquation), verbose);
			}
			if(GL_VERSION_1_5)
			{
				LOG_B(GL_VERSION_1_5);
				Assertv((glGenQueries), verbose);
				Assertv((glDeleteQueries), verbose);
				Assertv((glIsQuery), verbose);
				Assertv((glBeginQuery), verbose);
				Assertv((glEndQuery), verbose);
				Assertv((glGetQueryiv), verbose);
				Assertv((glGetQueryObjectiv), verbose);
				Assertv((glGetQueryObjectuiv), verbose);
				Assertv((glBindBuffer), verbose);
				Assertv((glDeleteBuffers), verbose);
				Assertv((glGenBuffers), verbose);
				Assertv((glIsBuffer), verbose);
				Assertv((glBufferData), verbose);
				Assertv((glBufferSubData), verbose);
				Assertv((glGetBufferSubData), verbose);
				Assertv((glMapBuffer), verbose);
				Assertv((glUnmapBuffer), verbose);
				Assertv((glGetBufferParameteriv), verbose);
				Assertv((glGetBufferPointerv), verbose);
			}
		}
		{
			using namespace axl::glfl::core::GL2;
			if(GL_VERSION_2_0)
			{
				LOG_B(GL_VERSION_2_0);
				Assertv((glBlendEquationSeparate), verbose);
				Assertv((glDrawBuffers), verbose);
				Assertv((glStencilOpSeparate), verbose);
				Assertv((glStencilFuncSeparate), verbose);
				Assertv((glStencilMaskSeparate), verbose);
				Assertv((glAttachShader), verbose);
				Assertv((glBindAttribLocation), verbose);
				Assertv((glCompileShader), verbose);
				Assertv((glCreateProgram), verbose);
				Assertv((glCreateShader), verbose);
				Assertv((glDeleteProgram), verbose);
				Assertv((glDeleteShader), verbose);
				Assertv((glDetachShader), verbose);
				Assertv((glDisableVertexAttribArray), verbose);
				Assertv((glEnableVertexAttribArray), verbose);
				Assertv((glGetActiveAttrib), verbose);
				Assertv((glGetActiveUniform), verbose);
				Assertv((glGetAttachedShaders), verbose);
				Assertv((glGetAttribLocation), verbose);
				Assertv((glGetProgramiv), verbose);
				Assertv((glGetProgramInfoLog), verbose);
				Assertv((glGetShaderiv), verbose);
				Assertv((glGetShaderInfoLog), verbose);
				Assertv((glGetShaderSource), verbose);
				Assertv((glGetUniformLocation), verbose);
				Assertv((glGetUniformfv), verbose);
				Assertv((glGetUniformiv), verbose);
				Assertv((glGetVertexAttribdv), verbose);
				Assertv((glGetVertexAttribfv), verbose);
				Assertv((glGetVertexAttribiv), verbose);
				Assertv((glGetVertexAttribPointerv), verbose);
				Assertv((glIsProgram), verbose);
				Assertv((glIsShader), verbose);
				Assertv((glLinkProgram), verbose);
				Assertv((glShaderSource), verbose);
				Assertv((glUseProgram), verbose);
				Assertv((glUniform1f), verbose);
				Assertv((glUniform2f), verbose);
				Assertv((glUniform3f), verbose);
				Assertv((glUniform4f), verbose);
				Assertv((glUniform1i), verbose);
				Assertv((glUniform2i), verbose);
				Assertv((glUniform3i), verbose);
				Assertv((glUniform4i), verbose);
				Assertv((glUniform1fv), verbose);
				Assertv((glUniform2fv), verbose);
				Assertv((glUniform3fv), verbose);
				Assertv((glUniform4fv), verbose);
				Assertv((glUniform1iv), verbose);
				Assertv((glUniform2iv), verbose);
				Assertv((glUniform3iv), verbose);
				Assertv((glUniform4iv), verbose);
				Assertv((glUniformMatrix2fv), verbose);
				Assertv((glUniformMatrix3fv), verbose);
				Assertv((glUniformMatrix4fv), verbose);
				Assertv((glValidateProgram), verbose);
				Assertv((glVertexAttrib1d), verbose);
				Assertv((glVertexAttrib1dv), verbose);
				Assertv((glVertexAttrib1f), verbose);
				Assertv((glVertexAttrib1fv), verbose);
				Assertv((glVertexAttrib1s), verbose);
				Assertv((glVertexAttrib1sv), verbose);
				Assertv((glVertexAttrib2d), verbose);
				Assertv((glVertexAttrib2dv), verbose);
				Assertv((glVertexAttrib2f), verbose);
				Assertv((glVertexAttrib2fv), verbose);
				Assertv((glVertexAttrib2s), verbose);
				Assertv((glVertexAttrib2sv), verbose);
				Assertv((glVertexAttrib3d), verbose);
				Assertv((glVertexAttrib3dv), verbose);
				Assertv((glVertexAttrib3f), verbose);
				Assertv((glVertexAttrib3fv), verbose);
				Assertv((glVertexAttrib3s), verbose);
				Assertv((glVertexAttrib3sv), verbose);
				Assertv((glVertexAttrib4Nbv), verbose);
				Assertv((glVertexAttrib4Niv), verbose);
				Assertv((glVertexAttrib4Nsv), verbose);
				Assertv((glVertexAttrib4Nub), verbose);
				Assertv((glVertexAttrib4Nubv), verbose);
				Assertv((glVertexAttrib4Nuiv), verbose);
				Assertv((glVertexAttrib4Nusv), verbose);
				Assertv((glVertexAttrib4bv), verbose);
				Assertv((glVertexAttrib4d), verbose);
				Assertv((glVertexAttrib4dv), verbose);
				Assertv((glVertexAttrib4f), verbose);
				Assertv((glVertexAttrib4fv), verbose);
				Assertv((glVertexAttrib4iv), verbose);
				Assertv((glVertexAttrib4s), verbose);
				Assertv((glVertexAttrib4sv), verbose);
				Assertv((glVertexAttrib4ubv), verbose);
				Assertv((glVertexAttrib4uiv), verbose);
				Assertv((glVertexAttrib4usv), verbose);
				Assertv((glVertexAttribPointer), verbose);
			}
			if(GL_VERSION_2_1)
			{
				LOG_B(GL_VERSION_2_1);
				Assertv((glUniformMatrix2x3fv), verbose);
				Assertv((glUniformMatrix3x2fv), verbose);
				Assertv((glUniformMatrix2x4fv), verbose);
				Assertv((glUniformMatrix4x2fv), verbose);
				Assertv((glUniformMatrix3x4fv), verbose);
				Assertv((glUniformMatrix4x3fv), verbose);
			}
		}
		{
			using namespace axl::glfl::core::GL3;
			if(GL_VERSION_3_0)
			{
				LOG_B(GL_VERSION_3_0);
				Assertv((glColorMaski), verbose);
				Assertv((glGetBooleani_v), verbose);
				Assertv((glGetIntegeri_v), verbose);
				Assertv((glEnablei), verbose);
				Assertv((glDisablei), verbose);
				Assertv((glIsEnabledi), verbose);
				Assertv((glBeginTransformFeedback), verbose);
				Assertv((glEndTransformFeedback), verbose);
				Assertv((glBindBufferRange), verbose);
				Assertv((glBindBufferBase), verbose);
				Assertv((glTransformFeedbackVaryings), verbose);
				Assertv((glGetTransformFeedbackVarying), verbose);
				Assertv((glClampColor), verbose);
				Assertv((glBeginConditionalRender), verbose);
				Assertv((glEndConditionalRender), verbose);
				Assertv((glVertexAttribIPointer), verbose);
				Assertv((glGetVertexAttribIiv), verbose);
				Assertv((glGetVertexAttribIuiv), verbose);
				Assertv((glVertexAttribI1i), verbose);
				Assertv((glVertexAttribI2i), verbose);
				Assertv((glVertexAttribI3i), verbose);
				Assertv((glVertexAttribI4i), verbose);
				Assertv((glVertexAttribI1ui), verbose);
				Assertv((glVertexAttribI2ui), verbose);
				Assertv((glVertexAttribI3ui), verbose);
				Assertv((glVertexAttribI4ui), verbose);
				Assertv((glVertexAttribI1iv), verbose);
				Assertv((glVertexAttribI2iv), verbose);
				Assertv((glVertexAttribI3iv), verbose);
				Assertv((glVertexAttribI4iv), verbose);
				Assertv((glVertexAttribI1uiv), verbose);
				Assertv((glVertexAttribI2uiv), verbose);
				Assertv((glVertexAttribI3uiv), verbose);
				Assertv((glVertexAttribI4uiv), verbose);
				Assertv((glVertexAttribI4bv), verbose);
				Assertv((glVertexAttribI4sv), verbose);
				Assertv((glVertexAttribI4ubv), verbose);
				Assertv((glVertexAttribI4usv), verbose);
				Assertv((glGetUniformuiv), verbose);
				Assertv((glBindFragDataLocation), verbose);
				Assertv((glGetFragDataLocation), verbose);
				Assertv((glUniform1ui), verbose);
				Assertv((glUniform2ui), verbose);
				Assertv((glUniform3ui), verbose);
				Assertv((glUniform4ui), verbose);
				Assertv((glUniform1uiv), verbose);
				Assertv((glUniform2uiv), verbose);
				Assertv((glUniform3uiv), verbose);
				Assertv((glUniform4uiv), verbose);
				Assertv((glTexParameterIiv), verbose);
				Assertv((glTexParameterIuiv), verbose);
				Assertv((glGetTexParameterIiv), verbose);
				Assertv((glGetTexParameterIuiv), verbose);
				Assertv((glClearBufferiv), verbose);
				Assertv((glClearBufferuiv), verbose);
				Assertv((glClearBufferfv), verbose);
				Assertv((glClearBufferfi), verbose);
				Assertv((glGetStringi), verbose);
				Assertv((glIsRenderbuffer), verbose);
				Assertv((glBindRenderbuffer), verbose);
				Assertv((glDeleteRenderbuffers), verbose);
				Assertv((glGenRenderbuffers), verbose);
				Assertv((glRenderbufferStorage), verbose);
				Assertv((glGetRenderbufferParameteriv), verbose);
				Assertv((glIsFramebuffer), verbose);
				Assertv((glBindFramebuffer), verbose);
				Assertv((glDeleteFramebuffers), verbose);
				Assertv((glGenFramebuffers), verbose);
				Assertv((glCheckFramebufferStatus), verbose);
				Assertv((glFramebufferTexture1D), verbose);
				Assertv((glFramebufferTexture2D), verbose);
				Assertv((glFramebufferTexture3D), verbose);
				Assertv((glFramebufferRenderbuffer), verbose);
				Assertv((glGetFramebufferAttachmentParameteriv), verbose);
				Assertv((glGenerateMipmap), verbose);
				Assertv((glBlitFramebuffer), verbose);
				Assertv((glRenderbufferStorageMultisample), verbose);
				Assertv((glFramebufferTextureLayer), verbose);
				Assertv((glMapBufferRange), verbose);
				Assertv((glFlushMappedBufferRange), verbose);
				Assertv((glBindVertexArray), verbose);
				Assertv((glDeleteVertexArrays), verbose);
				Assertv((glGenVertexArrays), verbose);
				Assertv((glIsVertexArray), verbose);
			}
			if(GL_VERSION_3_1)
			{
				LOG_B(GL_VERSION_3_1);
				Assertv((glDrawArraysInstanced), verbose);
				Assertv((glDrawElementsInstanced), verbose);
				Assertv((glTexBuffer), verbose);
				Assertv((glPrimitiveRestartIndex), verbose);
				Assertv((glCopyBufferSubData), verbose);
				Assertv((glGetUniformIndices), verbose);
				Assertv((glGetActiveUniformsiv), verbose);
				Assertv((glGetActiveUniformName), verbose);
				Assertv((glGetUniformBlockIndex), verbose);
				Assertv((glGetActiveUniformBlockiv), verbose);
				Assertv((glGetActiveUniformBlockName), verbose);
				Assertv((glUniformBlockBinding), verbose);
			}
			if(GL_VERSION_3_2)
			{
				LOG_B(GL_VERSION_3_2);
				Assertv((glDrawElementsBaseVertex), verbose);
				Assertv((glDrawRangeElementsBaseVertex), verbose);
				Assertv((glDrawElementsInstancedBaseVertex), verbose);
				Assertv((glMultiDrawElementsBaseVertex), verbose);
				Assertv((glProvokingVertex), verbose);
				Assertv((glFenceSync), verbose);
				Assertv((glIsSync), verbose);
				Assertv((glDeleteSync), verbose);
				Assertv((glClientWaitSync), verbose);
				Assertv((glWaitSync), verbose);
				Assertv((glGetInteger64v), verbose);
				Assertv((glGetSynciv), verbose);
				Assertv((glGetInteger64i_v), verbose);
				Assertv((glGetBufferParameteri64v), verbose);
				Assertv((glFramebufferTexture), verbose);
				Assertv((glTexImage2DMultisample), verbose);
				Assertv((glTexImage3DMultisample), verbose);
				Assertv((glGetMultisamplefv), verbose);
				Assertv((glSampleMaski), verbose);
			}
			if(GL_VERSION_3_3)
			{
				LOG_B(GL_VERSION_3_3);
				Assertv((glBindFragDataLocationIndexed), verbose);
				Assertv((glGetFragDataIndex), verbose);
				Assertv((glGenSamplers), verbose);
				Assertv((glDeleteSamplers), verbose);
				Assertv((glIsSampler), verbose);
				Assertv((glBindSampler), verbose);
				Assertv((glSamplerParameteri), verbose);
				Assertv((glSamplerParameteriv), verbose);
				Assertv((glSamplerParameterf), verbose);
				Assertv((glSamplerParameterfv), verbose);
				Assertv((glSamplerParameterIiv), verbose);
				Assertv((glSamplerParameterIuiv), verbose);
				Assertv((glGetSamplerParameteriv), verbose);
				Assertv((glGetSamplerParameterIiv), verbose);
				Assertv((glGetSamplerParameterfv), verbose);
				Assertv((glGetSamplerParameterIuiv), verbose);
				Assertv((glQueryCounter), verbose);
				Assertv((glGetQueryObjecti64v), verbose);
				Assertv((glGetQueryObjectui64v), verbose);
				Assertv((glVertexAttribDivisor), verbose);
				Assertv((glVertexAttribP1ui), verbose);
				Assertv((glVertexAttribP1uiv), verbose);
				Assertv((glVertexAttribP2ui), verbose);
				Assertv((glVertexAttribP2uiv), verbose);
				Assertv((glVertexAttribP3ui), verbose);
				Assertv((glVertexAttribP3uiv), verbose);
				Assertv((glVertexAttribP4ui), verbose);
				Assertv((glVertexAttribP4uiv), verbose);
			}
		}
		{
			using namespace axl::glfl::core::GL4;
			if(GL_VERSION_4_0)
			{
				LOG_B(GL_VERSION_4_0);
				Assertv((glMinSampleShading), verbose);
				Assertv((glBlendEquationi), verbose);
				Assertv((glBlendEquationSeparatei), verbose);
				Assertv((glBlendFunci), verbose);
				Assertv((glBlendFuncSeparatei), verbose);
				Assertv((glDrawArraysIndirect), verbose);
				Assertv((glDrawElementsIndirect), verbose);
				Assertv((glUniform1d), verbose);
				Assertv((glUniform2d), verbose);
				Assertv((glUniform3d), verbose);
				Assertv((glUniform4d), verbose);
				Assertv((glUniform1dv), verbose);
				Assertv((glUniform2dv), verbose);
				Assertv((glUniform3dv), verbose);
				Assertv((glUniform4dv), verbose);
				Assertv((glUniformMatrix2dv), verbose);
				Assertv((glUniformMatrix3dv), verbose);
				Assertv((glUniformMatrix4dv), verbose);
				Assertv((glUniformMatrix2x3dv), verbose);
				Assertv((glUniformMatrix2x4dv), verbose);
				Assertv((glUniformMatrix3x2dv), verbose);
				Assertv((glUniformMatrix3x4dv), verbose);
				Assertv((glUniformMatrix4x2dv), verbose);
				Assertv((glUniformMatrix4x3dv), verbose);
				Assertv((glGetUniformdv), verbose);
				Assertv((glGetSubroutineUniformLocation), verbose);
				Assertv((glGetSubroutineIndex), verbose);
				Assertv((glGetActiveSubroutineUniformiv), verbose);
				Assertv((glGetActiveSubroutineUniformName), verbose);
				Assertv((glGetActiveSubroutineName), verbose);
				Assertv((glUniformSubroutinesuiv), verbose);
				Assertv((glGetUniformSubroutineuiv), verbose);
				Assertv((glGetProgramStageiv), verbose);
				Assertv((glPatchParameteri), verbose);
				Assertv((glPatchParameterfv), verbose);
				Assertv((glBindTransformFeedback), verbose);
				Assertv((glDeleteTransformFeedbacks), verbose);
				Assertv((glGenTransformFeedbacks), verbose);
				Assertv((glIsTransformFeedback), verbose);
				Assertv((glPauseTransformFeedback), verbose);
				Assertv((glResumeTransformFeedback), verbose);
				Assertv((glDrawTransformFeedback), verbose);
				Assertv((glDrawTransformFeedbackStream), verbose);
				Assertv((glBeginQueryIndexed), verbose);
				Assertv((glEndQueryIndexed), verbose);
				Assertv((glGetQueryIndexediv), verbose);
			}
			if(GL_VERSION_4_1)
			{
				LOG_B(GL_VERSION_4_1);
				Assertv((glReleaseShaderCompiler), verbose);
				Assertv((glShaderBinary), verbose);
				Assertv((glGetShaderPrecisionFormat), verbose);
				Assertv((glDepthRangef), verbose);
				Assertv((glClearDepthf), verbose);
				Assertv((glGetProgramBinary), verbose);
				Assertv((glProgramBinary), verbose);
				Assertv((glProgramParameteri), verbose);
				Assertv((glUseProgramStages), verbose);
				Assertv((glActiveShaderProgram), verbose);
				Assertv((glCreateShaderProgramv), verbose);
				Assertv((glBindProgramPipeline), verbose);
				Assertv((glDeleteProgramPipelines), verbose);
				Assertv((glGenProgramPipelines), verbose);
				Assertv((glIsProgramPipeline), verbose);
				Assertv((glGetProgramPipelineiv), verbose);
				Assertv((glProgramUniform1i), verbose);
				Assertv((glProgramUniform1iv), verbose);
				Assertv((glProgramUniform1f), verbose);
				Assertv((glProgramUniform1fv), verbose);
				Assertv((glProgramUniform1d), verbose);
				Assertv((glProgramUniform1dv), verbose);
				Assertv((glProgramUniform1ui), verbose);
				Assertv((glProgramUniform1uiv), verbose);
				Assertv((glProgramUniform2i), verbose);
				Assertv((glProgramUniform2iv), verbose);
				Assertv((glProgramUniform2f), verbose);
				Assertv((glProgramUniform2fv), verbose);
				Assertv((glProgramUniform2d), verbose);
				Assertv((glProgramUniform2dv), verbose);
				Assertv((glProgramUniform2ui), verbose);
				Assertv((glProgramUniform2uiv), verbose);
				Assertv((glProgramUniform3i), verbose);
				Assertv((glProgramUniform3iv), verbose);
				Assertv((glProgramUniform3f), verbose);
				Assertv((glProgramUniform3fv), verbose);
				Assertv((glProgramUniform3d), verbose);
				Assertv((glProgramUniform3dv), verbose);
				Assertv((glProgramUniform3ui), verbose);
				Assertv((glProgramUniform3uiv), verbose);
				Assertv((glProgramUniform4i), verbose);
				Assertv((glProgramUniform4iv), verbose);
				Assertv((glProgramUniform4f), verbose);
				Assertv((glProgramUniform4fv), verbose);
				Assertv((glProgramUniform4d), verbose);
				Assertv((glProgramUniform4dv), verbose);
				Assertv((glProgramUniform4ui), verbose);
				Assertv((glProgramUniform4uiv), verbose);
				Assertv((glProgramUniformMatrix2fv), verbose);
				Assertv((glProgramUniformMatrix3fv), verbose);
				Assertv((glProgramUniformMatrix4fv), verbose);
				Assertv((glProgramUniformMatrix2dv), verbose);
				Assertv((glProgramUniformMatrix3dv), verbose);
				Assertv((glProgramUniformMatrix4dv), verbose);
				Assertv((glProgramUniformMatrix2x3fv), verbose);
				Assertv((glProgramUniformMatrix3x2fv), verbose);
				Assertv((glProgramUniformMatrix2x4fv), verbose);
				Assertv((glProgramUniformMatrix4x2fv), verbose);
				Assertv((glProgramUniformMatrix3x4fv), verbose);
				Assertv((glProgramUniformMatrix4x3fv), verbose);
				Assertv((glProgramUniformMatrix2x3dv), verbose);
				Assertv((glProgramUniformMatrix3x2dv), verbose);
				Assertv((glProgramUniformMatrix2x4dv), verbose);
				Assertv((glProgramUniformMatrix4x2dv), verbose);
				Assertv((glProgramUniformMatrix3x4dv), verbose);
				Assertv((glProgramUniformMatrix4x3dv), verbose);
				Assertv((glValidateProgramPipeline), verbose);
				Assertv((glGetProgramPipelineInfoLog), verbose);
				Assertv((glVertexAttribL1d), verbose);
				Assertv((glVertexAttribL2d), verbose);
				Assertv((glVertexAttribL3d), verbose);
				Assertv((glVertexAttribL4d), verbose);
				Assertv((glVertexAttribL1dv), verbose);
				Assertv((glVertexAttribL2dv), verbose);
				Assertv((glVertexAttribL3dv), verbose);
				Assertv((glVertexAttribL4dv), verbose);
				Assertv((glVertexAttribLPointer), verbose);
				Assertv((glGetVertexAttribLdv), verbose);
				Assertv((glViewportArrayv), verbose);
				Assertv((glViewportIndexedf), verbose);
				Assertv((glViewportIndexedfv), verbose);
				Assertv((glScissorArrayv), verbose);
				Assertv((glScissorIndexed), verbose);
				Assertv((glScissorIndexedv), verbose);
				Assertv((glDepthRangeArrayv), verbose);
				Assertv((glDepthRangeIndexed), verbose);
				Assertv((glGetFloati_v), verbose);
				Assertv((glGetDoublei_v), verbose);
			}
			if(GL_VERSION_4_2)
			{
				LOG_B(GL_VERSION_4_2);
				Assertv((glDrawArraysInstancedBaseInstance), verbose);
				Assertv((glDrawElementsInstancedBaseInstance), verbose);
				Assertv((glDrawElementsInstancedBaseVertexBaseInstance), verbose);
				Assertv((glGetInternalformativ), verbose);
				Assertv((glGetActiveAtomicCounterBufferiv), verbose);
				Assertv((glBindImageTexture), verbose);
				Assertv((glMemoryBarrier), verbose);
				Assertv((glTexStorage1D), verbose);
				Assertv((glTexStorage2D), verbose);
				Assertv((glTexStorage3D), verbose);
				Assertv((glDrawTransformFeedbackInstanced), verbose);
				Assertv((glDrawTransformFeedbackStreamInstanced), verbose);
			}

			if(GL_VERSION_4_3)
			{
				LOG_B(GL_VERSION_4_3);
				Assertv((glClearBufferData), verbose);
				Assertv((glClearBufferSubData), verbose);
				Assertv((glDispatchCompute), verbose);
				Assertv((glDispatchComputeIndirect), verbose);
				Assertv((glCopyImageSubData), verbose);
				Assertv((glFramebufferParameteri), verbose);
				Assertv((glGetFramebufferParameteriv), verbose);
				Assertv((glGetInternalformati64v), verbose);
				Assertv((glInvalidateTexSubImage), verbose);
				Assertv((glInvalidateTexImage), verbose);
				Assertv((glInvalidateBufferSubData), verbose);
				Assertv((glInvalidateBufferData), verbose);
				Assertv((glInvalidateFramebuffer), verbose);
				Assertv((glInvalidateSubFramebuffer), verbose);
				Assertv((glMultiDrawArraysIndirect), verbose);
				Assertv((glMultiDrawElementsIndirect), verbose);
				Assertv((glGetProgramInterfaceiv), verbose);
				Assertv((glGetProgramResourceIndex), verbose);
				Assertv((glGetProgramResourceName), verbose);
				Assertv((glGetProgramResourceiv), verbose);
				Assertv((glGetProgramResourceLocation), verbose);
				Assertv((glGetProgramResourceLocationIndex), verbose);
				Assertv((glShaderStorageBlockBinding), verbose);
				Assertv((glTexBufferRange), verbose);
				Assertv((glTexStorage2DMultisample), verbose);
				Assertv((glTexStorage3DMultisample), verbose);
				Assertv((glTextureView), verbose);
				Assertv((glBindVertexBuffer), verbose);
				Assertv((glVertexAttribFormat), verbose);
				Assertv((glVertexAttribIFormat), verbose);
				Assertv((glVertexAttribLFormat), verbose);
				Assertv((glVertexAttribBinding), verbose);
				Assertv((glVertexBindingDivisor), verbose);
				Assertv((glDebugMessageControl), verbose);
				Assertv((glDebugMessageInsert), verbose);
				Assertv((glDebugMessageCallback), verbose);
				Assertv((glGetDebugMessageLog), verbose);
				Assertv((glPushDebugGroup), verbose);
				Assertv((glPopDebugGroup), verbose);
				Assertv((glObjectLabel), verbose);
				Assertv((glGetObjectLabel), verbose);
				Assertv((glObjectPtrLabel), verbose);
				Assertv((glGetObjectPtrLabel), verbose);
			}
			if(GL_VERSION_4_4)
			{
				LOG_B(GL_VERSION_4_4);
				Assertv((glBufferStorage), verbose);
				Assertv((glClearTexImage), verbose);
				Assertv((glClearTexSubImage), verbose);
				Assertv((glBindBuffersBase), verbose);
				Assertv((glBindBuffersRange), verbose);
				Assertv((glBindTextures), verbose);
				Assertv((glBindSamplers), verbose);
				Assertv((glBindImageTextures), verbose);
				Assertv((glBindVertexBuffers), verbose);
			}
			if(GL_VERSION_4_5)
			{
				LOG_B(GL_VERSION_4_5);
				Assertv((glClipControl), verbose);
				Assertv((glCreateTransformFeedbacks), verbose);
				Assertv((glTransformFeedbackBufferBase), verbose);
				Assertv((glTransformFeedbackBufferRange), verbose);
				Assertv((glGetTransformFeedbackiv), verbose);
				Assertv((glGetTransformFeedbacki_v), verbose);
				Assertv((glGetTransformFeedbacki64_v), verbose);
				Assertv((glCreateBuffers), verbose);
				Assertv((glNamedBufferStorage), verbose);
				Assertv((glNamedBufferData), verbose);
				Assertv((glNamedBufferSubData), verbose);
				Assertv((glCopyNamedBufferSubData), verbose);
				Assertv((glClearNamedBufferData), verbose);
				Assertv((glClearNamedBufferSubData), verbose);
				Assertv((glMapNamedBuffer), verbose);
				Assertv((glMapNamedBufferRange), verbose);
				Assertv((glUnmapNamedBuffer), verbose);
				Assertv((glFlushMappedNamedBufferRange), verbose);
				Assertv((glGetNamedBufferParameteriv), verbose);
				Assertv((glGetNamedBufferParameteri64v), verbose);
				Assertv((glGetNamedBufferPointerv), verbose);
				Assertv((glGetNamedBufferSubData), verbose);
				Assertv((glCreateFramebuffers), verbose);
				Assertv((glNamedFramebufferRenderbuffer), verbose);
				Assertv((glNamedFramebufferParameteri), verbose);
				Assertv((glNamedFramebufferTexture), verbose);
				Assertv((glNamedFramebufferTextureLayer), verbose);
				Assertv((glNamedFramebufferDrawBuffer), verbose);
				Assertv((glNamedFramebufferDrawBuffers), verbose);
				Assertv((glNamedFramebufferReadBuffer), verbose);
				Assertv((glInvalidateNamedFramebufferData), verbose);
				Assertv((glInvalidateNamedFramebufferSubData), verbose);
				Assertv((glClearNamedFramebufferiv), verbose);
				Assertv((glClearNamedFramebufferuiv), verbose);
				Assertv((glClearNamedFramebufferfv), verbose);
				Assertv((glClearNamedFramebufferfi), verbose);
				Assertv((glBlitNamedFramebuffer), verbose);
				Assertv((glCheckNamedFramebufferStatus), verbose);
				Assertv((glGetNamedFramebufferParameteriv), verbose);
				Assertv((glGetNamedFramebufferAttachmentParameteriv), verbose);
				Assertv((glCreateRenderbuffers), verbose);
				Assertv((glNamedRenderbufferStorage), verbose);
				Assertv((glNamedRenderbufferStorageMultisample), verbose);
				Assertv((glGetNamedRenderbufferParameteriv), verbose);
				Assertv((glCreateTextures), verbose);
				Assertv((glTextureBuffer), verbose);
				Assertv((glTextureBufferRange), verbose);
				Assertv((glTextureStorage1D), verbose);
				Assertv((glTextureStorage2D), verbose);
				Assertv((glTextureStorage3D), verbose);
				Assertv((glTextureStorage2DMultisample), verbose);
				Assertv((glTextureStorage3DMultisample), verbose);
				Assertv((glTextureSubImage1D), verbose);
				Assertv((glTextureSubImage2D), verbose);
				Assertv((glTextureSubImage3D), verbose);
				Assertv((glCompressedTextureSubImage1D), verbose);
				Assertv((glCompressedTextureSubImage2D), verbose);
				Assertv((glCompressedTextureSubImage3D), verbose);
				Assertv((glCopyTextureSubImage1D), verbose);
				Assertv((glCopyTextureSubImage2D), verbose);
				Assertv((glCopyTextureSubImage3D), verbose);
				Assertv((glTextureParameterf), verbose);
				Assertv((glTextureParameterfv), verbose);
				Assertv((glTextureParameteri), verbose);
				Assertv((glTextureParameterIiv), verbose);
				Assertv((glTextureParameterIuiv), verbose);
				Assertv((glTextureParameteriv), verbose);
				Assertv((glGenerateTextureMipmap), verbose);
				Assertv((glBindTextureUnit), verbose);
				Assertv((glGetTextureImage), verbose);
				Assertv((glGetCompressedTextureImage), verbose);
				Assertv((glGetTextureLevelParameterfv), verbose);
				Assertv((glGetTextureLevelParameteriv), verbose);
				Assertv((glGetTextureParameterfv), verbose);
				Assertv((glGetTextureParameterIiv), verbose);
				Assertv((glGetTextureParameterIuiv), verbose);
				Assertv((glGetTextureParameteriv), verbose);
				Assertv((glCreateVertexArrays), verbose);
				Assertv((glDisableVertexArrayAttrib), verbose);
				Assertv((glEnableVertexArrayAttrib), verbose);
				Assertv((glVertexArrayElementBuffer), verbose);
				Assertv((glVertexArrayVertexBuffer), verbose);
				Assertv((glVertexArrayVertexBuffers), verbose);
				Assertv((glVertexArrayAttribBinding), verbose);
				Assertv((glVertexArrayAttribFormat), verbose);
				Assertv((glVertexArrayAttribIFormat), verbose);
				Assertv((glVertexArrayAttribLFormat), verbose);
				Assertv((glVertexArrayBindingDivisor), verbose);
				Assertv((glGetVertexArrayiv), verbose);
				Assertv((glGetVertexArrayIndexediv), verbose);
				Assertv((glGetVertexArrayIndexed64iv), verbose);
				Assertv((glCreateSamplers), verbose);
				Assertv((glCreateProgramPipelines), verbose);
				Assertv((glCreateQueries), verbose);
				Assertv((glGetQueryBufferObjecti64v), verbose);
				Assertv((glGetQueryBufferObjectiv), verbose);
				Assertv((glGetQueryBufferObjectui64v), verbose);
				Assertv((glGetQueryBufferObjectuiv), verbose);
				Assertv((glMemoryBarrierByRegion), verbose);
				Assertv((glGetTextureSubImage), verbose);
				Assertv((glGetCompressedTextureSubImage), verbose);
				Assertv((glGetGraphicsResetStatus), verbose);
				Assertv((glGetnCompressedTexImage), verbose);
				Assertv((glGetnTexImage), verbose);
				Assertv((glGetnUniformdv), verbose);
				Assertv((glGetnUniformfv), verbose);
				Assertv((glGetnUniformiv), verbose);
				Assertv((glGetnUniformuiv), verbose);
				Assertv((glReadnPixels), verbose);
				Assertv((glTextureBarrier), verbose);
			}
			if(GL_VERSION_4_6)
			{
				LOG_B(GL_VERSION_4_6);
				Assertv((glSpecializeShader), verbose);
				Assertv((glMultiDrawArraysIndirectCount), verbose);
				Assertv((glMultiDrawElementsIndirectCount), verbose);
				Assertv((glPolygonOffsetClamp), verbose);
			}
		}
		// namespace GLARB
		{  
			using namespace axl::glfl::core::GLARB; 
			if(GL_ARB_ES2_compatibility) LOG_B(GL_ARB_ES2_compatibility);
			if(GL_ARB_ES3_1_compatibility) LOG_B(GL_ARB_ES3_1_compatibility);
			if(GL_ARB_ES3_2_compatibility)
			{
				LOG_B(GL_ARB_ES3_2_compatibility);
				Assertv((glPrimitiveBoundingBoxARB), verbose);
			}

			if(GL_ARB_ES3_compatibility) LOG_B(GL_ARB_ES3_compatibility);
			if(GL_ARB_arrays_of_arrays) LOG_B(GL_ARB_arrays_of_arrays);
			if(GL_ARB_base_instance) LOG_B(GL_ARB_base_instance);
			if(GL_ARB_bindless_texture)
			{
				LOG_B(GL_ARB_bindless_texture);
				Assertv((glGetTextureHandleARB), verbose);
				Assertv((glGetTextureSamplerHandleARB), verbose);
				Assertv((glMakeTextureHandleResidentARB), verbose);
				Assertv((glMakeTextureHandleNonResidentARB), verbose);
				Assertv((glGetImageHandleARB), verbose);
				Assertv((glMakeImageHandleResidentARB), verbose);
				Assertv((glMakeImageHandleNonResidentARB), verbose);
				Assertv((glUniformHandleui64ARB), verbose);
				Assertv((glUniformHandleui64vARB), verbose);
				Assertv((glProgramUniformHandleui64ARB), verbose);
				Assertv((glProgramUniformHandleui64vARB), verbose);
				Assertv((glIsTextureHandleResidentARB), verbose);
				Assertv((glIsImageHandleResidentARB), verbose);
				Assertv((glVertexAttribL1ui64ARB), verbose);
				Assertv((glVertexAttribL1ui64vARB), verbose);
				Assertv((glGetVertexAttribLui64vARB), verbose);
			}
			if(GL_ARB_blend_func_extended) LOG_B(GL_ARB_blend_func_extended);
			if(GL_ARB_buffer_storage) LOG_B(GL_ARB_buffer_storage);
			if(GL_ARB_cl_event)
			{
				LOG_B(GL_ARB_cl_event);
				Assertv((glCreateSyncFromCLeventARB), verbose);
			}
			if(GL_ARB_clear_buffer_object) LOG_B(GL_ARB_clear_buffer_object);
			if(GL_ARB_clear_texture) LOG_B(GL_ARB_clear_texture);
			if(GL_ARB_clip_control) LOG_B(GL_ARB_clip_control);
			if(GL_ARB_compressed_texture_pixel_storage) LOG_B(GL_ARB_compressed_texture_pixel_storage);
			if(GL_ARB_compute_shader) LOG_B(GL_ARB_compute_shader);
			if(GL_ARB_compute_variable_group_size)
			{
				LOG_B(GL_ARB_compute_variable_group_size);
				Assertv((glDispatchComputeGroupSizeARB), verbose);
			}
			if(GL_ARB_conditional_render_inverted) LOG_B(GL_ARB_conditional_render_inverted);
			if(GL_ARB_conservative_depth) LOG_B(GL_ARB_conservative_depth);
			if(GL_ARB_copy_buffer) LOG_B(GL_ARB_copy_buffer);
			if(GL_ARB_copy_image) LOG_B(GL_ARB_copy_image);
			if(GL_ARB_cull_distance) LOG_B(GL_ARB_cull_distance);
			if(GL_ARB_debug_output)
			{
				LOG_B(GL_ARB_debug_output);
				Assertv((glDebugMessageControlARB), verbose);
				Assertv((glDebugMessageInsertARB), verbose);
				Assertv((glDebugMessageCallbackARB), verbose);
				Assertv((glGetDebugMessageLogARB), verbose);
			}
			if(GL_ARB_depth_buffer_float) LOG_B(GL_ARB_depth_buffer_float);
			if(GL_ARB_depth_clamp) LOG_B(GL_ARB_depth_clamp);
			if(GL_ARB_derivative_control) LOG_B(GL_ARB_derivative_control);
			if(GL_ARB_direct_state_access) LOG_B(GL_ARB_direct_state_access);
			if(GL_ARB_draw_buffers_blend)
			{
				LOG_B(GL_ARB_draw_buffers_blend);
				Assertv((glBlendEquationiARB), verbose);
				Assertv((glBlendEquationSeparateiARB), verbose);
				Assertv((glBlendFunciARB), verbose);
				Assertv((glBlendFuncSeparateiARB), verbose);
			}
			if(GL_ARB_draw_elements_base_vertex) LOG_B(GL_ARB_draw_elements_base_vertex);
			if(GL_ARB_draw_indirect) LOG_B(GL_ARB_draw_indirect);
			if(GL_ARB_draw_instanced)
			{
				LOG_B(GL_ARB_draw_instanced);
				Assertv((glDrawArraysInstancedARB), verbose);
				Assertv((glDrawElementsInstancedARB), verbose);
			}
			if(GL_ARB_enhanced_layouts) LOG_B(GL_ARB_enhanced_layouts);
			if(GL_ARB_explicit_attrib_location) LOG_B(GL_ARB_explicit_attrib_location);
			if(GL_ARB_explicit_uniform_location) LOG_B(GL_ARB_explicit_uniform_location);
			if(GL_ARB_fragment_coord_conventions) LOG_B(GL_ARB_fragment_coord_conventions);
			if(GL_ARB_fragment_layer_viewport) LOG_B(GL_ARB_fragment_layer_viewport);
			if(GL_ARB_fragment_shader_interlock) LOG_B(GL_ARB_fragment_shader_interlock);
			if(GL_ARB_framebuffer_no_attachments) LOG_B(GL_ARB_framebuffer_no_attachments);
			if(GL_ARB_framebuffer_object) LOG_B(GL_ARB_framebuffer_object);
			if(GL_ARB_framebuffer_sRGB) LOG_B(GL_ARB_framebuffer_sRGB);
			if(GL_ARB_geometry_shader4)
			{
				LOG_B(GL_ARB_geometry_shader4);
				Assertv((glProgramParameteriARB), verbose);
				Assertv((glFramebufferTextureARB), verbose);
				Assertv((glFramebufferTextureLayerARB), verbose);
				Assertv((glFramebufferTextureFaceARB), verbose);
			}
			if(GL_ARB_get_program_binary) LOG_B(GL_ARB_get_program_binary);
			if(GL_ARB_get_texture_sub_image) LOG_B(GL_ARB_get_texture_sub_image);
			if(GL_ARB_gl_spirv)
			{
				LOG_B(GL_ARB_gl_spirv);
				Assertv((glSpecializeShaderARB), verbose);
			}
			if(GL_ARB_gpu_shader5) LOG_B(GL_ARB_gpu_shader5);
			if(GL_ARB_gpu_shader_fp64) LOG_B(GL_ARB_gpu_shader_fp64);
			if(GL_ARB_gpu_shader_int64)
			{
				LOG_B(GL_ARB_gpu_shader_int64);
				Assertv((glUniform1i64ARB), verbose);
				Assertv((glUniform2i64ARB), verbose);
				Assertv((glUniform3i64ARB), verbose);
				Assertv((glUniform4i64ARB), verbose);
				Assertv((glUniform1i64vARB), verbose);
				Assertv((glUniform2i64vARB), verbose);
				Assertv((glUniform3i64vARB), verbose);
				Assertv((glUniform4i64vARB), verbose);
				Assertv((glUniform1ui64ARB), verbose);
				Assertv((glUniform2ui64ARB), verbose);
				Assertv((glUniform3ui64ARB), verbose);
				Assertv((glUniform4ui64ARB), verbose);
				Assertv((glUniform1ui64vARB), verbose);
				Assertv((glUniform2ui64vARB), verbose);
				Assertv((glUniform3ui64vARB), verbose);
				Assertv((glUniform4ui64vARB), verbose);
				Assertv((glGetUniformi64vARB), verbose);
				Assertv((glGetUniformui64vARB), verbose);
				Assertv((glGetnUniformi64vARB), verbose);
				Assertv((glGetnUniformui64vARB), verbose);
				Assertv((glProgramUniform1i64ARB), verbose);
				Assertv((glProgramUniform2i64ARB), verbose);
				Assertv((glProgramUniform3i64ARB), verbose);
				Assertv((glProgramUniform4i64ARB), verbose);
				Assertv((glProgramUniform1i64vARB), verbose);
				Assertv((glProgramUniform2i64vARB), verbose);
				Assertv((glProgramUniform3i64vARB), verbose);
				Assertv((glProgramUniform4i64vARB), verbose);
				Assertv((glProgramUniform1ui64ARB), verbose);
				Assertv((glProgramUniform2ui64ARB), verbose);
				Assertv((glProgramUniform3ui64ARB), verbose);
				Assertv((glProgramUniform4ui64ARB), verbose);
				Assertv((glProgramUniform1ui64vARB), verbose);
				Assertv((glProgramUniform2ui64vARB), verbose);
				Assertv((glProgramUniform3ui64vARB), verbose);
				Assertv((glProgramUniform4ui64vARB), verbose);
			}
			if(GL_ARB_half_float_vertex) LOG_B(GL_ARB_half_float_vertex);
			if(GL_ARB_imaging) LOG_B(GL_ARB_imaging);
			if(GL_ARB_indirect_parameters)
			{
				LOG_B(GL_ARB_indirect_parameters);
				Assertv((glMultiDrawArraysIndirectCountARB), verbose);
				Assertv((glMultiDrawElementsIndirectCountARB), verbose);
			}
			if(GL_ARB_instanced_arrays)
			{
				LOG_B(GL_ARB_instanced_arrays);
				Assertv((glVertexAttribDivisorARB), verbose);
			}

			if(GL_ARB_internalformat_query) LOG_B(GL_ARB_internalformat_query);
			if(GL_ARB_internalformat_query2) LOG_B(GL_ARB_internalformat_query2);
			if(GL_ARB_invalidate_subdata) LOG_B(GL_ARB_invalidate_subdata);
			if(GL_ARB_map_buffer_alignment) LOG_B(GL_ARB_map_buffer_alignment);
			if(GL_ARB_map_buffer_range) LOG_B(GL_ARB_map_buffer_range);
			if(GL_ARB_multi_bind) LOG_B(GL_ARB_multi_bind);
			if(GL_ARB_multi_draw_indirect) LOG_B(GL_ARB_multi_draw_indirect);
			if(GL_ARB_occlusion_query2) LOG_B(GL_ARB_occlusion_query2);
			if(GL_ARB_parallel_shader_compile)
			{
				LOG_B(GL_ARB_parallel_shader_compile);
				Assertv((glMaxShaderCompilerThreadsARB), verbose);
			}
			if(GL_ARB_pipeline_statistics_query) LOG_B(GL_ARB_pipeline_statistics_query);
			if(GL_ARB_pixel_buffer_object) LOG_B(GL_ARB_pixel_buffer_object);
			if(GL_ARB_polygon_offset_clamp) LOG_B(GL_ARB_polygon_offset_clamp);
			if(GL_ARB_post_depth_coverage) LOG_B(GL_ARB_post_depth_coverage);
			if(GL_ARB_program_interface_query) LOG_B(GL_ARB_program_interface_query);
			if(GL_ARB_provoking_vertex) LOG_B(GL_ARB_provoking_vertex);
			if(GL_ARB_query_buffer_object) LOG_B(GL_ARB_query_buffer_object);
			if(GL_ARB_robust_buffer_access_behavior) LOG_B(GL_ARB_robust_buffer_access_behavior);
			if(GL_ARB_robustness)
			{
				LOG_B(GL_ARB_robustness);
				Assertv((glGetGraphicsResetStatusARB), verbose);
				Assertv((glGetnTexImageARB), verbose);
				Assertv((glReadnPixelsARB), verbose);
				Assertv((glGetnCompressedTexImageARB), verbose);
				Assertv((glGetnUniformfvARB), verbose);
				Assertv((glGetnUniformivARB), verbose);
				Assertv((glGetnUniformuivARB), verbose);
				Assertv((glGetnUniformdvARB), verbose);
			}
			if(GL_ARB_robustness_isolation) LOG_B(GL_ARB_robustness_isolation);
			if(GL_ARB_sample_locations)
			{
				LOG_B(GL_ARB_sample_locations);
				Assertv((glFramebufferSampleLocationsfvARB), verbose);
				Assertv((glNamedFramebufferSampleLocationsfvARB), verbose);
				Assertv((glEvaluateDepthValuesARB), verbose);
			}
			if(GL_ARB_sample_shading)
			{
				LOG_B(GL_ARB_sample_shading);
				Assertv((glMinSampleShadingARB), verbose);
			}
			if(GL_ARB_sampler_objects) LOG_B(GL_ARB_sampler_objects);
			if(GL_ARB_seamless_cube_map) LOG_B(GL_ARB_seamless_cube_map);
			if(GL_ARB_seamless_cubemap_per_texture) LOG_B(GL_ARB_seamless_cubemap_per_texture);
			if(GL_ARB_separate_shader_objects) LOG_B(GL_ARB_separate_shader_objects);
			if(GL_ARB_shader_atomic_counter_ops) LOG_B(GL_ARB_shader_atomic_counter_ops);
			if(GL_ARB_shader_atomic_counters) LOG_B(GL_ARB_shader_atomic_counters);
			if(GL_ARB_shader_ballot) LOG_B(GL_ARB_shader_ballot);
			if(GL_ARB_shader_bit_encoding) LOG_B(GL_ARB_shader_bit_encoding);
			if(GL_ARB_shader_clock) LOG_B(GL_ARB_shader_clock);
			if(GL_ARB_shader_draw_parameters) LOG_B(GL_ARB_shader_draw_parameters);
			if(GL_ARB_shader_group_vote) LOG_B(GL_ARB_shader_group_vote);
			if(GL_ARB_shader_image_load_store) LOG_B(GL_ARB_shader_image_load_store);
			if(GL_ARB_shader_image_size) LOG_B(GL_ARB_shader_image_size);
			if(GL_ARB_shader_precision) LOG_B(GL_ARB_shader_precision);
			if(GL_ARB_shader_stencil_export) LOG_B(GL_ARB_shader_stencil_export);
			if(GL_ARB_shader_storage_buffer_object) LOG_B(GL_ARB_shader_storage_buffer_object);
			if(GL_ARB_shader_subroutine) LOG_B(GL_ARB_shader_subroutine);
			if(GL_ARB_shader_texture_image_samples) LOG_B(GL_ARB_shader_texture_image_samples);
			if(GL_ARB_shader_viewport_layer_array) LOG_B(GL_ARB_shader_viewport_layer_array);
			if(GL_ARB_shading_language_420pack) LOG_B(GL_ARB_shading_language_420pack);
			if(GL_ARB_shading_language_include)
			{
				LOG_B(GL_ARB_shading_language_include);
				Assertv((glNamedStringARB), verbose);
				Assertv((glDeleteNamedStringARB), verbose);
				Assertv((glCompileShaderIncludeARB), verbose);
				Assertv((glIsNamedStringARB), verbose);
				Assertv((glGetNamedStringARB), verbose);
				Assertv((glGetNamedStringivARB), verbose);
			}
			if(GL_ARB_shading_language_packing) LOG_B(GL_ARB_shading_language_packing);
			if(GL_ARB_sparse_buffer)
			{
				LOG_B(GL_ARB_sparse_buffer);
				Assertv((glBufferPageCommitmentARB), verbose);
				Assertv((glNamedBufferPageCommitmentEXT), verbose);
				Assertv((glNamedBufferPageCommitmentARB), verbose);
			}
			if(GL_ARB_sparse_texture)
			{
				LOG_B(GL_ARB_sparse_texture);
				Assertv((glTexPageCommitmentARB), verbose);
			}
			if(GL_ARB_sparse_texture2) LOG_B(GL_ARB_sparse_texture2);
			if(GL_ARB_sparse_texture_clamp) LOG_B(GL_ARB_sparse_texture_clamp);
			if(GL_ARB_spirv_extensions) LOG_B(GL_ARB_spirv_extensions);
			if(GL_ARB_stencil_texturing) LOG_B(GL_ARB_stencil_texturing);
			if(GL_ARB_sync) LOG_B(GL_ARB_sync);
			if(GL_ARB_tessellation_shader) LOG_B(GL_ARB_tessellation_shader);
			if(GL_ARB_texture_barrier) LOG_B(GL_ARB_texture_barrier);
			if(GL_ARB_texture_border_clamp) LOG_B(GL_ARB_texture_border_clamp);
			if(GL_ARB_texture_buffer_object)
			{
				LOG_B(GL_ARB_texture_buffer_object);
				Assertv((glTexBufferARB), verbose);
			}
			if(GL_ARB_texture_buffer_object_rgb32) LOG_B(GL_ARB_texture_buffer_object_rgb32);
			if(GL_ARB_texture_buffer_range) LOG_B(GL_ARB_texture_buffer_range);
			if(GL_ARB_texture_compression_bptc) LOG_B(GL_ARB_texture_compression_bptc);
			if(GL_ARB_texture_compression_rgtc) LOG_B(GL_ARB_texture_compression_rgtc);
			if(GL_ARB_texture_cube_map_array) LOG_B(GL_ARB_texture_cube_map_array);
			if(GL_ARB_texture_filter_anisotropic) LOG_B(GL_ARB_texture_filter_anisotropic);
			if(GL_ARB_texture_filter_minmax) LOG_B(GL_ARB_texture_filter_minmax);
			if(GL_ARB_texture_gather) LOG_B(GL_ARB_texture_gather);
			if(GL_ARB_texture_mirror_clamp_to_edge) LOG_B(GL_ARB_texture_mirror_clamp_to_edge);
			if(GL_ARB_texture_mirrored_repeat) LOG_B(GL_ARB_texture_mirrored_repeat);
			if(GL_ARB_texture_multisample) LOG_B(GL_ARB_texture_multisample);
			if(GL_ARB_texture_non_power_of_two) LOG_B(GL_ARB_texture_non_power_of_two);
			if(GL_ARB_texture_query_levels) LOG_B(GL_ARB_texture_query_levels);
			if(GL_ARB_texture_query_lod) LOG_B(GL_ARB_texture_query_lod);
			if(GL_ARB_texture_rg) LOG_B(GL_ARB_texture_rg);
			if(GL_ARB_texture_rgb10_a2ui) LOG_B(GL_ARB_texture_rgb10_a2ui);
			if(GL_ARB_texture_stencil8) LOG_B(GL_ARB_texture_stencil8);
			if(GL_ARB_texture_storage) LOG_B(GL_ARB_texture_storage);
			if(GL_ARB_texture_storage_multisample) LOG_B(GL_ARB_texture_storage_multisample);
			if(GL_ARB_texture_swizzle) LOG_B(GL_ARB_texture_swizzle);
			if(GL_ARB_texture_view) LOG_B(GL_ARB_texture_view);
			if(GL_ARB_timer_query) LOG_B(GL_ARB_timer_query);
			if(GL_ARB_transform_feedback2) LOG_B(GL_ARB_transform_feedback2);
			if(GL_ARB_transform_feedback3) LOG_B(GL_ARB_transform_feedback3);
			if(GL_ARB_transform_feedback_instanced) LOG_B(GL_ARB_transform_feedback_instanced);
			if(GL_ARB_transform_feedback_overflow_query) LOG_B(GL_ARB_transform_feedback_overflow_query);
			if(GL_ARB_uniform_buffer_object) LOG_B(GL_ARB_uniform_buffer_object);
			if(GL_ARB_vertex_array_bgra) LOG_B(GL_ARB_vertex_array_bgra);
			if(GL_ARB_vertex_array_object) LOG_B(GL_ARB_vertex_array_object);
			if(GL_ARB_vertex_attrib_64bit) LOG_B(GL_ARB_vertex_attrib_64bit);
			if(GL_ARB_vertex_attrib_binding) LOG_B(GL_ARB_vertex_attrib_binding);
			if(GL_ARB_vertex_type_10f_11f_11f_rev) LOG_B(GL_ARB_vertex_type_10f_11f_11f_rev);
			if(GL_ARB_vertex_type_2_10_10_10_rev) LOG_B(GL_ARB_vertex_type_2_10_10_10_rev);
			if(GL_ARB_viewport_array)
			{
				LOG_B(GL_ARB_viewport_array);
				Assertv((glDepthRangeArraydvNV), verbose);
				Assertv((glDepthRangeIndexeddNV), verbose);
			}
		} // namespace GLARB
		// namespace KHR
		{
			using namespace axl::glfl::core::GLKHR; 
			if(GL_KHR_blend_equation_advanced)
			{
				LOG_B(GL_KHR_blend_equation_advanced);
				Assertv((glBlendBarrierKHR), verbose);
			}
			if(GL_KHR_blend_equation_advanced_coherent) LOG_B(GL_KHR_blend_equation_advanced_coherent);
			if(GL_KHR_context_flush_control) LOG_B(GL_KHR_context_flush_control);
			if(GL_KHR_debug) LOG_B(GL_KHR_debug);
			if(GL_KHR_no_error) LOG_B(GL_KHR_no_error);
			if(GL_KHR_parallel_shader_compile)
			{
				LOG_B(GL_KHR_parallel_shader_compile);
				Assertv((glMaxShaderCompilerThreadsKHR), verbose);
			}
			if(GL_KHR_robust_buffer_access_behavior) LOG_B(GL_KHR_robust_buffer_access_behavior);
			if(GL_KHR_robustness) LOG_B(GL_KHR_robustness);
			if(GL_KHR_shader_subgroup) LOG_B(GL_KHR_shader_subgroup);
			if(GL_KHR_texture_compression_astc_hdr) LOG_B(GL_KHR_texture_compression_astc_hdr);
			if(GL_KHR_texture_compression_astc_ldr) LOG_B(GL_KHR_texture_compression_astc_ldr);
			if(GL_KHR_texture_compression_astc_sliced_3d) LOG_B(GL_KHR_texture_compression_astc_sliced_3d);
		} // namespace GLKHR
		{
		using namespace axl::glfl::core::GLAMD;
		if(GL_AMD_framebuffer_multisample_advanced)
		{
			LOG_B(GL_AMD_framebuffer_multisample_advanced);
			Assertv((glRenderbufferStorageMultisampleAdvancedAMD), verbose);
			Assertv((glNamedRenderbufferStorageMultisampleAdvancedAMD), verbose);
		}
		if(GL_AMD_performance_monitor)
		{
			LOG_B(GL_AMD_performance_monitor);
			Assertv((glGetPerfMonitorGroupsAMD), verbose);
			Assertv((glGetPerfMonitorCountersAMD), verbose);
			Assertv((glGetPerfMonitorGroupStringAMD), verbose);
			Assertv((glGetPerfMonitorCounterStringAMD), verbose);
			Assertv((glGetPerfMonitorCounterInfoAMD), verbose);
			Assertv((glGenPerfMonitorsAMD), verbose);
			Assertv((glDeletePerfMonitorsAMD), verbose);
			Assertv((glSelectPerfMonitorCountersAMD), verbose);
			Assertv((glBeginPerfMonitorAMD), verbose);
			Assertv((glEndPerfMonitorAMD), verbose);
			Assertv((glGetPerfMonitorCounterDataAMD), verbose);
		}
	} // namespace GLAMD
	{
		using namespace axl::glfl::core::GLAPPLE;
		if(GL_APPLE_rgb_422) LOG_B(GL_APPLE_rgb_422);
	} // namespace GLAPPLE
	{
		using namespace axl::glfl::core::GLEXT;
		if(GL_EXT_EGL_image_storage)
		{
			LOG_B(GL_EXT_EGL_image_storage);
			Assertv((glEGLImageTargetTexStorageEXT), verbose);
			Assertv((glEGLImageTargetTextureStorageEXT), verbose);
		}
		if(GL_EXT_EGL_sync) LOG_B(GL_EXT_EGL_sync);
		if(GL_EXT_debug_label)
		{
			LOG_B(GL_EXT_debug_label);
			Assertv((glLabelObjectEXT), verbose);
			Assertv((glGetObjectLabelEXT), verbose);
		}
		if(GL_EXT_debug_marker)
		{
			LOG_B(GL_EXT_debug_marker);
			Assertv((glInsertEventMarkerEXT), verbose);
			Assertv((glPushGroupMarkerEXT), verbose);
			Assertv((glPopGroupMarkerEXT), verbose);
		}
		if(GL_EXT_direct_state_access)
		{
			LOG_B(GL_EXT_direct_state_access);
			Assertv((glMatrixLoadfEXT), verbose);
			Assertv((glMatrixLoaddEXT), verbose);
			Assertv((glMatrixMultfEXT), verbose);
			Assertv((glMatrixMultdEXT), verbose);
			Assertv((glMatrixLoadIdentityEXT), verbose);
			Assertv((glMatrixRotatefEXT), verbose);
			Assertv((glMatrixRotatedEXT), verbose);
			Assertv((glMatrixScalefEXT), verbose);
			Assertv((glMatrixScaledEXT), verbose);
			Assertv((glMatrixTranslatefEXT), verbose);
			Assertv((glMatrixTranslatedEXT), verbose);
			Assertv((glMatrixFrustumEXT), verbose);
			Assertv((glMatrixOrthoEXT), verbose);
			Assertv((glMatrixPopEXT), verbose);
			Assertv((glMatrixPushEXT), verbose);
			Assertv((glClientAttribDefaultEXT), verbose);
			Assertv((glPushClientAttribDefaultEXT), verbose);
			Assertv((glTextureParameterfEXT), verbose);
			Assertv((glTextureParameterfvEXT), verbose);
			Assertv((glTextureParameteriEXT), verbose);
			Assertv((glTextureParameterivEXT), verbose);
			Assertv((glTextureImage1DEXT), verbose);
			Assertv((glTextureImage2DEXT), verbose);
			Assertv((glTextureSubImage1DEXT), verbose);
			Assertv((glTextureSubImage2DEXT), verbose);
			Assertv((glCopyTextureImage1DEXT), verbose);
			Assertv((glCopyTextureImage2DEXT), verbose);
			Assertv((glCopyTextureSubImage1DEXT), verbose);
			Assertv((glCopyTextureSubImage2DEXT), verbose);
			Assertv((glGetTextureImageEXT), verbose);
			Assertv((glGetTextureParameterfvEXT), verbose);
			Assertv((glGetTextureParameterivEXT), verbose);
			Assertv((glGetTextureLevelParameterfvEXT), verbose);
			Assertv((glGetTextureLevelParameterivEXT), verbose);
			Assertv((glTextureImage3DEXT), verbose);
			Assertv((glTextureSubImage3DEXT), verbose);
			Assertv((glCopyTextureSubImage3DEXT), verbose);
			Assertv((glBindMultiTextureEXT), verbose);
			Assertv((glMultiTexCoordPointerEXT), verbose);
			Assertv((glMultiTexEnvfEXT), verbose);
			Assertv((glMultiTexEnvfvEXT), verbose);
			Assertv((glMultiTexEnviEXT), verbose);
			Assertv((glMultiTexEnvivEXT), verbose);
			Assertv((glMultiTexGendEXT), verbose);
			Assertv((glMultiTexGendvEXT), verbose);
			Assertv((glMultiTexGenfEXT), verbose);
			Assertv((glMultiTexGenfvEXT), verbose);
			Assertv((glMultiTexGeniEXT), verbose);
			Assertv((glMultiTexGenivEXT), verbose);
			Assertv((glGetMultiTexEnvfvEXT), verbose);
			Assertv((glGetMultiTexEnvivEXT), verbose);
			Assertv((glGetMultiTexGendvEXT), verbose);
			Assertv((glGetMultiTexGenfvEXT), verbose);
			Assertv((glGetMultiTexGenivEXT), verbose);
			Assertv((glMultiTexParameteriEXT), verbose);
			Assertv((glMultiTexParameterivEXT), verbose);
			Assertv((glMultiTexParameterfEXT), verbose);
			Assertv((glMultiTexParameterfvEXT), verbose);
			Assertv((glMultiTexImage1DEXT), verbose);
			Assertv((glMultiTexImage2DEXT), verbose);
			Assertv((glMultiTexSubImage1DEXT), verbose);
			Assertv((glMultiTexSubImage2DEXT), verbose);
			Assertv((glCopyMultiTexImage1DEXT), verbose);
			Assertv((glCopyMultiTexImage2DEXT), verbose);
			Assertv((glCopyMultiTexSubImage1DEXT), verbose);
			Assertv((glCopyMultiTexSubImage2DEXT), verbose);
			Assertv((glGetMultiTexImageEXT), verbose);
			Assertv((glGetMultiTexParameterfvEXT), verbose);
			Assertv((glGetMultiTexParameterivEXT), verbose);
			Assertv((glGetMultiTexLevelParameterfvEXT), verbose);
			Assertv((glGetMultiTexLevelParameterivEXT), verbose);
			Assertv((glMultiTexImage3DEXT), verbose);
			Assertv((glMultiTexSubImage3DEXT), verbose);
			Assertv((glCopyMultiTexSubImage3DEXT), verbose);
			Assertv((glEnableClientStateIndexedEXT), verbose);
			Assertv((glDisableClientStateIndexedEXT), verbose);
			Assertv((glGetFloatIndexedvEXT), verbose);
			Assertv((glGetDoubleIndexedvEXT), verbose);
			Assertv((glGetPointerIndexedvEXT), verbose);
			Assertv((glEnableIndexedEXT), verbose);
			Assertv((glDisableIndexedEXT), verbose);
			Assertv((glIsEnabledIndexedEXT), verbose);
			Assertv((glGetIntegerIndexedvEXT), verbose);
			Assertv((glGetBooleanIndexedvEXT), verbose);
			Assertv((glCompressedTextureImage3DEXT), verbose);
			Assertv((glCompressedTextureImage2DEXT), verbose);
			Assertv((glCompressedTextureImage1DEXT), verbose);
			Assertv((glCompressedTextureSubImage3DEXT), verbose);
			Assertv((glCompressedTextureSubImage2DEXT), verbose);
			Assertv((glCompressedTextureSubImage1DEXT), verbose);
			Assertv((glGetCompressedTextureImageEXT), verbose);
			Assertv((glCompressedMultiTexImage3DEXT), verbose);
			Assertv((glCompressedMultiTexImage2DEXT), verbose);
			Assertv((glCompressedMultiTexImage1DEXT), verbose);
			Assertv((glCompressedMultiTexSubImage3DEXT), verbose);
			Assertv((glCompressedMultiTexSubImage2DEXT), verbose);
			Assertv((glCompressedMultiTexSubImage1DEXT), verbose);
			Assertv((glGetCompressedMultiTexImageEXT), verbose);
			Assertv((glMatrixLoadTransposefEXT), verbose);
			Assertv((glMatrixLoadTransposedEXT), verbose);
			Assertv((glMatrixMultTransposefEXT), verbose);
			Assertv((glMatrixMultTransposedEXT), verbose);
			Assertv((glNamedBufferDataEXT), verbose);
			Assertv((glNamedBufferSubDataEXT), verbose);
			Assertv((glMapNamedBufferEXT), verbose);
			Assertv((glUnmapNamedBufferEXT), verbose);
			Assertv((glGetNamedBufferParameterivEXT), verbose);
			Assertv((glGetNamedBufferPointervEXT), verbose);
			Assertv((glGetNamedBufferSubDataEXT), verbose);
			Assertv((glProgramUniform1fEXT), verbose);
			Assertv((glProgramUniform2fEXT), verbose);
			Assertv((glProgramUniform3fEXT), verbose);
			Assertv((glProgramUniform4fEXT), verbose);
			Assertv((glProgramUniform1iEXT), verbose);
			Assertv((glProgramUniform2iEXT), verbose);
			Assertv((glProgramUniform3iEXT), verbose);
			Assertv((glProgramUniform4iEXT), verbose);
			Assertv((glProgramUniform1fvEXT), verbose);
			Assertv((glProgramUniform2fvEXT), verbose);
			Assertv((glProgramUniform3fvEXT), verbose);
			Assertv((glProgramUniform4fvEXT), verbose);
			Assertv((glProgramUniform1ivEXT), verbose);
			Assertv((glProgramUniform2ivEXT), verbose);
			Assertv((glProgramUniform3ivEXT), verbose);
			Assertv((glProgramUniform4ivEXT), verbose);
			Assertv((glProgramUniformMatrix2fvEXT), verbose);
			Assertv((glProgramUniformMatrix3fvEXT), verbose);
			Assertv((glProgramUniformMatrix4fvEXT), verbose);
			Assertv((glProgramUniformMatrix2x3fvEXT), verbose);
			Assertv((glProgramUniformMatrix3x2fvEXT), verbose);
			Assertv((glProgramUniformMatrix2x4fvEXT), verbose);
			Assertv((glProgramUniformMatrix4x2fvEXT), verbose);
			Assertv((glProgramUniformMatrix3x4fvEXT), verbose);
			Assertv((glProgramUniformMatrix4x3fvEXT), verbose);
			Assertv((glTextureBufferEXT), verbose);
			Assertv((glMultiTexBufferEXT), verbose);
			Assertv((glTextureParameterIivEXT), verbose);
			Assertv((glTextureParameterIuivEXT), verbose);
			Assertv((glGetTextureParameterIivEXT), verbose);
			Assertv((glGetTextureParameterIuivEXT), verbose);
			Assertv((glMultiTexParameterIivEXT), verbose);
			Assertv((glMultiTexParameterIuivEXT), verbose);
			Assertv((glGetMultiTexParameterIivEXT), verbose);
			Assertv((glGetMultiTexParameterIuivEXT), verbose);
			Assertv((glProgramUniform1uiEXT), verbose);
			Assertv((glProgramUniform2uiEXT), verbose);
			Assertv((glProgramUniform3uiEXT), verbose);
			Assertv((glProgramUniform4uiEXT), verbose);
			Assertv((glProgramUniform1uivEXT), verbose);
			Assertv((glProgramUniform2uivEXT), verbose);
			Assertv((glProgramUniform3uivEXT), verbose);
			Assertv((glProgramUniform4uivEXT), verbose);
			Assertv((glNamedProgramLocalParameters4fvEXT), verbose);
			Assertv((glNamedProgramLocalParameterI4iEXT), verbose);
			Assertv((glNamedProgramLocalParameterI4ivEXT), verbose);
			Assertv((glNamedProgramLocalParametersI4ivEXT), verbose);
			Assertv((glNamedProgramLocalParameterI4uiEXT), verbose);
			Assertv((glNamedProgramLocalParameterI4uivEXT), verbose);
			Assertv((glNamedProgramLocalParametersI4uivEXT), verbose);
			Assertv((glGetNamedProgramLocalParameterIivEXT), verbose);
			Assertv((glGetNamedProgramLocalParameterIuivEXT), verbose);
			Assertv((glEnableClientStateiEXT), verbose);
			Assertv((glDisableClientStateiEXT), verbose);
			Assertv((glGetFloati_vEXT), verbose);
			Assertv((glGetDoublei_vEXT), verbose);
			Assertv((glGetPointeri_vEXT), verbose);
			Assertv((glNamedProgramStringEXT), verbose);
			Assertv((glNamedProgramLocalParameter4dEXT), verbose);
			Assertv((glNamedProgramLocalParameter4dvEXT), verbose);
			Assertv((glNamedProgramLocalParameter4fEXT), verbose);
			Assertv((glNamedProgramLocalParameter4fvEXT), verbose);
			Assertv((glGetNamedProgramLocalParameterdvEXT), verbose);
			Assertv((glGetNamedProgramLocalParameterfvEXT), verbose);
			Assertv((glGetNamedProgramivEXT), verbose);
			Assertv((glGetNamedProgramStringEXT), verbose);
			Assertv((glNamedRenderbufferStorageEXT), verbose);
			Assertv((glGetNamedRenderbufferParameterivEXT), verbose);
			Assertv((glNamedRenderbufferStorageMultisampleEXT), verbose);
			Assertv((glNamedRenderbufferStorageMultisampleCoverageEXT), verbose);
			Assertv((glCheckNamedFramebufferStatusEXT), verbose);
			Assertv((glNamedFramebufferTexture1DEXT), verbose);
			Assertv((glNamedFramebufferTexture2DEXT), verbose);
			Assertv((glNamedFramebufferTexture3DEXT), verbose);
			Assertv((glNamedFramebufferRenderbufferEXT), verbose);
			Assertv((glGetNamedFramebufferAttachmentParameterivEXT), verbose);
			Assertv((glGenerateTextureMipmapEXT), verbose);
			Assertv((glGenerateMultiTexMipmapEXT), verbose);
			Assertv((glFramebufferDrawBufferEXT), verbose);
			Assertv((glFramebufferDrawBuffersEXT), verbose);
			Assertv((glFramebufferReadBufferEXT), verbose);
			Assertv((glGetFramebufferParameterivEXT), verbose);
			Assertv((glNamedCopyBufferSubDataEXT), verbose);
			Assertv((glNamedFramebufferTextureEXT), verbose);
			Assertv((glNamedFramebufferTextureLayerEXT), verbose);
			Assertv((glNamedFramebufferTextureFaceEXT), verbose);
			Assertv((glTextureRenderbufferEXT), verbose);
			Assertv((glMultiTexRenderbufferEXT), verbose);
			Assertv((glVertexArrayVertexOffsetEXT), verbose);
			Assertv((glVertexArrayColorOffsetEXT), verbose);
			Assertv((glVertexArrayEdgeFlagOffsetEXT), verbose);
			Assertv((glVertexArrayIndexOffsetEXT), verbose);
			Assertv((glVertexArrayNormalOffsetEXT), verbose);
			Assertv((glVertexArrayTexCoordOffsetEXT), verbose);
			Assertv((glVertexArrayMultiTexCoordOffsetEXT), verbose);
			Assertv((glVertexArrayFogCoordOffsetEXT), verbose);
			Assertv((glVertexArraySecondaryColorOffsetEXT), verbose);
			Assertv((glVertexArrayVertexAttribOffsetEXT), verbose);
			Assertv((glVertexArrayVertexAttribIOffsetEXT), verbose);
			Assertv((glEnableVertexArrayEXT), verbose);
			Assertv((glDisableVertexArrayEXT), verbose);
			Assertv((glEnableVertexArrayAttribEXT), verbose);
			Assertv((glDisableVertexArrayAttribEXT), verbose);
			Assertv((glGetVertexArrayIntegervEXT), verbose);
			Assertv((glGetVertexArrayPointervEXT), verbose);
			Assertv((glGetVertexArrayIntegeri_vEXT), verbose);
			Assertv((glGetVertexArrayPointeri_vEXT), verbose);
			Assertv((glMapNamedBufferRangeEXT), verbose);
			Assertv((glFlushMappedNamedBufferRangeEXT), verbose);
			Assertv((glNamedBufferStorageEXT), verbose);
			Assertv((glClearNamedBufferDataEXT), verbose);
			Assertv((glClearNamedBufferSubDataEXT), verbose);
			Assertv((glNamedFramebufferParameteriEXT), verbose);
			Assertv((glGetNamedFramebufferParameterivEXT), verbose);
			Assertv((glProgramUniform1dEXT), verbose);
			Assertv((glProgramUniform2dEXT), verbose);
			Assertv((glProgramUniform3dEXT), verbose);
			Assertv((glProgramUniform4dEXT), verbose);
			Assertv((glProgramUniform1dvEXT), verbose);
			Assertv((glProgramUniform2dvEXT), verbose);
			Assertv((glProgramUniform3dvEXT), verbose);
			Assertv((glProgramUniform4dvEXT), verbose);
			Assertv((glProgramUniformMatrix2dvEXT), verbose);
			Assertv((glProgramUniformMatrix3dvEXT), verbose);
			Assertv((glProgramUniformMatrix4dvEXT), verbose);
			Assertv((glProgramUniformMatrix2x3dvEXT), verbose);
			Assertv((glProgramUniformMatrix2x4dvEXT), verbose);
			Assertv((glProgramUniformMatrix3x2dvEXT), verbose);
			Assertv((glProgramUniformMatrix3x4dvEXT), verbose);
			Assertv((glProgramUniformMatrix4x2dvEXT), verbose);
			Assertv((glProgramUniformMatrix4x3dvEXT), verbose);
			Assertv((glTextureBufferRangeEXT), verbose);
			Assertv((glTextureStorage1DEXT), verbose);
			Assertv((glTextureStorage2DEXT), verbose);
			Assertv((glTextureStorage3DEXT), verbose);
			Assertv((glTextureStorage2DMultisampleEXT), verbose);
			Assertv((glTextureStorage3DMultisampleEXT), verbose);
			Assertv((glVertexArrayBindVertexBufferEXT), verbose);
			Assertv((glVertexArrayVertexAttribFormatEXT), verbose);
			Assertv((glVertexArrayVertexAttribIFormatEXT), verbose);
			Assertv((glVertexArrayVertexAttribLFormatEXT), verbose);
			Assertv((glVertexArrayVertexAttribBindingEXT), verbose);
			Assertv((glVertexArrayVertexBindingDivisorEXT), verbose);
			Assertv((glVertexArrayVertexAttribLOffsetEXT), verbose);
			Assertv((glTexturePageCommitmentEXT), verbose);
			Assertv((glVertexArrayVertexAttribDivisorEXT), verbose);
		}
		if(GL_EXT_draw_instanced)
		{
			LOG_B(GL_EXT_draw_instanced);
			Assertv((glDrawArraysInstancedEXT), verbose);
			Assertv((glDrawElementsInstancedEXT), verbose);
		}

		if(GL_EXT_multiview_tessellation_geometry_shader) LOG_B(GL_EXT_multiview_tessellation_geometry_shader);
		if(GL_EXT_multiview_texture_multisample) LOG_B(GL_EXT_multiview_texture_multisample);
		if(GL_EXT_multiview_timer_query) LOG_B(GL_EXT_multiview_timer_query);
		if(GL_EXT_polygon_offset_clamp)
		{
			LOG_B(GL_EXT_polygon_offset_clamp);
			Assertv((glPolygonOffsetClampEXT), verbose);
		}
		if(GL_EXT_post_depth_coverage) LOG_B(GL_EXT_post_depth_coverage);
		if(GL_EXT_raster_multisample)
		{
			LOG_B(GL_EXT_raster_multisample);
			Assertv((glRasterSamplesEXT), verbose);
		}
		if(GL_EXT_separate_shader_objects)
		{
			LOG_B(GL_EXT_separate_shader_objects);
			Assertv((glUseShaderProgramEXT), verbose);
			Assertv((glActiveProgramEXT), verbose);
			Assertv((glCreateShaderProgramEXT), verbose);
		}
		if(GL_EXT_shader_framebuffer_fetch) LOG_B(GL_EXT_shader_framebuffer_fetch);
		if(GL_EXT_shader_framebuffer_fetch_non_coherent)
		{
			LOG_B(GL_EXT_shader_framebuffer_fetch_non_coherent);
			Assertv((glFramebufferFetchBarrierEXT), verbose);
		}
		if(GL_EXT_shader_integer_mix) LOG_B(GL_EXT_shader_integer_mix);
		if(GL_EXT_texture_compression_s3tc) LOG_B(GL_EXT_texture_compression_s3tc);
		if(GL_EXT_texture_filter_minmax) LOG_B(GL_EXT_texture_filter_minmax);
		if(GL_EXT_texture_sRGB_R8) LOG_B(GL_EXT_texture_sRGB_R8);
		if(GL_EXT_texture_sRGB_decode) LOG_B(GL_EXT_texture_sRGB_decode);
		if(GL_EXT_texture_shadow_lod) LOG_B(GL_EXT_texture_shadow_lod);
		if(GL_EXT_window_rectangles)
		{
			LOG_B(GL_EXT_window_rectangles);
			Assertv((glWindowRectanglesEXT), verbose);
		}

	} // namespace GLEXT
	{
		using namespace axl::glfl::core::GLINTEL;
		if(GL_INTEL_blackhole_render) LOG_B(GL_INTEL_blackhole_render);
		if(GL_INTEL_conservative_rasterization) LOG_B(GL_INTEL_conservative_rasterization);
		if(GL_INTEL_framebuffer_CMAA)
		{
			LOG_B(GL_INTEL_framebuffer_CMAA);
			Assertv((glApplyFramebufferAttachmentCMAAINTEL), verbose);
		}
		if(GL_INTEL_performance_query)
		{
			LOG_B(GL_INTEL_performance_query);
			Assertv((glBeginPerfQueryINTEL), verbose);
			Assertv((glCreatePerfQueryINTEL), verbose);
			Assertv((glDeletePerfQueryINTEL), verbose);
			Assertv((glEndPerfQueryINTEL), verbose);
			Assertv((glGetFirstPerfQueryIdINTEL), verbose);
			Assertv((glGetNextPerfQueryIdINTEL), verbose);
			Assertv((glGetPerfCounterInfoINTEL), verbose);
			Assertv((glGetPerfQueryDataINTEL), verbose);
			Assertv((glGetPerfQueryIdByNameINTEL), verbose);
			Assertv((glGetPerfQueryInfoINTEL), verbose);
		}
	} // namespace GLINTEL
	{
		using namespace axl::glfl::core::GLMESA;
		if(GL_MESA_framebuffer_flip_x) LOG_B(GL_MESA_framebuffer_flip_x);
		if(GL_MESA_framebuffer_flip_y)
		{
			LOG_B(GL_MESA_framebuffer_flip_y);
			Assertv((glFramebufferParameteriMESA), verbose);
			Assertv((glGetFramebufferParameterivMESA), verbose);
		}
		if(GL_MESA_framebuffer_swap_xy) LOG_B(GL_MESA_framebuffer_swap_xy);
	} // namespace GLMESA
	{
		using namespace axl::glfl::core::GLNV;
		if(GL_NV_bindless_multi_draw_indirect)
		{
			LOG_B(GL_NV_bindless_multi_draw_indirect);
			Assertv((glMultiDrawArraysIndirectBindlessNV), verbose);
			Assertv((glMultiDrawElementsIndirectBindlessNV), verbose);
		}
		if(GL_NV_bindless_multi_draw_indirect_count)
		{
			LOG_B(GL_NV_bindless_multi_draw_indirect_count);
			Assertv((glMultiDrawArraysIndirectBindlessCountNV), verbose);
			Assertv((glMultiDrawElementsIndirectBindlessCountNV), verbose);
		}
		if(GL_NV_bindless_texture)
		{
			LOG_B(GL_NV_bindless_texture);
			Assertv((glGetTextureHandleNV), verbose);
			Assertv((glGetTextureSamplerHandleNV), verbose);
			Assertv((glMakeTextureHandleResidentNV), verbose);
			Assertv((glMakeTextureHandleNonResidentNV), verbose);
			Assertv((glGetImageHandleNV), verbose);
			Assertv((glMakeImageHandleResidentNV), verbose);
			Assertv((glMakeImageHandleNonResidentNV), verbose);
			Assertv((glUniformHandleui64NV), verbose);
			Assertv((glUniformHandleui64vNV), verbose);
			Assertv((glProgramUniformHandleui64NV), verbose);
			Assertv((glProgramUniformHandleui64vNV), verbose);
			Assertv((glIsTextureHandleResidentNV), verbose);
			Assertv((glIsImageHandleResidentNV), verbose);
		}
		if(GL_NV_blend_equation_advanced)
		{
			LOG_B(GL_NV_blend_equation_advanced);
			Assertv((glBlendParameteriNV), verbose);
			Assertv((glBlendBarrierNV), verbose);
		}
		if(GL_NV_blend_equation_advanced_coherent) LOG_B(GL_NV_blend_equation_advanced_coherent);
		if(GL_NV_blend_minmax_factor) LOG_B(GL_NV_blend_minmax_factor);
		if(GL_NV_clip_space_w_scaling)
		{
			LOG_B(GL_NV_clip_space_w_scaling);
			Assertv((glViewportPositionWScaleNV), verbose);
		}
		if(GL_NV_command_list)
		{
			LOG_B(GL_NV_command_list);
			Assertv((glCreateStatesNV), verbose);
			Assertv((glDeleteStatesNV), verbose);
			Assertv((glIsStateNV), verbose);
			Assertv((glStateCaptureNV), verbose);
			Assertv((glGetCommandHeaderNV), verbose);
			Assertv((glGetStageIndexNV), verbose);
			Assertv((glDrawCommandsNV), verbose);
			Assertv((glDrawCommandsAddressNV), verbose);
			Assertv((glDrawCommandsStatesNV), verbose);
			Assertv((glDrawCommandsStatesAddressNV), verbose);
			Assertv((glCreateCommandListsNV), verbose);
			Assertv((glDeleteCommandListsNV), verbose);
			Assertv((glIsCommandListNV), verbose);
			Assertv((glListDrawCommandsStatesClientNV), verbose);
			Assertv((glCommandListSegmentsNV), verbose);
			Assertv((glCompileCommandListNV), verbose);
			Assertv((glCallCommandListNV), verbose);
		}
		if(GL_NV_compute_shader_derivatives) LOG_B(GL_NV_compute_shader_derivatives);
		if(GL_NV_conditional_render)
		{
			LOG_B(GL_NV_conditional_render);
			Assertv((glBeginConditionalRenderNV), verbose);
			Assertv((glEndConditionalRenderNV), verbose);
		}
		if(GL_NV_conservative_raster)
		{
			LOG_B(GL_NV_conservative_raster);
			Assertv((glSubpixelPrecisionBiasNV), verbose);
		}
		if(GL_NV_conservative_raster_dilate)
		{
			LOG_B(GL_NV_conservative_raster_dilate);
			Assertv((glConservativeRasterParameterfNV), verbose);
		}
		if(GL_NV_conservative_raster_pre_snap) LOG_B(GL_NV_conservative_raster_pre_snap);
		if(GL_NV_conservative_raster_pre_snap_triangles)
		{
			LOG_B(GL_NV_conservative_raster_pre_snap_triangles);
			Assertv((glConservativeRasterParameteriNV), verbose);
		}
		if(GL_NV_conservative_raster_underestimation) LOG_B(GL_NV_conservative_raster_underestimation);
		if(GL_NV_depth_buffer_float)
		{
			LOG_B(GL_NV_depth_buffer_float);
			Assertv((glDepthRangedNV), verbose);
			Assertv((glClearDepthdNV), verbose);
			Assertv((glDepthBoundsdNV), verbose);
		}
		if(GL_NV_draw_vulkan_image)
		{
			LOG_B(GL_NV_draw_vulkan_image);
			Assertv((glDrawVkImageNV), verbose);
			Assertv((glGetVkProcAddrNV), verbose);
			Assertv((glWaitVkSemaphoreNV), verbose);
			Assertv((glSignalVkSemaphoreNV), verbose);
			Assertv((glSignalVkFenceNV), verbose);
		}
		if(GL_NV_fill_rectangle) LOG_B(GL_NV_fill_rectangle);
		if(GL_NV_fragment_coverage_to_color)
		{
			LOG_B(GL_NV_fragment_coverage_to_color);
			Assertv((glFragmentCoverageColorNV), verbose);
		}
		if(GL_NV_fragment_shader_barycentric) LOG_B(GL_NV_fragment_shader_barycentric);
		if(GL_NV_fragment_shader_interlock) LOG_B(GL_NV_fragment_shader_interlock);
		if(GL_NV_framebuffer_mixed_samples)
		{
			LOG_B(GL_NV_framebuffer_mixed_samples);
			Assertv((glCoverageModulationTableNV), verbose);
			Assertv((glGetCoverageModulationTableNV), verbose);
			Assertv((glCoverageModulationNV), verbose);
		}
		if(GL_NV_framebuffer_multisample_coverage)
		{
			LOG_B(GL_NV_framebuffer_multisample_coverage);
			Assertv((glRenderbufferStorageMultisampleCoverageNV), verbose);
		}
		if(GL_NV_geometry_shader_passthrough) LOG_B(GL_NV_geometry_shader_passthrough);
		if(GL_NV_gpu_shader5)
		{
			LOG_B(GL_NV_gpu_shader5);
			Assertv((glUniform1i64NV), verbose);
			Assertv((glUniform2i64NV), verbose);
			Assertv((glUniform3i64NV), verbose);
			Assertv((glUniform4i64NV), verbose);
			Assertv((glUniform1i64vNV), verbose);
			Assertv((glUniform2i64vNV), verbose);
			Assertv((glUniform3i64vNV), verbose);
			Assertv((glUniform4i64vNV), verbose);
			Assertv((glUniform1ui64NV), verbose);
			Assertv((glUniform2ui64NV), verbose);
			Assertv((glUniform3ui64NV), verbose);
			Assertv((glUniform4ui64NV), verbose);
			Assertv((glUniform1ui64vNV), verbose);
			Assertv((glUniform2ui64vNV), verbose);
			Assertv((glUniform3ui64vNV), verbose);
			Assertv((glUniform4ui64vNV), verbose);
			Assertv((glGetUniformi64vNV), verbose);
			Assertv((glProgramUniform1i64NV), verbose);
			Assertv((glProgramUniform2i64NV), verbose);
			Assertv((glProgramUniform3i64NV), verbose);
			Assertv((glProgramUniform4i64NV), verbose);
			Assertv((glProgramUniform1i64vNV), verbose);
			Assertv((glProgramUniform2i64vNV), verbose);
			Assertv((glProgramUniform3i64vNV), verbose);
			Assertv((glProgramUniform4i64vNV), verbose);
			Assertv((glProgramUniform1ui64NV), verbose);
			Assertv((glProgramUniform2ui64NV), verbose);
			Assertv((glProgramUniform3ui64NV), verbose);
			Assertv((glProgramUniform4ui64NV), verbose);
			Assertv((glProgramUniform1ui64vNV), verbose);
			Assertv((glProgramUniform2ui64vNV), verbose);
			Assertv((glProgramUniform3ui64vNV), verbose);
			Assertv((glProgramUniform4ui64vNV), verbose);
		}
		if(GL_NV_internalformat_sample_query)
		{
			LOG_B(GL_NV_internalformat_sample_query);
			Assertv((glGetInternalformatSampleivNV), verbose);
		}
		if(GL_NV_memory_attachment)
		{
			LOG_B(GL_NV_memory_attachment);
			Assertv((glGetMemoryObjectDetachedResourcesuivNV), verbose);
			Assertv((glResetMemoryObjectParameterNV), verbose);
			Assertv((glTexAttachMemoryNV), verbose);
			Assertv((glBufferAttachMemoryNV), verbose);
			Assertv((glTextureAttachMemoryNV), verbose);
			Assertv((glNamedBufferAttachMemoryNV), verbose);
		}
		if(GL_NV_memory_object_sparse)
		{
			LOG_B(GL_NV_memory_object_sparse);
			Assertv((glBufferPageCommitmentMemNV), verbose);
			Assertv((glTexPageCommitmentMemNV), verbose);
			Assertv((glNamedBufferPageCommitmentMemNV), verbose);
			Assertv((glTexturePageCommitmentMemNV), verbose);
		}
		if(GL_NV_mesh_shader)
		{
			LOG_B(GL_NV_mesh_shader);
			Assertv((glDrawMeshTasksNV), verbose);
			Assertv((glDrawMeshTasksIndirectNV), verbose);
			Assertv((glMultiDrawMeshTasksIndirectNV), verbose);
			Assertv((glMultiDrawMeshTasksIndirectCountNV), verbose);
		}
		if(GL_NV_path_rendering)
		{
			LOG_B(GL_NV_path_rendering);
			Assertv((glGenPathsNV), verbose);
			Assertv((glDeletePathsNV), verbose);
			Assertv((glIsPathNV), verbose);
			Assertv((glPathCommandsNV), verbose);
			Assertv((glPathCoordsNV), verbose);
			Assertv((glPathSubCommandsNV), verbose);
			Assertv((glPathSubCoordsNV), verbose);
			Assertv((glPathStringNV), verbose);
			Assertv((glPathGlyphsNV), verbose);
			Assertv((glPathGlyphRangeNV), verbose);
			Assertv((glWeightPathsNV), verbose);
			Assertv((glCopyPathNV), verbose);
			Assertv((glInterpolatePathsNV), verbose);
			Assertv((glTransformPathNV), verbose);
			Assertv((glPathParameterivNV), verbose);
			Assertv((glPathParameteriNV), verbose);
			Assertv((glPathParameterfvNV), verbose);
			Assertv((glPathParameterfNV), verbose);
			Assertv((glPathDashArrayNV), verbose);
			Assertv((glPathStencilFuncNV), verbose);
			Assertv((glPathStencilDepthOffsetNV), verbose);
			Assertv((glStencilFillPathNV), verbose);
			Assertv((glStencilStrokePathNV), verbose);
			Assertv((glStencilFillPathInstancedNV), verbose);
			Assertv((glStencilStrokePathInstancedNV), verbose);
			Assertv((glPathCoverDepthFuncNV), verbose);
			Assertv((glCoverFillPathNV), verbose);
			Assertv((glCoverStrokePathNV), verbose);
			Assertv((glCoverFillPathInstancedNV), verbose);
			Assertv((glCoverStrokePathInstancedNV), verbose);
			Assertv((glGetPathParameterivNV), verbose);
			Assertv((glGetPathParameterfvNV), verbose);
			Assertv((glGetPathCommandsNV), verbose);
			Assertv((glGetPathCoordsNV), verbose);
			Assertv((glGetPathDashArrayNV), verbose);
			Assertv((glGetPathMetricsNV), verbose);
			Assertv((glGetPathMetricRangeNV), verbose);
			Assertv((glGetPathSpacingNV), verbose);
			Assertv((glIsPointInFillPathNV), verbose);
			Assertv((glIsPointInStrokePathNV), verbose);
			Assertv((glGetPathLengthNV), verbose);
			Assertv((glPointAlongPathNV), verbose);
			Assertv((glMatrixLoad3x2fNV), verbose);
			Assertv((glMatrixLoad3x3fNV), verbose);
			Assertv((glMatrixLoadTranspose3x3fNV), verbose);
			Assertv((glMatrixMult3x2fNV), verbose);
			Assertv((glMatrixMult3x3fNV), verbose);
			Assertv((glMatrixMultTranspose3x3fNV), verbose);
			Assertv((glStencilThenCoverFillPathNV), verbose);
			Assertv((glStencilThenCoverStrokePathNV), verbose);
			Assertv((glStencilThenCoverFillPathInstancedNV), verbose);
			Assertv((glStencilThenCoverStrokePathInstancedNV), verbose);
			Assertv((glPathGlyphIndexRangeNV), verbose);
			Assertv((glPathGlyphIndexArrayNV), verbose);
			Assertv((glPathMemoryGlyphIndexArrayNV), verbose);
			Assertv((glProgramPathFragmentInputGenNV), verbose);
			Assertv((glGetProgramResourcefvNV), verbose);
		}
		if(GL_NV_path_rendering_shared_edge) LOG_B(GL_NV_path_rendering_shared_edge);
		if(GL_NV_primitive_shading_rate) LOG_B(GL_NV_primitive_shading_rate);
		if(GL_NV_representative_fragment_test) LOG_B(GL_NV_representative_fragment_test);
		if(GL_NV_sample_locations)
		{
			LOG_B(GL_NV_sample_locations);
			Assertv((glFramebufferSampleLocationsfvNV), verbose);
			Assertv((glNamedFramebufferSampleLocationsfvNV), verbose);
			Assertv((glResolveDepthValuesNV), verbose);
		}
		if(GL_NV_sample_mask_override_coverage) LOG_B(GL_NV_sample_mask_override_coverage);
		if(GL_NV_scissor_exclusive)
		{
			LOG_B(GL_NV_scissor_exclusive);
			Assertv((glScissorExclusiveNV), verbose);
			Assertv((glScissorExclusiveArrayvNV), verbose);
		}
		if(GL_NV_shader_atomic_counters) LOG_B(GL_NV_shader_atomic_counters);
		if(GL_NV_shader_atomic_float) LOG_B(GL_NV_shader_atomic_float);
		if(GL_NV_shader_atomic_float64) LOG_B(GL_NV_shader_atomic_float64);
		if(GL_NV_shader_atomic_fp16_vector) LOG_B(GL_NV_shader_atomic_fp16_vector);
		if(GL_NV_shader_atomic_int64) LOG_B(GL_NV_shader_atomic_int64);
		if(GL_NV_shader_buffer_load)
		{
			LOG_B(GL_NV_shader_buffer_load);
			Assertv((glMakeBufferResidentNV), verbose);
			Assertv((glMakeBufferNonResidentNV), verbose);
			Assertv((glIsBufferResidentNV), verbose);
			Assertv((glMakeNamedBufferResidentNV), verbose);
			Assertv((glMakeNamedBufferNonResidentNV), verbose);
			Assertv((glIsNamedBufferResidentNV), verbose);
			Assertv((glGetBufferParameterui64vNV), verbose);
			Assertv((glGetNamedBufferParameterui64vNV), verbose);
			Assertv((glGetIntegerui64vNV), verbose);
			Assertv((glUniformui64NV), verbose);
			Assertv((glUniformui64vNV), verbose);
			Assertv((glGetUniformui64vNV), verbose);
			Assertv((glProgramUniformui64NV), verbose);
			Assertv((glProgramUniformui64vNV), verbose);
		}
		if(GL_NV_shader_buffer_store) LOG_B(GL_NV_shader_buffer_store);
		if(GL_NV_shader_subgroup_partitioned) LOG_B(GL_NV_shader_subgroup_partitioned);
		if(GL_NV_shader_texture_footprint) LOG_B(GL_NV_shader_texture_footprint);
		if(GL_NV_shader_thread_group) LOG_B(GL_NV_shader_thread_group);
		if(GL_NV_shader_thread_shuffle) LOG_B(GL_NV_shader_thread_shuffle);
		if(GL_NV_shading_rate_image)
		{
			LOG_B(GL_NV_shading_rate_image);
			Assertv((glBindShadingRateImageNV), verbose);
			Assertv((glGetShadingRateImagePaletteNV), verbose);
			Assertv((glGetShadingRateSampleLocationivNV), verbose);
			Assertv((glShadingRateImageBarrierNV), verbose);
			Assertv((glShadingRateImagePaletteNV), verbose);
			Assertv((glShadingRateSampleOrderNV), verbose);
			Assertv((glShadingRateSampleOrderCustomNV), verbose);
		}
		if(GL_NV_stereo_view_rendering) LOG_B(GL_NV_stereo_view_rendering);
		if(GL_NV_texture_barrier)
		{
			LOG_B(GL_NV_texture_barrier);
			Assertv((glTextureBarrierNV), verbose);
		}
		if(GL_NV_texture_rectangle_compressed) LOG_B(GL_NV_texture_rectangle_compressed);
		if(GL_NV_uniform_buffer_unified_memory) LOG_B(GL_NV_uniform_buffer_unified_memory);
		if(GL_NV_vertex_attrib_integer_64bit)
		{
			LOG_B(GL_NV_vertex_attrib_integer_64bit);
			Assertv((glVertexAttribL1i64NV), verbose);
			Assertv((glVertexAttribL2i64NV), verbose);
			Assertv((glVertexAttribL3i64NV), verbose);
			Assertv((glVertexAttribL4i64NV), verbose);
			Assertv((glVertexAttribL1i64vNV), verbose);
			Assertv((glVertexAttribL2i64vNV), verbose);
			Assertv((glVertexAttribL3i64vNV), verbose);
			Assertv((glVertexAttribL4i64vNV), verbose);
			Assertv((glVertexAttribL1ui64NV), verbose);
			Assertv((glVertexAttribL2ui64NV), verbose);
			Assertv((glVertexAttribL3ui64NV), verbose);
			Assertv((glVertexAttribL4ui64NV), verbose);
			Assertv((glVertexAttribL1ui64vNV), verbose);
			Assertv((glVertexAttribL2ui64vNV), verbose);
			Assertv((glVertexAttribL3ui64vNV), verbose);
			Assertv((glVertexAttribL4ui64vNV), verbose);
			Assertv((glGetVertexAttribLi64vNV), verbose);
			Assertv((glGetVertexAttribLui64vNV), verbose);
			Assertv((glVertexAttribLFormatNV), verbose);
		}
		if(GL_NV_vertex_buffer_unified_memory)
		{
			LOG_B(GL_NV_vertex_buffer_unified_memory);
			Assertv((glBufferAddressRangeNV), verbose);
			Assertv((glVertexFormatNV), verbose);
			Assertv((glNormalFormatNV), verbose);
			Assertv((glColorFormatNV), verbose);
			Assertv((glIndexFormatNV), verbose);
			Assertv((glTexCoordFormatNV), verbose);
			Assertv((glEdgeFlagFormatNV), verbose);
			Assertv((glSecondaryColorFormatNV), verbose);
			Assertv((glFogCoordFormatNV), verbose);
			Assertv((glVertexAttribFormatNV), verbose);
			Assertv((glVertexAttribIFormatNV), verbose);
			Assertv((glGetIntegerui64i_vNV), verbose);
		}
		if(GL_NV_viewport_array2) LOG_B(GL_NV_viewport_array2);
		if(GL_NV_viewport_swizzle)
		{
			LOG_B(GL_NV_viewport_swizzle);
			Assertv((glViewportSwizzleNV), verbose);
		}

	} // namespace GLNV
	{
		using namespace axl::glfl::core::GLOVR;
		if(GL_OVR_multiview)
		{
			LOG_B(GL_OVR_multiview);
			Assertv((glFramebufferTextureMultiviewOVR), verbose);
		}
		if(GL_OVR_multiview2) LOG_B(GL_OVR_multiview2);
	} // namespace GLOVR
	}
	if(axl::Assert::_num_failed_tests) puts("----------------------------------------");
	printf("%c> %d/%d Passed!\n", (axl::Assert::_num_failed_tests ? '*' : '\r'), (axl::Assert::_num_total_tests - axl::Assert::_num_failed_tests), axl::Assert::_num_total_tests);
	return axl::Assert::_num_failed_tests;
}