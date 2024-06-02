#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// ���׽��� ��Ÿ���� Ŭ����
class Polynomial { 
private:
	// ���� A. ���׽��� ǥ���ϴ� �Ǽ��� vector coefficients�� ��� ������ ����
	vector<double> coefficients;	// ���׽��� ������ �ش�� ����� �� ����
public:
	Polynomial(const vector<double>& coef);
	~Polynomial();
	// iv. Polynomial Ŭ������ ���� << �����ڸ� ���� ���׽��� ����϶�.
	friend ostream& operator<<(ostream& os, const Polynomial& poly);
	
	// i. Polynomial Ŭ������ ���� + �����ڸ� ���� �� ���׽��� ���� �����϶�.
	friend const Polynomial operator+(const Polynomial& left, const Polynomial& right);
	// ii.	Polynomial Ŭ������ ���� - �����ڸ� ���� �� ���׽��� ���� �����϶�.
	friend const Polynomial operator-(const Polynomial& left, const Polynomial& right);
	// iii.	Polynomial Ŭ������ ���� * �����ڸ� ���� �� ���׽��� ���� �����϶�.
	friend const Polynomial operator*(const Polynomial& left, const Polynomial& right);
	// v. Polynomial Ŭ������ ���� () �����ڸ� ���� ���׽Ŀ� ���� �����Ͽ� ����� �����϶�.
	double operator()(const int degree, const double value);
	// vi. Polynomial Ŭ������ ���� == �����ڸ� ���� �� ���׽��� ���϶�.
	friend bool operator==(const Polynomial& left, const Polynomial& right);
	// vii.	Polynomial Ŭ������ ���� [] �����ڸ� ���� ���׽��� Ư�� ���� ����� �����϶�.
	const double operator[](const int index) const;
};
#endif
