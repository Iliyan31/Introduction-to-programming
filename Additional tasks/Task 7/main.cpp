#include "Tasks.hpp"

int main() {
	
	//const char* arr = " I left you alone ";
	//std::cout << revandreplace(arr);

	//char arr[] = "2020 g.";
	//std::cout << CheckDate(arr);

	int arr[] = { 3,5,11,2,9 };
	int arr2[] = { 1,4,32,71,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int* str = countletters(arr, arr2, size);
	for (int i = 0; i < 2; i++) {
		std::cout << str[i] << " ";
	}
	delete[] str;
	return 0;
}