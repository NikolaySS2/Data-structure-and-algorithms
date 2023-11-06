//https://www.hackerrank.com/contests/sda-hw-1-2022/challenges/challenge-3648/submissions/code/1361327957
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int coinprice[n];
    int profit = 0;
    for (int i = 0; i < n; i++) {
        cin >> coinprice[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (coinprice[i] < coinprice[i + 1]) {
            profit = profit + (coinprice[i + 1] - coinprice[i]);
        }
    }
    cout << profit;
}