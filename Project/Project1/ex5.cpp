#include <iostream>
using namespace std;

int main() {

    // 상수 선언
    const double PI = 3.14;
    // 변수 3개 선언
    double radious, perimeter, area;

    cout << "원의 반지름 입력 : ";
    cin >> radious;

    perimeter = 2 * PI * radious;
    area = PI * PI * radious;

    cout << "반지름 : " << radious << endl;
    cout << "둘레 : " << perimeter << endl;
    cout << "면적 : " << area;

    return 0;

}