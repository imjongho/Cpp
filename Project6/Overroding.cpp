#include <iostream>
using namespace std;

// printstr�Լ� �Ű����� �ڷ����� �ٸ�
void printstr(int a);
void printstr(char a);


// print�Լ� �Ű����� ���� �ٸ�
void print(int x, int y, int z) {
    cout << x << "  " << y << "  " << z << endl;
}

void print(int x, int y) {
    cout << x << "  " << y << endl;
}

void print(int x) {
    cout << x << endl;
}

// �Լ��� ����Ʈ �Ű�����(�˾Ƽ� �ʱ�ȭ��)
void default_print(int x = 10, int y = 20, int z = 30) {
    cout << x << "  " << y << "  " << z << endl;
}

int main() {
    // ���� 1
    printstr('A');
    printstr(3);

    // ���� 2
    print(10, 20, 30);
    print(10, 20);
    print(10);

    // ���� 3
    default_print(4, 5, 6);
    default_print(4, 5);
    default_print(4);
    default_print();

    return 0;
}


void printstr(char a) {
    cout << a << endl;
}

void printstr(int a) {
    cout << a << endl;
}