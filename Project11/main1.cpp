#include "student.h"

int main() {

    Person* ptr[4];

    ptr[0] = new Student("Joe", 3.7);
    ptr[1] = new Student("John", 3.9);
    ptr[2] = new Person("Bruce");
    ptr[3] = new Person("Sue");

    for (int i = 0; i < 4; i++) {
        ptr[i]->print();
        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        delete ptr[i];
    }

    return 0;
}