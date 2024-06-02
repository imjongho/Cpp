#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

class Ellipse : public Shape {
private:
    double radius1; // 가로 반지름
    double radius2; // 세로 반지름
    bool isValid() const;
public:
    Ellipse(double radius1, double radius2);
    ~Ellipse();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};
#endif

