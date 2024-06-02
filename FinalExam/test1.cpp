#include "polynomial.h"

int main(void){

    vector<double> ceof1 = { 1.0, -2.0, 1.0 };   // 1x^2 - 2x^1 + 1x^0
    vector<double> ceof2 = { 1.0, 2.0 };         // 1x^1 + 2x^0

    Polynomial poly1(ceof1);
    Polynomial poly2(ceof2);

    cout << "p1: " << poly1 << endl;
    cout << "p2: " << poly2 << endl;

    cout << "p1 + p2: " << poly1 + poly2 << endl;
    cout << "p1 - p2: " << poly1 - poly2 << endl;
    cout << "p1 * p2: " << poly1 * poly2 << endl;
    cout << "p1 == p2: " << boolalpha;
    cout << (poly1 == poly2) << endl;

    int degree = 1;
    double value = 5.0;     
    cout << "수정: " << poly1(degree, value) << "x^" << degree << endl;
    cout << "p1(updated): " << poly1 << endl;
    cout << "p1[2]: " << poly1[2] << endl;  // 예) poly1[2] : 다항식 poly1의 x^2의 계수를 반환

    return 0;
}