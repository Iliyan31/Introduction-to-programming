#include<iostream>

void Revert(char str[]) {
	bool flag = false;
	for (int i = 0; str[i] != '\0'; i++) {
		flag = false;
		if ((str[i] >= 'a' && str[i] <= 'z') && flag == false) {
			str[i] -= ('a' - 'A');
			flag = true;
		}
		if ((str[i] >= 'A' && str[i] <= 'Z') && flag == false) {
			str[i] += ('a' - 'A');
		}
	}
	std::cout << str << std::endl;
}

//int ownPow(int num, const int& times) {
//	if (times == 0) return 1;
//	if (num == 0) return 0;
//	int temp = num;
//	for (int i = times; i > 0; i--) {
//		num *= temp;
//	}
//	return num;
//}

int DigitPos(long num, int k) {
	int n = num;
	int size = 0;
	while (n != 0) {
		n /= 10;
		size++;
	}
	if (num == 0 && k == 1) return 0;
	if (k <= 0 || k >= size + 1) return -1;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = num % 10;
		num /= 10;
	}
	int* rev = new int[size];
	for (int i = 0; i < size; i++) {
		rev[i] = arr[size - i - 1];
	}
	int neededNumber = rev[k - 1];
	delete[] rev;
	delete[] arr;

	return neededNumber;
}


bool CheckDate(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (i != 2) {
			if (str[i] < '0' || str[i]>'9') return false;
		}
		if (i == 2) {
			if (str[i] != '.') return false;
		}
	}

	size_t days = 0;
	size_t months = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (i < 2) {
			days = (days * 10 + (str[i] - '0'));
		}
		if (i > 2) {
			months = (months * 10 + (str[i] - '0'));
		}
	}

	switch (months) {
	case 1:	case 3: case 5: case 7: case 8: case 10: case 12: return days <= 31; break;
	case 4: case 6: case 9: case 11: return days <= 30; break;
	case 2: return days <= 29;
	}
	return false;
}

int ownStrlen(const char* str) {
	int i = 0;
	while (str[i++] != '\0');
	return i - 1;
}

bool doExist(char* symbols, char* word) {
	if (symbols == nullptr && word == nullptr) return true;
	if (symbols == nullptr && word != nullptr) return false;
	if (symbols != nullptr && word == nullptr) return true;
	int size = ownStrlen(word);
	int size2 = ownStrlen(symbols);
	if (size > size2) return false;
	int k = 0;
	bool flag = false;
	bool flag2 = false;

	for (int i = 0; symbols[i] != '\0'; i++) {
		if ((symbols[i] != word[k]) && flag == true) {
			flag = false;
		}
		if (symbols[i] == word[size - 1] && (flag == flag2)) {
			return true;
		}
		if ((symbols[i] == word[k]) && (flag == flag2)) {
			flag = true;
			flag2 = true;
			k++;
		}
	}
	return false;
}

void ownSwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void ownSort(int* arr, const int& size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) ownSwap(arr[j], arr[j + 1]);
		}
	}
}

int* Array(int arr[], int arr2[], int size1, int size2) {
	int size = size1 + size2, k = 0;
	int* newArr = new int[size];
	for (size_t i = 0; i < size; i++) {
		if (i < size1) {
			newArr[i] = arr[i];
		}
		if (i >= size1) {
			newArr[i] = arr2[k++];
		}
	}
	ownSort(newArr, size);

	return newArr;

}



void field(int arr[], const int& size) {
	int start = -1;
	for (size_t i = 0; i < size; i++) {
		if (arr[i] == arr[i + 1]) {
			start = i;
		}
	}
	int end = start;
	for (size_t i = size - 1; i >= start; i--) {
		if (arr[i] == arr[i + 1]) {
			end = i;
		}
	}
	std::cout << start << " " << end;
}

int ownPow(int num, const int& times) {
	if (times == 0) return 1;
	int temp = num;
	for (int i = 1; i < times; i++) {
		num *= temp;
	}
	return num;
}

