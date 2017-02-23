#pragma once

#include "Ant.h"

class Ant;

class AntVisitor
{
public:
	AntVisitor();
	~AntVisitor() = default;

	void visit(Ant *ant);
	void showAntState();

private:
	int __x;
	int __y;
	int __orientation;
};