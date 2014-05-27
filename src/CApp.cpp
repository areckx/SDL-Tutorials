// File: CApp.cpp
// Description: [Core file for tutorials]
// Last Modified: 2014-05-16Fri 10:43 PDT
//
#include "CApp.h"

/* Games are one gigantic loop, for example::
 * 	
 * 	Initialize();
 *
 * 	while(true)
 * 	{
 * 		Events();
 * 		Loop();
 * 		Render();
 * 	}
 *
 * 	Cleanup();
 */

CApp::CApp()
{
	// Keep things tidy
	surfDisplay = NULL;

	running = true;
}
int CApp::onExecute() 
{

	// Try to initialize the game
	if(onInit() == false)
	{
		return -1; // Error code if unable
	}

	// If initialize, continue game loop
	SDL_Event Event;	// Structure that holds information
				// about events

	while(running)
	{
		// Check for events
		while(SDL_PollEvent(&Event))	// Grab events waiting in queue
		{
			// Pass each event one at a time to `onEvent`
			onEvent(&Event);
		}
		// Once done with events:
		onLoop();	// Move data around
		onRender();	// Render the game

		// Repeat indefinitely
	}

	// If the user exits the game, clean up resources
	onCleanup();

	return 0; 
}

int main(int argc, char* argv[])
{
	CApp theApp;

	return theApp.onExecute();
}

//EOF
