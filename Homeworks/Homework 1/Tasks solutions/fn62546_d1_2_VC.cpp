/**
*
* Solution to homework assignment 1
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
int main()
{
	int num, sec = -1, max = -1;
	cin >> num;
	while (num > 0)
	{
		cin >> num;
		if (num > max)
		{
			sec = max;
			max = num;

		}
		if (num > sec && num < max)
		{
			sec = num;
		}
	}
	cout << sec;
	return 0;
}
