#include <iostream>
using namespace std;

/*
3. �빮�ڸ� �Է��ϸ� �ҹ��ڷ� ����ϰ� �������� �״�� ����ϴ� ���α׷��� �����Ͻÿ�

�Է� : A
��� : a

�Է� : a
��� : a
*/

int main() {

    char input_char;

    cout << "�Է� : ";
    cin >> input_char;

    if (input_char >= 'A' && input_char <= 'Z') {
        cout << "��� : " << (char)(input_char + 32) << endl;
    }
    else {
        cout << "��� : " << input_char;
    }



    return 0;
}