#include <iostream>
using namespace std;

/*
3. 대문자를 입력하면 소문자로 출력하고 나머지는 그대로 출력하는 프로그램을 구현하시오

입력 : A
출력 : a

입력 : a
출력 : a
*/

int main() {

    char input_char;

    cout << "입력 : ";
    cin >> input_char;

    if (input_char >= 'A' && input_char <= 'Z') {
        cout << "출력 : " << (char)(input_char + 32) << endl;
    }
    else {
        cout << "출력 : " << input_char;
    }



    return 0;
}