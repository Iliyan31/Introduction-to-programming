#pragma once
#include <iostream>

// Task 1
bool checkstr(const char* str) {
	if (str == nullptr) return false;
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] < 'A' || str[i + 1] > 'Z') && str[i + 1] != '\0') return false;
		if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i + 1] < 'a' || str[i + 1] > 'z') && str[i + 1] != '\0')  return false;
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i]>'z')  return false;
	}
	return true;
}

// Task 2
int ownPower(int num, const int& i) {
	if (i == 0) return 1;
	if (num == 0 && i != 0) return 0;
	int temp = num;
	for (int j = 0; j < i - 1; j++) {
		num *= temp;
	}
	return num;
}

char* GetWord(char str[]) {
	int words = 0;
	int allWords = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] == 'a') words++;
		if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] >= 'a' && str[i + 1] <= 'z')) allWords++;
		if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] >= 'A' && str[i + 1] <= 'Z')) allWords++;
		if (str[0] == 'a') words++;
		if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')) allWords++;
	}

	int x = allWords;
	int y = words;
	int size = 0;
	//int sizeAllWords = 0;
	//int sizeAWords = 0;
	while (x != 0) {
		size++;
		x /= 10;
	}
	while (y != 0) {
		size++;
		y /= 10;
	}

	size += 4;
	char* arr = new char[size];
	int i = size - 2;
	arr[i] = '}';
	i--;
	while (allWords != 0) {
		arr[i] = (allWords % 10 + '0');
		i--;
		allWords /= 10;
	}
	arr[i] = ',';
	i--;
	while (words != 0) {
		arr[i] = (words % 10 + '0');
		i--;
		words /= 10;
	}
	arr[i] = '{';
	arr[size-1] = '\0';
	/*int* arr1 = new int[sizeAllWords];
	int k = 0;
	for (int i = sizeAllWords; i > 0; i--) {
		arr1[k] = (allWords % ownPower(10, i) - allWords % ownPower(10, i - 1)) / ownPower(10, i - 1);
		k++;
	}

	int* arr2 = new int[sizeAWords];
	k = 0;
	for (int i = sizeAWords; i > 0; i--) {
		arr2[k] = (words % ownPower(10, i) - words % ownPower(10, i - 1)) / ownPower(10, i - 1);
		k++;
	}
	k = 0;
	int j = 0;
	int size = sizeAllWords + sizeAWords + 4;
	char* arr = new char[size];
	arr[0] = '{';
	for (int i = 1; i < size - 2; i++) {
		if (i < sizeAWords + 1) {
			arr[i] = arr2[k]+'0';
			k++;
		}
		if (i == sizeAWords + 1) {
			arr[i] = ',';
		}
		if (i > sizeAWords + 1) {
			arr[i] = arr1[j]+'0';
			j++;
		}
	}
	arr[size - 2] = '}';
	arr[size - 1] = '\0';
	delete[] arr1;
	delete[] arr2;*/

	return arr;
}


// Task 3
void ownSwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int arr[], const int& size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) ownSwap(arr[j], arr[j + 1]);
		}
	}
}

int* removeEqual(int* arr, int& size) {
	int k = 0;
	int* newArr = new int[size];
	for (int i = 0; i < size; i++) {
		if (arr[i] != arr[i + 1]) {
			newArr[k] = arr[i];
			k++;
		}
	}
	size = k;
	return newArr;
}

int AnalyzeNum(long N) {
	int size = 0;
	int x = N;
	while (x != 0) {
		size++;
		x /= 10;
	}
	if (size == 1) return -1;

	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = N % 10;
		N /= 10;
	}
	bubbleSort(arr, size);

	int* newArr = removeEqual(arr, size);
	delete[] arr;

	
	if (size % 2 != 0) {
		int num = newArr[size / 2];
		delete[] newArr;
		return num;
	}
	delete[] newArr;
	return - 1;

	
}