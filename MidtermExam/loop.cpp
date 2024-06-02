#include <iostream>
using namespace std;

int main() {

    // 아스키 코드 참조함
    int start, end;

    // 초반 13줄
    for (int i = 0; i < 13; i++) {  // A + 12 => M
        start = 65 + i;  // start : A + 1 => B, A + 2 => C...
        end = 90 - i;    // end : Z - 1 => Y, Z - 2 => X... 
        // start와 end가 연산만 다르고 값은 같음을 이용함 

        for (int j = 0; j < 26; j++) {  // A + 25 => Z
            if (start <= end) { 
                cout << char(start) << " ";
                start += 1;
            }
        }
        cout << endl;
    }
    

    // 후반 13줄(같은 원리 이용)
    for (int i = 0; i < 13; i++) {
        start = 77 - i;     // 'M': 77
        end = 78 + i;       // 'N;: 78
        for (int j = 0; j < 26; j++) {
            if (start <= end) {
                cout << char(start) << " ";
                start += 1;
            }
        }
        cout << endl;
    }


    return 0;
}