// File: CSurface.h
// Description: [CApp surfaces]
// Last Modified: 2014-05-16Fri 10:43 PDT
//
#ifndef _CSURFACE_H_
#define _CSURFACE_H_

#include <SDL/SDL.h>

class CSurface
{
	public:
		CSurface();

		// Createa  simple static function `onLoad`
		// that will load a surface 
		static SDL_Surface* onLoad(char* file);
};

#endif
//EOF
