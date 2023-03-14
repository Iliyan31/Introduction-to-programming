/**
*
* Solution to homework assignment 4
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

const int MAX_SIZE = 150;

bool canBecomeAscending(int array[], int toSwitch, int size);

int main(){
	int N, M; 

	cin >> N >> M;
	int arr[MAX_SIZE];
	for (int i = 0; i < M; i++) {
		cin >> arr[i];
	}
	cout << canBecomeAscending(arr, N, M);
	return 0;
}

bool canBecomeAscending(int array[], int toSwitch, int size) {
	int count = 0, counter = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] > array[i + 1]) {
			count++;
		}
	}
	for (int i = 0; i < size; i++) {
		if (array[i] < array[i + 1]) {
			counter++;
		}
	}
	count--;
	if (count <= toSwitch) {
		return true;
	}
	else {
		return false;
	}
}