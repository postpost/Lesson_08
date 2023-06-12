#include "equilateral.h"

Equilateral::Equilateral(int a) {
	shapeName = "Равносторонний треугольник";
	this->a = this->b = this->c = a;
	this->A = this->B = this->C = 60;
};