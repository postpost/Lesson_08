#include <iostream>
#include "shape.h"

Shape::Shape() {
	shapeName = " ";
	
};

std::string Shape:: get_name() {
	return shapeName;
};

void Shape::printInfo() {
	};