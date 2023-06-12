#include <iostream>
#include <fstream>
#include <windows.h>
#define enter '\n'
//#define cout std::cout

class BadLength : public std::exception {
public:
	const char* what() const override {
		return "Вы ввели слово запретной длины! До свидания";
	}
};


int Function(std::string str, int forbidden_length) {
	int str_length = str.length();

	if (str_length != forbidden_length) {
		return str_length;
	}
	else {
		throw BadLength();
	}
}


int main() {

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251); SetConsoleOutputCP(1251);

	int forbidden_length = 0;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;

	bool exit = false;

	do {

		std::string str;
		std::cout << "Введите слово: ";
		std::cin >> str;

		try {
			int value = Function(str, forbidden_length);
			std::cout << "Длина слова " << '\"' << str << '\"' << " равна " << value << enter;
		}
		catch (BadLength& ex) {
			std::cout << ex.what();
			exit = true;
		}
		catch (...) {
			std::cout << "Unknown behavior!";
		}
	} while (!exit);

	//while (!true) == while (false) --> do smth
	//exit is var like condition of becoming true...

	return 0;
}