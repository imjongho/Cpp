#include <iostream>
#define PASSWORD 1234
using namespace std;

bool check(int);

int main() {
    
    int password;
    bool isRight = false;
    
    while (!isRight) {
        cout << "��й�ȣ : ";
        cin >> password;
        isRight = check(password);
    }
    
    return 0;
}

bool check(int password) {
    static int try_cnt = 0; // �õ� Ƚ��
    
    if (password == PASSWORD) {
        cout << "�α��� ����!";
        return true;
    }
    else {
        try_cnt++;
        if (try_cnt == 3) {
            cout << "�α��� �õ�Ƚ���� �ʰ��Ͽ����ϴ�. ���α׷��� �����մϴ�." << endl;
            exit(0);    // ���� ����
        }

        cout << "��й�ȣ�� �ٸ��ϴ�. �ٽ��ѹ� �õ����ּ���" << endl;
        return false;
    }

}