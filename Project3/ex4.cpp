#include <iostream>
using namespace std;

/*
4. 한 해의 모든 날에 번호를 매긴다고 가정한다. (예, 1월 1일 = 1번째날, 12월 31일 = 365번째 날) 
몇 월 몇일이 1년에서 몇번째 날인지 구하는 프로그램을 작성한다. (단 윤년의 경우는 무시한다)

>> Enter the month : 1
Enter the day of month : 23
Day number : 23
*/

int main() {
    int month, day;
    int day_count = 0;

    cout << "Enter the month : ";
    cin >> month;
    cout << "Enter the day of month : ";
    cin >> day;

    switch (month) {
        case 1:
            day_count += day;   // 1월: 31일
            break;
        case 2:
            day_count += 31;    // 28일
            day_count += day;
            break;
        case 3:
            day_count += 59;    // 31일
            day_count += day;
            break;
        case 4:
            day_count += 90;    // 30일
            day_count += day;
            break;
        case 5: 
            day_count += 120;    // 31일
            day_count += day;
            break;
        case 6:
            day_count += 151;   // 30일
            day_count += day;
            break;
        case 7:
            day_count += 181;   // 31일
            day_count += day;
            break;
        case 8:
            day_count += 212;    // 31일
            day_count += day;
            break;
        case 9:
            day_count += 243;    // 30일
            day_count += day;
            break;
        case 10:
            day_count += 273;    // 31일
            day_count += day;
            break;
        case 11:
            day_count += 304;    // 30일
            day_count += day;
            break;
        case 12:
            day_count += 334;    // 31일
            day_count += day;
            break;
    }   // 총 365일
    
    cout << "Day number : " << day_count;

    return 0;
}