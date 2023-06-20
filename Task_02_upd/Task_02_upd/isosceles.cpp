#include "isosceles.h"
#include "constructorError.h"

Isosceles::Isosceles(int a, int b, int A, int B):Triangle(a, b, a, A, B, A) {
	if (c != a && C!=A) {
		throw ConstructorError("Стороны не равны");
	}

	shapeName = "Равнобедренный треугольник";
	
};
