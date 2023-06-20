#include <iostream>
#include "tetragon.h"
#include "constructorError.h"

Tetragon::Tetragon() {

};

Tetragon::Tetragon(int a, int b, int c, int d, int A, int B, int C, int D) {
	if (A + B + C + D != 360) 
	{
		throw ConstructorError("Ошибка создания фигуры. Причина: сумма углов не равна 360");
	}
	shapeName = "Четырёхугольник";
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	
};
int Tetragon::get_a() {
	return a;
};
int Tetragon::get_b() {
	return b;
};
int Tetragon::get_c() {
	return c;
};
int Tetragon::get_d() {
	return d;
};
int Tetragon::get_A() {
	return A;
};
int Tetragon::get_B() {
	return B;
};
int Tetragon::get_C() {
	return C;
};
int Tetragon::get_D() {
	return D;
};

void Tetragon::printInfo() {
	std::cout << get_name() << ":" << '\n'
		<< "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << '\n'
		<< "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
};

void Tetragon::PrintShapeInfo() {
	std::cout << get_name() << "(стороны "
		<< get_a() << ", "
		<< get_b() << ", "
		<< get_c() << ", "
		<< get_d()<< "; "
		<< "углы "
		<< get_A() << ", "
		<< get_B() << ", "
		<< get_C() << ", "
		<< get_D() << ") создан" << std::endl;
}