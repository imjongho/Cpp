#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int image;
public:
    Complex(int r = 0, int i = 0);  // 생성자 객체가 생성될때 자동 호출
    ~Complex(); // 소멸자(~가 들어감) 객체가 소멸될때 자동 호출
    void ShowComplex() const;   // const 함수 내부 값을 상수로 취급
};

Complex::Complex(int r, int i) {
    real = r;
    image = i;
}

Complex::~Complex() {
    cout << "소멸되었습니다" << endl;
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


    return 0;   // 프로그램 종료시 메모리에서 해제되면서 자동으로 소멸자가 호출되었음
}
