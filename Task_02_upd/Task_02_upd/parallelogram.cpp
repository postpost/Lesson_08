#include "parallelogram.h"
#include "constructorError.h"

Parallelogram::Parallelogram(int a, int b, int A, int B): Tetragon(a, b, a, b, A, B, A, B){
	
		if (A != C || B!=D || a !=c || b!=d) 
		{
			throw ConstructorError("Противоположные стороны и углы не равны.");
		}
		shapeName = "Параллелограмм";
};