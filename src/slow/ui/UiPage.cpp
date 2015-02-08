/*
 * UiPage.cpp
 *
 *  Created on: Jan 18, 2015
 *      Author: inferno
 */

#include <ui/UiPage.h>

#include "slow/ui/Ui.cpp"

UiPage::UiPage(Ui* ui) {
	this->ui = ui;
}

UiPage::~UiPage() {

}

void UiPage::addElement(UiElement* element) {
	elements.push_back(element);
}

void UiPage::handleClick(Screen* screen, unsigned char btn, int type, int x, int y ) {
	for(int i=0;i<elements.size();i++)
		elements.data()[i]->handleClick(screen,btn,type,x,y);
}

void UiPage::handleKey(Screen* screen, unsigned char key, int x, int y ) {
	for(uint i=0;i<elements.size();i++)
		elements.data()[i]->handleKey(screen,key,x,y);
}

void UiPage::draw(Screen* screen) {
	for(uint i=0;i<elements.size();i++)
		elements.data()[i]->draw(screen);
}
