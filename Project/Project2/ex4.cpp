#include <iostream>
#include <limits>
using namespace std;

int main() {

    // �������ο� ����÷ο� ����
    unsigned int num1 = numeric_limits <unsigned int> :: max();
    unsigned int num2 = numeric_limits <unsigned int> :: min();
    
    // �������ο�
    cout << num1 << endl;
    num1 += 1;
    cout << num1 << endl;

    // ����÷ο�
    cout << num2 << endl;
    num2 -= 1;
    cout << num2 << endl;

    return 0;
}