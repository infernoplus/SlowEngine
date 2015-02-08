/*
 * UiOpTest.cpp
 *
 *  Created on: Feb 8, 2015
 *      Author: inferno
 */

#include <iostream>
#include <ui/ops/UiOpTest.h>

UiOpTest::UiOpTest(Ui* ui, UiPage* page) : UiOp(ui, page) {

}

UiOpTest::~UiOpTest() {
}

void UiOpTest::execute() {
	std::cout << "Executed Test Op!\n";
}
