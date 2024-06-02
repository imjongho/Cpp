#include <iostream>
using namespace std;

int main() {

    int base = 0, exponent = 0, result = 1;

    do {
        cout << "Enter a non-negative integer value for base : ";
        cin >> base;
        cout << "Enter a non-negative integer value for exponent : ";
        cin >> exponent;
    } while (base <= 0 || exponent < 0);


    for (int i = 0; i < exponent; i++) {
        result *= base;
    }  
    

    if(result % base == 0) {
        cout << base << "^" << exponent << " = " << result << endl;
    }
    else if (exponent == 0) {
        cout << base << "^" << exponent << " = " << result << endl;
    }
    else {
        cout << "Overflow occurred! Try again with smaller base or exponent." << endl;
    }
    
    
    return 0;
}