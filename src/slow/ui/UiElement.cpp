/*
 * UiElement.cpp
 *
 *  Created on: Jan 18, 2015
 *      Author: inferno
 */

#include <ui/UiElement.h>

UiElement::UiElement(Vert2f pos, Vert2f size, char align) {
	this->pos = pos;
	this->size = size;
	this->align = align;
	this->hidden = false;
}

UiElement::~UiElement() {
	// TODO Auto-generated destructor stub
}

void UiElement::setHidden(bool b) {
	hidden = b;
}

void UiElement::handleClick(Screen* screen, unsigned char btn, int type, int x, int y ) {
	if(contains(screen, Vert2f{x,y}))
		std::cout << "You Clicked this test object\n";
}

void UiElement::handleKey(Screen* screen, unsigned char key, int x, int y ) {

}

bool UiElement::contains(Screen* screen, Vert2f v) {
	Vert2f aligned = alignPos(screen);
	return v.x > aligned.x && v.x < aligned.x+size.x && v.y > aligned.y && v.y < aligned.y + size.y;
}

//Align indexes
//-0x00 top-left
//-0x01 bottom-left
//-0x02 top-right
//-0x03 bottom-right
//-0x04 center-left
//-0x05 center-right
//-0x06 top-center
//-0x07 bottom-center
//-0x08 center-center
Vert2f UiElement::alignPos(Screen* screen) {
	switch(align) {
		case 0x00:
			return pos;
		case 0x01: {
			return Vert2f(pos.x,float(screen->height)-pos.y-size.y);
		}
		case 0x02: {
			return Vert2f(float(screen->width)-pos.x-size.x,pos.y);
		}
		case 0x03: {
			return Vert2f(float(screen->width)-pos.x-size.x,float(screen->height)-pos.y-size.y);
		}
	}
	return Vert2f(0.0f,0.0f);
}

void UiElement::draw(Screen* screen) {
	if(hidden) return;
	Vert2f aligned = alignPos(screen);
	glBegin(GL_TRIANGLES);
	glColor4f(1.0f,1.0f,1.0f,1.0f);
		glVertex2f(aligned.x,aligned.y);
		glVertex2f(aligned.x+size.x,aligned.y);
		glVertex2f(aligned.x,aligned.y+size.y);

		glVertex2f(aligned.x+size.x,aligned.y);
		glVertex2f(aligned.x,aligned.y+size.y);
		glVertex2f(aligned.x+size.x,aligned.y+size.y);
	glEnd();
}
