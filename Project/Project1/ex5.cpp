#include <iostream>
using namespace std;

int main() {

    // ��� ����
    const double PI = 3.14;
    // ���� 3�� ����
    double radious, perimeter, area;

    cout << "���� ������ �Է� : ";
    cin >> radious;

    perimeter = 2 * PI * radious;
    area = PI * PI * radious;

    cout << "������ : " << radious << endl;
    cout << "�ѷ� : " << perimeter << endl;
    cout << "���� : " << area;

    return 0;

}