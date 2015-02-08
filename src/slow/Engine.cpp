/*
 * Engine.cpp
 *
 *  Created on: Dec 8, 2014
 *      Author: inferno
 */

#include "Engine.h"

Engine::Engine(int argc, char *argv[]) {
	exit = false;
	log = new Log(); log->log("Logging started...");
	display = new Display(this); log->log("Display started...");
	input = new Input(this); log->log("Input started...");
	ui = new Ui(this); log->log("Ui started...");
	log->log("Engine running!");
}

Engine::~Engine() {

}

int Engine::run() {
	while(!exit) {
		input->step();
		SDL_Delay(33);
	}
	close();
	return 0;
}

void Engine::stop() {
	exit = true;
	display->stop();
	SDL_Delay(100); //Give display thread 1/10 a second to close before free memory
}

void Engine::close() {
	log->log("Stopping engine!");
	ui->close();
	display->close();
	input->close();
	log->close();

	delete ui;
	delete display;
	delete input;
	delete log;
}
