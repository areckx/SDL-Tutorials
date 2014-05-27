// File: CApp.h
// Description: [Core for our tutorial]
// Last Modified: 2014-05-27Tue 15:15 PDT
//
#ifndef _CAPP_H_
#define _CAPP_H_
#include <SDL/SDL.h>

// The CApp class is setting the stage for our entire program.
// Most games consist of 5 functions:
//
// 	Initialize::
// 		This function handles all the loading of data. textures,
// 		maps, NPCs, etc.
//	
//	Event::
//		Handles all input from mouse, keyboard, etc.
//
//	Loop:: 
//		Handles all data updates, such as NPCs moving across 
//		the screen, decreasing health bar, etc.
//
//	Render::
//		Handles the rendering of anything that shows up on screen.
//		It does NOT handle data manipulation, as that is handled
//		by `Loop`.
//
//	Cleanup::
//		Simply cleans up resources loaded, and ensure peaceful 
//		quitting of the game.
//
//
// Games are one gigantic loop
class CApp
{
	private:
		// Is game running? true/false
		bool running;

		// Add SDL surface
		//
		// An SDL surface is anything that can be drawn, or drawn to.
		// For example, if we have a blank piece of paper, a pencil,
		// and some stickers; this paper could be called our display
		// "surface." We can draw to it, put stickers on it, etc.
		// The stickers we have are also surfaces; we can draw on them
		// and put other stickers on it as well.
		//
		// `surfDisplay` is our "blank piece of paper"
		SDL_Surface* surfDisplay;

		// Test to make sure the surfaces work
		SDL_Surface* surfTest;


	public:

		CApp();

		int onExecute();

		bool onInit();
		
		void onEvent(SDL_Event* Event);

		void onLoop();

		void onRender();

		void onCleanup();
};

#endif 
//EOF
