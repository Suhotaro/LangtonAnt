#include "stdafx.h"
#include "bitmap_image.hpp"
#include "BitMap.h"

BitMap::BitMap(bitmap_image &image, int height, int width) : __image(image), Map(height, width)
{}

void BitMap::showMap() {
	/* TODO */
}
int BitMap::readValueOfCell(int x, int y) 
{	
	unsigned char r, g, b;
	__image.get_pixel(x, y, r, g, b);

	if (isWhite(r, g, b))
		return 0;
	else if (isBlack(r, g, b))
		return 1;

	return 0;
}

void BitMap::setValueOfCell(int x, int y, int value)
{
	if (value == 0)
		__image.set_pixel(x, y, 0, 0, 0);
	else if (value == 1)
		__image.set_pixel(x, y, 255, 255, 255);
}

bool BitMap::isWhite(unsigned char r, unsigned char g, unsigned char b)
{
	if (r == 0 && g == 0 && b == 0)
		return true;
	return false;
}

bool BitMap::isBlack(unsigned char r, unsigned char g, unsigned char b)
{
	if (r == 255 && g == 255 && b == 255)
		return true;
	return false;
}
