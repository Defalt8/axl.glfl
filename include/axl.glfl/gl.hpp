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

namespace axl {
namespace glfl {

typedef void GLvoid;
typedef unsigned int GLenum;
typedef int GLint;
typedef int GLsizei;
typedef unsigned int GLbitfield;
typedef float GLfloat;
typedef double GLdouble;
typedef unsigned int GLuint;
typedef unsigned char GLboolean;
typedef GLfloat GLclampf;
typedef double GLclampd;
typedef unsigned int GLuint;
typedef unsigned char GLboolean;
typedef unsigned char GLubyte;
typedef unsigned int* GLsizeiptr;
typedef int* GLintptr;
typedef unsigned short int GLushort;
typedef unsigned int GLconstant;
typedef unsigned long long GLLconstant;
typedef uint16_t GLhalf;
typedef char GLchar;
typedef int16_t GLshort;
typedef int8_t GLbyte;
typedef uint16_t GLushort;
typedef uint64_t GLuint64;
typedef int64_t GLint64;
typedef uint64_t GLuint64EXT;
typedef int64_t GLint64EXT;
typedef struct __GLsync *GLsync;

} // namespace axl::glfl
} // namespace axl
