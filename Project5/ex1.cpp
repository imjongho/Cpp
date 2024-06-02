#include <iostream>
using namespace std;
#define PI 3.14

int getArea(int width, int height);
double getArea(int radius);

int main() {
    int diagram = 0;

    cout << ">> ���ϰ� ���� ������ ������ �����ϼ���" << endl;
    cout << "1. ���簢��" << endl;
    cout << "2. ��" << endl;

    do {
        cout << ">> ";
        cin >> diagram;
    } while (diagram != 1 && diagram != 2);
    

    if (diagram == 1) {
        int width = 0, height = 0;
        cout << "���簢���� ����, ���� ���̸� �Է� : ";
        cin >> width >> height;
        cout << "���簢���� ���̴� >> " << getArea(width, height);
    }
    
    if(diagram == 2) {
        int radius = 0;
        cout << "���� �������� �Է� : ";
        cin >> radius;
        cout << "���� ���̴� >> " << getArea(radius);
    }

    return 0;
}

int getArea(int width, int height) {
    return width * height;
}

double getArea(int radius) {
    return radius * radius * PI;
}