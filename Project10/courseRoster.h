#ifndef COURSEROSTER_H
#define COURSEROSTER_H
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

// ������ ����� �����ϴ� Ŭ����
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
