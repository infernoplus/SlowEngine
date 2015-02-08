/*
 * Ui.h
 *
 *  Created on: Dec 9, 2014
 *      Author: inferno
 */

#ifndef UI_H_
#define UI_H_

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

#include "slow/ui/UiPage.h"

#include "slow/data/Vertex.hpp"
#include "slow/data/Screen.hpp"

#include "slow/ui/pages/UiTestPage.h"

class Engine;

class Ui {
public:
	Engine* engine;
	Screen* screen; //We store screen info on the UI for screen space operations that occasionally show up.
	std::vector<UiPage*> active;

	Ui(Engine* e);
	virtual ~Ui();

	void setActivePage(UiPage* page);

	void handleClick( unsigned char btn, int type, int x, int y );
	void handleKey( unsigned char key, int x, int y );

	void draw(Screen* screen);

	void close();

private:
	std::vector<UiPage*> pages;

	void createPages();
};

#endif /* UI_H_ */
