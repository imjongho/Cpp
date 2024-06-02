#include <iostream>
using namespace std;

int main() {

    int size = 0;
    double num = 0.0, sum = 0.0, product = 1.0;
 
    do {
        cout << "Enter a non-negative integer value for size : ";
        cin >> size;
        if (size == 0) {
            product = 0.0;
        }
    } while (size < 0);

    for (int i = 0; i < size; i++) {
        cout << "Enter the next number : ";
        cin >> num;
        sum += num;
        product *= num;
    }
    cout << "sum = " << sum << endl;
    cout << "product = " << product << endl;

    return 0;
}