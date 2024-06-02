#include <iostream>
using namespace std;

/*
3. �ҵ� ������ ���� ���� ��� ���α׷��� �ۼ��Ͻÿ�. ������ ������ ���� ������ ������.
0 < �ҵ� < 10,000 --> ����: �ҵ� * 0.05
10,000 < �ҵ� < 50,000 --> ����: 10,000 * 0.05 + (�ҵ� - 10,000) * 0.1
50,000 < �ҵ� < 100,000 --> ����: 10,000 * 0.05 + (50,000 - 10,000) * 0.1 + (�ҵ� - 50,000) * 0.15
100,000 < �ҵ� --> ����: 10,000 * 0.05 + (50,000 - 10,000) * 0.1 + (100,000 - 50,000) * 0.15 + (�ҵ� - 100,000) * 0.2

>> Enter income in dollars : 8500
Income : 8500
Tax due : 425
*/


int main() {
    double in_money, tax = 0;
    cout << "Enter income in dollars : ";
    cin >> in_money;
    cout << "Income : " << in_money << endl;

    if (in_money > 0 && in_money < 10000) {
        tax = in_money * 0.05;
    }
    else if (in_money > 10000 && in_money < 50000) {
        tax = 10000 * 0.05 + (in_money - 10000) * 0.1;
    }
    else if (in_money > 50000 && in_money < 100000) {
        tax = 10000 * 0.05 + (50000 - 10000) * 0.1 + (in_money - 50000) * 0.15;
    }
    else if (in_money > 100000) {
        tax = 10000 * 0.05 + (50000 - 10000) * 0.1 + (100000 - 50000) * 0.15 + (in_money - 100000) * 0.2;
    }

    cout << "Tax due : " << tax << endl;

    return 0;
}