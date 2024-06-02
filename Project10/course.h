// 헤더 파일의 중복 방지(다른 방법 : #pragma once)
#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <cassert>
#include "courseRoster.h"
using namespace std;


// 수강과목을 관리하는 클래스
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
