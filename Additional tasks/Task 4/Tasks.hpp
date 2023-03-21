#pragma once
#include <iostream>

// Task 1
bool validation(const int& first, const int& second, const int& size) {
	if (first < 0 || first >= size) return false;
	if (second < 0 || second < first || second >= size) return false;
	if (size <= 0) return false;
	return true;
}

int* reverse(int* arr, const int& size) {
	int* newArr = new int[size];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[size - i - 1];
	}
	return newArr;
}

void reverseIndex(int arr[], const int& first, const int& second, const int& size) {
	int arrSize = second - first + 1;
	int* str = new int[arrSize];
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (i >= first && i <= second) {
			str[k] = arr[i];
			k++;
		}
	}
	int* arr2 = reverse(str, arrSize);
	delete[] str;

	k = 0;
	for (int i = 0; i < size; i++) {
		if (i >= first && i <= second) {
			arr[i] = arr2[k];
			k++;
		}
	}
	delete[] arr2;
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}


// Task 2
bool val(const int& N, int** arr) {
	if (N <= 0) return false;
	if (arr == nullptr) return false;
	for (int i = 0; i < N; i++) {
		if (arr[i] == nullptr) return false;
	}
	return true;
}

int** transpose(const int& N, int** arr) {
	int** matrix = new int* [N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = arr[j][i];
		}
	}
	return matrix;
}


// Task 7

int ownStrlen(const char* str) {
	int i = 0; 
	while (str[i++] != '\0');
	return --i;
}

bool doExists(const char* str, const char* st) {
	int sizeSt = ownStrlen(st);
	bool inWord = false;
	int k = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] == st[sizeSt-1]) && inWord == true) {
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0') {
				return true;
			}
		}
		if (str[i] != st[k] && inWord == true) {
			inWord = false;
		}
		if (str[i] == st[k]) {
			inWord = true;
			k++;
		}
	}
	return false;
}

char* reverseST(const char* st) {
	int size = ownStrlen(st);
	char* arr = new char[size+1];
	for (int i = 0; i<size; i++) {
		arr[i] = st[size - i - 2];
	}
	arr[size] = '\0';
	return arr;
}

char* strRev( char* str, const char* st) {
	if (str == nullptr || st == nullptr) return nullptr;
	if (!doExists(str, st)) return nullptr;
	char* arr = reverseST(st);
	int sizeSt = ownStrlen(st);
	int k = 0;
	bool inWord = false;
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] == st[sizeSt - 1]) && inWord == true) {
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0') {
				for (int j = 0; j < sizeSt; j++) {				////////////////////////////
					str[i - k] = arr[j];
					k--;
				}
			}
		}
		if (str[i] != st[k] && inWord == true) {
			inWord = false;
		}
		if (str[i] == st[k]) {
			inWord = true;
			k++;
		}
	}
	delete[] arr;
	return str;
}


// Task 4 
bool isARange(int a[], int b[], int size1, int size2) {
	bool flag = false;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (a[i] == b[j]) flag = true;
		}
		if (flag == true) {
			flag = false;
		}
		else {
			return false;
		}
	}

	flag = false;
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size1; j++) {
			if (b[i] == a[j]) flag = true;
		}
		if (flag == true) {
			flag = false;
		}
		else {
			return false;
		}
	}
	return true;
}