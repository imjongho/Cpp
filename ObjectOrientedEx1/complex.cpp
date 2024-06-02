#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int image;
public:
    Complex(int r = 0, int i = 0);
    void showComplex();
    Complex operator+(Complex rightHand);
    Complex operator-(const Complex righthand) const;
    Complex operator-() const;
    friend ostream &operator<<(ostream& os, const Complex& comObj);
};

void Complex::showComplex() {
    if (image > 0) {
        cout << "(" << real << "+" << image << "i)" << endl;
    }
    else if(image < 0){
        cout << "(" << real << image << "i)" << endl;
    }
    else {
        cout << real << endl;
    }
}

Complex::Complex(int r, int i) {
    real = r;
    image = i;
}

Complex Complex::operator+(Complex rightHand) {
    Complex result;
    result.real = this->real + rightHand.real;
    result.image = this->image + rightHand.image;
    return result;
}

Complex Complex::operator-(const Complex rightHand) const {
    Complex result;
    result.real = this->real - rightHand.real;
    result.image = this->image - rightHand.image;
    return result;
}

Complex Complex::operator-() const {
    Complex result;
    result.real = -real;
    result.image = -image;
    return result;
}

// �ƿ���Ʈ��
ostream &operator<<(ostream& os, const Complex& comObj) {
    os << "(" << comObj.real << "+" << comObj.image << "i)" << endl;
    return os;
}


int main() {
    Complex x(10, 20), y(50, 50), z;

    cout << "--�� Complex ��ü�� ���� ����--\n";
    //z = x + y;
    z = x.operator+(y);
    x.showComplex();
    y.showComplex();
    z.showComplex();

    cout << "\n--�� Complex ��ü�� ���� ����--\n";
    z = x - y;
    x.showComplex();
    y.showComplex();
    z.showComplex();

    cout << "\n--�� Complex ��ü�� ���� ��ȣ ����--\n";
    z = -x;
    x.showComplex();
    z.showComplex();

    cout << endl << endl;
    cout << x << y << z << endl;

    return 0;
}