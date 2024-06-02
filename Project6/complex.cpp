#include <iostream>
using namespace std;

// ����ü�� ���
class Complex {
private:    
    int real;
    int image;

public:  // ����������
    void SetComplex();
    void ShowComplex() const;
    void SetReal(int r);
    void SetImage(int i);
    Complex();  // ������
    Complex(int r, int i); // �����ڵ� �����ε� ����
};

Complex::Complex(int r, int i) {
    real = r;
    image = i;
}

Complex::Complex() {
    real = 0;
    image = 0;
}

// :: Scope ���� ������
void Complex::SetComplex() {
    real = 2;   // ���� Ŭ����
    image = 5;
}

void Complex::ShowComplex() const {
    cout << real << "+" << image << "i" << endl;
}

void Complex::SetReal(int r) {
    real = r;
}

void Complex::SetImage(int i) {
    image = i;
}

int main() {
    Complex x, y;       // x, y��� ��ü 2�� ����
    x.ShowComplex();
    x.SetComplex();     // ��ü��.����Լ�();
    x.ShowComplex();
    y.SetComplex();
    y.ShowComplex();

    // x.real = 7; ���� ���� Ŭ������ �ƴϱ� ������(x�� �����Լ� ����)
    x.SetReal(8);
    x.ShowComplex();

    Complex a(100, 200);  // ��ü ������ ���ÿ� ������ �ڵ� ȣ��
    // ����� ���ÿ� �ʱ�ȭ
    // ��) int a;  a = 5;  --> int a = 5;
    a.ShowComplex();


    return 0;
}