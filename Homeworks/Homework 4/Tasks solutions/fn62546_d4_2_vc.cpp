/**
*
* Solution to homework assignment 4
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
#include <vector>
using namespace std;

bool ifPossibleMove(int mat[][200], int p, int q, int p1, int q1, int rows, int cols, int reps, int j);
 
int main(){
    int M, N;
    int matrix[200][200];
    cin >> M >> N;
    if (M > 3 && N > 3 && M <= 200 && N <= 200) {
        int p, q;
        cin >> p >> q;
        int p1, q1;
        cin >> p1 >> q1;
        if (p1 >= 0 && q1 >= 0 && p1 <= 200 && q1 <= 200) {
            int k;
            cin >> k;
            if (k <= 0) {
                cout << "-1";
                return -1;
            }
            else {
				matrix[p][q] = 1;
                int j = 0;
                if (ifPossibleMove(matrix, p, q, p1, q1, N, M, k, j)) {
                    cout << "1";
                }
                else {
                    cout << "0";
                }
                cout << " " << endl;
                return 0;
            }
        }
        else {
            cout << "-1";
            return -1;
        }
    }
    else {
        cout << "-1";
        return -1;
    }
}

bool ifPossibleMove(int mat[][200], int p, int q, int p1, int q1, int rows, int cols, int k, int i) {
    if (k <= 0) return 0;
    if (mat[p1][q1] != 0) return 1;
    for (int n = 0; n < rows; n++) {
        for (int m = 0; m < cols; m++) {
            if (mat[n][m] == i) {
                if ((n > 1 && m > 0) && (mat[n - 2][m - 1] == 0)) {
                    mat[n - 2][m - 1] = i + 1;
                }
                if ((n > 0 && m > 1) && (mat[n - 1][m - 2] == 0)) {
                    mat[n - 1][m - 2] = i + 1;
                }
                if ((n > 1 && m < cols - 1) && (mat[n - 2][m + 1] == 0)) {
                    mat[n - 2][m + 1] = i + 1;
                }
                if ((n > 0 && m < cols - 2) && (mat[n - 1][m + 2] == 0)) {
                    mat[n - 1][m + 2] = i + 1;
                }
                if ((n < rows - 1 && m > 1) && (mat[n + 1][m - 2] == 0)) {
                    mat[n + 1][m - 2] = i + 1;
                }
                if ((n < rows - 2 && m > 0) && (mat[n + 2][m - 1] == 0)) {
                    mat[n + 2][m - 1] = i + 1;
                }
                if ((n < rows - 1 && m < cols - 2) && (mat[n + 1][m + 2] == 0)) {
                    mat[n + 1][m + 2] = i + 1;
                }
                if ((n < rows - 2 && m < cols - 1) && (mat[n + 2][m + 1] == 0)) {
                    mat[n + 2][m + 1] = i + 1;
                }
            }
        }
    }
    if (mat[p1][q1] == 0) return ifPossibleMove(mat, p, q, p1, q1, rows, cols, k - 1, i + 1);
}