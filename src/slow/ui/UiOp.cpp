/*
 * UiOp.cpp
 *
 *  Created on: Feb 8, 2015
 *      Author: inferno
 */

#include <ui/UiOp.h>

UiOp::UiOp(Ui* ui, UiPage* page) {
	this->ui = ui;
	this->page = page;
	this->element = NULL;
}

UiOp::~UiOp() {

}

void UiOp::setOwner(UiElement* element) {
	this->element = element;
}

void UiOp::execute() {
//Override me!
}

