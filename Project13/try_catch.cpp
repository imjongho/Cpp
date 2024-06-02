#include <iostream>
using namespace std;

int IncreaseNumber(int n) {
    if (n < 0) {
        throw n;
    }
    else if (n == 0) {
        throw "0�� �Է��� �� �����ϴ�.";
    }

    return ++n;
}


int main(void) {
    
    int num;
    cout << "���� ������ �ϳ� �Է����ּ��� : ";

    while (cin >> num) {
        try {
            cout << "�Է��� �������� 1�� ������Ų ��: " << IncreaseNumber(num) << endl;
        }
        catch (int input) {
            cout << input << "�� ���� ������ �ƴմϴ�." << endl;
            cout << "���� ������ �ٽ� �Է����ּ���: ";
            continue;
        }
        catch (const char* str) {    // const �� ���̸� ����
            cout << str << endl;
            cout << "���� ������ �ٽ� �Է����ּ���: ";
            continue;
        }

        break;
    }

    return 0;
}