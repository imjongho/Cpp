#include <iostream>
#include <string>
using namespace std;

/*
5. ���ڿ��� �Է¹޾Ƽ� �Է¹��� ���ڿ��� �Ųٷ� ����ϴ� ���α׷��� �ۼ��϶�
(string ��ü�� c�� ���� ������ �迭������ �����ϴ� ������)

�Է� >> Welcome to C++ world
��� >> dlrow ++C ot emocleW
*/

int main() {
    
    string input_string;
    
    cout << "�Է� >> ";
    getline(cin, input_string);
    
    cout << "��� >> ";
    for (int i = 0; i <= input_string.size(); i++) {
        cout << input_string[input_string.size() - i];
    }

    return 0;

}