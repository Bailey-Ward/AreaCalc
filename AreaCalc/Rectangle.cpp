#include "Rectangle.h"

Rectangle::Rectangle(int width, int height) : Shape(width, height)
{

};	

void Rectangle::Area() {
	int areaValue = getWidth() * getHeight();
	std::cout << "Width: " << getWidth() << " * " << "Height: " << getHeight() << " = " << "Area: " << areaValue << "\t";
}