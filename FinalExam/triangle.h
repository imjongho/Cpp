#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle : public Shape {    // »ó¼Ó
private:
    double width;
    double height;
    bool isValid() const;
public:
    Triangle(double width, double height);
    ~Triangle();
    double getArea() const;
};
#endif
