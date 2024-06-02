#include <iostream>
#include <iomanip>
using namespace std;

void input(int&, int&, int&);
double process(int, int, int);
void output(double);
double findMultiplier(int, int);

int main() {
    
    int investment = 0, rate = 0, year = 0;
    double future_value = 0.0;
    
    input(investment, rate, year);
    future_value = process(investment, rate, year);
    output(future_value);

    return 0;
}

void input(int& investment, int& rate, int&year) {
    cout << "Enter the value of peridic investment : ";
    cin >> investment;
    cout << "Enter the interest rate per year:  ";
    cin >> rate;
    cout << "Enter the term (number of years): ";
    cin >> year;
}

double process(int investment, int rate, int year) {
    return investment * findMultiplier(rate, year);     // ÀÔ±İ¾× * ½Â¼ö
}

void output(double future_value) {
    cout << fixed << setprecision(2) << "Future value : " << future_value;
}

double findMultiplier(int rate, int year) {
    double multiplier = 0.0;
    for (int i = 1; i <= year; i++) {
        multiplier += pow(1.0 + (rate / 100.0), double(i));
    }
    return multiplier;
}