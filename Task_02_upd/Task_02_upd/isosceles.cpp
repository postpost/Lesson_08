#include "isosceles.h"
#include "constructorError.h"

Isosceles::Isosceles(int a, int b, int A, int B):Triangle(a, b, a, A, B, A) {
	if (a != c || A!=C) {
		throw ConstructorError("������� � � �, ���� � � � �� ����� ����� �����!");
	}

	shapeName = "�������������� �����������";
	
};
