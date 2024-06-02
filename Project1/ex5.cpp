#include <iostream>
#include <string>
using namespace std;

/*
5. 문자열을 입력받아서 입력받은 문자열을 거꾸로 출력하는 프로그램을 작성하라
(string 객체는 c와 같이 문자의 배열단위로 저장하는 구조임)

입력 >> Welcome to C++ world
출력 >> dlrow ++C ot emocleW
*/

int main() {
    
    string input_string;
    
    cout << "입력 >> ";
    getline(cin, input_string);
    
    cout << "출력 >> ";
    for (int i = 0; i <= input_string.size(); i++) {
        cout << input_string[input_string.size() - i];
    }

    return 0;

}