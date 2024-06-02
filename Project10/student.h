#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cassert>
#include <string>
#include "studentSchedule.h"
using namespace std;

// 학생의 정보를 관리하는 클래스
class Student {

private:
    string name;
    StudentSchedule* schedule;
public:
    Student(string name);
    ~Student();
    string getName() const;
    StudentSchedule* getSchedule() const;
    void addCourse(string name); 
    void print() const; 

};
#endif
