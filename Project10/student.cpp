#include "student.h"

Student::Student(string nm) : name(nm) {
    // schedule 인스턴스화
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
    // print() 함수 호출
    schedule->print();
}