int Numbers(const int* arr, const int* arr2, const int& size, const int& size2) {
	int num1 = 0;
	int k = size - 1;
	for (int i = 0; i < size; i++) {
		num1 += arr[i] * (ownPow(10, k));
		k--;
	}
	int num2 = 0;
	k = size2 - 1;
	for (int i = 0; i < size2; i++) {
		num2 += arr2[i] * (ownPow(10, k));
		k--;
	}

	return num1 + num2;
}

double tillMinus(const double* arr, const int& size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 0) sum += arr[i];
		if (arr[i] < 0) break;
	}
	return sum;
}

bool palindrome(char* str, const int& size) {
	int secSize = size - 1;
	for (int i = 0; i < (secSize / 2); i++) {
		if (str[i] != str[secSize - 1 - i]) return false;
	}
	return true;
}

bool ifCan(const int* arr, const int& size, const int& num) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = 0;
		for (int j = i; j < size; j++) {
			sum += arr[j];
			if (sum == num) return true;
		}
	}
	return false;
}

int ownStr(const char* str) {
	int i = 0;
	while (str[i++] != '\0');
	return i - 1;
}

void SortRev(int* arr, const int& size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) ownSwap(arr[j], arr[j + 1]);
		}
	}
}

int number(const char* str) {
	if (str == nullptr) return 0;
	int size = ownStr(str);
	int* arr = new int[size];
	int k = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			arr[k++] = (str[i] - '0');
		}
	}
	SortRev(arr, k);

	int maxNum = 0;
	for (int i = 0; i < k; i++) {
		maxNum = (maxNum * 10 + arr[i]);
	}
	delete[] arr;

	return maxNum;

}


































int main() {

	//char arr[] = "a!cDeFGh";
	//Revert(arr);

	//std::cout << DigitPos(12, 1);
	//char arr[] = "3a.03";
	//std::cout << CheckDate(arr);

	/*char* arr = new char[7];
	for (int i = 0; i < 6; i++) {
		std::cin >> arr[i];
	}
	arr[6] = '\0';

	char* str = new char[4];
	for (int i = 0; i < 3; i++) {
		std::cin >> str[i];
	}
	str[3] = '\0';

	std::cout << doExist(arr, str) << std::endl;

	delete[] arr;
	delete[] str;*/

	//int arr[] = { 1,2,3,4,5 };
	//int arr2[] = { 1,2,3,4,5 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//int size2 = *(&arr2 + 1) - arr2;


	//int* arr3 = Array(arr, arr2, size, size2);
	//for (int i = 0; i < size + size2; i++) {
	//	std::cout << arr3[i] << " ";
	//}


	//int size1, size2;
	//std::cin >> size1;
	//if (size1 < 2 || size1>1000) return -1;
	//int* arr = new int[size1];
	//for (int i = 0; i < size1; i++) {
	//	std::cin >> arr[i];
	//}
	//
	//std::cin >> size2;
	//if (size2 < 2 || size2>1000) return -1;
	//int* arr2 = new int[size2];
	//for (int i = 0; i < size2; i++) {
	//	std::cin >> arr2[i];
	//}

	//std::cout << Numbers(arr, arr2, size1, size2);

	//int size;
	//std::cin >> size;
	//double* arr = new double[size];
	//for (int i = 0; i < size; i++) {
	//	std::cin >> arr[i];
	//}

	//std::cout << tillMinus(arr, size);

	//int size;
	//std::cin >> size;
	//char* arr = new char[size];
	//for (int i = 0; i < size -1; i++) {
	//	std::cin >> arr[i];
	//}
	//arr[size - 1] = '\0';


	//std::cout << palindrome(arr, size);

	//int size;
	//std::cin >> size;
	//int* arr = new int[size];
	//for (int i = 0; i < size; i++) {
	//	std::cin >> arr[i];
	//}

	//std::cout << ifCan(arr, size, 12);
	//delete[] arr;
	//return 0;

	//char* str = new char[50];
	//std::cin.getline(str, 50);
	//std::cout << number(str);


}