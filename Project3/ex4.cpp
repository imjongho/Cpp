#include <iostream>
using namespace std;

/*
4. �� ���� ��� ���� ��ȣ�� �ű�ٰ� �����Ѵ�. (��, 1�� 1�� = 1��°��, 12�� 31�� = 365��° ��) 
�� �� ������ 1�⿡�� ���° ������ ���ϴ� ���α׷��� �ۼ��Ѵ�. (�� ������ ���� �����Ѵ�)

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
            day_count += day;   // 1��: 31��
            break;
        case 2:
            day_count += 31;    // 28��
            day_count += day;
            break;
        case 3:
            day_count += 59;    // 31��
            day_count += day;
            break;
        case 4:
            day_count += 90;    // 30��
            day_count += day;
            break;
        case 5: 
            day_count += 120;    // 31��
            day_count += day;
            break;
        case 6:
            day_count += 151;   // 30��
            day_count += day;
            break;
        case 7:
            day_count += 181;   // 31��
            day_count += day;
            break;
        case 8:
            day_count += 212;    // 31��
            day_count += day;
            break;
        case 9:
            day_count += 243;    // 30��
            day_count += day;
            break;
        case 10:
            day_count += 273;    // 31��
            day_count += day;
            break;
        case 11:
            day_count += 304;    // 30��
            day_count += day;
            break;
        case 12:
            day_count += 334;    // 31��
            day_count += day;
            break;
    }   // �� 365��
    
    cout << "Day number : " << day_count;

    return 0;
}