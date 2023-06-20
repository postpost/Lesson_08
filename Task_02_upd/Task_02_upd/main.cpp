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
#include "constructorError.h"



int main() {

	setlocale(LC_ALL, "ru");

	try {
		Triangle tr(10, 20, 30, 50, 60, 70);
		tr.PrintShapeInfo();
	}
	catch (ConstructorError& ex) {
		//std::cout << ex.what();
	}

	try {
		RightTriangle r_tr(10, 20, 50, 60, 90);
		r_tr.PrintShapeInfo();
	}
	catch (ConstructorError& ex) {
		//std::cout << ex.what();
	}

	try {
		Isosceles isoTr(10, 20, 50, 60);
		isoTr.PrintShapeInfo();
	}
	catch (ConstructorError& ex) {
		//std::cout << ex.what();
	}

	try {
		Equilateral eqTr(20);
		eqTr.PrintShapeInfo();
	}
	catch (ConstructorError& ex) {
		//std::cout << ex.what();
	}

	try {
		Tetragon tetra(10, 20, 30, 40, 50, 60, 70, 80);
		tetra.PrintShapeInfo();
	}
	catch (ConstructorError& ex) {
		//std::cout << ex.what();
	}

	try {
		Rectangle rect(10, 20);
		rect.PrintShapeInfo();
	}
	catch (ConstructorError& ex) {
		//std::cout << ex.what();
	}

	try {
		Square sq(20);
		sq.PrintShapeInfo();
	}
	catch (ConstructorError& ex) {
		//std::cout << ex.what();
	}

	try {
		Parallelogram paral(20, 30, 30, 40);
		paral.PrintShapeInfo();
	}
	catch (ConstructorError& ex) {
		//std::cout << ex.what();
	}

	try {

		Rhombus rhomb(30, 30, 40);
		rhomb.PrintShapeInfo();
	}
	catch (ConstructorError& ex) {
		//std::cout << ex.what();
	}
}