//https://www.hackerrank.com/contests/sda-hw-1-2022/challenges/missing-bus-ticket/copy-from/1361474018
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int arr[N + 1] = { 0 };
    for (int i = 0; i <= N + 1; i++) {
        int number;
        cin >> number;
        if (number > 0) {
            arr[number]++;
        }
    }
    for (int i = 1; i <= N + 1; i++) {
        if (arr[i] == 0) {
            cout << i;
            return 0;
        }
    }
    cout << N + 1;

}