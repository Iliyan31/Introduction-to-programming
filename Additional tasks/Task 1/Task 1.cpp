
#include <iostream>
using namespace std;

int function(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 3 == 0) {
			sum += arr[i];
		}
	}
	return sum;
}

int main() {
	int sum1 = 0;
	int size;
	cin >> size;
	const int n = 50;
	int arr[n];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout<<function(arr, size, sum1);


	int sum2 = 0;
	int size2;
	cin >> size2;
	const int n2 = 50;
	int arr2[n2];
	for (int i = 0; i < size2; i++) {
		cin >> arr2[i];
	}
	
	
	int sum3 = 0;
	int size3;
	cin >> size3;
	const int n3 = 50;
	int arr3[n3];
	for (int i = 0; i < size2; i++) {
		cin >> arr3[i];
	}
	function(arr3, size3, sum3);
	
	cout << sum1 << endl;
	cout << sum2 << endl;
	cout << sum3 << endl;
	
	return 0;
}