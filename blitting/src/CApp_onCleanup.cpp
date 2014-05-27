// File: CApp_onCleanup.cpp
// Description: [CApp Cleanup function]
// Last Modified: 2014-05-16Fri 10:43 PDT
//
#include "CApp.h"

void CApp::onCleanup()
{
	// Clean up test
	SDL_FreeSurface(surfTest);
	SDL_FreeSurface(surfDisplay);
	SDL_Quit();
}
//EOF
