/**
*
* Solution to homework assignment 2
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
#include <vector>
using namespace std;
int main()
{

	int number;
	cin >> number;

	vector <int> vec(number);
	for (int i = 0; i < vec.size(); i++) {
		if (number >= 3 && number <= 300)
		{
			cin >> vec[i];
		}
		else {
			break;
		}
	}

	if (number % 2 == 1) {
		vector <int> vec2;
		int n = 0;
		for (int i = 0; i < vec.size() - 1; i++) {
			n = vec.at(i) - vec.at(i + 1);
			vec2.push_back(n);
			for (int y = 0; y < vec2.size(); y++) {
				if (y < vec2.size() - y)
				{
					if (vec2.at(y) - vec2.at(vec2.size() - y - 1) == 0 && vec2.at(y) - abs(vec2.at(vec2.size() - y - 1)) == 0 && abs(vec2.at(y)) - vec2.at(vec2.size() - y - 1) == 0 && abs(vec2.at(y)) - abs(vec2.at(vec2.size() - y - 1)) == 0)  
					{
						cout << "1";
					}
					else {
						cout << "0"; 
					}
					return 0;
				}
				else {
					break;
				}
			}
		}
	}
	else if (number % 2 == 0) {                 
		vector <int> vec3;
		int r = 0;
		for (int i = 0; i < vec.size() - 1; i++) {
			r = vec.at(i) - vec.at(i + 1);
			vec3.push_back(r);
			for (int x = 0; x < vec3.size(); x++) {
				if (x < vec3.size() - x - 3) {
					if (vec3.at(x) - vec3.at(vec3.size() - x - 1) == 0 && vec3.at(x) - abs(vec3.at(vec3.size() - x - 1)) == 0 && abs(vec3.at(x)) - vec3.at(vec3.size() - x - 1) == 0 && abs(vec3.at(x)) - abs(vec3.at(vec3.size() - x - 1)) == 0)  
					{
						cout << "1"; 
					}
					else {
						cout << "0"; 

					}
					return 0;
				}
			}
		}
	}
	return 0;
}

