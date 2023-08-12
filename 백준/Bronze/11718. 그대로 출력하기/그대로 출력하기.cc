#include <iostream>
#include <string>

int main() {
    std::string line;   // 문자열로 입력을 받음
    
    while (std::getline(std::cin, line)) { // EOF(End Of File)까지 입력을 받음
        std::cout << line << '\n';   // 입력받은 문자열을 출력
    }

    return 0;
}
