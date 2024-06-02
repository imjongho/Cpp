#include "circle.h"

Circle::Circle(double r) {
    radius = r;
    if (!isValid()) {
        cout << "Invalid circle";
        assert(false);
    }
}

Circle::~Circle() {

}

bool Circle::isValid() const{
    return (radius > 0);
}

void Circle::print() const {
    cout << "Circle of radius : " << radius << endl;
}

double Circle::getArea() const {
    return (3.14 * radius * radius);
}

double Circle::getPerimeter() const {
    return (2 * 3.14 * radius);
}

