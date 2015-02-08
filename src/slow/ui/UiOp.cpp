/*
 * UiOp.cpp
 *
 *  Created on: Feb 8, 2015
 *      Author: inferno
 */

#include <ui/UiOp.h>

#include <slow/ui/Ui.h>
#include <slow/ui/UiPage.h>
#include <slow/ui/UiElement.h>

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

