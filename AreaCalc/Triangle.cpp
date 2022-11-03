#include "Triangle.h"

Triangle::Triangle(int width, int height) : Shape(width, height) //constuctor for triangle child class which inherits from shape parent class
{

};

void Triangle::Area() {
	int areaValue = getWidth() * getHeight() / 2;  //calculates area of the rectangle and prints the results to console
	std::cout << "\nTriangle:\n" << "Width:" << getWidth() << " * " << "Height:" << getHeight() << " / 2 " << " = " << areaValue << "\t";
}