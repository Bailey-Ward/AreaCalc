#pragma once
#include <iostream>
#include <string>

class Shape {
private:
	int _height; //height and width variables are declared here as private variables
	int _width;

public:
	Shape(int, int); //shape constuctor declared
	int height{};  //public variables declared here
	int width{};
	void setHeight(); //setters and getters declared in header file
	int getHeight();
	void setWidth();
	int getWidth();
};