#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int image;
public:
    Complex(int r = 0, int i = 0);  // ������ ��ü�� �����ɶ� �ڵ� ȣ��
    ~Complex(); // �Ҹ���(~�� ��) ��ü�� �Ҹ�ɶ� �ڵ� ȣ��
    void ShowComplex() const;   // const �Լ� ���� ���� ����� ���
};

Complex::Complex(int r, int i) {
    real = r;
    image = i;
}

Complex::~Complex() {
    cout << "�Ҹ�Ǿ����ϴ�" << endl;
}

void Complex::ShowComplex() const {
    cout << real << "  " << image << endl;
}

int main() {

    Complex x(10, 20);
    Complex y(30);
    Complex z;
    x.ShowComplex();
    y.ShowComplex();
    z.ShowComplex();


    return 0;   // ���α׷� ����� �޸𸮿��� �����Ǹ鼭 �ڵ����� �Ҹ��ڰ� ȣ��Ǿ���
}
