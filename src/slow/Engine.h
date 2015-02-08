/*
 * Engine.h
 *
 *  Created on: Dec 8, 2014
 *      Author: inferno
 */

#ifndef ENGINE_H_
#define ENGINE_H_

#include <SDL2/SDL.h>

#include "slow/console/Log.h"
#include "slow/display/Display.h"
#include "slow/input/Input.h"
#include "slow/ui/Ui.h"

class Engine {
public:
	bool exit;

	Log* log;

	Display* display;
	Input* input;

	Ui* ui;

	Engine(int argc, char *argv[]);
	virtual ~Engine();

	int run();
	void stop();
private:
	void close();
};

#endif /* ENGINE_H_ */
