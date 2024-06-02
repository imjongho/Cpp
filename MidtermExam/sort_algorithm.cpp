#include <iostream>
#include <cstring>
#define N 5     // 배열의 크기 5
using namespace std;

void sort(double array[]);      // 숫자 정렬
void sort(char array[]);        // 문자 정렬
void sort(char array[][10]);    // 문자열 정렬
// sort 함수 : 정수, 실수, 문자, 문자열에 관계없이 정렬 수행
// 함수 오버로딩(매개변수가 다르기에 가능)

int main() {

    // 숫자 배열 생성 및 초기화
    double arr_num[N] = { 3.2, 4.6, 3, 2, 5 };   
    sort(arr_num);      // sort() 함수 호출

    // 문자 배열 생성 및 초기화
    char arr_char[N] = { 'a', '7', '4', '@', 'A' };
    sort(arr_char);     // sort() 함수 호출

    // 문자열 배열 생성 및 초기화, 문자열 길이 10(임의 설정)
    char arr_str[N][10] = {"aa", "aaa", "bbb", "b", "dddd"};
    sort(arr_str);      // sort() 함수 호출
    
    return 0;
}


// 조건 : 정수와 실수는 실제 숫자 크기에 따라 정렬 -> 자료형 double 사용
void sort(double array[]) {

    // 오름차순 정렬(버블 정렬)
    // 총 비교는 항목의 개수 - 1만큼 실행
    for (int i = 0; i < N - 1; i++) {
        // 한번 끝까지 가면 맨 뒤로 이동한거 제외
        for (int j = 0; j < N - i - 1; j++) {
            // 인접한 두 항목을 비교하여 큰 값을 뒤로 보냄
            if (array[j] > array[j + 1]) {
                double temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // 출력
    for (int i = 0; i < 5; i++) {
        cout << array[i] << "  ";
    }
    cout << endl;
}


// 조건 : 숫자가 모든 문자보다 더 큰 값을 가짐, 나머지는 아스키 코드 값으로 정렬
void sort(char array[]) {

    int ascii_array[N] = { 0 };  // 문자를 아스키코드(10진수)로 변환
    int ascii_num[N] = { 0 };    // 숫자 배열
    int ascii_char[N] = { 0 };   // 문자 배열

    int cnt_num = 0;    // 숫자 개수 카운트(=숫자 배열의 크기)
    int cnt_char = 0;   // 문자 개수 카운트(=문자 배열의 크기)


    for (int i = 0; i < N; i++) {
        ascii_array[i] = static_cast<int>(array[i]);
    }

    // // 숫자와 문자를 구분해서 비교함
    for (int i = 0; i < N; i++) {
        if (ascii_array[i] >= 48 && ascii_array[i] <= 57) {
            ascii_num[cnt_num++] = ascii_array[i];
        }
        else {
            ascii_char[cnt_char++] = ascii_array[i];
        }
    }   

    // 문자 배열 정렬(버블 정렬)
    for (int i = 0; i < cnt_char - 1; i++) {
        for (int j = 0; j < cnt_char - i - 1; j++) {
            if (ascii_char[j] > ascii_char[j + 1]) {
                int temp = ascii_char[j];
                ascii_char[j] = ascii_char[j + 1];
                ascii_char[j + 1] = temp;
            }
        }
    }

    // 문자 출력
    for (int i = 0; i < cnt_char; i++) {
        cout << static_cast<char>(ascii_char[i]) << "  ";
    }


    // 숫자 배열 정렬(버블 정렬)
    for (int i = 0; i < cnt_num - 1; i++) {
        for (int j = 0; j < cnt_num - i - 1; j++) {
            if (ascii_num[j] > ascii_num[j + 1]) {
                int temp = ascii_num[j];
                ascii_num[j] = ascii_num[j + 1];
                ascii_num[j + 1] = temp;
            }
        }
    }

    // 숫자 출력
    for (int i = 0; i < cnt_num; i++) {
        cout << static_cast<char>(ascii_num[i]) << "  ";
    }

    cout << endl;
}


// 조건 : 문자열의 길이로 크기 판단(길이가 같으면 실제값도 같다고 판단)
void sort(char array[][10]) {
    
    char temp[10];
    // 버블 정렬
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            // 문자열의 길이만을 비교(ex) aaa는 bbb은 실제값이 같다고 봄)
            if (strlen(array[j]) > strlen(array[j + 1])) {
                // 문자열 복사
                for (int k = 0; k < 10; k++) {
                    temp[k] = array[j][k];
                    array[j][k] = array[j + 1][k];
                    array[j + 1][k] = temp[k];
                }
            }
        }
    }

    // 출력
    for (int i = 0; i < N; i++) {
        cout << array[i] << "  ";
    }
}
