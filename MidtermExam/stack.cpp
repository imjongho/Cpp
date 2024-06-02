#include <iostream>
#define STACK_SIZE 5  // 임의로 스택의 크기 결정함
using namespace std;

void push(int);     // 정수 X를 스택에 넣는 연산을 하는 함수
void pop();         // 스택의 가장 위에 있는 정수를 꺼내어 출력하고 없으면 -1출력하는 함수
void size();        // 현재 스택에 쌓여 있는 정수의 개수를 출력하는 함수
bool empty();       // 스택이 비어있으면 1, 아니면 0 출력하는 함수
void top();         // 스택의 가장 위에 있는 정수를 출력, 없으면 -1을 출력하는 함수


// 전역변수(함수 배울때 나온 스코프 사용)
int stack[STACK_SIZE] = { 0 };    // 스택 배열(후입선출)
int stack_top = 0;    // 스택의 가장 윗부분을 가리키는 변수


int main() {

    int num = 0;      // 명령 입력 개수
    int flag = 0;     // 어떤 명령을 수행할지 알려줄 변수
    int x = 0;        // push에 넣는 정수 X
    int cnt = 1;      // 명령을 몇번 했는지 보여주는 변수

    do {
        cout << "명령할 개수 입력 : ";
        cin >> num;
    } while (num < 0);  // 개수는 음수 불가
    cout << num << "번 명령 입력 가능" << endl << endl;

    cout << "명령 입력(숫자 입력)" << endl;
    // 위에 입력한 숫자대로 명령을 입력받음(입력은 총 5가지)
    for (int i = 0; i < num; i++) {
        cout << "1:push  2:pop  3:size  4:empty  5:top" << endl;
        cout << cnt++ << "번 명령 : ";
        cin >> flag;

        switch (flag) 
        {
        case 1:
            cout << "push에 넣을 정수 입력 : ";
            cin >> x;
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            size();
            break;
        case 4:
            cout << "스택이 비어있는지 여부(1: 비어있음, 0: 데이터가 들어있음) : ";
            cout << empty() << endl;
            break;
        case 5:
            top();
            break;
        }   

        cout << endl;
    } 


    return 0;
}


void push(int x) {
    if (stack_top >= STACK_SIZE) {
        cout << "Stack Overflow" << endl;
    }
    else {
        stack[stack_top] = x;
        stack_top++;
    }
}

void pop() {
    if (stack_top <= 0) {
        cout << "-1(Stack Underflow)" << endl;
    }
    else {
        stack_top--;
        cout << "pop : " << stack[stack_top] << endl;
        stack[stack_top] = 0;
    }
}

void size() {
    cout << "size : " << stack_top << endl;
}

bool empty() {
    if (stack_top == 0) {   // top이 0이면 스택이 비어있음을 의미
        return true;
    }
    else {
        return false;
    }
}

void top() {
    if (stack_top <= 0) {
        cout << "-1(Stack Underflow)" << endl;
    }
    else {
        cout << "스택의 가장 위에 있는 정수 : " << stack[stack_top - 1] << endl;
    }
}