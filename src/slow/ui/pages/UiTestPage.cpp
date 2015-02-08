/*
 * UiTestPage.cpp
 *
 *  Created on: Feb 8, 2015
 *      Author: inferno
 */

#include <ui/pages/UiTestPage.h>

#include <slow/ui/Ui.h>

UiTestPage::UiTestPage(Ui* ui) : UiPage(ui) {

}

void UiTestPage::createPage() {
	//elements.reserve(1); //Reserve space for elements we need
	UiElement* testOne = new UiElement(Vert2f(10.0f,3.0f), Vert2f(4.0f,7.0f), 0x00);
	addElement(testOne);

	UiElement* testTwo = new UiElement(Vert2f(55.0f,33.0f), Vert2f(12.0f,22.0f), 0x00);
	addElement(testTwo);

	UiElement* testThree = new UiElement(Vert2f(4.0f,4.0f), Vert2f(8.0f,18.0f), 0x01);
	addElement(testThree);

	UiElement* testFour = new UiElement(Vert2f(4.0f,4.0f), Vert2f(8.0f,18.0f), 0x02);
	addElement(testFour);

	UiOpTest* opTest = new UiOpTest(ui, this);
	UiElement* testFive = new UiElementButton(Vert2f(4.0f,4.0f), Vert2f(8.0f,18.0f), 0x03, opTest);
	addElement(testFive);
}
