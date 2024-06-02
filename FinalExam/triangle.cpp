#include "triangle.h"

Triangle::Triangle(double w, double h) 
    : width(w), height(h), Shape(w, h) {
    if (!isValid()) {
        cout << "Invalid triangle" << endl;
        assert(false);
    }
}

Triangle::~Triangle() {}

bool Triangle::isValid() const
{
    return (width > 0.0 && height > 0.0);
}

double Triangle::getArea() const
{
    // iii. Triangle ≥–¿Ã: width * height / 2
    return (width * height / 2);
}
