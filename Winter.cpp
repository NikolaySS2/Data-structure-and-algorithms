//https://www.hackerrank.com/contests/sda-hw-5-2022/challenges/challenge-3724/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct apple
{
    bool bad = false;
    bool isBadCurrentRound = false;

    void infect()
    {
        bad = true;
        isBadCurrentRound = true;
    }
};

int main()
{
    long long n;
    long long m;
    cin >> n >> m;

    int num = 0;

    int t;
    int k = 2;
    cin >> t;

    apple** matrix = new apple * [n];
    for (int i = 0; i < n; ++i)
        matrix[i] = new apple[m];

    long long row;
    long long column;
    for (int i = 0; i < k; ++i)
    {
        cin >> row >> column;
        matrix[row - 1][column - 1].bad = true;
    }

    for (int i = 0; i < t; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int l = 0; l < m; ++l)
            {
                if (matrix[j][l].bad && !matrix[j][l].isBadCurrentRound)
                {
                    if (j > 0 && !matrix[j - 1][l].bad)
                    {
                        matrix[j - 1][l].infect();

                    }

                    if (j < n - 1 && !matrix[j + 1][l].bad)
                    {
                        matrix[j + 1][l].infect();

                    }

                    if (l > 0 && !matrix[j][l - 1].bad)
                    {
                        matrix[j][l - 1].infect();

                    }

                    if (l < m - 1 && !matrix[j][l + 1].bad)
                    {
                        matrix[j][l + 1].infect();

                    }
                }

            }
        }

        for (long long j = 0; j < n; ++j)
        {
            for (long long l = 0; l < m; ++l)
            {
                matrix[j][l].isBadCurrentRound = false;
            }
        }
    }

    for (long long j = 0; j < n; ++j)
    {
        for (long long l = 0; l < m; ++l)
        {
            if (matrix[j][l].bad == false) {
                num++;
            }
        }
    }
    cout << num;
    for (long long i = 0; i < n; ++i)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
