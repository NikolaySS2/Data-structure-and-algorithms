//https://www.hackerrank.com/contests/sda-hw-3-2022/challenges/challenge-3670/problem
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

bool canDistributeSkills(const std::vector<int>& skills, int teams, int maxSum) {
    int teamCount = 0;
    int currentSum = 0;

    for (int skill : skills) {
        if (currentSum + skill > maxSum) {
            teamCount++;
            currentSum = skill;
        }
        else {
            currentSum += skill;
        }
    }

    return teamCount < teams;
}

int minimizeMaxSkillSum(const std::vector<int>& skills, int teams) {
    int left = *std::max_element(skills.begin(), skills.end());
    int right = std::accumulate(skills.begin(), skills.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (canDistributeSkills(skills, teams, mid)) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    int n, teams;
    std::cin >> n >> teams;

    std::vector<int> skills(n);
    for (int i = 0; i < n; i++) {
        std::cin >> skills[i];
    }

    int result = minimizeMaxSkillSum(skills, teams);
    std::cout << result << std::endl;

    return 0;
}