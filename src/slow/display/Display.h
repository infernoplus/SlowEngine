/*
 * Display.h
 *
 *  Created on: Dec 9, 2014
 *      Author: inferno
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <iostream>
#include <stdio.h>
#include <string>

#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>
#include <GL/glu.h>
#include <GL/gl.h>

#include "SDL2/SDL_thread.h"
#include "SDL2/SDL_timer.h"

#include "slow/display/Render.h"
#include "slow/data/Screen.hpp"

class Engine;

class Display {
public:
	Engine* engine;
	Render *render;

	Screen *screen;

	bool exit;
	SDL_Thread *thread;

	SDL_Window* gWindow = NULL;
	SDL_GLContext gContext;

	Display(Engine* e);
	virtual ~Display();

	static int displayWrapper(void *ptr);
	int display();
	bool initSDL();
	bool initRender();
	void stop();
	void close();
};

#endif /* DISPLAY_H_ */
