#include "othershape.h"

OtherShape::OtherShape(double w, double h) 
    : width(w), height(h), Shape(w, h) {
    if (!isValid()) {
        cout << "Invalid othershape" << endl;
        assert(false);
    }
}

OtherShape::~OtherShape() {}

bool OtherShape::isValid() const {
    return (width > 0.0 && height > 0.0);
}

double OtherShape::getArea() const {
    return (width * height * 1000);
}