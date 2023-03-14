/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Iliyan Yordanov
* @idnumber 62546
* @task 4
* @compiler VC
*
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num, num2, t=0;
	cin >> num;
	while (num < 3 || num>100)
	cin >> num;
	vector <int> vec;
	for (int i = 0; t < num; i++) {
		bool flag = false;
		cin >> num2;
		for (int h = 0; h < vec.size(); h++) {
			if (vec.at(h) == num2) {
				flag = true;

			}
		}
		if (flag == false) {
			vec.push_back(num2);
			t++;

		}
	}
	int counter=0;
	for (int i = 0; i < vec.size(); i++) {
		for (int y = i + 1; y < vec.size(); y++) {
			for (int x = i + 2; x < vec.size(); x++) {
				if (vec.at(i) != vec.at(y) && vec.at(y) != vec.at(x) && vec.at(i)< vec.at(y) && vec.at(y)<vec.at(x) || vec.at(i) > vec.at(y) && vec.at(y) > vec.at(x) || vec.at(i)<vec.at(y) && vec.at(y)> vec.at(x))
				{
					if (vec.at(i) + vec.at(y) + vec.at(x) == 0) {
						counter++;
					}
				}
			}
		}
	}
	if (counter == 0) {
		cout << "0";
	}
	else {
		cout << counter;
	}
	return 0;
}

