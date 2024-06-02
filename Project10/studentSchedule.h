#ifndef STUDENTSCHEDULE_H
#define STUDENTSCHEDULE_H
#include <iostream>
#include <cassert>
using namespace std;

// �л� �� �����ϴ� �������� �����ϴ� Ŭ����
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
