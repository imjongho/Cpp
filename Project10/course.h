// ��� ������ �ߺ� ����(�ٸ� ��� : #pragma once)
#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <cassert>
#include "courseRoster.h"
using namespace std;


// ���������� �����ϴ� Ŭ����
class Course {

private:
    string name; 
    int units;
    CourseRoster* roster;
public:
    Course(string name, int units);
    ~Course();
    string getName() const;
    CourseRoster* getRoster() const;
    void addStudent(string name);  
    void print() const;

};
#endif
