#include "stdafx.h"
#include "AntStateWhite.h"

AntStateWhite::AntStateWhite(Map* map, Ant *ant, Color reColor)
	: __map(map), __reColor(reColor), AntState(ant, AntState::White)
{}

void AntStateWhite::process() {
	int x = __ant->getX();
	int y = __ant->getY();

	__map->setValueOfCell(x, y, __reColor);

	switch (__ant->getOrientation())
	{
		case Ant::NORTH: y += 1; __ant->setOrientation(Ant::WEST); break;
		case Ant::SOUTH: y -= 1; __ant->setOrientation(Ant::EAST); break;
		case Ant::EAST: x -= 1; __ant->setOrientation(Ant::NORTH); break;
		case Ant::WEST: x += 1; __ant->setOrientation(Ant::SOUTH); break;
	}

	__ant->setX(x);
	__ant->setY(y);
}
