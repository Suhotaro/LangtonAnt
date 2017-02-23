#include "stdafx.h"
#include "Map.h"

Map::Map(int height, int width) : __width(width), __height(height) {}

bool Map::canSetValueOfCell(int x, int y) {
	if (x < 0 || x >= __height)
		return false;

	if (y < 0 || y >= __width)
		return false;

	return true;
}
