#include "Tasks.hpp"

int ownPower(int num, const int& i);

int main() {
	//int arr[] = { 1,2,3,4,5 };
	//int arr2[] = { 6,7,8,9 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//int size2 = sizeof(arr2) / sizeof(arr2[0]);
	//int* arrNew = SortedArray(arr, arr2, size, size2);
	//if (arrNew == nullptr) return -1;
	//for (int i = 0; i < size + size2; i++) {
	//	std::cout << arrNew[i] << " ";
	//}

	//Fill(2, 2);

	//int num = 1234;
	//int size = (int)log10(num) + 1;
	//int* arr = new int[size];
	//int k = 0;
	//std:: cout << size << std::endl;
	//for (int i = size ; i > 0; i--) {
	//	arr[k] = (num % ownPower(10, i) - num % ownPower(10, i - 1)) / ownPower(10, i - 1);
	//	k++;
	//}

	int** arr = new int* [5];
	for (int i = 0; i < 5; i++) {
		arr[i] = new int[5];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cin >> arr[i][j];
		}
	}


	int** arr2 = transpose(5, arr);
	//std::cout << sumGlavenDiagonal(5, arr);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << arr2[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < 5; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	for (int i = 0; i < 5; i++) {
		delete[] arr2[i];
	}
	delete[] arr2;


	return 0;
}

//int ownPower(int num, const int& i) {
//	if (i == 0) return 1;
//	if (num == 0 && i != 0) return 0;
//	int temp = num;
//	for (int j = 0; j < i-1; j++) {
//		num *= temp;
//	}
//	return num;
//}