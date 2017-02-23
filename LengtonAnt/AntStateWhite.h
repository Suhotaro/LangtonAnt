#pragma once

#include "stdafx.h"

#include "AntState.h"
#include "Map.h"

class AntStateWhite : public AntState {
public:
	AntStateWhite(Map* map, Ant *ant, Color reColor);
	virtual ~AntStateWhite() = default;

	virtual void process() final;
private:
	Map* __map;
	Color __reColor;
};