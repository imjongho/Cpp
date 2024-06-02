#include <iostream>
using namespace std;

int main() {

    //변수 선언
    int num1, num2, sum;

    /*
    // 입력받기
    cout << "첫 번째 숫자 입력 : ";
    cin >> num1;
    cout << "두 번째 숫자 입력 : ";
    cin >> num2;
    */

    cout << "space를 사용하여 구분 첫번째 값, 두번째 값 입력 : ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    cout << "두 숫자의 합 : " << sum;
    return 0;

}