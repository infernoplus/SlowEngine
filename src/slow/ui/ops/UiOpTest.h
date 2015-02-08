/*
 * UiOpTest.h
 *
 *  Created on: Feb 8, 2015
 *      Author: inferno
 */

#ifndef UIOPTEST_H_
#define UIOPTEST_H_

#include "slow/ui/UiOp.h"

class UiOpTest : public UiOp {
public:
	UiOpTest(Ui* ui, UiPage* page);
	virtual ~UiOpTest();
	virtual void execute();
};

#endif /* UIOPTEST_H_ */
