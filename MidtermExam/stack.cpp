#include <iostream>
#define STACK_SIZE 5  // ���Ƿ� ������ ũ�� ������
using namespace std;

void push(int);     // ���� X�� ���ÿ� �ִ� ������ �ϴ� �Լ�
void pop();         // ������ ���� ���� �ִ� ������ ������ ����ϰ� ������ -1����ϴ� �Լ�
void size();        // ���� ���ÿ� �׿� �ִ� ������ ������ ����ϴ� �Լ�
bool empty();       // ������ ��������� 1, �ƴϸ� 0 ����ϴ� �Լ�
void top();         // ������ ���� ���� �ִ� ������ ���, ������ -1�� ����ϴ� �Լ�


// ��������(�Լ� ��ﶧ ���� ������ ���)
int stack[STACK_SIZE] = { 0 };    // ���� �迭(���Լ���)
int stack_top = 0;    // ������ ���� ���κ��� ����Ű�� ����


int main() {

    int num = 0;      // ��� �Է� ����
    int flag = 0;     // � ����� �������� �˷��� ����
    int x = 0;        // push�� �ִ� ���� X
    int cnt = 1;      // ����� ��� �ߴ��� �����ִ� ����

    do {
        cout << "����� ���� �Է� : ";
        cin >> num;
    } while (num < 0);  // ������ ���� �Ұ�
    cout << num << "�� ��� �Է� ����" << endl << endl;

    cout << "��� �Է�(���� �Է�)" << endl;
    // ���� �Է��� ���ڴ�� ����� �Է¹���(�Է��� �� 5����)
    for (int i = 0; i < num; i++) {
        cout << "1:push  2:pop  3:size  4:empty  5:top" << endl;
        cout << cnt++ << "�� ��� : ";
        cin >> flag;

        switch (flag) 
        {
        case 1:
            cout << "push�� ���� ���� �Է� : ";
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
            cout << "������ ����ִ��� ����(1: �������, 0: �����Ͱ� �������) : ";
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
    if (stack_top == 0) {   // top�� 0�̸� ������ ��������� �ǹ�
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
        cout << "������ ���� ���� �ִ� ���� : " << stack[stack_top - 1] << endl;
    }
}