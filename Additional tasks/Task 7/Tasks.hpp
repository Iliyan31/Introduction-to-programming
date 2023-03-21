#pragma once
#include <iostream>

// Task 1
int ownStrlen(char* str) {
	int i = 0;
	while (str[i++] != '\0');
	return --i;
}

char* revandreplace(char* str) {
	if (str == nullptr) return nullptr;
	int size = ownStrlen(str) + 1;
	char* strNew = new char[size];
	for (int i = 0; i<size-1; i++) {
		strNew[i] = str[size - i - 2];
	}
	strNew[size - 1] = '\0';

	for (int i = 0; strNew[i] != '\0'; i++) {
		if (strNew[i] == 'e') strNew[i] = '!';
		if (strNew[i] == 'y') strNew[i] = '*';
	}
	return strNew;
}


// Task 2
int owStrlen(char str[]) {
	int i = 0;
	while (str[i++] != '\0');
	return --i;
}

bool isGood(char str[]) {
	if (owStrlen(str) != 7) return false;
	for (int i = 0; str[i] != '\0'; i++) {
		if (i >= 0 && i <= 3) {
			if (str[i] < '0' || str[i]> '9') return false;
		}
		if (i == 4) {
			if (str[i] != ' ') return false;
		}
		if (i == 5) {
			if (str[i] != 'g') return false;
		}
		if (i == 6) {
			if (str[i] != '.') return false;
		}
	}
	return true;
}

bool isLeap(const int& year) {
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool CheckDate(char str[]) {
	if (!isGood(str)) return false;
	int year = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (i >= 0 && i <= 3) {
			year = (year * 10 + (str[i] - '0'));
		}
	}
	if (isLeap(year)) return true;
	return false;
}


// Task 3
int* countletters(int arr1[], int arr2[], int N) {
	if (N <= 0) return nullptr;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		arr[i] = (arr1[i] + arr2[i]);
	}
	int bigLetters = 0;
	int smallLetters = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] >= int('A') && arr[i] <= int('Z')) bigLetters++;
		if (arr[i] >= int('a') && arr[i] <= int('z')) smallLetters++;
	}
	delete[] arr;
	arr = new int[2];
	arr[0] = bigLetters;
	arr[1] = smallLetters;
	return arr;
}