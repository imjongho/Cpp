#include <iostream>
using namespace std;
#define PI 3.14

int getArea(int width, int height);
double getArea(int radius);

int main() {
    int diagram = 0;

    cout << ">> 구하고 싶은 넓이의 도형을 선택하세요" << endl;
    cout << "1. 직사각형" << endl;
    cout << "2. 원" << endl;

    do {
        cout << ">> ";
        cin >> diagram;
    } while (diagram != 1 && diagram != 2);
    

    if (diagram == 1) {
        int width = 0, height = 0;
        cout << "직사각형의 가로, 세로 길이를 입력 : ";
        cin >> width >> height;
        cout << "직사각형의 넓이는 >> " << getArea(width, height);
    }
    
    if(diagram == 2) {
        int radius = 0;
        cout << "원의 반지름을 입력 : ";
        cin >> radius;
        cout << "원의 넓이는 >> " << getArea(radius);
    }

    return 0;
}

int getArea(int width, int height) {
    return width * height;
}

double getArea(int radius) {
    return radius * radius * PI;
}