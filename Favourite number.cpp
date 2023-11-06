//https://www.hackerrank.com/contests/sda-hw-3-2022/challenges/challenge-3668/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <climits>
#include <iomanip> 

using namespace std;

long long arr[34];

int recursion(long long num, long long start, int p, int c) {
    if (p == 0) {
        return c;
    }

    long long middle1 = start + (arr[p] / 3);

    long long middle2 = start + (arr[p] / 3) * 2;

    if (middle1 <= num && num < middle2) {
        return c;
    }
    if (num < middle1) {
        return recursion(num, start, p - 1, c + 1);
    }
    return recursion(num, middle2, p - 1, c + 1);
}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(5);

    int n, p;
    cin >> p >> n;

    arr[0] = 1;

    for (int j = 1; j <= 33; j++) {
        arr[j] = arr[j - 1] * 3;
    }

    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        cout << recursion(num, 1, p, 1) << endl;
    }

    return 0;
}