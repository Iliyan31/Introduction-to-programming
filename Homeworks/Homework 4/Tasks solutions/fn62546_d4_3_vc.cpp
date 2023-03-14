/**
*
* Solution to homework assignment 4
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Iliyan Yordanov
* @idnumber 62546
* @task 3
* @compiler VC
*
*/

#include <iostream>
using namespace std;

int* printArray(int arr[], char str[], int arr2[], int arr3[]);
void finalNumber(int& num, int& num2);

int main(){
	int arr[2];
	for (int i = 0; i < 2; i++) {
		cin >> arr[i];
	}
	char str[2];
	cin >> str;
	if (str[0] == 42 || str[0] == 43 || str[0] == 45 || str[0] == 47) {
		int arr2[2];
		for (int i = 0; i < 2; i++) {
			cin >> arr2[i];
		}
		if (arr[1] == 0 || arr2[1] == 0) {
			return -1;
		}
		else {
			int arr3[2];
			int number = str[0] - 41;
			int* ptr = printArray(arr, str, arr2, arr3);
			if (arr3[0] == 0) {
				cout << arr3[0] << " " << "1";
			}
			else {
				cout << arr3[0] << " " << arr3[1] << endl;
			}
		}
	}
	else {
		return -1;
	}
	return 0;
} 

int* printArray(int arr[], char str[], int arr2[], int arr3[]) {
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, symbol = 0;
	n1 = arr[0];
	n2 = arr[1];
	n3 = arr2[0];
	n4 = arr2[1];
	symbol = str[0];

	if (symbol == '+') {
		if (n2 == n4) {
			arr3[0] = (n1 + n3);
			arr3[1] = n2;
			int num = arr3[0];
			int num2 = arr3[1];
			finalNumber(num, num2);
			arr3[0] = num;
			arr3[1] = num2;
			return arr3;
		}
		else {
			arr3[0] = ((n1 * n4) + (n3 * n2));
			arr3[1] = n2 * n4;
			int num = arr3[0];
			int num2 = arr3[1];
			finalNumber(num, num2);
			arr3[0] = num;
			arr3[1] = num2;
			return arr3;
		}
	}
	else if (symbol == '-') {
		if (n2 == n4) {
			arr3[0] = (n1 - n3);
			arr3[1] = n2;

			int num = arr3[0];
			int num2 = arr3[1];
			finalNumber(num, num2);
			arr3[0] = num;
			arr3[1] = num2;
			return arr3;
		}
		else if (n1 == n3 && n2 == n4) {
			cout << "0";
		}
		else {
			arr3[0] = ((n1 * n4) - (n3 * n2));
			arr3[1] = n2 * n4;

			int num = arr3[0];
			int num2 = arr3[1];
			finalNumber(num, num2);
			arr3[0] = num;
			arr3[1] = num2;
			return arr3;
		}
	}
	else if (symbol == '*') {
		arr3[0] = n1 * n3;
		arr3[1] = n2 * n4;

		int num = arr3[0];
		int num2 = arr3[1];
		finalNumber(num, num2);
		arr3[0] = num;
		arr3[1] = num2;
		return arr3;
	}
	else {
		arr3[0] = n1 * n4;
		arr3[1] = n2 * n3;

		int num = arr3[0];
		int num2 = arr3[1];
		finalNumber(num, num2);
		arr3[0] = num;
		arr3[1] = num2;
		return arr3;
	}
}

void finalNumber(int& num, int& num2) {
	int  num3 = 1;
	char result[3];
	for (int i = 1; i <= num && i <= num2; i++) {
		if (num % i == 0 && num2 % i == 0) {
			num3 = i;
		}
	}
	num /= num3;
	num2 /= num3;
}