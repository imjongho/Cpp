#include <iostream>
using namespace std;

int main() {
    double x = 23.56;
    int y = 30;

    cout << x + y << endl;
    // 명시적 자료형 변환
    cout << static_cast <int> (x) + y << endl;
    cout << static_cast <int> (x + y);

    return 0;
}