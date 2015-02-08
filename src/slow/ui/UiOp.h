/*
 * UiOp.h
 *
 *  Created on: Feb 8, 2015
 *      Author: inferno
 */

#ifndef UIOP_H_
#define UIOP_H_

class Ui;
class UiPage;
class UiElement;

class UiOp {
public:
	Ui* ui;
	UiPage* page;
	UiElement* element;
	UiOp(Ui* ui, UiPage* page);
	virtual ~UiOp();
	void setOwner(UiElement* element);
	virtual void execute();
};

#endif /* UIOP_H_ */
