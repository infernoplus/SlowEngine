/*
 * Ui.cpp
 *
 *  Created on: Dec 9, 2014
 *      Author: inferno
 */

#include <ui/Ui.h>
#include <Engine.h>

Ui::Ui(Engine* e) {
	engine = e;
	screen = new Screen(0,0);

	createPages();
}

Ui::~Ui() {

}
//Load all pages.
void Ui::createPages() {
	pages.reserve(1); //Reserve space for all pages we need
	UiTestPage* testPage = new UiTestPage(this);
	testPage->createPage();
	pages.push_back(testPage);
	setActivePage(testPage);

}
void Ui::setActivePage(UiPage* page) {
	active.clear();
	active.push_back(page);
}

void Ui::handleClick(unsigned char btn, int type, int x, int y ) {
	for(uint i=0;i<active.size();i++)
		active.data()[i]->handleClick(this->screen, btn, type, x, y);
}

void Ui::handleKey(unsigned char key, int x, int y ) {
	for(uint i=0;i<active.size();i++)
		active.data()[i]->handleKey(this->screen, key, x, y);
}


void Ui::draw(Screen* screen) {
	this->screen = screen;
	for(uint i=0;i<active.size();i++)
		active.data()[i]->draw(this->screen);
}

void Ui::close() {

}
