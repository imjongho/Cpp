#include <iostream>
using namespace std;

/*
1. �ε� �Ҽ����� ���� �κа� �Ҽ��� �Ʒ� �κ����� �и��Ѵ�.

ex) 123.78�� �Է��ϸ� 123�� 0.78�� ���

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