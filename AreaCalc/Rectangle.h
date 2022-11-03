#pragma once
#include <iostream>
#include <string>
#include "Shape.h"

class Rectangle : public Shape { //constuctor for child rectanlge which inherits from shape
public:
	Rectangle(int, int); //takes 2 ints as input
	void Area();
};