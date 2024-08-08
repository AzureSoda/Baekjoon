#include <iostream>
#include <vector>
#include <set>

int main() {
    int N;
    std::cin >> N; // 수열의 길이 입력

    std::set<int> unique_numbers; // 중복을 제거하기 위해 set 사용

    for (int i = 0; i < N; i++) {
        int num;
        std::cin >> num; // 수열의 각 숫자 입력
        unique_numbers.insert(num); // set에 숫자 추가 (중복 제거)
    }

    // 정렬된 결과를 출력
    for (int number : unique_numbers) {
        std::cout << number << std::endl; // 각 숫자를 한 줄씩 출력
    }

    return 0;
}
