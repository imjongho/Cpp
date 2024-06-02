#include <iostream>
using namespace std;

// printstr함수 매개변수 자료형이 다름
void printstr(int a);
void printstr(char a);


// print함수 매개변수 개수 다름
void print(int x, int y, int z) {
    cout << x << "  " << y << "  " << z << endl;
}

void print(int x, int y) {
    cout << x << "  " << y << endl;
}

void print(int x) {
    cout << x << endl;
}

// 함수의 디폴트 매개변수(알아서 초기화함)
void default_print(int x = 10, int y = 20, int z = 30) {
    cout << x << "  " << y << "  " << z << endl;
}

int main() {
    // 예제 1
    printstr('A');
    printstr(3);

    // 예제 2
    print(10, 20, 30);
    print(10, 20);
    print(10);

    // 예제 3
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