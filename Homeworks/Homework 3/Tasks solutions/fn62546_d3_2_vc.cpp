/**
*
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Iliyan Yordanov
* @idnumber 62546
* @task 2
* @compiler VC
*
*/

#include <iostream>
using namespace std;

const int MAX_LEN = 151;

int strlen1(char str[]) {
	int counter = 0;
	while (str[counter++] != '\0');
	return counter--;
}
int function(char txt1[], char txt2[], char txt3[], int num1, int num2, int num3) {
	if (num3 == num1 + num2) {
		if (num1 < num2 || num2 < num1) {
			int count = 0;
			int count2 = 0;
			int count3 = 0;
			int count4 = 0;
			for (int j = 0; j < num1; j++) {
				for (int i = 0; i < (num3 - num2); i++) {
					if (txt1[j] == txt3[i]) {
						count++;
						break;
					}
				}
			}
			for (int j = 0; j < num2; j++) {
				for (int i = (num3 - num1) - 1; i < num3; i++) {
					if (txt2[j] == txt3[i]) {
						count2++;
						break;
					}
				}
			}
			if (num3 == count + count2) {
				return 1;
			}
			else {
				return 0;
			}

			for (int j = 0; j < num2; j++) {
				for (int i = 0; i < (num3 - num1); i++) {
					if (txt2[j] == txt3[i]) {
						count3++;
						break;
					}
				}
			}
			for (int j = 0; j < num1; j++) {
				for (int i = (num3 - num2) + 1; i < num3; i++) {
					if (txt1[j] == txt3[i]) {
						count4++;
						break;
					} 
				}
			}
			if (num3 == count3 + count4) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else if (num1 == num2) {
			int count = 0;
			int count2 = 0;
			int count3 = 0;
			int count4 = 0;
			for (int j = 0; j < num1; j++) {
				for (int i = 0; i < (num3 - num2); i++) {
					if (txt1[j] == txt3[i]) {
						count++;
						break;
					}
				} 
			}
			for (int j = 0; j < num2; j++) {
				for (int i = (num3 - num1); i < num3; i++) {
					if (txt2[j] == txt3[i]) {
						count2++;
						break;
					}
				}
			}
			if ((num3 == count + count2)) {
				return 1;
			}
			else {
				return 0;
			}

			for (int j = 0; j < num2; j++) {
				for (int i = 0; i < (num3 - num1); i++) {
					if (txt2[j] == txt3[i]) {
						count3++;
						break;
					}
				}
			}
			for (int j = 0; j < num1; j++) {
				for (int i = (num3 - num2); i < num3; i++) {
					if (txt1[j] == txt3[i]) {
						count4++;
						break;
					}
				}
			}
			if (num3 == count3 + count4) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	else {
		return 0;
	}
}

int main() {
	char text1[MAX_LEN], text2[MAX_LEN], text3[MAX_LEN];
	cin >> text1 >> text2 >> text3;
	int num1 = strlen1(text1) - 1;
	int num2 = strlen1(text2) - 1;
	int num3 = strlen1(text3) - 1;
	for (int i = 0; i < num1; i++) {
		if ((text1[i] < 'a' || text1[i]>'z')) {
			cout << "-1";
			return 0;
		}
	}
	for (int i = 0; i < num1; i++) {
		if ((text2[i] < 'a' || text2[i]>'z')) {
			cout << "-1";
			return 0;
		}
	}
	cout << function(text1, text2, text3, num1, num2, num3) << endl;
	return 0;
}
