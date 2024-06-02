#include <iostream>
using namespace std;

/*
2. 성적에 따른 합격/불합격 출력 프로그램을 작성하시오. 4학년의 경우에는 70점 이상이 합격, 
그 외 학년은 60점 이상일 경우에만 합격 문구를 출력해준다. (학년은 1~4, 점수는 0~100의 값만 입력 가능하며 그 외의 숫자를 입력시에는 오류 메세지를 출력한다)

>> 학년을 입력하세요 : 4
점수를 입력하세요 : 75
합격입니다!

>> 학년을 입력하세요 : 5
잘못된 입력입니다!
*/

int main() {

    int grade, score;

    cout << "학년을 입력하세요 : ";
    cin >> grade;

    if (grade >= 1 && grade <= 3) {     // 1~3학년
        cout << "점수를 입력하세요 : ";
        cin >> score;
        if (score >= 0 && score <= 100) {   // 점수 0~100
            if (score >= 60) {
                cout << "합격입니다!";
            }
            else {
                cout << "불합격입니다!";
            }
        }
        else {
            cout << "잘못된 입력입니다!";
        }
    }
    else if (grade == 4) {      // 4학년
        cout << "점수를 입력하세요 : ";
        cin >> score;
        if (score >= 0 && score <= 100) {   // 점수 0~100
            if (score >= 70) {
                cout << "합격입니다!";
            }
            else {
                cout << "불합격입니다!";
            }
        }
        else {
            cout << "잘못된 입력입니다!";
        }
    }
    else {
        cout << "잘못된 입력입니다!";
    }

    return 0;
}