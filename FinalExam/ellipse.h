#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

class Ellipse : public Shape {    // »ó¼Ó
private:
    double width;
    double height; 
    bool isValid() const;

public:
    Ellipse(double width, double height);
    ~Ellipse();
    double getArea() const;
};
#endif


