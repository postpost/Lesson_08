#include "square.h"
#include "constructorError.h"


Square::Square(int a):Rectangle(a, a) {
	if ( a!=b || b !=c || c!=d) 
	{
		throw ConstructorError("������� �� ����� ���� �����!");
	}
	shapeName = "�������";
};