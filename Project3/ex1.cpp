#include <iostream>
using namespace std;

/*
1. 3���� ������ �Է¹޾Ƽ� �ִ�, �ּ�, �ִ� �� �ּ� ���� ����� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ� (��� ���� ������ ó��)

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