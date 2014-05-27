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

// Two surface, two int variables
//
// surfDest is the destination surface, or the surface we are going to draw on.
// destSrc is the source surface, or the surface we are going to use to 
// draw on another surface.
// Basically, we are putting surfSrc on top of surfDest.
//
// The x and y variables are the position on the surfDest where we are drawing 
// the surface to.
bool CSurface::onDraw(SDL_Surface* surfDest, SDL_Surface* surfSrc, int X, int Y)
{
	// Make sure we have valid surfaces
	if(surfDest == NULL || surfSrc == NULL)
	{
		return false;
	}

	// An SDL structure that has four members: 
	// 	x, y, w, h
	// creating the dimensions of the rectangle.
	// We are only worried about where we are drawing to, not the size.
	// So we assign x, y coordinates to the destination surface.
	SDL_Rect destR;

	destR.x = X;
	destR.y = Y;

	SDL_BlitSurface(surfSrc, NULL, surfDest, &destR);

	return true;
}

// Allows us to specify what pixels from the source to copy over to the destination
bool CSurface::onDraw(SDL_Surface* surfDest, SDL_Surface* surfSrc, int X, int Y,
		int X2, int Y2, int W, int H)
{
	if(surfDest == NULL || surfSrc == NULL)
	{
		return false;
	}

	SDL_Rect destR;

	destR.x = X;
	destR.y = Y;

	SDL_Rect srcR;

	srcR.x = X2;
	srcR.y = Y2;
	srcR.w = W;
	srcR.h = H;

	SDL_BlitSurface(surfSrc, &srcR, surfDest, &destR);

	return true;
}


//EOF
