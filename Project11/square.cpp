#include "square.h"

Square::Square(double s)
    :side(s)
{
    if (!isValid()) {
        cout << "Invalid squre!";
        assert(false);
    }
}

Square::~Square()
{}

void Square::print() const
{
    cout << "Squre of side " << side << endl;
}

double Square::getArea() const
{
    return (side * side);
}

double Square::getPerimeter() const
{
    return (4 * side);
}

bool Square::isValid() const
{
    return (side > 0.0);
}