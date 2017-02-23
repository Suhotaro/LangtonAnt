#pragma once

#include "stdafx.h"

class Map {
public:
	Map(int height, int width);
	virtual ~Map() = default;

	virtual void showMap() = 0;
	virtual int readValueOfCell(int x, int y) = 0;
	virtual void setValueOfCell(int x, int y, int value) = 0;
	virtual bool canSetValueOfCell(int x, int y);

private:
	int __width;
	int __height;
};