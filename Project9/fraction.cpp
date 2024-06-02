#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"

using namespace std;

Fraction::Fraction() {
    numer = 0;
    denom = 1;
}

Fraction::Fraction(int num, int den = 1) {
    numer = num;
    denom = den;

    normalize();
}

Fraction::Fraction(const Fraction& fract) {
    numer = fract.numer;
    denom = fract.denom;
}

Fraction::~Fraction() {}

int Fraction::getNumer() const {
    return numer;
}

void Fraction::setNumer(int num) {
    numer = num;
    normalize();
}

int Fraction::getDenom() const {
    return denom;
}

void Fraction::setDenom(int den) {
    denom = den;
    normalize();
}

void Fraction::print() const {
    cout << numer << "/" << denom << endl;
}

int Fraction::gcd(int n, int m) {
    int gcd = 1;
    
    int range = min(numer, denom);

    for (int i = 1; i <= range; i++) {
        if (numer % i == 0 && denom % i == 0) {
            gcd = i;
        }
    };

    return gcd;
}

void Fraction::normalize() {
    if (denom == 0) {
        cout << "INvalid denomination.Need to quit" << endl;
        assert(false);
    }

    // 분자  분모           분자  분모
    //  +     +     -->      +     +
    //  +     -     -->      -     +
    //  -     +     -->      -     +
    //  -     -     -->      +     +
    if (denom < 0) {
        denom = -denom;
        numer = -numer;
    }
    
    int divisor = gcd(abs(numer), abs(denom));
    numer = numer / divisor;
    denom = denom / divisor;
}



int main() {
    
    Fraction fract1;
    Fraction fract2(14, 21);
    Fraction fract3(11, -8);
    Fraction fract4(fract3);

    cout << "Printing four fractions after constructed" << endl;
    cout << "fract1 : ";
    fract1.print();

    cout << "fract2 : ";
    fract2.print();

    cout << "fract3 : ";
    fract3.print();

    cout << "fract4 : ";
    fract4.print();

    cout << "Changing the first two fractions and printing them" << endl;
    fract1.setNumer(4);
    cout << "fract1 : ";
    fract1.print();

    fract2.setDenom(-5);
    cout << "fract2 : ";
    fract2.print();

    cout << "Testing the changes in two fractions" << endl;
    cout << "fract1 numerator : " << fract1.getNumer() << endl;
    cout << "fract2 numerator : " << fract2.getDenom() << endl;

    return 0;
}
