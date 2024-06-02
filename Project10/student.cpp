#include "student.h"

Student::Student(string nm) : name(nm) {
    // schedule �ν��Ͻ�ȭ
    schedule = new StudentSchedule;
}

Student::~Student() {

}

string Student::getName() const {
    return name;
}

StudentSchedule* Student::getSchedule() const {
    return schedule;
}

void Student::addCourse(string name) {
    schedule->addCourse(name);
}

void Student::print() const {
    cout << "Student name: " << name << endl;
    // print() �Լ� ȣ��
    schedule->print();
}