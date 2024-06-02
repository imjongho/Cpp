#ifndef COURSEROSTER_H
#define COURSEROSTER_H
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

// 수강생 명단을 관리하는 클래스
class CourseRoster {

private:
    string* stdNames;
    int size;  
public:
    CourseRoster();
    ~CourseRoster();
    void addStudent(string studentName);  
    void print() const;

};
#endif
