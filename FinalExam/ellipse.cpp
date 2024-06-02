#include "ellipse.h"

Ellipse::Ellipse(double w, double h) 
    : width(w), height(h), Shape(w, h) {
    if (!isValid()) {
        cout << "Invalid ellipse" << endl;
        assert(false);
    }
}

Ellipse::~Ellipse() {}

bool Ellipse::isValid() const
{
    return (width > 0.0 && height > 0.0);
}

double Ellipse::getArea() const
{
    // i. Ellipse ≥–¿Ã: width * height * 3.14 / 4
    return (width * height * 3.14 / 4);
}