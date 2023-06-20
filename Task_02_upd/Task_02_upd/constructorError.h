#pragma once
#include <stdexcept>



class ConstructorError :public std::domain_error {
public:
	ConstructorError(const char* msg);
};
