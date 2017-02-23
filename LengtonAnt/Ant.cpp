#include "stdafx.h"
#include "AntState.h"
#include "Ant.h"

Ant::Ant(Orientation orientation, int x, int y, Map *map, AntState *states) 
	: __orientation(orientation), __x(x), __y(y), __map(map), __states(states) 
{}

void Ant::setOrientation(Orientation orientation) { __orientation = orientation; }
Ant::Orientation Ant::getOrientation() { return __orientation; }
void Ant::setX(int x) { __x = x; }
int Ant::getX() { return __x; }
void Ant::setY(int y) { __y = y; }
int Ant::getY() { return __y; }
void Ant::setStates(AntState *states) { __states = states; }

void Ant::step() {
	__states->processState(__map->readValueOfCell(__x, __y));
	//__map->showMap();
}

void Ant::saveCurrentState(AntVisitor *visitor) {
	visitor->visit(this);
}