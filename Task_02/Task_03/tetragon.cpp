#include "tetragon.h"
#include <iostream>

Tetragon::Tetragon() {

};

Tetragon::Tetragon(int a, int b, int c, int d, int A, int B, int C, int D) {
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