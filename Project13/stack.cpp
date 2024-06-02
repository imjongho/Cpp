#ifndef STACK_CPP
#define STACK_CPP
#include "stack.h"

template <typename T>
Stack<T>::Stack(int cmp) : capacity(cmp), size(0) {
    ptr = new T[capacity];  // 메모리할당
}

template <typename T>
Stack<T>::~Stack() {
    delete[] ptr;   // 메모리 해제
}

template <typename T>
void Stack<T>::push(const T& element) {
    if (size < capacity) {
        ptr[size] = element;
        size++;
    }
    else {
        cout << "Cannot push: stack is full" << endl;
        assert(false);
    }
}

template <typename T>
T Stack<T>::pop() {
    if (size > 0) {
        size--;
    }
    else {
        cout << "Cannot pop: stack is empty" << endl;
        assert(false);
    }

    return ptr[size];
}
#endif


int main(void) {

    Stack<int> stack1(10);
    stack1.push(5);
    stack1.push(6);
    stack1.push(7);
    stack1.push(3);

    cout << stack1.pop() << endl;
    cout << stack1.pop() << endl;

    Stack<char> stack2(5);
    stack2.push('a');
    stack2.push('b');
    stack2.push('c');

    cout << stack2.pop() << endl;
    cout << stack2.pop() << endl;

    return 0;
}
