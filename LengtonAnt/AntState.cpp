#include "stdafx.h"
#include "AntState.h"
#include "Ant.h"
#include <assert.h>

AntState::AntState(Ant *ant, Color color) 
	: __ant(ant), __color(color) {}

void AntState::processState(int value) {
	if (__color == value)
		process();
	else if (__nextState)
		__nextState->processState(value);
	else {
		printf("STATE ERROR\n");
		assert(0);
	}
}

AntState* AntState::setNextState(AntState *nextState) {
	__nextState = nextState;
	return nextState;
}