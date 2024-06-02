#include "rectangle.h"

Rectangle::Rectangle(double w, double h) 
    : width(w), height(h), Shape(w, h) {
    if (!isValid()) {
        cout << "Invalid rectangle" << endl;
        assert(false);
    }
}

Rectangle::~Rectangle() {}

bool Rectangle::isValid() const
{
    return (width > 0.0 && height > 0.0);
}

double Rectangle::getArea() const
{
    // ii. Rectangle ≥–¿Ã: width * height
    return (width * height);
}