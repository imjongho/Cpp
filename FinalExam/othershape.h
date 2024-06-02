#ifndef OTHERSHAPE_H
#define OTHERSHAPE_H
#include "shape.h"

class OtherShape : public Shape {   // �׽�Ʈ��
private:
    double width;
    double height;
    bool isValid() const;

public:
    OtherShape(double w, double h);
    ~OtherShape();
    double getArea() const;
};
#endif



