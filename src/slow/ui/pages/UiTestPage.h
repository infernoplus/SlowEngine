/*
 * UiTestPage.h
 *
 *  Created on: Feb 8, 2015
 *      Author: inferno
 */

#ifndef UITESTPAGE_H_
#define UITESTPAGE_H_

#include "slow/ui/UiPage.h"
#include "slow/ui/elements/UiElementButton.h"

class Ui;

class UiTestPage : public UiPage {
public:
	UiTestPage(Ui* ui);
	virtual void createPage();
};

#endif /* UITESTPAGE_H_ */
