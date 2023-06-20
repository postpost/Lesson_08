#pragma once
#include <string>

class Shape {
protected:
	std::string shapeName;
	
public:
	Shape();
	std::string get_name();
	virtual void printInfo();
};
