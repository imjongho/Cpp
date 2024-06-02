#include <iostream>
using namespace std;

int main() {
    
    int n = 0, m = 0;       
    int cnt = 0;    // 같은 문자열이 있으면 카운트 해주는 변수

    char arr_n[10][20];     
    // n개의 문자열로 구성된 집합(이차원 배열로 표현함)(크기는 임의로 정함)
    char str_m[20];         
    // 문자열 하나를 입력 받는데로 문자열 집합과 비교할 것이기 때문에 1차원 배열로 선언  


    do {
        cout << "문자열 집합에 저장될 문자열 개수(N), 문자열 입력 개수(M)를 입력하시오" << endl;
        cin >> n >> m;
    } while (n < 0 || m < 0);   // 개수는 음수 불가


    cout << "\n문자열 집합에 저장될 문자열 입력(" << n << "개)" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr_n[i];    
    }


    // 문자열 집합에 몇 개가 포함되는지 카운트 해주는 반복문
    cout << "\n문자열 입력(" << m << "개)" << endl;
    for (int i = 0; i < m; i++) {   
        cin >> str_m;   // 문자열 M개 입력
        for (int j = 0; j < n; j++) {
            // 두 개의 문자열을 비교하여 같으면 0 반환해주는 strcmp() 사용
            if (strcmp(str_m, arr_n[j]) == 0) {
                cnt++;
            }
        }
    }
    cout << "\n문자열 집합에 " << cnt << "개 포함되어 있음" << endl;

    return 0;
}

