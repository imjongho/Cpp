#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double a = 0.0, b = 0.0;
    cin >> a >> b;
    cout << fixed << setprecision(15) << a / b;

    return 0;
}