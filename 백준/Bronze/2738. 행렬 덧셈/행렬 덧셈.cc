#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;   // N과 M을 입력받음

    int a[N][M], b[N][M], result[N][M];  // 각각의 행렬과 더한 결과를 저장할 행렬 선언

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> a[i][j];    // A 행렬의 각 원소를 입력받음
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> b[i][j];    // B 행렬의 각 원소를 입력받음
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[i][j] = a[i][j] + b[i][j];  // A와 B 행렬을 더한 값을 result 행렬에 저장함
            std::cout << result[i][j] << " ";  // 결과 행렬의 각 원소 값을 출력
        }
        std::cout << "\n";  // 한 행이 끝나면 줄바꿈
    }
    return 0;
}
