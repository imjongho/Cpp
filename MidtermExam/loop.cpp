#include <iostream>
using namespace std;

int main() {

    // �ƽ�Ű �ڵ� ������
    int start, end;

    // �ʹ� 13��
    for (int i = 0; i < 13; i++) {  // A + 12 => M
        start = 65 + i;  // start : A + 1 => B, A + 2 => C...
        end = 90 - i;    // end : Z - 1 => Y, Z - 2 => X... 
        // start�� end�� ���길 �ٸ��� ���� ������ �̿��� 

        for (int j = 0; j < 26; j++) {  // A + 25 => Z
            if (start <= end) { 
                cout << char(start) << " ";
                start += 1;
            }
        }
        cout << endl;
    }
    

    // �Ĺ� 13��(���� ���� �̿�)
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