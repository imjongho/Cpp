#include <iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numer;
    int denom;

public:
    // »ý¼ºÀÚ
    Fraction();
    Fraction(int num, int den);    
    Fraction(const Fraction& fract);
    ~Fraction();

    int getNumer() const;
    void setNumer(int num);
    
    int getDenom() const;
    void setDenom(int den);

    void print() const;

private:
    int gcd(int n, int m);
    void normalize();
};
#endif