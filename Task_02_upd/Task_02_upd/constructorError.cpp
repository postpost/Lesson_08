#include "constructorError.h"
#include <iostream>
#include <stdexcept>

ConstructorError::ConstructorError(const char* msg) :std::domain_error(msg) {
	std:: cout << msg << std:: endl;
}
