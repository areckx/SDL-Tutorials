// File: CApp_onRender.cpp
// Description: [CApp Render function]
// Last Modified: 2014-05-16Fri 10:43 PDT
//
#include "CApp.h"
#include "CSurface.h"

void CApp::onRender()
{
	// Draw the test image
	//CSurface::onDraw(surfDisplay, surfTest, 0, 0);

	// Test the second, srcR image
	CSurface::onDraw(surfDisplay, surfTest, 100, 100, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 200, 100, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 300, 100, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 400, 100, 10, 0, 50, 50);

	CSurface::onDraw(surfDisplay, surfTest, 400, 100, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 400, 200, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 400, 300, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 400, 400, 10, 0, 50, 50);

	CSurface::onDraw(surfDisplay, surfTest, 400, 100, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 350, 75, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 300, 50, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 250, 25, 10, 0, 50, 50);

	CSurface::onDraw(surfDisplay, surfTest, 400, 100, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 350, 125, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 300, 150, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 250, 175, 10, 0, 50, 50);


	CSurface::onDraw(surfDisplay, surfTest, 250, 150, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 250, 125, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 250, 100, 10, 0, 50, 50);
	CSurface::onDraw(surfDisplay, surfTest, 250, 75, 10, 0, 50, 50);



	// Refresh the buffer and display surfDisplay to the screen.
	// This is called "double buffering", the process of drawing 
	// everything into memory. and then finally drawing everything
	// onto the screen. If we didn't do this, we'd have flickering.
	// This is what turns `SDL_DOUBLEBUF` on
	SDL_Flip(surfDisplay);
}

//EOF
