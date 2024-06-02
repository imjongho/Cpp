#ifndef REGISTRAR_H
#define REGISTRAR_H
#include <iostream>
#include "course.h"
#include "student.h"
using namespace std;


// 학생과 교과목을 등록하는 클래스
class Registrar {
public:
    Registrar();
    ~Registrar();
    // 학생과 교과목을 등록하는 주요 함수 : enroll
    void enroll(Student student, Course course);
};
#endif
