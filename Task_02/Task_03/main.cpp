#include <iostream>
#include "shape.h"
#include "print.h"
#include "triangle.h"
#include "right_tr.h"
#include "isosceles.h"
#include "equilateral.h"
#include "tetragon.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"
#include "..\constructorError.h"

void ErrorTriangleShape(Triangle* tr) {
	int value = tr->get_A() + tr->get_B() + tr->get_C();
	if (value == 180) {
		std::cout << tr->get_name() << "(стороны "
			<< tr->get_a() << ", "
			<< tr->get_b() << ", "
			<< tr->get_c() << "; "
			<< "углы "
			<< tr->get_A() << ", "
			<< tr->get_B() << ", "
			<< tr->get_C() << ") создан" << std::endl;
		//Прямоугольный треугольник (стороны 3, 4, 5; углы 30, 60, 90) создан
	}
	else {
		throw ConstructorError("Ошибка создания фигуры. Причина: сумма углов не равна 180");
	}
}

void ErrorTetragonShape(Tetragon* tetra) {
	int value = tetra->get_A() + tetra->get_B() + tetra->get_C() + tetra->get_D();
	if (value == 360) {
		std::cout << tetra->get_name() << "(стороны "
			<< tetra->get_a() << ", "
			<< tetra->get_b() << ", "
			<< tetra->get_c() << ", "
			<< tetra->get_d() << "; "
			<< "углы "
			<< tetra->get_A() << ", "
			<< tetra->get_B() << ", "
			<< tetra->get_C() << ", "
			<< tetra->get_D() << ") создан" << std::endl;
	}
	else {
		throw ConstructorError("Ошибка создания фигуры. Причина: сумма углов не равна 360");
	}
}

void TryCatch(Triangle* shape) {

	try {

		ErrorTriangleShape(shape);
		
	}
	catch (ConstructorError& ex)
	{
		//ex.what();
	}
}

void TryCatch(Tetragon* tetra) {

	try {

		ErrorTetragonShape(tetra);

	}
	catch (ConstructorError& ex)
	{
		//ex.what();
	}
}

int main() {

	setlocale(LC_ALL, "ru");
	
	Triangle tr (10, 20, 30, 50, 60, 70);
	TryCatch(&tr);

	RightTriangle r_tr(10, 20, 30, 50, 60);
	TryCatch(&r_tr);

	Isosceles isoTr(10, 20, 50, 60);
	TryCatch(&isoTr);

	Equilateral eqTr(20);
	TryCatch(&eqTr);

	Tetragon tetra(10, 20, 30, 40, 50, 60, 70, 80);
	TryCatch(&tetra);

	Rectangle rect(10, 20);
	TryCatch(&rect);

	Square sq(20);
	TryCatch(&sq);

	Parallelogram paral(20, 30, 30, 40);
	TryCatch(&paral);

	Rhombus rhomb(30, 30, 40);
	TryCatch(&rhomb);
	
	
}