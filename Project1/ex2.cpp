#include <iostream>
using namespace std;

// 2. 반지름이 5인 원의 면적을 구하되 정확한 결과를 얻기 위해 실수 형태로 결과를 출력하시오

int main() {
    const double PI = 3.14;
    int r = 5;  // 반지름 = 5
    double area;    // 원의 면적

    area = PI * r * r;

    cout << "반지름이 5인 원의 면적 : " << area;

    return 0;
}