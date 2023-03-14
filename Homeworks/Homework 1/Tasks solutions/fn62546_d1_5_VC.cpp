/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Iliyan Yordanov
* @idnumber 62546
* @task 5
* @compiler VC
*
*/

#include <iostream>
using namespace std;
int main()
{
	double num;
	cin >> num;
	double rec = 1 / num;
	bool flag = 0;
	if (num > 1 && num < pow(10, 9))
	{
		for (int i = 1; i < 10; i++)
		{
			rec *= 10;
			if (floor(rec) == rec)
			{
				cout << i;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			cout << "No";
		}
	}
	return 0;
}
