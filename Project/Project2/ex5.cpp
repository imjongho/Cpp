#include <iostream>
using namespace std;

int main() {

    bool x = true;
    bool y = false;

    // boolalpha ������
    cout << x << " " << y << endl;
    cout << boolalpha << x << " " << y << endl;

    // showbase ������ ���� �������� ���
    int z = 1237;
    cout << z << endl;
    cout << oct << z << endl;
    cout << hex << z << endl;

    cout << showbase << oct << z << endl;
    cout << showbase << hex << z;

    return 0;
}