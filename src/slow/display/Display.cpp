/*
 * Display.cpp
 *
 *  Created on: Dec 9, 2014
 *      Author: inferno
 */

#include <display/Display.h>
#include <Engine.h>

const int SCREEN_WIDTH = 640; const int SCREEN_HEIGHT = 480;

Display::Display(Engine* e) {
	engine = e;

	exit = false;
    thread = SDL_CreateThread(displayWrapper, "DisplayThread", this);

    if (NULL == thread) {
        printf("\nSDL_CreateThread failed: %s\n", SDL_GetError());
        return;
    }
}

Display::~Display() {
	// TODO Auto-generated destructor stub
}

int Display::displayWrapper(void *ptr) {
	Display* self = static_cast<Display*>(ptr);
	return self->display();
}

int Display::display() {
	if(!initRender())  { std::cout << "Failed to renderer!\n"; engine->stop(); return 1; }
	if(!initSDL()) { std::cout << "Failed to start SDL!\n"; engine->stop(); return 1; }

	int width; int height;
	SDL_GetWindowSize(gWindow, &width, &height);
	screen = new Screen(width, height);

	while(!exit) {
		//Render scene
		render->render();

		//Update screen
		SDL_GL_SwapWindow( gWindow );
		SDL_Delay(33);
	}
	return 0;
}

bool Display::initSDL() {
	//Initialization flag
	bool success = true;

	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		//Use OpenGL 3.1 core
		SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 3 );
		SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 1 );
		SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE );

		//Create window
		gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN );
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Create context
			gContext = SDL_GL_CreateContext( gWindow );
			if( gContext == NULL )
			{
				printf( "OpenGL context could not be created! SDL Error: %s\n", SDL_GetError() );
				success = false;
			}
			else
			{
				//Initialize GLEW
				glewExperimental = GL_TRUE;
				GLenum glewError = glewInit();
				if( glewError != GLEW_OK )
				{
					printf( "Error initializing GLEW! %s\n", glewGetErrorString( glewError ) );
				}

				//Use Vsync
				if( SDL_GL_SetSwapInterval( 1 ) < 0 )
				{
					printf( "Warning: Unable to set VSync! SDL Error: %s\n", SDL_GetError() );
				}

				//Initialize OpenGL
				if( !render->initGL() )
				{
					printf( "Unable to initialize OpenGL!\n" );
					success = false;
				}
			}
		}
	}

	return success;
}

bool Display::initRender() {
	//Success flag
	bool success = true;
	render = new Render(this);
	return success;
}

void Display::stop() {
	//Stop run
	exit = true;
}

void Display::close() {
	//Destroys renderer
	render->close();
	delete render;
	delete screen;

	//Destroy window
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;

	//Quit SDL subsystems
	SDL_Quit();
}
