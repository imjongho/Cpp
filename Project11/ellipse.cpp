#include "ellipse.h"

Ellipse::Ellipse(double r1, double r2) {
    radius1 = r1;
    radius2 = r2;

    if (!isValid()) {
        cout << "Invalid ellipse";
        assert(false);
    }
}

Ellipse::~Ellipse()
{}

void Ellipse::print() const
{
    cout << "Ellipse of radius: " << radius1 << "X" << radius2 << endl;
}

double Ellipse::getArea() const
{
    return (3.14 * radius1 * radius2);
}

double Ellipse::getPerimeter() const
{
    double temp = (radius1 * radius1 + radius2 * radius2) / 2;
    return (2 * 3.14 * temp);
}

bool Ellipse::isValid() const
{
    return (radius1 > 0 && radius2 > 0);
}

