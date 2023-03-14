/**
*
* Solution to homework assignment 3
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

int isMagicSquare(vector<vector<double>> vec3, int size) {
    double diag1 = 0;
    double diag2 = 0;
    int row = 0;
    int col = 0;
    for (int i = 0; i < size; i++) {
        diag1 += vec3[i][i];
        diag2 += vec3[i][size - i - 1];
        int row = 0;
        int col = 0;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            row += vec3[i][j];
            col += vec3[j][i];

        }
        if (row == col) {
            continue;
        }
        else {
            return 0;
        }
    }
    if ((row / size) == (col / size) && diag1 == diag2 && (row / size) == diag1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int N, tmp;
    vector<double> vec2;
    cin >> N;

    vector<vector<double>> matrix;
    for (int row = 0; row < N; row++) {
        matrix.push_back(vec2);
        for (int col = 0; col < N; col++) {
            if (N > 1 && N < 1000) {
                cin >> tmp;
                if (tmp >= 0 && tmp <= 100) {
                    matrix[row].push_back(tmp);
                }
                else {
                    return -1;
                }
            }
            else {
                return -1;
            }
        }
    }
    cout << isMagicSquare(matrix, N);
    return 0;
}

