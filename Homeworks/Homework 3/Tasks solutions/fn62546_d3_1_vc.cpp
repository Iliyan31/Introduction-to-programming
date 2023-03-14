/**
*
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Iliyan Yordanov
* @idnumber 62546
* @task 1
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
 
int Check(char txt[]) {
	int counter = 0;
	int count = 0;
	int num = strlen1(txt) - 1;
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			if (txt[i] > txt[j]) swap(txt[i], txt[j]);
		}
	}
	if (num % 2 == 0) {
		int num3 = num / 2;
		for (int i = 0; i < num; i++) {
			if (txt[i] == txt[i + 1]) {
				counter++;
			}
		}
		if (num == (counter * 2)) {
			return 1;
		}
		else if (num3 == (counter / 2) + 1) {
			return 1;
		}
		else if (num == counter + 1) {           
			return 1;
		}
		else {
			return 0;
		}
	}
	else if (num % 2 == 1) {
		int num2 = num + 1;
		for (int i = 0; i < num; i++) {
			if (txt[i] == txt[i + 1]) {
				count++;
			}
		}
		if (num2 == (count * 2)) {
			return 1;
		}
		else if (num == ((count * 2) + 1)) {
			return 1;
		}
		else if (num == count + 1) {                       
			return 1;
		}
		else {
			return 0;
		}
	}
}

int main() {
	char text[MAX_LEN];
	cin.getline(text, MAX_LEN);
	cout << Check(text);
	return 0;
}