//============================================================================
// Name        : SlowEngine
// Author      : Patrick Moriarty - Inferno
// Version     :
// Copyright   : Copyright Patrick Moriarty 2014 - Don't steal nerds.
// Description : Flexile c++ game engine.
//============================================================================

#include "slow/Engine.h"

using namespace std;

int main(int argc, char *argv[]) {
	Engine e = Engine{argc, argv};
	int r  = e.run();
	return r;
}
