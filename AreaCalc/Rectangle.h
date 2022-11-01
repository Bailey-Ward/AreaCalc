#pragma once
#include <iostream>
#include <string>
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(int, int);
	int Area(int, int);
	int areaValue;
};