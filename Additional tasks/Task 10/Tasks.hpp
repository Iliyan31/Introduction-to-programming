#pragma once
#include <iostream>

// Task 1
bool check(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) return false;
	}
	return true;
}

void ownSwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int* arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) ownSwap(arr[j], arr[j + 1]);
		}
	}
}

int* SortedArray(int arr1[], int arr2[], int size1, int size2) {
	if (size1 <= 0) return nullptr;
	if (size2 <= 0) return nullptr;
	if (!check(arr1, size1)) return nullptr;
	if (!check(arr2, size2)) return nullptr;
	int size = size1 + size2;
	int k = 0;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		if (i < size1) {
			arr[i] = arr1[i];
		}
		if (i >= size1) {
			arr[i] = arr2[k++];
		}
	}
	bubbleSort(arr, size);
	return arr;
}


// Task 2
struct Point {
	int Co1;
	int Co2;
};

struct line {
	int A;
	int B;
};

//int range(line first, line second) {
//	if(first.A.Co1 == fir)
//}


// Task 3
#define rowsMax 25 
#define colsMax 80

void center(int** arr, const int N, const int M) {
	int rows = rowsMax - N;
	int cols = colsMax - M;
	int k = 0;
	int q = 0;

	for (int i = 0; i < rowsMax; i++) {
		if (i >= (rows / 2) && i < (rows / 2) + N) {
			for (int j = 0; j < colsMax; j++) {
				if (j >= (cols / 2) && j < (cols / 2) + M) {
					if (q < M) {
						std::cout << arr[k][q++];
					}
				}
				else std::cout << " ";
			}
			if (k < N) {
				q = 0;
				k++;
			}
			std::cout << "\n";
		}
		else {
			std::cout << " ";
		}
	}
}

void Fill(const int& N, const int& M) {
	if (M > 80 || M < 0) return;
	if (N > 25 || N < 0) return;
	int** arr = new int* [N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[M];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr[i][j] = 0;
		}
	}
	center(arr, N, M);

	for (int i = 0; i < N; i++) {
		delete arr[i];
	}
	delete[] arr;
}


// Task 4
bool valid(const int& N, int** matrix) {
	if (N <= 0) return false;
	if (matrix == nullptr) return false;
	for (int i = 0; i < N; i++) {
		if (matrix[i] == nullptr) return false;
	}
	return true;
}

double sumGlavenDiagonal(const int& N, int** matrix) {
	if (!valid(N, matrix)) return -1;

	double sum = 0;
	for (int i = 0; i < N; i++) {
		sum += matrix[i][i];
	}
	return sum;
}


// Task 5
bool isVal(const int& N, int** matrix) {
	if (N <= 0) return false;
	if (matrix == nullptr) return false;
	for (int i = 0; i < N; i++) {
		if (matrix[i] == nullptr) return false;
	}
	return true;
}

int** transpose(const int& N, int** matrix) {
	if (!isVal(N, matrix)) return nullptr;

	int** mat = new int*[N];
	for (int i = 0; i < N; i++) {
		mat[i] = new int[N];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			mat[i][j] = matrix[j][i];
		}
	}
	return mat;
}