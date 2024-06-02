#include <iostream>
using namespace std;

/*
1. 부동 소수점을 정수 부분과 소수점 아래 부분으로 분리한다.

ex) 123.78을 입력하면 123과 0.78을 출력

-> Enther the floating-point number : 145.72
The original number : 145.72
The integral part : 145
The fractional part : 0.72
*/


int main() {

    float num;
    cout << "Enter the floating-point number : ";
    cin >> num;

    cout << "The original number : " << num << endl;
    cout << "The integral part : " << static_cast <int>(num) << endl;
    cout << cout.precision(2) << "The fractional part : " << num - static_cast <int>(num) << endl;

    return 0;
}