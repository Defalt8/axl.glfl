# axl.glfl

An organized multiplatform OpenGL function loader.

## Version and supported platforms

- **Latest version**: 1.3.7 beta
- **Supported platforms**: Windows, Linux

## Requirements and Dependencies

- **Requires**
  - A windows or linux desktop platform.
  - [CMake]("https://cmake.org/download"). *"An open-source, cross-platform family of tools designed to build, test and package software."*
  - *GNU* (eg. [linux gnu c]("https://www.gnu.org/software/libc/")), *MinGW* (eg. [CodeBlocks IDE]("http://www.codeblocks.org/")), *Visual C++* (eg. [Visual Studio IDE]("https://visualstudio.microsoft.com/")) or other C/C++ compiler with standard C library included.
  - *cmake*, *gcc* and *c++* executable directories must be added to the `PATH` environment variable.
- **Depends on**
  - *The standard C library.*
  - *OpenGL library*: `opengl32` on windows and `GL` on linux.
  - *Platform specific libraries:* `gdi32` on windows, `X11` on linux.

## Building Guide

- Clone this repository: `git clone https://github.com/defalt8/axl.glfl.git`
- Initialize CMake build directory.
  - `mkdir out/build`
  - `cd out/build`
  - `cmake -S ../../`
- Configure the cmake cache. *Default values are listed first.*
  - `cmake . -DCMAKE_BUILD_TYPE=Debug` -- `Debug|Release|MinSizeRel|RelWithDebInfo`
  - `cmake . -DAXLGLFL_TYPE=STATIC` -- `STATIC|SHARED`
  - `cmake . -BUILD_TESTS=ON` -- `OFF|ON`
  - `cmake . -DAXLGLFL_BUILD_TESTS=ON` -- `ON|OFF`
- Build
  - `cmake --build .`
- Running Tests
  - Tests are build when both `BUILD_TESTS` and `AXLGLFL_BUILD_TESTS` are set to `ON`.
  - Tests are build in the directory `${CMAKE_BINARY_DIR}/bin`, where all shared libraries are build as well.
  - Some generators add `${CMAKE_BUILD_TYPE}` as suffix to build paths. So, you should check for that.
  - `out/build/bin/axl.glfl.dummy` -- Dummy class tests
  - `out/build/bin/axl.glfl.glcorearb` -- Core OpenGL function loader tests.
- Installing library
  - By default:
    - Headers will be installed to `${CMAKE_INSTALL_PREFIX}/include`
    - `${AXLGLFL_HEADER_INSTALL_DIR} = include`
    - Library archives will be installed to `${CMAKE_INSTALL_PREFIX}/lib`
    - `${AXLGLFL_ARCHIVE_INSTALL_DIR} = lib`
    - Shared libraries will be installed to `${CMAKE_INSTALL_PREFIX}/bin`
    - `${AXLGLFL_RUNTIME_INSTALL_DIR} = bin`
  - `cmake . -DCMAKE_INSTALL_PREFIX=<loc_to_install>`
  - `cmake --install .`

### Linking the library in a CMake project

- Configuring the project:
  - `set( AXLGLFL_BUILD_TESTS OFF )`
  - `set( AXLGLFL_ARCHIVE_DIR "${CMAKE_BINARY_DIR}/lib" )`
  - `set( AXLGLFL_RUNTIME_DIR "${CMAKE_BINARY_DIR}/bin" )`
  - `set( AXLGLFL_HEADER_INSTALL_DIR "include" )`
  - `set( AXLGLFL_ARCHIVE_INSTALL_DIR "lib" )`
  - `set( AXLGLFL_RUNTIME_INSTALL_DIR "bin" )`
  - `set( AXLGLFL_INSTALL_HEADERS OFF CACHE BOOL )`
  - `set( AXLGLFL_INSTALL_ARCHIVES OFF CACHE BOOL )`
  - `set( AXLGLFL_INSTALL_RUNTIMES ON CACHE BOOL )`
- Including the project:
  - `add_subdirectory( <axl.glfl_path> [local_build_path] )` -- `axl.glfl_path` is the path to this cmake project. `local_build_path` is your local build path and it is *\*optional*.
- Linking to a target:
  - `target_link_libraries( <target> <PUBLIC|PRIVATE> axl.glfl )`

### Linking the built library

- First you need to build the library (STATIC or SHARED).
- Then you need to install the library to the path you desire.
- The static library base name is `axl.glfls` or `axl.glflsd` for Debug build type.
- The shared library base name is `axl.glfl` or `axl.glfld` for Debug build type.
- ***Make sure to define the macro `AXLGLFL_SHARED` if you are linking to the shared library.***
- Add the include and library archive directories, you installed to, to the compiler's include and link search directories.

## Library outline

### Header files

- [axl.glfl/platform.h]("include/axl.glfl/platform.h") - Defines PLATFORM and ABI macros based on the building platform.
- [axl.glfl/glfl.hpp]("include/axl.glfl/glfl.hpp") - Library base header. Declares VERSION and BUILD.
- [axl.glfl/gl.hpp]("include/axl.glfl/gl.hpp") - Declares common OpenGL data types and macros.
- [axl.glfl/glCoreARB.hpp]("include/axl.glfl/glCoreARB.hpp") - Declares **all core** OpenGL *functions* and *extensions* within specific namespaces. Contains the `load` function.
- [axl.glfl/Dummy.hpp]("include/axl.glfl/Dummy.hpp") - Declares `Dummy` OpenGL context class.
