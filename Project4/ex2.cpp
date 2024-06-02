#include <iostream>
using namespace std;

int main() {

    int size = 0;
    int result = 1;

    while (1) {
        cout << "Enter the factorial size : ";
        cin >> size;

        if (size <= 0) {
            cout << "Try again(0 < size)" << endl;
        }
        else {
            break;
        }
    }

    for (int i = 1; i <= size; i++) {
        result *= i;
    }
    cout << size << "! = " << result << endl;

    return 0;
}