// File: CApp_onEvent.cpp
// Description: [CApp Event function]
// Last Modified: 2014-05-16Fri 10:43 PDT
//
#include "CApp.h"

void CApp::onEvent(SDL_Event* Event)
{
	// Add a way to quit
	if(Event->type == SDL_QUIT)
	{
		running = false;
	}
}
//EOF
