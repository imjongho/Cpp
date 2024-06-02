#include <iostream>
#include <cstdlib>  // rand(), srand()
using namespace std;

/*
5. ���� ���� �� ������ �����Ѵ�. ���� (1), ���� (2), �� (3) �߿� ���� �Ѱ��� �Է��ϰ� ��ǻ�ʹ� �� �� �ϳ��� �����ϰ� �������´�. �ºο� ���� ����� ����Ѵ�.

>> ���� (1), ���� (2), �� (3) �߿� �ϳ��� �Է��ϼ��� : 1
����� ���� (1) �Դϴ�.
��ǻ�ʹ� ���� (2) �Դϴ�.
����� �����ϴ�!

>> ���� (1), ���� (2), �� (3) �߿� �ϳ��� �Է��ϼ��� : 1
����� ���� (1) �Դϴ�.
��ǻ�ʹ� ���� (1) �Դϴ�.
�����ϴ�!
*/

int main() {

    int user_num, com_num;

    cout << "����(1), ����(2), ��(3) �߿� �ϳ��� �Է��ϼ��� : ";
    cin >> user_num;
    com_num = rand() % 3 + 1;   // 1~3

    switch (user_num)
    {
        case 1:
            cout << "����� ����(1) �Դϴ�." << endl;
            break;
        case 2:
            cout << "����� ����(2) �Դϴ�." << endl;
            break;
        case 3:
            cout << "����� ��(3) �Դϴ�." << endl;
            break;
    }


    switch (com_num)
    {
        case 1: 
            cout << "��ǻ�ʹ� ����(1) �Դϴ�." << endl;
            break;
        case 2:
            cout << "��ǻ�ʹ� ����(2) �Դϴ�." << endl;
            break;
        case 3:
            cout << "��ǻ�ʹ� ��(3) �Դϴ�." << endl;
            break;
    }


    if (user_num == com_num) {
        cout << "�����ϴ�.";
    }
    else if (user_num == ((com_num + 1) % 3) + 1) {
        cout << "����� �����ϴ�!";
    }
    else {
        cout << "����� �̰���ϴ�!";
    }


    return 0;
}