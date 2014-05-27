// File: CApp_onInit.cpp
// Description: [CApp Init function]
// Last Modified: 2014-05-16Fri 10:43 PDT
//
#include "CApp.h"

bool CApp::onInit()
{
	// Start up SDL so we can access its functions
	
	// Initialize everything it has 
	if (SDL_Init(SDL_INIT_EVERYTHING) > 0)
	{
		return false;
	}

	// Create our window and our surface. 
	//
	// 4 parameters: 
	// 	width
	// 	height
	// 	bit resolution(recommended 16 or 32) 
	//	display flags
	// `SDL_HWSURFACE` tells SDL to use hardware memory for storing
	// our images and such
	//
	// `SDL_DOUBLEBUF` tells SDL to use double buffering(remove flickering)
	if ((surfDisplay = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | 
				SDL_DOUBLEBUF)) == NULL)
	{
		return false;
	}
	return true;
}
//EOF
