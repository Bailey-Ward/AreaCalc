#include "Shape.h"

Shape::Shape() {
	_width = 0;
	_height = 0;
}

Shape::Shape(int width, int height) {
	_width = width;
	_height = height;
}

void Shape::setHeight() {
	_height = height;
}

int Shape::getHeight() {
	return _height;
}

void Shape::setWidth() {
	_width = width;
}

int Shape::getWidth() {
	return _width;
}

