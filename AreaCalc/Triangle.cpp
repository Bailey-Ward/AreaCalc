#include "Triangle.h"

Triangle::Triangle(int width, int height) : Shape(width, height)
{

};

int Triangle::Area(int width, int height) {
	areaValue = width * height / 2;
	std::cout << areaValue;
	return areaValue;
}