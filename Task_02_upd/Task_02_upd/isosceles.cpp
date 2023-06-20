#include "isosceles.h"
#include "constructorError.h"

Isosceles::Isosceles(int a, int b, int A, int B):Triangle(a, b, a, A, B, A) {
	if (a != c || A!=C) {
		throw ConstructorError("Стороны а и с, углы А и С не равны между собой!");
	}

	shapeName = "Равнобедренный треугольник";
	
};
