//https://www.hackerrank.com/contests/sda-hw-1-2022/challenges/1-410/copy-from/1361327121
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    int number;
    string words;
    int numberof = 0;
    for (int i = 0; i < q; i++) {
        cin >> number;
        cin >> words;
        for (int j = 0; j < number; j++) {
            if (words[j] == words[j + 1]) {
                numberof++;
            }
        }

        cout << numberof << endl;
        numberof = 0;
    }
}