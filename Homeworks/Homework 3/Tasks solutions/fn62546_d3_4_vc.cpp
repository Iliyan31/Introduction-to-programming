/**
*
* Solution to homework assignment 3
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
using namespace std;
const int MAX_SIZE = 100;

int strlen1(char str[]) {
	int counter = 0;
	while (str[counter++] != '\0');
	return counter--;
}

int allPossibleSubset(char arr[], int n)
{
    int counter = 0;
    int sum = 0;
    int count = pow(2, n);
    int rows = count, cols = n;
    char matrix[MAX_SIZE][MAX_SIZE];


    for (int i = 1; i < count; i++) {
        for (int j = 0; j < n; j++) {
            if (((i & (1 << j)) != 0)) {
                matrix[i][j] = arr[j];

            }
        }
        cout << "\n";
        counter++;
    }
 

    int h = 204;
    int m = (char)h;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][0] == m && matrix[i][1]!=m)
            {
                    matrix[i][j] = matrix[i][j + 1];
            }
            if (matrix[i][0] == m && matrix[i][1] == m)
            {
                int h = matrix[i][j];
                matrix[i][j] = matrix[i][j + 1];
                matrix[i][j] = matrix[i][j + 2];
            }
           
        }
    }
    for (int i = 1; i < rows; i++) {
       for (int k = 2; k < rows; k++) {
           if ((matrix[i][0] == matrix[k][0]) && (matrix[i][1] == matrix[k][1]) && (matrix[i][2] == matrix[k][2]) && (matrix[i][3] == matrix[k][3])){
               sum++;
               break;
           }
       }  
    }
    return counter;
}

int main()
{
    char str[MAX_SIZE];
    cin >> str;
    int num = strlen1(str) - 1;
    for (int i = 0; i < num; i++) {
        if ((str[i] < 'a' || str[i]>'z') && (str[i] < 'A' || str[i]>'Z')) {
            return 0;
        }
    }
    cout<<allPossibleSubset(str, num);
    return 0;
}
