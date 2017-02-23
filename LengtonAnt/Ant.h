#pragma once

#include "stdafx.h"
#include "Map.h"
#include "AntState.h"
#include "AntVisitor.h"

class AntState;
class AntVisitor;

class Ant {
public:
	enum Orientation {
		NORTH = 0,
		SOUTH,
		EAST,
		WEST,
	};

	Ant(Orientation orientation, int start_x, int start_y, Map *map, AntState *states = nullptr);

	void setOrientation(Orientation orientation);
	Orientation getOrientation();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	void setStates(AntState *states);

	void step();
	void saveCurrentState(AntVisitor *visitor);

private:
	Map *__map;
	int __x;
	int __y;
	Orientation __orientation;
	AntState *__states;

	friend class AntVisitor;
};