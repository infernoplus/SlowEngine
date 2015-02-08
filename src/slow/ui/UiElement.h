/*
 * UiElement.h
 *
 *  Created on: Jan 18, 2015
 *      Author: inferno
 */

#ifndef UIELEMENT_H_
#define UIELEMENT_H_

#include <iostream>

#include <GL/glew.h>
#include <GL/glu.h>
#include <GL/gl.h>

#include <stdio.h>
#include <iostream>

#include <cstring>
#include <memory.h>
#include "slow/data/Vertex.hpp"
#include "slow/data/Screen.hpp"

class UiElement {
public:
	UiElement(Vert2f pos, Vert2f size, char align);
	virtual ~UiElement();

	void setHidden(bool b);

	virtual void handleClick(Screen* screen, unsigned char btn, int type, int x, int y );
	virtual void handleKey(Screen* screen, unsigned char key, int x, int y );

	virtual void draw(Screen* screen);

private:
	Vert2f pos = Vert2f{0.0f, 0.0f};
	Vert2f size = Vert2f{1.0f,1.0f};
	char align = 0x00;
	bool hidden = false;

	bool contains(Screen* screen, Vert2f v);
	Vert2f alignPos(Screen* screen);
};

#endif /* UIELEMENT_H_ */
