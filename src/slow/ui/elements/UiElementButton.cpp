/*
 * UiElementButton.cpp
 *
 *  Created on: Feb 8, 2015
 *      Author: inferno
 */

#include <ui/elements/UiElementButton.h>

UiElementButton::UiElementButton(Vert2f pos, Vert2f size, char align, UiOp* opr) {
	this->opr = opr;
	opr->setOwner(this);
}

UiElementButton::~UiElementButton() {
	// TODO Auto-generated destructor stub
}

virtual void UiElementButton::handleClick(Screen* screen, unsigned char btn, int type, int x, int y) {
	if(contains(screen, Vert2f{x,y}))
		opr->execute();
}

