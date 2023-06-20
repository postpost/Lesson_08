#include <iostream>
#include "triangle.h"
#include "constructorError.h"

Triangle::Triangle() {
};
Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	if (A + B + C != 180) {
		throw ConstructorError("������ �������� ������. �������: ����� ����� �� ����� 180");
	}
	
	shapeName = "�����������";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
};

int Triangle::get_a() {
	return a;
};
int Triangle::get_b() {
	return b;
};
int Triangle::get_c() {
	return c;
};

int Triangle::get_A() {
	return A;
};
int Triangle::get_B() {
	return B;
};
int Triangle::get_C() {
	return C;
};

void Triangle::printInfo() {
	std::cout << get_name() << ":" << '\n'
		<< "�������: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << '\n'
		<< "����: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
};

void Triangle::PrintShapeInfo() {
	std::cout << get_name() << "(������� "
		<< get_a() << ", "
		<< get_b() << ", "
		<< get_c() << "; "
		<< "���� "
		<< get_A() << ", "
		<< get_B() << ", "
		<< get_C() << ") ������" << std::endl;
	//������������� ����������� (������� 3, 4, 5; ���� 30, 60, 90) ������
}
