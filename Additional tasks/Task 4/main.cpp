#include "Tasks.hpp"

int main() {

	//int arr[] = { 1,2,3,4,5 };
	//int first = 1;
	//int second = 3;
	//int size = sizeof(arr) / sizeof(arr[0]);
	//reverseIndex(arr, first, second, size);

	//char* str = new char[16];
	//std::cin.getline(str, 16);
	//const char* st = "me";
	//char*arr = strRev(str, st);
	//for (int i = 0; arr[i] != '\0'; i++) {
	//	std::cout << arr[i];
	//}

	int arr[] = { 1,2,3,4,5,5,6,7 };
	int arr2[] = { 1,1,2,1,3,4,6,5,7,3,4,5,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	std::cout << isARange(arr, arr2, size, size2);


	return 0;
}