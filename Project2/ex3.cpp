#include <iostream>
using namespace std;

/*
3. 초 단위의 시간을 입력받아 시, 분, 초 단위로 나누어서 변환하라

ex) 39250을 입력할 시, 10 시간, 54분, 10초 등으로 표현해서 출력

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