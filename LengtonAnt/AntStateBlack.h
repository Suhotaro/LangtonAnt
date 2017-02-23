#pragma once

#include "stdafx.h"

#include "AntState.h"
#include "Map.h"

class AntStateBlack : public AntState {
public:
	AntStateBlack(Map* map, Ant *ant, Color reColor);
	virtual ~AntStateBlack() = default;

	virtual void process() final;
private:
	Map* __map;
	Color __reColor;
};
