#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape {    // »ó¼Ó
private:
    double width;
    double height;
    bool isValid() const;

public:
    Rectangle(double width, double height);
    ~Rectangle();
    double getArea() const;
};
#endif



