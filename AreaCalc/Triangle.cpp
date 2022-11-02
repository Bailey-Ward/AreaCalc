#include "Triangle.h"

Triangle::Triangle(int width, int height) : Shape(width, height)
{

};

void Triangle::Area() {
	int areaValue = getWidth() * getHeight() / 2;
	std::cout << "\nTriangle:\n" << "Width:" << getWidth() << " * " << "Height:" << getHeight() << " / 2 " << " = " << areaValue << "\t";
}