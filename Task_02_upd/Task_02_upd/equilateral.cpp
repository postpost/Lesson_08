#include "equilateral.h"
#include "constructorError.h"

Equilateral::Equilateral(int a): Triangle(a, a, a, 60, 60, 60) {
	if (A != B && B!=C && A!=60 && a != b && b!=c) {
		throw ConstructorError("Стороны и углы не равны между собой!");
		
	}
	shapeName = "Равносторонний треугольник";
};