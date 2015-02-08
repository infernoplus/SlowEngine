/*
 * UiPage.h
 *
 *  Created on: Jan 18, 2015
 *      Author: inferno
 */

#ifndef UIPAGE_H_
#define UIPAGE_H_

#include <vector>
#include "slow/ui/UiElement.h"
#include "slow/data/Vertex.hpp"
#include "slow/data/Screen.hpp"

class Ui;

class UiPage {
public:
	Ui* ui;
	UiPage(Ui* ui);
	virtual ~UiPage();

	void addElement(UiElement* element);

	void handleClick(Screen* screen, unsigned char btn, int type, int x, int y );
	void handleKey(Screen* screen, unsigned char key, int x, int y );

	void draw(Screen* screen);

	virtual void createPage() {
		//Overide me!
	}
private:
	std::vector<UiElement*> elements;
};

#endif /* UIPAGE_H_ */
