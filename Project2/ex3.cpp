#include <iostream>
using namespace std;

/*
3. �� ������ �ð��� �Է¹޾� ��, ��, �� ������ ����� ��ȯ�϶�

ex) 39250�� �Է��� ��, 10 �ð�, 54��, 10�� ������ ǥ���ؼ� ���

--> Enter a positive integer for the number of seconds: 4000
Given duration in seconds : 4000
Result : 1 hours, 6 minutes, and 40 seconds.
*/

int main() {

    int time;

    cout << "Enter a positive integer for the number of seconds : ";
    cin >> time;

    cout << "Given duration in seconds : " << time << endl;
    cout << "Result : " << time / 3600 << "hours" << ", "
        << (time % 3600) / 60 << "minutes" << ", and "
        << (time % 3600) % 60 << "seconds." << endl;
    return 0;
}