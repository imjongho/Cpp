#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
class Stack {
private:
    int capacity;   // 스택의 최대용량
    int size;       // 스택의 현재 용량
    T* ptr;         // T자료향을 담는 스택(배열)

public:
    Stack(int capacity);    // 생성자
    ~Stack();               // 소멸자
    void push(const T& element);    // 아이템을 스택에 넣음
    T pop();                        // 아이템을 스택에서 꺼냄
};
#endif