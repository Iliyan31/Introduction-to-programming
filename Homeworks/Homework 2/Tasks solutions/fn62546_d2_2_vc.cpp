/**
*
* Solution to homework assignment 2
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
#include <vector>
using namespace std;

int main() {
	int n;
	double arr[100];

	cin >> n;
	if (n >= 3 && n <= 365) {
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] > 0.1 && arr[i] <= 100) {
				continue;
			}
			else {
				return -1;
			}
		}
	}
	else {
		return -1;
	}
	vector <double> vec;
	double number = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i - 1] < arr[i]) {
			number = arr[i] - arr[i - 1];
			vec.push_back(number);
		}
		else {
			continue;
		}
	}
	double sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];

	}
	cout << sum;
}

