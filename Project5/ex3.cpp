#include <iostream>
#define PASSWORD 1234
using namespace std;

bool check(int);

int main() {
    
    int password;
    bool isRight = false;
    
    while (!isRight) {
        cout << "비밀번호 : ";
        cin >> password;
        isRight = check(password);
    }
    
    return 0;
}

bool check(int password) {
    static int try_cnt = 0; // 시도 횟수
    
    if (password == PASSWORD) {
        cout << "로그인 성공!";
        return true;
    }
    else {
        try_cnt++;
        if (try_cnt == 3) {
            cout << "로그인 시도횟수를 초과하였습니다. 프로그램을 종료합니다." << endl;
            exit(0);    // 강제 종료
        }

        cout << "비밀번호가 다릅니다. 다시한번 시도해주세요" << endl;
        return false;
    }

}