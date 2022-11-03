#include "Shape.h"

Shape::Shape(int width, int height) { //constuctor for shape object with width and height attributes
	_width = width;
	_height = height;
}

void Shape::setHeight() { //setter for height
	_height = height;
}

int Shape::getHeight() { //getter for height
	return _height;
}

void Shape::setWidth() { //setter for width
	_width = width;
}

int Shape::getWidth() { //getter for width
	return _width;
}

