/**
*
* Solution to homework assignment 1
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
using namespace std;
int main()
{
    int num1, num2, num3; 
    do
    {
        std::cin >> num1 >> num2 >> num3;
    } while (num1 < 0 || num1>9 || num2 < 0 || num2>9 || num3 < 0 || num3>9);
    if (num1 > -1 && num1<10 && num2>-1 && num2<10 && num3>-1 && num3 < 10)
    {
        if (num1 == 0)
        {
            if (num2 == 0)
            {
                if (num3 == 0)
                {
                    cout << num3;
                }
                else
                {
                    cout << num3 << num2 << num3;
                }
            }
            else
            {
                if (num3 == 0)
                {
                    cout << num2 << num3 << num2;
                }
                if (num3 != 0 && num2 > num3)
                {
                    cout << num3 << num1 << num2 << num1 << num3;
                }
                if (num3 != 0 && num2 < num3)
                {
                    cout << num2 << num1 << num3 << num1 << num2;
                }
            }
        }
        else
        {
            if (num2 == 0)
            {
                if (num3 == 0)
                {
                    cout << num1 << num3 << num1;
                }
                else
                {
                    if (num1 > num3)
                    {
                        cout << num3 << num2 << num1 << num2 << num3;
                    }
                    else
                    {
                        cout << num1 << num2 << num3 << num2 << num1;
                    }
                }
            }
            else
            {
                if (num3 == 0)
                {
                    if (num1 > num2)
                    {
                        cout << num2 << num3 << num1 << num3 << num2;
                    }
                    else
                    {
                        cout << num1 << num3 << num2 << num3 << num1;
                    }
                }
            }
        }
        if (num1 != num2 && num1 != num3 && num2 != num3 && num1 != 0 && num2 != 0 && num3 != 0)
        {
            if (num1 < num2)
            {
                if (num1 < num3)
                {
                    if (num3 < num2)
                    {
                        cout << num1 << num3 << num2 << num3 << num1;
                    }
                    else
                    {
                        cout << num1 << num2 << num3 << num2 << num1;
                    }
                }
                else
                {
                    cout << num3 << num1 << num2 << num1 << num3;
                }
            }
            else
            {
                if (num2 < num1)
                {
                    if (num2 < num3)
                    {
                        if (num3 < num1)
                        {
                            cout << num2 << num3 << num1 << num3 << num2;
                        }
                        else
                        {
                            cout << num2 << num1 << num3 << num1 << num2;
                        }
                    }
                    else
                    {
                        cout << num3 << num2 << num1 << num2 << num3;
                    }
                }
                else
                {
                    cout << num3 << num2 << num1 << num2 << num3;
                }
            }

        }
        else if (num1 != 0 && num2 != 0 && num3 != 0)
        {
            if (num1 == num2)
            {
                if (num3 > num1)
                {
                    cout << num1 << num3 << num1;
                }
                else
                {
                    cout << num1 << num3 << num1;
                }
            }
            else if (num1 == num3)
            {
                if (num2 > num1)
                {
                    cout << num1 << num2 << num1;
                }
                else
                {
                    cout << num1 << num2 << num1;
                }
            }
            else if (num3 == num2)
            {
                if (num1 > num3)
                {
                    cout << num3 << num1 << num3;
                }
                else
                {
                    cout << num3 << num1 << num3;
                }
            }
        }
    }
    return 0;
}