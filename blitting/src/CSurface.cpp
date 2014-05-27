// File: CSurface.cpp
// Description: [CSurface functions]
// Last Modified: 2014-05-16Fri 10:43 PDT
//
#include "CSurface.h"

CSurface::CSurface()
{
}

SDL_Surface* CSurface::onLoad(char* file)
{
	SDL_Surface* surfTemp = NULL;
	SDL_Surface* surfReturn = NULL;

	if((surfTemp = SDL_LoadBMP(file)) == NULL)
	{
		return NULL;
	}

	surfReturn = SDL_DisplayFormat(surfTemp);
	SDL_FreeSurface(surfTemp);

	return surfReturn;
}


//EOF
