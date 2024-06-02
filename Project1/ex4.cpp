#include <iostream>
#include <limits.h>
using namespace std;

/*
4. int, short, long �ڷ����� bit ���� ����ϰ� ǥ���� �� �ִ� �ִ�, �ּҰ��� ����ϴ� ���α׷��� �����Ͻÿ�

Integer size : 32bits
MAX value : 2147483647
MIN value : -2147483648
=====================================
Short size : 16bits
MAX value : 32767
MIN value : -32768
=====================================
Long size : 32bits
MAX value : 2147483647
MIN value : -2147483648
=====================================
*/

int main() {

    cout << "Integer size : " << (sizeof(int) * 8) << "bits" << endl;
    cout << "Max value : " << INT_MAX << endl;
    cout << "Min value : " << INT_MIN << endl;

    cout << "==================================" << endl;

    cout << "Integer size : " << (sizeof(short) * 8) << "bits" << endl;
    cout << "Max value : " << SHRT_MAX << endl;
    cout << "Min value : " << SHRT_MIN << endl;

    cout << "==================================" << endl;

    cout << "Integer size : " << (sizeof(long) * 8) << "bits" << endl;
    cout << "Max value : " << LONG_MAX << endl;
    cout << "Min value : " << LONG_MIN << endl;

    return 0;
}