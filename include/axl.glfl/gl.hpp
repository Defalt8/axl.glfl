#pragma once
#include <stdint.h>

#ifdef WIN32
#	ifndef APIENTRY
#		define APIENTRY __stdcall
#	endif
#else
#	define APIENTRY
#endif

#ifndef APIENTRYP
#	define APIENTRYP APIENTRY *
#endif

#ifndef GLAPI
#	define GLAPI extern
#endif

typedef void GLvoid;
typedef unsigned int GLenum;
typedef int GLint;
typedef int GLsizei;
typedef unsigned int GLbitfield;
typedef float GLfloat;
typedef GLfloat GLclampf;
typedef double GLdouble;
typedef GLdouble GLclampd;
typedef unsigned int GLuint;
typedef unsigned char GLboolean;
typedef char GLbyte;
typedef unsigned char GLubyte;
typedef short int GLshort;
typedef unsigned short int GLushort;
typedef unsigned int GLconstant;
typedef unsigned long long GLLconstant;
