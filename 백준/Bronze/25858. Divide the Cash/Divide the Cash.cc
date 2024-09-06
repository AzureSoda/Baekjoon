#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d; // 팀원 수와 총 상금을 입력받음

    vector<int> problems(n);
    int totalProblems = 0;

    // 각 팀원이 푼 문제 수 입력받기
    for (int i = 0; i < n; i++) {
        cin >> problems[i];
        totalProblems += problems[i]; // 총 문제 수 계산
    }

    // 한 문제당 보상 계산
    int rewardPerProblem = d / totalProblems;

    // 각 팀원에게 지급될 보상 계산 및 출력
    for (int i = 0; i < n; i++) {
        cout << problems[i] * rewardPerProblem << endl; // 각 팀원의 보상 출력
    }

    return 0;
}
