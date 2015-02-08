/*
 * UiElementButton.h
 *
 *  Created on: Feb 8, 2015
 *      Author: inferno
 */

#ifndef UIELEMENTBUTTON_H_
#define UIELEMENTBUTTON_H_

#include "slow/ui/UiElement.h"
#include "slow/ui/UiOp.h"

class UiElementButton : public UiElement {
public:
	UiOp* opr;
	UiElementButton(Vert2f pos, Vert2f size, char align, UiOp* opr);
	virtual ~UiElementButton();
	virtual void handleClick(Screen* screen, unsigned char btn, int type, int x, int y);
};

#endif /* UIELEMENTBUTTON_H_ */

