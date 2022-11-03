#include "Rectangle.h"

Rectangle::Rectangle(int width, int height) : Shape(width, height) //constuctor for rectangle child class which inherits from shape parent class
{

};	

void Rectangle::Area() {
	int areaValue = getWidth() * getHeight(); //calculates area of the rectangle and prints the results to console
	std::cout << "Rectangle:\nWidth: " << getWidth() << " * " << "Height: " << getHeight() << " = " << "Area: " << areaValue << "\t";
}