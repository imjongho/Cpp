#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// 다항식을 나타내는 클래스
class Polynomial { 
private:
	// 조건 A. 다항식을 표현하는 실수형 vector coefficients를 멤버 변수로 구성
	vector<double> coefficients;	// 다항식의 차수에 해당된 계수가 들어간 벡터
public:
	Polynomial(const vector<double>& coef);
	~Polynomial();
	// iv. Polynomial 클래스에 대해 << 연산자를 통해 다항식을 출력하라.
	friend ostream& operator<<(ostream& os, const Polynomial& poly);
	
	// i. Polynomial 클래스에 대해 + 연산자를 통해 두 다항식의 합을 리턴하라.
	friend const Polynomial operator+(const Polynomial& left, const Polynomial& right);
	// ii.	Polynomial 클래스에 대해 - 연산자를 통해 두 다항식의 차를 리턴하라.
	friend const Polynomial operator-(const Polynomial& left, const Polynomial& right);
	// iii.	Polynomial 클래스에 대해 * 연산자를 통해 두 다항식의 곱을 리턴하라.
	friend const Polynomial operator*(const Polynomial& left, const Polynomial& right);
	// v. Polynomial 클래스에 대해 () 연산자를 통해 다항식에 값을 대입하여 결과를 리턴하라.
	double operator()(const int degree, const double value);
	// vi. Polynomial 클래스에 대해 == 연산자를 통해 두 다항식을 비교하라.
	friend bool operator==(const Polynomial& left, const Polynomial& right);
	// vii.	Polynomial 클래스에 대해 [] 연산자를 통해 다항식의 특정 항의 계수를 리턴하라.
	const double operator[](const int index) const;
};
#endif
