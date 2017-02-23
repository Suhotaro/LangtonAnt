#pragma once

#include "Ant.h"
#include "Map.h"
#include "stdafx.h"



class Ant;

class AntState {
public:
	enum Color {
		White = 0,
		Black
	};

	enum stepDirection {
		LEFT = 0,
		RIGHT,
	};

	AntState(Ant *ant, Color color);
	virtual ~AntState() = default;

	AntState* setNextState(AntState *nextState);
	void processState(int value);
	virtual void process() = 0;

private:
	AntState *__nextState;	
	Color __color;

protected:
	Ant *__ant;
};