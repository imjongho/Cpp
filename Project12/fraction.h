#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <cassert>
#include <iomanip>
#include <cmath>
using namespace std;

// Fraction class definition
class Fraction
{
private:
	int numer;
	int denom;
	int gcd(int n, int m = 1); // Helper function 
	void normalize(); // Helper function
public:
	Fraction(int numer, int denom); // Parameter constructor
	Fraction(double value); // Parameter constructor
	Fraction(); // Default constructor
	Fraction(const Fraction& fract); // Copy constructor
	~Fraction(); // Destructor 

	const Fraction operator+() const;
	const Fraction operator-() const;
	Fraction& operator++();
	Fraction& operator--();
	const Fraction operator++(int);
	const Fraction operator--(int);
	
	Fraction& operator=(const Fraction& right);
	Fraction& operator+=(const Fraction& right);
	Fraction& operator-=(const Fraction& right);
	Fraction& operator*=(const Fraction& right);
	Fraction& operator/=(const Fraction& right);

	friend const Fraction operator+(const Fraction& left, const Fraction& right);
	friend const Fraction operator-(const Fraction& left, const Fraction& right);
	friend const Fraction operator*(const Fraction& left, const Fraction& right);
	friend const Fraction operator/(const Fraction& left, const Fraction& right);

	friend bool operator==(const Fraction& left, const Fraction& right);
	friend bool operator!=(const Fraction& left, const Fraction& right);
	friend bool operator<(const Fraction& left, const Fraction& right);
	friend bool operator>(const Fraction& left, const Fraction& right);
	friend bool operator<=(const Fraction& left, const Fraction& right);
	friend bool operator>=(const Fraction& left, const Fraction& right);

	friend istream& operator>>(istream& left, Fraction& right);
	friend ostream& operator<<(ostream& left, const Fraction& right);
};
#endif
