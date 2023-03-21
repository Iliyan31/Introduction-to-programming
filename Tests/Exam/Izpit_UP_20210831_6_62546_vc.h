#pragma once
#include <iostream>

// Iliyan Yordanov 62546

// Task 1
bool validation(const char* num) {
	if (num == nullptr) return false;
	for (int i = 0; num[i] != '\0'; i++) {
		if (num[i] < '0' || num[i]>'9') return false;
	}
	return true;
}

long convertNumber(char* num) {
	if (!validation(num)) return -1;
	long sum = 0;
	for (int i = 0; num[i] != '\0'; i++) {
		sum += int(num[i]);
	}
	return sum;
}




// Task 2
bool valid(long n) {
	if (n < 0) return false;
	return true;
}

int ownPower(int num, const int times) {
	if (times == 0) return 1;
	if (num == 0 && times!=0) return 0;
	int temp = num;
	for (int i = 1; i < times; i++) {
		num *= temp;
	}
	return num;
}
int ownFactoriel(int num) {
	if (num == 0) return 1;
	int sum = 1;
	for (int i = 1; i <= num; i++) {
		sum *= i;
	}
	return sum;
}

double mySin(double x, long n) {
	if (!valid(n)) return -1;

	double sum = 0;
	for (int i = 0; i <= n; i++) {	
		int a = ownPower(-1, i);
		double b = ownFactoriel(((2 * i) + 1));
		double c = ownPower(x, ((2 * i) + 1));
		sum += (a / b) * (c);
	}
	return sum;
}




// Task 3
bool isCorrect(const char* str) {
	if (str == nullptr) return false;
	return true;
}

int ownStrlen(const char* str) {
	int i = 0;
	while (str[i++] != '\0');
	return --i;
}

char* resize(const char* str) {
	int size = ownStrlen(str)*4 + 1;
	char* arr = new char[size];
	return arr;
}

char* Encode(char* str) {
	if (!isCorrect(str)) return nullptr;
	char* arr = resize(str);
	int size = ownStrlen(arr) + 1;
	int size2 = ownStrlen(str) + 1;
	int num = 0;
	int k = 0;
	for (int i = 0;i<size2-1; i++) {
		num = int(str[i]);
		int x = num;
		int count = 0;
		while (x != 0) {
			count++;
			x /= 10;
		}
		int* arr1 = new int[count];
		for (int i = 0; i < count; i++) {
			arr1[i] = num % 10;
			num /= 10;
		}
		for (int i = 0; i < count; i++) {
			arr[k] = arr1[count - i - 1] + '0';
			k++;
		}
		if (i != size2 - 2) {
			arr[k] = '_';
			k++;
		}
		delete[] arr1;
	}
	arr[k] = '\0';
	return arr;
}