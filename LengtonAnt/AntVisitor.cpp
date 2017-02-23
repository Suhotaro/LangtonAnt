#include "stdafx.h"
#include "AntVisitor.h"
#include "Ant.h"

AntVisitor::AntVisitor() :
	__x(0), __y(0), __orientation(Ant::NORTH) 
{}

void AntVisitor::visit(Ant *ant) {
	__x = ant->__x;
	__y = ant->__y;
	__orientation = ant->__orientation;
}

void AntVisitor::showAntState() {
	printf("Ant state: x=%d y=%d ", __x, __y);

	switch (__orientation)
	{
	case Ant::NORTH:
		printf("orientation=NORTH\n");
		break;
	case Ant::SOUTH:
		printf("orientation=SOUTH\n");
		break;
	case Ant::EAST:
		printf("orientation=EAST\n");
		break;
	case Ant::WEST:
		printf("orientation=WEST\n");
		break;	
	}			
}