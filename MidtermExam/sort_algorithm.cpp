#include <iostream>
#include <cstring>
#define N 5     // �迭�� ũ�� 5
using namespace std;

void sort(double array[]);      // ���� ����
void sort(char array[]);        // ���� ����
void sort(char array[][10]);    // ���ڿ� ����
// sort �Լ� : ����, �Ǽ�, ����, ���ڿ��� ������� ���� ����
// �Լ� �����ε�(�Ű������� �ٸ��⿡ ����)

int main() {

    // ���� �迭 ���� �� �ʱ�ȭ
    double arr_num[N] = { 3.2, 4.6, 3, 2, 5 };   
    sort(arr_num);      // sort() �Լ� ȣ��

    // ���� �迭 ���� �� �ʱ�ȭ
    char arr_char[N] = { 'a', '7', '4', '@', 'A' };
    sort(arr_char);     // sort() �Լ� ȣ��

    // ���ڿ� �迭 ���� �� �ʱ�ȭ, ���ڿ� ���� 10(���� ����)
    char arr_str[N][10] = {"aa", "aaa", "bbb", "b", "dddd"};
    sort(arr_str);      // sort() �Լ� ȣ��
    
    return 0;
}


// ���� : ������ �Ǽ��� ���� ���� ũ�⿡ ���� ���� -> �ڷ��� double ���
void sort(double array[]) {

    // �������� ����(���� ����)
    // �� �񱳴� �׸��� ���� - 1��ŭ ����
    for (int i = 0; i < N - 1; i++) {
        // �ѹ� ������ ���� �� �ڷ� �̵��Ѱ� ����
        for (int j = 0; j < N - i - 1; j++) {
            // ������ �� �׸��� ���Ͽ� ū ���� �ڷ� ����
            if (array[j] > array[j + 1]) {
                double temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // ���
    for (int i = 0; i < 5; i++) {
        cout << array[i] << "  ";
    }
    cout << endl;
}


// ���� : ���ڰ� ��� ���ں��� �� ū ���� ����, �������� �ƽ�Ű �ڵ� ������ ����
void sort(char array[]) {

    int ascii_array[N] = { 0 };  // ���ڸ� �ƽ�Ű�ڵ�(10����)�� ��ȯ
    int ascii_num[N] = { 0 };    // ���� �迭
    int ascii_char[N] = { 0 };   // ���� �迭

    int cnt_num = 0;    // ���� ���� ī��Ʈ(=���� �迭�� ũ��)
    int cnt_char = 0;   // ���� ���� ī��Ʈ(=���� �迭�� ũ��)


    for (int i = 0; i < N; i++) {
        ascii_array[i] = static_cast<int>(array[i]);
    }

    // // ���ڿ� ���ڸ� �����ؼ� ����
    for (int i = 0; i < N; i++) {
        if (ascii_array[i] >= 48 && ascii_array[i] <= 57) {
            ascii_num[cnt_num++] = ascii_array[i];
        }
        else {
            ascii_char[cnt_char++] = ascii_array[i];
        }
    }   

    // ���� �迭 ����(���� ����)
    for (int i = 0; i < cnt_char - 1; i++) {
        for (int j = 0; j < cnt_char - i - 1; j++) {
            if (ascii_char[j] > ascii_char[j + 1]) {
                int temp = ascii_char[j];
                ascii_char[j] = ascii_char[j + 1];
                ascii_char[j + 1] = temp;
            }
        }
    }

    // ���� ���
    for (int i = 0; i < cnt_char; i++) {
        cout << static_cast<char>(ascii_char[i]) << "  ";
    }


    // ���� �迭 ����(���� ����)
    for (int i = 0; i < cnt_num - 1; i++) {
        for (int j = 0; j < cnt_num - i - 1; j++) {
            if (ascii_num[j] > ascii_num[j + 1]) {
                int temp = ascii_num[j];
                ascii_num[j] = ascii_num[j + 1];
                ascii_num[j + 1] = temp;
            }
        }
    }

    // ���� ���
    for (int i = 0; i < cnt_num; i++) {
        cout << static_cast<char>(ascii_num[i]) << "  ";
    }

    cout << endl;
}


// ���� : ���ڿ��� ���̷� ũ�� �Ǵ�(���̰� ������ �������� ���ٰ� �Ǵ�)
void sort(char array[][10]) {
    
    char temp[10];
    // ���� ����
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            // ���ڿ��� ���̸��� ��(ex) aaa�� bbb�� �������� ���ٰ� ��)
            if (strlen(array[j]) > strlen(array[j + 1])) {
                // ���ڿ� ����
                for (int k = 0; k < 10; k++) {
                    temp[k] = array[j][k];
                    array[j][k] = array[j + 1][k];
                    array[j + 1][k] = temp[k];
                }
            }
        }
    }

    // ���
    for (int i = 0; i < N; i++) {
        cout << array[i] << "  ";
    }
}
