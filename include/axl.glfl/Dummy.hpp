#pragma once
#include "glfl.hpp"

namespace axl {
namespace glfl {

class AXLGLFLCXXAPI Dummy {
	public:
		enum InitError {
			IERR_UNKNOWN = -1,
			IERR_NONE = 0,
			IERR_WINDOW_CLASS,
			IERR_WINDOW,
			IERR_PIXEL_FORMAT,
			IERR_CONTEXT
		};
		Dummy(bool init = false);
		~Dummy();
		// Initializes global dummy OpenGL context.
		// - returns IERR_NONE on success
		InitError init();
		// returns true if the dummy context is valid
		bool isInitialized() const;
		// returns true if the dummy context is currently bound
		bool isCurrent() const;
		// Makes the global dummy OpenGL context current.
		// - returns true on success else false, 
		//   if the dummy is not initiaized or other errors
		bool makeCurrent() const;
		// Makes the current OpenGL context NULL.
		static bool clearCurrent();
		// Deletes dummy and cleans up resources
		void destroy();
	private:
		void *reserved;
};

AXLGLFLAPI Dummy GlobalDummy;

} // namespace axl::glfl
} // namespace axl