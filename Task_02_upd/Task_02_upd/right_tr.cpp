#include "right_tr.h"
#include "constructorError.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B):Triangle(a, b, c, A, B, 90){
	if (C != 90) {
		throw ConstructorError("Угол не равен 90!");
	}
	shapeName = "Прямоугольный треугольник";
	
};