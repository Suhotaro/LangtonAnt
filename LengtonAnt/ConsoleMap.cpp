#include "stdafx.h"
#include "ConsoleMap.h"

ConsoleMap::ConsoleMap(int height, int width) : Map(height, width) {
	__map.resize(height);
	for (int i = 0; i < height; i++)
		__map[i].resize(width);
}

void ConsoleMap::showMap() {
	printf("\n");
	for (unsigned int row = 0; row < __map.size(); row++)
	{
		for (unsigned int column = 0; column < __map[row].size(); column++)
		{
			printf("%d ", __map[row][column]);
		}
		printf("\n");
	}
	printf("\n");
}

int ConsoleMap::readValueOfCell(int x, int y) {
	return __map[x][y];
}

void ConsoleMap::setValueOfCell(int x, int y, int value) {
	__map[x][y] = value;
}