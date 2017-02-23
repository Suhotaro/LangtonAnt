#pragma once

#include "stdafx.h"

#include "Map.h"

#include <vector>

class ConsoleMap : public Map {
public:
	ConsoleMap(int height, int width);

	virtual void showMap() final;
	virtual int readValueOfCell(int x, int y) final;
	virtual void setValueOfCell(int x, int y, int value) final;

private:

	std::vector<std::vector <int>> __map;
};