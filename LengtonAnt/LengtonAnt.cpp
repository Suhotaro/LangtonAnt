// LengtonAnt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#include "ConsoleMap.h"
#include "BitMap.h"
#include "Ant.h"
#include "AntState.h"
#include "AntStateWhite.h"
#include "AntStateBlack.h"

using namespace std;

int main()
{
	//Draw to console two dimensional matrix
	//ConsoleMap map(100, 100);	

	//Draw to bmp image and save it to D:/out.bmp
	bitmap_image image("input.bmp");
	if (!image) {
		printf("Fail open file\n");
		return 1;
	}

	BitMap map(image, image.width(), image.height());
	Ant ant(Ant::NORTH, 50, 50, &map);
	AntVisitor visitor;

	AntStateWhite whiteState(&map, &ant, AntState::Black);
	AntStateBlack blackState(&map, &ant, AntState::White);
	whiteState.setNextState(&blackState);
	ant.setStates(&whiteState);

	for (int i = 0; i < 11001; i++) {
		ant.step();
//		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	ant.saveCurrentState(&visitor);
	visitor.showAntState();

	map.showMap();
	image.save_image("out.bmp");
	
    return 0;
}

