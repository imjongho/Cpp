#include <iostream>
using namespace std;

/*
2. ������ �־����� ��, ù ��° �ڸ����� �����Ͻÿ�.

ex) 6759�� �Է��ϸ� 9�� ���

-- > Enter a positive integer : 253
Entered integer : 253
Extracted first digit : 3
*/


int main() {

    int num;
    cout << "Enter a positive integer : ";
    cin >> num;

    cout << "Entered integer : " << num << endl;
    cout << "Extracted first digit : " << num % 10 << endl;

    return 0;
}