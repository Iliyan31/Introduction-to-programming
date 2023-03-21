#include <iostream>
#include <vector>
#include "Header.h"
//using namespace std;

//class Rational {
//public:
//	int numer;
//	int denom;
//public:
//	Rational();
//	Rational(int, int);
//	int getNumerator() const;
//	int getDenominator() const;
//	void print();
//	void read();
//};
//Rational::Rational() {
//	numer = 0;
//	denom = 1;
//}
//Rational::Rational(int number1, int number2) {
//	numer = number1;
//	denom = number2;
//}
//int Rational::getNumerator() const {
//	return numer;
//}
//int Rational::getDenominator() const {
//	return denom;
//}
//void Rational::print() {
//	std::cout << numer << "/" << denom << std::endl;
//}
//void Rational::read() {
//	std::cin >> numer;
//	std::cin.ignore();
//	std::cin >> denom;
//}














int validation(int &number) {

	if (number <= 0 || number==(char)number) {
		std::cout<< "Please enter valid number: " << std::endl;
		int num;
		std::cin >> num;
		number = num;
		validation(number);
	}
	else return 1;
}


int main() {
	/*char* ptr = new char[4];
	for (int i = 0; i < 3; i++) {
		std::cin >> ptr[i];
	}
	ptr[3] = '\0';*/


	std::cout << "Please insert correct number: " << std::endl;
	int size;
	std::cin >> size;
	validation(size);
	int* arr = new int[size];
	
	system("cls");
	std::cout << "Please insert correct numbers: " << std::endl;
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}

	std::vector<int> vec;

	int size2 = size / 2;
	for (int i = size2; i <size; i++) {
		vec.push_back(arr[i]);
	}

	for (int i = 0; i < size; i++) {
		std::cout << vec[i];
	}

	

	



	/*std::cout << checkstr(ptr) << std::endl;
	delete[] ptr;
	return 0;*/
}

