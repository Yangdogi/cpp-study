#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "정수를 입력하세요>>";
    cin >> num;

    cout << num << "의 10느리 수는 " << (num / 10) % 10 << "입니다";

    return 0;

}