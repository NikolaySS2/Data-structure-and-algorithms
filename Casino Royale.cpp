//https://www.hackerrank.com/contests/sda-hw-2-2022/challenges/1-146-1/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int number;
    int counter = 0;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> number;
        if (number % 2 == 0 || number == 0) {
            printf("%d \n", number);
        }
        else {
            arr[counter] = number;
            counter++;
        }
    }
    for (int i = 0; i < counter; i++) {
        printf("%d \n", arr[i]);
    }
}