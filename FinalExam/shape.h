#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <cassert>
using namespace std;

// A. Shape, Ellipse, Rectangle, Triangle Ŭ������ �����Ѵ�. (�� Ŭ������ width, height�� ��������� ������ �̸� �����ڷ� �ʱ�ȭ ������) (10��)
class Shape {
protected:
    double width;
    double height;
    // �� ������ ���� ���� ��ȿ������ �˻��ϴ� �Լ�
    virtual bool isValid() const = 0;

public:
    Shape(double width, double height);
    ~Shape();
    virtual double getArea() const = 0;
};
#endif

