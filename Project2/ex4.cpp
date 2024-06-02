#include <iostream>
#include <iomanip>
using namespace std;

/*
4. ���� 3���� �Է¹޾Ƽ� ��, ���, �� ������ ������ ����Ͻÿ�
(��� �� ������ �Ǽ����·�, ������ ��/�� ��ȣ�� �����Ͽ� 9ĭ�� ����ϰ� �Ҽ����� 2° �ڸ����� ����Ͻÿ�)

--> Enter the first integer : 100
Enter the seconds integer : 101
Enter the third integer : 103

Sum of three numbers: 304
Average : 101.33
Deviation of number 1 : -1.33
Deviation of number 2 : -0.33
Deviation of number 3 : +1.67
*/

int main() {

    int first, second, third, sum;
    double avg;

    cout << "Enter the first integer : ";
    cin >> first;
    cout << "Enter the seconds integer : ";
    cin >> second;
    cout << "Enter the third integer : ";
    cin >> third;

    sum = first + second + third;
    avg = sum / 3.0;
    cout << "\nSum of three numbers : " << sum << endl;

    cout << fixed << setprecision(2) << setw(9);
    cout << "Average : " << avg << endl;

    cout << showpos;
    cout << "Deviation of number 1 : : " << first - avg << endl;
    cout << "Deviation of number 2 : : " << second - avg << endl;
    cout << "Deviation of number 3 : : " << third - avg << endl;

    return 0;
}