#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <cassert>
using namespace std;

// A. Shape, Ellipse, Rectangle, Triangle 클래스를 구현한다. (각 클래스는 width, height를 멤버변수로 가지고 이를 생성자로 초기화 시켜줌) (10점)
class Shape {
protected:
    double width;
    double height;
    // 각 도형의 변수 값이 유효한지를 검사하는 함수
    virtual bool isValid() const = 0;

public:
    Shape(double width, double height);
    ~Shape();
    virtual double getArea() const = 0;
};
#endif

