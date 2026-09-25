#include <iostream>
using namespace std;

int main() {
    double x1,y1,x2,y2;
    double a, b, area;

    cout <<"사각형의 두 점(x1,y1,x2,y2)을 입력하세요";
    cin >> x1 >> y1 >> x2 >> y2;

    a = (x2 - x1)/ 2;
    b = (y2 - y1)/ 2;

    area = 3.14 * a * b;

    cout << "타원의 면적은" << area << "입니다";

    return 0;
}
