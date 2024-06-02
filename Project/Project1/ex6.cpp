#include <iostream>
#include <string>   // string 클래스를 사용하기 위해
using namespace std;

int main() {

    string first;
    string last;
    string space = " ";
    string dot = ".";
    string fullname;

    cout << "이름, 성 입력 : ";
    cin >> first >> last;

    fullname = last + space + first + dot;
    cout << "전체 이름 : " << fullname;

    return 0;
}