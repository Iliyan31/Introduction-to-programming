/**
*
* Solution to homework assignment 2
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
#include <vector>
using namespace std;
int main()
{
	int number;
	cin >> number;
	vector <int> vec(number);
	for (int i = 0; i < vec.size(); i++) {
		if (number >= 3 && number <= 1000) {
			cin >> vec[i];
		}
		else {
			return -1;
		}
	}

	int num = ((vec.size() / vec.size())+1);
	int counter = 0;
	for (int t = 0; t <= 2; t++) {
		for (int i = 0; i <= 2 + i + t && 2 + i + t < vec.size(); i++) {
			if (vec.at(i) == vec.at(num + i + t) && vec.at(i + 1) == vec.at(num + i + t - 1)) {
				counter++;
			}
			else {
			}
		}

	}
	cout << counter << endl;
	return 0;
}