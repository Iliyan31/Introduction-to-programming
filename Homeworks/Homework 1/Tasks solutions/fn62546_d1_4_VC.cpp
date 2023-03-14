/**
*
* Solution to homework assignment 1
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
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int num2;
    cin >> num2;
    int num = num2;
    int sum = 0;
    int divisorsCount = 0;
    int divisor = 0;

    for (int i = 2; i * i <= num2; i++)
    {
        while (num2 % i == 0)
        {
            sum += i;
            num2 /= i;
            divisorsCount++;
            divisor = i;
        }
    }

    sum += num2;            

    int m = 0;
    int p = 0;
    int q = 0;
    if (divisorsCount == 1)  
    {
        m = 1;
        p = divisor;
        q = num / p;
    }
    else
    {               


        for (int i = 2; i < sqrt(num); i++)
        {
            if (num % i == 0)
            {
                m = i;
                int num3 = num / i;
                for (int j = 2; j < sqrt(num3); j++)
                {
                    if (num3 % j == 0)
                    {
                        p = j;
                    }
                }
                q = num3 / p;
                if (p + q + m == sum)
                {
                    break;
                }
            }
        }
    }
    cout << m << endl;   
    cout << p << endl;
    cout << q << endl;
    return 0;
}

