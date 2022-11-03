#pragma once
#include <iostream>
#include <string>
#include "Shape.h"

class Triangle : public Shape { //constuctor for child triangle which inherits from shape
public:
	Triangle(int, int); //takes 2 ints as input
	void Area();
};
