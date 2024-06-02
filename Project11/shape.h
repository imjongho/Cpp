#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Shape {
protected:
    // 각 도형의 변수 값이 유효한지를 검사하는 함수
    virtual bool isValid() const = 0;
public:
    // 각 도형의 정보를 출력하는 함수
    virtual void print() const = 0;
    // 도현의 면적을 리턴하는 함수
    virtual double getArea() const = 0;
    // 도형의 둘레를 리턴하는 함수
    virtual double getPerimeter() const = 0;
};


#endif