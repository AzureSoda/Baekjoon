#include <iostream>
using namespace std;

int main() {
    int cnt;
    cin >> cnt; // 학생수 입력
    int students[cnt][5]; //cnt는 몇번째 학생인지, 뒤에 오는 숫자는 몇학년인지를 가리킨다
    for (int i = 0; i < cnt; i++) { // 학생의 수만큼 반복해서, 각 학생의 반 정보를 입력받음
        for (int j = 0; j < 5; j++) // 각 학생의 1학년때부터 5학년까지의 반정보를 입력받음
            cin >> students[i][j];
    }

    int maxcnt = 0;
    int leader = 0;

    for (int i = 0; i < cnt; i++) {
        int count = 0; //같은반했었던 학생의 수
        for (int j = 0; j < cnt; j++) {
            if (i == j)
                continue;
            for (int k = 0; k < 5; k++) {
                if (students[i][k] == students[j][k]) {
                    count++;
                    break;
                }
            }
        }
        if (count > maxcnt) {
            maxcnt = count;
            leader = i;
        }
    }
    cout << leader + 1 << endl;

    return 0;
}