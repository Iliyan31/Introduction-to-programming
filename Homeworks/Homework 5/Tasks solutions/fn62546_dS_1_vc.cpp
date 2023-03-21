/**
*
* Solution to homework assignment S
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Iliyan Yordanov
* @idnumber 62546
* @task 1
* @compiler VC
*
*/

#include <iostream>

#define minBetweenLeapYears 4
#define maxBetweenLeapYears 8

bool validationNumber(const size_t& min, const size_t& max, size_t& number) {
	std::cin >> number;
	return (number >= min && number <= max);
}

bool checkIfLeap(const size_t& year) {
	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}

size_t closestLeapYear(size_t year) {
	for (int i = 0; i < maxBetweenLeapYears; i++) {
		if (checkIfLeap(++year)) return year;
	}
	return -1;													
}

void printAllLeapYears(size_t& year, const size_t& times) {
	size_t leap = closestLeapYear(year);							
	for (size_t i = 0; i < times; i++) {
		if (checkIfLeap(leap)) {
			std::cout << leap << std::endl;
		}
		else {
			leap = closestLeapYear(leap);
			std::cout << leap << std::endl;
		}
		leap += minBetweenLeapYears;
	}
}

int main() {
 
	size_t Y, M;
	printf("Please enter number between 0 and 2100: ");
	if (!validationNumber(0, 2100, Y)) return -1;

	printf("Please enter number between 0 and 1000: ");
	if (!validationNumber(0, 1000, M)) return -1;;

	printAllLeapYears(Y, M);

	return 0;
}