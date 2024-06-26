#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square : public Shape
{
private:
    double side;
    bool isValid() const;
public:
    Square(double side);
    ~Square();
    void print() const;
    double getPerimeter() const;
    double getArea() const;
};
#endif