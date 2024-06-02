#include <iostream>
using namespace std;

// 구조체와 비슷
class Complex {
private:    
    int real;
    int image;

public:  // 접근지정자
    void SetComplex();
    void ShowComplex() const;
    void SetReal(int r);
    void SetImage(int i);
    Complex();  // 생성자
    Complex(int r, int i); // 생성자도 오버로딩 가능
};

Complex::Complex(int r, int i) {
    real = r;
    image = i;
}

Complex::Complex() {
    real = 0;
    image = 0;
}

// :: Scope 범위 연산자
void Complex::SetComplex() {
    real = 2;   // 같은 클래스
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
    Complex x, y;       // x, y라는 객체 2개 생성
    x.ShowComplex();
    x.SetComplex();     // 객체명.멤버함수();
    x.ShowComplex();
    y.SetComplex();
    y.ShowComplex();

    // x.real = 7; 에러 같은 클래스가 아니기 떄문에(x는 메인함수 영역)
    x.SetReal(8);
    x.ShowComplex();

    Complex a(100, 200);  // 객체 생성과 동시에 생성자 자동 호출
    // 선언과 동시에 초기화
    // 예) int a;  a = 5;  --> int a = 5;
    a.ShowComplex();


    return 0;
}