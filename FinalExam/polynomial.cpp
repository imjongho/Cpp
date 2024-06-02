#include "polynomial.h"

Polynomial::Polynomial(const vector<double>& coef) : coefficients(coef) {
	// ����.empty() : ���Ͱ� ������̸� true, ���� ������ false
	if (coefficients.empty() == true) {
		cout << "���׽��� ����" << endl;
		assert(false);
	}
}

Polynomial::~Polynomial(){ }

ostream& operator<<(ostream& os, const Polynomial& poly) {

	int size = (int)(poly.coefficients.size() - 1);
	int cnt = 0, cntNext = 0;

	for (int i = 0; i <= size; i++) {
		int degree = size - i;		// degree: ����
		cntNext = 0;
		// ����� 0�� �ƴ� ���� �ִٸ� ���,  ��) 2x^2 + (���X: 0x^1) + 1x^0
		if (poly.coefficients[i] != 0.0) {
			cnt++;
			os << poly.coefficients[i] << "x^" << degree;
			// ���� �ִ� ���� ��� �������� ���θ� Ȯ�� ��, + ��ȣ ���̱�
			for (int j = i + 1; j <= size; j++) {
				if (poly.coefficients[j] != 0.0) {
					cntNext++;
				}
			}

			// ����Ұ� ������ �ݺ��� ����������
			if (cntNext == 0) {
				break;
			}
			else {
				os << " + ";
			}
		}
	}

	// ��� 0���� ��ȯ���� ���� ���
	if (cnt == 0) {
		os << "0";
	}

	return os;
}

const Polynomial operator+(const Polynomial& left, const Polynomial& right) {
	// �� ���׽� �߿� ������ �� ū ������ ����� ���� ��ü�� ����
	size_t maxSize = max(left.coefficients.size(), right.coefficients.size());
	vector<double> result(maxSize, 0.0);

	// ����� ���� �����׳��� ���
	size_t leftSizeOff = maxSize - left.coefficients.size();
	size_t rightSizeOff = maxSize - right.coefficients.size();

	for (size_t i = 0; i < maxSize; i++) {
		if (i >= leftSizeOff) {
			result[i] += left.coefficients[i - leftSizeOff];
		}

		if (i >= rightSizeOff) {
			result[i] += right.coefficients[i - rightSizeOff];
		}
	}

	Polynomial sum(result);
	return sum;
}

const Polynomial operator-(const Polynomial& left, const Polynomial& right) {
	
	size_t maxSize = max(left.coefficients.size(), right.coefficients.size());
	vector<double> result(maxSize, 0.0);

	size_t leftSizeOff = maxSize - left.coefficients.size();
	size_t rightSizeOff = maxSize - right.coefficients.size();

	for (size_t i = 0; i < maxSize; i++) {
		if (i >= leftSizeOff) {
			result[i] += left.coefficients[i - leftSizeOff];
		}

		if (i >= rightSizeOff) {
			result[i] -= right.coefficients[i - rightSizeOff];
		}
	}

	Polynomial sub(result);
	return sub;
}

const Polynomial operator*(const Polynomial& left, const Polynomial& right) {

	size_t size = left.coefficients.size() + right.coefficients.size() - 1;
	vector<double> result(size, 0.0);

	size_t resultMaxDegree = size - 1;
	size_t leftMaxDegree = left.coefficients.size() - 1;
	size_t rightMaxDegree = right.coefficients.size() - 1;

	for (size_t i = 0; i < left.coefficients.size(); i++) {
		size_t leftDegree = leftMaxDegree - i;
		for (size_t j = 0; j < right.coefficients.size(); j++) {
			size_t rightDegree = rightMaxDegree - j;
			size_t index = resultMaxDegree - (leftDegree + rightDegree);
			result[index] += (left.coefficients[i] * right.coefficients[j]);
		}
	}

	Polynomial mul(result);
	return mul;
}

double Polynomial::operator()(const int degree, const double value) {
	size_t maxDegree = coefficients.size() - 1;
	if (degree < 0 || degree > maxDegree) {
		cout << "���� ����" << endl;
		assert(false);
	}

	coefficients[maxDegree - degree] = value;	// ���׽Ŀ� �� ����
	return coefficients[maxDegree - degree];	// ��� ����
}

bool operator==(const Polynomial& left, const Polynomial& right) {
	return (left.coefficients == right.coefficients);
}

const double Polynomial::operator[](const int index) const{
	size_t maxDegree = coefficients.size() - 1;
	if (index < 0 || index > maxDegree) {
		cout << "���� ����" << endl;
		assert(false);
	}

	return coefficients[maxDegree - index];
}