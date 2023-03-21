#pragma once
#include <iostream>

//Task 1

bool validation(long S, long E) {
	if (S <= 0 || E <= 0) return false;
	if (E < S) return false;
	return true;
}

long* Reverse(long* arr, const int& size) {
	long* str = new long[size];
	for (int i = 0; i < size; i++) {
		str[i] = arr[size-i-1];
	}
	return str;
}

void ConvertArr(long arr[], long S, long E) {
	if (!validation(S, E)) return;
	
	int size = E - S + 1;
	int index = S;
	long* str = new long[size];
	for (int i = 0; i < size; i++) {
		str[i] = arr[index];
		index++;
	}
	
	long* arr2 = Reverse(str, size);
	delete[] str;
	//for (int i = 0; i < size; i++) {
	//	std::cout << arr2[i] << " ";
	//}

	index = S;
	for (int i = 0; i < size; i++) {
		arr[index] = arr2[i];
		index++;
	}
	delete[] arr2;
}


// Task 2

int findElement(long arr[], int size) {
	int sum = 0;
	int index = -1;
	int max = 0;
	if (arr[0]>arr[1]) {
		index = 0;
		max = arr[0];
	}
	
	for (int i = 1; i < size - 1; i++) {
		if (arr[i] > (arr[i - 1] + arr[i + 1]) / 2) {
			if (arr[i] > max) {
				max = arr[i];
				index = i;
			}
		}
	}

	if (arr[size - 1] > arr[size - 2]) {
		if (arr[size - 1] > max) {
			index = size - 1;
		}
	}
	return index;
}


// Task 3 
#define MAX_ROWS 2

bool valid(int* arr1, int* arr2, int m) {
	if (arr1 == nullptr || arr2 == nullptr) return false;
	if (m <= 0) return false;
	return true;
}

int** mergearrays(int* arr1, int* arr2, int m) {
	if (!valid(arr1, arr2, m)) return nullptr;

	int** arr = new int* [MAX_ROWS];
	for (int i = 0; i < MAX_ROWS; i++) {
		arr[i] = new int[m];
	}

	for (int i = 0; i < MAX_ROWS; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0) {
				arr[i][j] = arr1[j];
			}
			if (i == 1) {
				arr[i][j] = arr2[j];
			}
		}
	}

	return arr;
}