#pragma once

#include <iostream>
using namespace std;


// Задача 1 примерни moodle
const int size2 = 100;

void swap1(int& a, int& b) {
	int temp = b;
	b = a;
	a = temp;
	
}

void sortArray(int arr3[], int num) {
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			if (arr3[i] > arr3[j]) swap1(arr3[i], arr3[j]);
		}
	}
}

int * thirdArray(int k, int n, int arr1[], int arr2[]) {
	int arr3[size2];
	int num = k + n;
	for (int i = 0; i < k+n; i++) {
		if (i < k) {
			arr3[i] = arr1[i];
		}
		else {
			arr3[i] = arr2[i - k];
		}
	}
	sortArray(arr3, num);
	return arr3;
}



// Задача 5 примерни moodle
int** function(int n) {
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	int** arr1 = new int* [n];
	for (int i = 0; i < n; i++) {
		arr1[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr1[i][j] = arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = arr1[j][i];
		}
	}

	return arr;

	for (unsigned i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	for (unsigned i = 0; i < n; i++) {
		delete[] arr1[i];
	}
	delete[] arr1;
}



// Задача 3 примерни moodle
int** function2(int n, int m, int ch) {
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = ch;
		}
	}

	return arr;

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}



// Задача 4 примерни moodle
int function3(int n, int ** arr) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i][i];
	}
	return sum;
}



// Задача 2 Мартин
void pow1(int a, int b, int& h) {
	for (int i = 1; i < b; i++) {
		a *= a;
	}
	h = a;
}

double Solve(const char* const str) {
	int a = str[0] - '0';
	int b = str[6] - '0';
	int c = str[10] - '0';
	int h = 0;
	pow1(b, 2, h);
	int D = (h) - (4 * a * c);
	double x1 = (-b + sqrt(D)) / 2;
	double x2 = (-b - sqrt(D)) / 2;
	if (x1 >= x2) return x1;
	return x2;
}



// Задача 3 Мартин 

void abs1(int& num) {
	num *= -1;
}

void swap2(int& a, int& b) {
	int temp = b;
	b = a;
	a = temp;
}

void sortArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i] > arr[j]) swap2(arr[i], arr[j]);
		}
	}
}

int* Extract(const int num) {
	int size = 0;
	int n = num;
	n = abs(n);
	while (n > 0) {
		size++;
		n /= 10;
	}
	int* arr = new int[size];
	n = num;
	abs1(n);
	for (int i = 0; i < size; i++) {
		arr[i] = n % 10;
		n /= 10;
	}
	sortArr(arr, size);

	int count = 0;

	int* str = new int[size + 1];
	for (int i = 0; i < size; i++) {
		if (arr[i] == arr[i + 1]) {
			str[count] = arr[i];
			count++;
		}
	}
	if (count != 0) {
		str[count] = -1;
	}
	if (count == 0) {
		for (int i = 0; i < size; i++) {
			str[i] = arr[i];
		}
		str[size] = -1;
	}
	return str;

	delete[] arr;
	delete[] str;
}


// Задача 1 примерна 2

double sqrt_a(double a, double eps) {
	double x1 = a;
	double pr;
	do {
		pr = x1;
		x1 = 0.5 * (pr + a / pr);
	} while (fabs(x1 - pr) >= eps);
	return x1;
}



// sin
int power1(int a, int b) {
	for (int i = 1; i < b; i++) {
		a *= a;
	}
	if (b == 0) return 1;
	return a;
}

int factoriel(int num) {
	if (num == 0) return 1;
	return num * factoriel(num - 1);
}

int factoriel2(int num) {
	for (int i = num-1; i > 0; i--) {
		num *= i;
	}
	return num;
}

double sinus(int x, int o) {
	double sum = 0;
	int t = 1;
	for (int i = 1; i < o; i+=2) {	
		int ch = power1(x, i);
		int zn = factoriel(i);
		sum += (t) * (ch / zn);
		t *= -1;
	}
	return sum;
}





// cos
int power2(int a, int b) {
	for (int i = 1; i < b; i++) {
		a *= a;
	}
	if (b == 0) return 1;
	return a;
}

