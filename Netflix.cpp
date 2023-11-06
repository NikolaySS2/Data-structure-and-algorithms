//https://www.hackerrank.com/contests/sda-hw-2-2022/challenges/netflix-1-1/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int arr[128] = { 0 };
    int num = 0;
    int a;
    int b = str.length();
    for (int i = 0; i < b; i++) {
        num = str[i];
        arr[num]++;
    }
    for (int i = 0; i < b; i++) {
        a = str[i];
        if (arr[a] == 1) {
            cout << i << " ";
        }
    }
}