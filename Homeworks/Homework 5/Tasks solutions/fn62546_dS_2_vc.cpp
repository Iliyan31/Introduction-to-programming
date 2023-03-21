/**
*
* Solution to homework assignment S
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Iliyan Yordanov
* @idnumber 62546
* @task 2
* @compiler VC
*
*/

#include <iostream>

bool isFibonacci(const size_t& num) {
	size_t first = 0, second = 1;
	if (num == first || num == second) return true;
	while (second < num) {
		second += first;
		first = second - first;
		if (first > second) return false;
	}
	return (second == num);
}

void ownSwap(size_t& a, size_t& b) {
	size_t temp = a;
	a = b;
	b = temp;
}

void bubbleSort(size_t* arr, const int& size) {
	if (arr == nullptr) return;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) ownSwap(arr[j], arr[j + 1]);
		}
	}
}

size_t* removeEqualNumbers(size_t* arr, int& size) {
	if (arr == nullptr) return nullptr;
	int diffNums = 0;
	size_t* newArr = new size_t[size];
	for (int i = 0; i < size; i++) {
		if (arr[i] != arr[i + 1]) {
			newArr[diffNums++] = arr[i];
		}
	}
	size = diffNums;
	return newArr;
}

void sortedFibonacci(size_t arr[], const int& size) {
	size_t* newArr = new size_t[size];
	int newSize = 0;
	for (int i = 0; i < size; i++) {
		if (isFibonacci(arr[i])) {
			newArr[newSize++] = arr[i];
		}
	}

	bubbleSort(newArr, newSize);
	size_t* sortedFib = removeEqualNumbers(newArr, newSize);
	
	for (int i = 0; i < newSize; i++) {
		std::cout << sortedFib[i] << " ";
	}

	std::cout << std::endl;
	delete[] sortedFib;
	delete[] newArr;
	
}

int main() {

	size_t arr[] = { 5, 15, 20, 0, 1, 1, 1, 2, 4294967295, 8, 34, 56, 150, 21 };					// 0, 1, 2, 5, 8, 21, 34
	size_t arr2[] = { 1, 0, 45, 23, 56, 55, 89, 144, 1, 3, 2, 1, 6 };								// 0, 1, 2, 3, 55, 89, 144
	size_t arr3[] = { 9, 57, 22, 15, 16, 8, 1, 0, 7, 90, 5, 3, 2, 7 };								// 0, 1, 2, 3, 5, 8

	int size = sizeof(arr) / sizeof(arr[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int size3 = sizeof(arr3) / sizeof(arr3[0]);

	sortedFibonacci(arr, size);
	sortedFibonacci(arr2, size2);
	sortedFibonacci(arr3, size3);

	return 0;
}