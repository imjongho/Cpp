#include <iostream>
using namespace std;

/*
3. 소득 범위에 따른 세금 출력 프로그램을 작성하시오. 세율은 다음과 같은 계산식을 따른다.
0 < 소득 < 10,000 --> 세금: 소득 * 0.05
10,000 < 소득 < 50,000 --> 세금: 10,000 * 0.05 + (소득 - 10,000) * 0.1
50,000 < 소득 < 100,000 --> 세금: 10,000 * 0.05 + (50,000 - 10,000) * 0.1 + (소득 - 50,000) * 0.15
100,000 < 소득 --> 세금: 10,000 * 0.05 + (50,000 - 10,000) * 0.1 + (100,000 - 50,000) * 0.15 + (소득 - 100,000) * 0.2

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