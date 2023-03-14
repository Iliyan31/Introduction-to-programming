/**
*
* Solution to homework assignment 1
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
int main()
{
    int N, X, M;
    cin >> N >> X >> M;
    int even, odd;
    even = N / 2;
    odd = N / 2;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    if (N % 2 == 1)
    {
        odd++;
    }
    sum1 = odd * M;
    sum2 = ((50 + (even - 1) * 30) / 2) * even;
    sum = sum1 + sum2;
    if (sum >= X)
    {
        cout << "Yes" << endl;;
        cout << sum - X;
    }
    else
    {
        cout << "No" << endl;
        cout << X - sum;
    }
    return 0;
}

