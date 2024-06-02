#ifndef STUDENT_H
#define STUDENT_H
#include "shape.h"

class Triangle : public Shape
{
private:
    double side1;
    double side2;
    double side3;
    bool isValid() const;
public:
    Triangle(double side1, double side2, double side3);
    ~Triangle();
    void print() const;
    double getPerimeter() const;
    double getArea() const;
};
#endif
