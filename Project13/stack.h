#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
class Stack {
private:
    int capacity;   // ������ �ִ�뷮
    int size;       // ������ ���� �뷮
    T* ptr;         // T�ڷ����� ��� ����(�迭)

public:
    Stack(int capacity);    // ������
    ~Stack();               // �Ҹ���
    void push(const T& element);    // �������� ���ÿ� ����
    T pop();                        // �������� ���ÿ��� ����
};
#endif