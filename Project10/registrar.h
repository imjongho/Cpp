#ifndef REGISTRAR_H
#define REGISTRAR_H
#include <iostream>
#include "course.h"
#include "student.h"
using namespace std;


// �л��� �������� ����ϴ� Ŭ����
class Registrar {
public:
    Registrar();
    ~Registrar();
    // �л��� �������� ����ϴ� �ֿ� �Լ� : enroll
    void enroll(Student student, Course course);
};
#endif
