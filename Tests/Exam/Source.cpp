
#include "Izpit_UP_20210831_6_62546_vc.h"

int main() {
	//const char* str = "12346789";
	//std::cout << convertNumber(str);

	//double x = 2;
	//long n = 2;
	//std::cout << mySin(x, n);

	const char* str = "abc";
	char* arr1 = Encode(str);
	for (int i = 0; arr1[i] != '\0'; i++) {
		std::cout << arr1[i];
	}

	return 0;
}