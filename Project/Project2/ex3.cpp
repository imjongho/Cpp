#include <iostream>
using namespace std;

int main() {
    double x = 23.56;
    int y = 30;

    cout << x + y << endl;
    // ����� �ڷ��� ��ȯ
    cout << static_cast <int> (x) + y << endl;
    cout << static_cast <int> (x + y);

    return 0;
}