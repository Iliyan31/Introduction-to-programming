/**
*
* Solution to homework assignment S
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Iliyan Yordanov
* @idnumber 62546
* @task 3
* @compiler VC
*
*/

#include <iostream>
#include <string>

void greaterWord(std::string& maxWord, const std::string& secondWord, size_t& value, const size_t& value2) {
	if (value < value2) {
		value = value2;
		maxWord = secondWord;
	}
}

void maxASCIIWord(const std::string& str) {
	size_t value = 0, value2 = 0;
	std::string maxWord, secondWord;
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] == ' ') || (str[i] == '\t')) {
			count++;
			greaterWord(maxWord, secondWord, value, value2);
			value2 = 0;
			secondWord.clear();
		}
		else if (count == 0 && str[i] != ' ' && str[i] != '\t') {
			value += (int)str[i];
			maxWord += str[i];
		}
		else if (count > 0 && str[i] != ' ' && str[i] != '\t') {
			value2 += (int)str[i];
			secondWord += str[i];
		}
	}
	greaterWord(maxWord, secondWord, value, value2);

	std::cout << maxWord << std::endl;
}

int main() {

	std::string str;
	printf("Please enter the sentence: \n");
	std::getline(std::cin, str);

	printf("The max word is: ");
	maxASCIIWord(str);

	return 0;
}