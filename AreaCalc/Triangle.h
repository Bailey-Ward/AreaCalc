#pragma once
#include <iostream>
#include <string>
#include "Shape.h"

class Triangle : public Shape {
public:
	Triangle(int, int);
	int Area(int, int);
	int areaValue;
};