int factoriel3(int num) {
	for (int i = num-1; i > 0; i--) {
		num *= i;
	}
	if (num == 0) return 1;
	return num;
}

double cosinus(int x, int o) {
	double sum = 0;
	int t = 1;
	for (int i = 0; i < o; i+=2) {
		int h = power2(x, i);
		int j = factoriel3(i);
		sum += t * (h / j);
		t *= -1;
	}
	return sum;
}




// e^x
int power3(int a, int b) {
	for (int i = 1; i < b; i++) {
		a *= a;
	}
	if (b == 0) return 1;
	return a;
}

int factoriel4(int num) {
	for (int i = num - 1; i > 0; i--) {
		num *= i;
	}
	if (num == 0) return 1;
	return num;
}

double nep(int x, int o) {
	double sum = 0;
	for (int i = 0; i < o; i++) {
		int h = power3(x, i);
		int j = factoriel4(i);
		sum += (h) / (j);
	}
	return sum;
}	



// Задача 1 група 5
int AnalyzeArray(int arr[], int I) {
	if (I <= 0) return -1;
	for (int i = 0; i < I; i++) {
		if (arr[i] == arr[i + 1]) {
			I--;
		}
	}
	if (I % 2 == 0) return 1;
	if (I % 2 == 1) return 0;
}


// Задача 2 група 5
int strlen1(char* arr) {
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		count++;
	}
	return count;
}

bool doExist(char* symbols, char* word) {
	int sizeS = strlen1(symbols);
	int sizeW = strlen1(word);
	if (sizeS < sizeW) return false;
	for (int i = 0; i < sizeS; i++) {
		if (word[0] == symbols[i]) {
			i++;
			for (int j = 1; j < (sizeW-1), i < (sizeS-1); i++, j++) {
				if (word[j] != symbols[i]) {
					return false;
				}
			}
			return true;
		}
	}
}


// Задача 3 група 5


double CalculateMartix(int** arr, int m) {
	int sum = 0;
	if (m <= 0) return -1;
	for (int i = 0; i < m; i++) {
		sum += arr[i][i];
		sum += arr[m - i - 1][m - i - 1];
	}
	/*for (int i = 0; i < m; i++) {
		sum += arr[m - i - 1][m - i - 1];
	}*/
	return sum;
}



void Revert(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			//str[i] += 32;
			str[i] = (str[i] - 'A') + 'a';
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			//str[i] -= 32;
			str[i] = (str[i] - 'a') + 'A';
		}
	}
}

int strlen2(char str[]) {
	int count =0;
	for (int i = 0; str[i] != '\0'; i++) {
		count++;
	}
	return count;
}
bool CheckDate(char str[]) {
	int size = strlen2(str);
	if (size != 5) return false;
	if (str[2] != '.') return false;
	for (int i = 0; i < size; i++) {
		if (i != 2) {
			if (str[i] < '0' || str[i] > '9') return false;
		}
	}
	int days = (str[0] - '0') * 10 + (str[1] - '0');
	int months = (str[3] - '0') * 10 + (str[4] - '0');
	if (days == 0) return false;
	switch (months) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: if (days <= 31) return true;
		case 4: case 6: case 9: case 11: if (days <= 30) return true;
		case 2: if (days <= 28) return true;
	}
	return false;
}



int DigitPos(long num, int k) {
	int n = num;
	int count = 0;
	while (n > 0) {
		count++;
		n /= 10;
	}
	if (count < k) return -1;
	int kth = count - k;
	for (int i = 0; i < kth; i++) {
		num /= 10;
	}
	return num % 10;
}

double power5(double a, int b) {
	for (int i = 1; i < b; i++) {
		a *= a;
	}
	return a;
}

struct point {
	double x = 0.0; 
	double y = 0.0;
};

double calclen(point a1, point a2) {
	double x1 = (a1.x - a2.x);
	double y1 = (a1.y - a2.y);
	
	return sqrt(power5(x1, 2) - power5(y1, 2));
}