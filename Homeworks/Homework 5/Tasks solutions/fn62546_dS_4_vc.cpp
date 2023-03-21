/**
*
* Solution to homework assignment S
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Iliyan Yordanov
* @idnumber 62546
* @task 4
* @compiler VC
*
*/

#include <iostream>

#define MAX_LENGTH 200
#define MIN 0

size_t sizeCharArray(const char str[]) {
	size_t i = 0;
	while (str[i++] != '\0');
	return i - 1;
}

bool validation(size_t& number, const char str[]) {
	size_t size = sizeCharArray(str);
	std::cout << "Please enter number between " << MIN << " and " << size << ": ";
	std::cin >> number;
	return (number >= MIN && number <= size);
}

char* operationPaste(const char str[], const char str2[], const size_t& number) {
	size_t sizeStr1 = sizeCharArray(str);
	size_t sizeStr2 = sizeCharArray(str2);
	size_t size = sizeStr1 + sizeStr2 + 1;
	char* newStr = new char[size];

	int j = 0, k = number;
	for (size_t i = 0; i < size - 1; i++) {
		if (i >= 0 && i < number) {
			newStr[i] = str[i];
		}
		else if (i >= number && i < sizeStr2 + number) {
			newStr[i] = str2[j++];
		}
		else if (i >= sizeStr2 + number) {
			newStr[i] = str[k++];
		}
	}

	newStr[size - 1] = '\0';
	return newStr;
}

int main() {

	printf("Please enter the first sentence:\n");
	char str[MAX_LENGTH];
	std::cin.getline(str, MAX_LENGTH);
	

	printf("Please enter the second sentence:\n");
	char str2[MAX_LENGTH];
	std::cin.getline(str2, MAX_LENGTH);

	size_t number;
	if (!validation(number, str)) return -1;

	char* arr = operationPaste(str, str2, number);
	for (int i = 0; arr[i] != '\0'; i++) {
		std::cout << arr[i];
	}

	delete[] arr;
	return 0;
}