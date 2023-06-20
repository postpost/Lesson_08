#include "rectangle.h"
#include "constructorError.h"

Rectangle::Rectangle() {
	this->A = this->B = this->C = this->D = 90;
};

Rectangle::Rectangle(int a, int b): Tetragon(a, b, a, b, 90, 90, 90, 90) {
	if (A != B && B !=D || A !=90 && a !=c || b !=d)
	{
		throw ConstructorError("��������������� ������� �� ����� ���� �����. ���� �� ����� 90!");
		
	}
	shapeName = "�������������";
	
};