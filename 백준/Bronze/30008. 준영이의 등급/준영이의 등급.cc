#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> scoreList(K);
    for (int i = 0; i < K; i++) {
        cin >> scoreList[i];
    }

    vector<int> resultList;
    for (int score : scoreList) {
        score *= 100;
        score = score / N;

        if (score >= 0 && score <= 4) {
            resultList.push_back(1);
        } else if (score > 4 && score <= 11) {
            resultList.push_back(2);
        } else if (score > 11 && score <= 23) {
            resultList.push_back(3);
        } else if (score > 23 && score <= 40) {
            resultList.push_back(4);
        } else if (score > 40 && score <= 60) {
            resultList.push_back(5);
        } else if (score > 60 && score <= 77) {
            resultList.push_back(6);
        } else if (score > 77 && score <= 89) {
            resultList.push_back(7);
        } else if (score > 89 && score <= 96) {
            resultList.push_back(8);
        } else if (score > 96 && score <= 100) {
            resultList.push_back(9);
        }
    }

    for (int i : resultList) {
        cout << i << " ";
    }

    return 0;
}
