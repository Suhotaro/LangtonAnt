#pragma once

#include <string>

#include "bitmap_image.hpp"
#include "Map.h"

class BitMap : public Map {
public:
	BitMap(bitmap_image &image, int height, int width);

	virtual void showMap() final;
	virtual int readValueOfCell(int x, int y) final;
	virtual void setValueOfCell(int x, int y, int value) final;

private:
	bool isWhite(unsigned char r, unsigned char g, unsigned char b);
	bool isBlack(unsigned char r, unsigned char g, unsigned char b);

	bitmap_image &__image;
	rgb_t __color;
};