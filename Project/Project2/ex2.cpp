#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    // ¾Ï¹¬Àû ÀÚ·áÇü ½Â°İ
    bool x = true;
    char y = 'A';
    short z = 14;
    float t = 24.5;

    cout << typeid(x + 100).name() << endl;
    cout << x + 100 << endl;

    cout << typeid(y + 1000).name() << endl;
    cout << y + 1000 << endl;

    cout << typeid(z * 100).name() << endl;
    cout << z * 100 << endl;

    cout << typeid(t + 10000.2).name() << endl;
    cout << t + 10000.2 << endl;

    return 0;
}