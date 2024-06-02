#include <iostream>
#include <iomanip>
using namespace std;

/*
4. 정수 3개를 입력받아서 합, 평균, 각 숫자의 편차를 출력하시오
(평균 및 편차는 실수형태로, 편차는 음/양 부호를 포함하여 9칸에 출력하고 소수점은 2째 자리까지 출력하시오)

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