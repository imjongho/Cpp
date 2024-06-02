#ifndef STUDENTSCHEDULE_H
#define STUDENTSCHEDULE_H
#include <iostream>
#include <cassert>
using namespace std;

// 학생 당 수강하는 교과목을 관리하는 클래스
class StudentSchedule {

private:
    string* courseNames;   
    int size;  
public:
    StudentSchedule();
    ~StudentSchedule();
    void addCourse(string course); 
    void print() const; 

};
#endif
