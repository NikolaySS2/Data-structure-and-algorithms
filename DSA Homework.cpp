//https://www.hackerrank.com/contests/sda-hw-2-2022/challenges/just-sorting-1/submissions/code/1361479382
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool mySort(const pair<int, string>& a, const pair<int, string>& b)
{
    if (a.first == b.first) {
        return a.second < b.second;
    }
    else {
        return a.first > b.first;
    }
}


int main() {
    int N;
    cin >> N;
    int number;
    string student;

    vector<pair<int, string>> homework;

    vector <string> students;
    vector <int> results;
    for (int i = 0; i < N; i++) {
        cin >> student;
        students.push_back(student);
    }
    for (int i = 0; i < N; i++) {
        cin >> number;
        results.push_back(number);
        homework.push_back(make_pair(results[i], students[i]));
    }
    sort(homework.begin(), homework.end(), mySort);

    for (int i = 0; i < N; i++) {
        cout << homework[i].second << " ";
        cout << homework[i].first << endl;
    }
}