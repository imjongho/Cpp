#include <iostream>
#include <string>   // string Ŭ������ ����ϱ� ����
using namespace std;

int main() {

    string first;
    string last;
    string space = " ";
    string dot = ".";
    string fullname;

    cout << "�̸�, �� �Է� : ";
    cin >> first >> last;

    fullname = last + space + first + dot;
    cout << "��ü �̸� : " << fullname;

    return 0;
}