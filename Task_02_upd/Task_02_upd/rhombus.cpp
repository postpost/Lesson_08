#include "rhombus.h"
#include "parallelogram.h"
#include "constructorError.h"

Rhombus::Rhombus(int a, int A, int B):Parallelogram(a, a, A, B){
	if ( a!=b && b!=d && a!=c) 
	{
		throw ConstructorError("Стороны не равны друг другу!");
	}
	shapeName = "Ромб";
};