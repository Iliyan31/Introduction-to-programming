/**
*
* Solution to homework assignment 3
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
#include <fstream>
using namespace std;

const int MAX_LEN = 150;
char buffer[MAX_LEN];

int strlen1(char str[]) {               
    int counter = 0;
    while (str[counter++] != '\0');
    return counter--;
}


void findCharacter(char ch[], int size, int count) {
   
    char min = 'z';
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (ch[i] > ch[j]) swap(ch[i], ch[j]);
        }
    }
    for (int i = 0; i < size; i++) {
        if (ch[i] < min) {
            min = ch[i];
        }
    }
    if (min != 90) {
        for (int i = 1; i < size; i++) {
            if (min + 1 == ch[i]) {
                min += 1;
            }

        }
    }
    if (min == 90) {
        min += 7;
        for (int i = 1; i < size; i++) {
            if (min + 1 == ch[i]) {
                min += 1;
            }
        }

    }
    if (min == 122) {
        min = 45;
    }
    min += 1;

    for (int i = 0; i < MAX_LEN; i++) {
        buffer[count] = min;
    }
}

    
int main() {
    int count = -1;
    fstream file("message.txt", ios::in);
    char str[MAX_LEN];
    if (file.is_open()) {
        while (file.getline(str, MAX_LEN)) {
            int num = strlen1(str) - 1;
            for (int i = 0; i < num; i++) {
                if ((str[i] < 'a' || str[i]>'z') && (str[i] < 'A' || str[i]>'Z')) {
                    cout << "-1";
                    return 0;
                }
            }
            if (count > 1000) {
                break;
            }
            cout << str << endl;
            count++;
            findCharacter(str, num, count);

        }
    }
    else {
        cout << "-2";
    }
    cout << buffer;
    file.close();
    return 0;
}
