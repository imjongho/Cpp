#include <iostream>
#include <cstdlib>  // rand(), srand()
using namespace std;

/*
5. 가위 바위 보 게임을 구현한다. 가위 (1), 바위 (2), 보 (3) 중에 정수 한개를 입력하고 컴퓨터는 이 중 하나를 랜덤하게 결정짓는다. 승부에 따른 결과를 출력한다.

>> 가위 (1), 바위 (2), 보 (3) 중에 하나를 입력하세요 : 1
당신은 가위 (1) 입니다.
컴퓨터는 바위 (2) 입니다.
당신은 졌습니다!

>> 가위 (1), 바위 (2), 보 (3) 중에 하나를 입력하세요 : 1
당신은 가위 (1) 입니다.
컴퓨터는 가위 (1) 입니다.
비겼습니다!
*/

int main() {

    int user_num, com_num;

    cout << "가위(1), 바위(2), 보(3) 중에 하나를 입력하세요 : ";
    cin >> user_num;
    com_num = rand() % 3 + 1;   // 1~3

    switch (user_num)
    {
        case 1:
            cout << "당신은 가위(1) 입니다." << endl;
            break;
        case 2:
            cout << "당신은 바위(2) 입니다." << endl;
            break;
        case 3:
            cout << "당신은 보(3) 입니다." << endl;
            break;
    }


    switch (com_num)
    {
        case 1: 
            cout << "컴퓨터는 가위(1) 입니다." << endl;
            break;
        case 2:
            cout << "컴퓨터는 바위(2) 입니다." << endl;
            break;
        case 3:
            cout << "컴퓨터는 보(3) 입니다." << endl;
            break;
    }


    if (user_num == com_num) {
        cout << "비겼습니다.";
    }
    else if (user_num == ((com_num + 1) % 3) + 1) {
        cout << "당신은 졌습니다!";
    }
    else {
        cout << "당신은 이겼습니다!";
    }


    return 0;
}