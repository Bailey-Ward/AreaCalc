#include "Rectangle.h"

Rectangle::Rectangle(int width, int height) : Shape(width, height)
{

};	

int Rectangle::Area(int width,int height) {
	areaValue = width * height;
	std::cout << "Width: " << width << " * " << "Height: " << height << " = " << "Area: " << areaValue;
	return areaValue;
}