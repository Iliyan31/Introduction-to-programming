#include "Tasks.hpp"

int main() {

	//const char* str = "aBcDe";
	//std::cout << checkstr(str);

	char arr[] = " It took about an hour to answer all the questions.";
	char* arr1 = GetWord(arr);
	for (int i = 0; arr1[i] != '\0'; i++) {
		std::cout << arr1[i];
	}

	//std::cout << AnalyzeNum(442);
	return 0;
}