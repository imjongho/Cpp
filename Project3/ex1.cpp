#include <iostream>
using namespace std;

/*
1. 3개의 성적을 입력받아서 최대, 최소, 최대 및 최소 값의 평균을 구해서 출력하는 프로그램을 작성하시오 (모든 값은 정수로 처리)

>> Enter the first score : 78
Enter the second score : 92
Enter the third score : 79
Scores : 78 92 79
Minimum and maximum scores : 78 92
Average of min. and max. scores : 85
*/

int main() {

    int score1, score2, score3;
    int max, min, avg;

    cout << "Enter the first score : ";
    cin >> score1;
    cout << "Enter the second score : ";
    cin >> score2;
    cout << "Enter the third score : ";
    cin >> score3;
    cout << "Scores : " << score1 << " " << score2 << " " << score3 << endl;

    if(score1 < score2) {
        if (score1 < score3) {
            min = score1;
        }
        else {
            min = score3;
        }
    }
    else {
        if (score2 < score3) {
            min = score2;
        }
        else {
            min = score3;
        }
    }
    

    if (score1 > score2) {
        if (score1 > score3) {
            max = score1;
        }
        else {
            max = score3;
        }
    }
    else {
        if (score2 > score3) {
            max = score2;
        }
        else {
            max = score3;
        }
    }

    cout << "Minimum and maximum scores : " << min << " " << max << endl;
    avg = (max + min) / 2;
    cout << "Average of min. and max. scores : " << avg << endl;

    return 0;
}