#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Shape {
protected:
    // �� ������ ���� ���� ��ȿ������ �˻��ϴ� �Լ�
    virtual bool isValid() const = 0;
public:
    // �� ������ ������ ����ϴ� �Լ�
    virtual void print() const = 0;
    // ������ ������ �����ϴ� �Լ�
    virtual double getArea() const = 0;
    // ������ �ѷ��� �����ϴ� �Լ�
    virtual double getPerimeter() const = 0;
};


#endif