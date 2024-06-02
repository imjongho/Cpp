#include "ellipse.h"
#include "rectangle.h"
#include "triangle.h"
#include "othershape.h"

// B. printShape(Shape s) �Լ��� �Ű������� �Է¹��� ��ü�� ���̸� �������. (15��)
void printShape(Shape* s) {
    cout << "area: " << s->getArea() << endl;
}

// C. printShape()�� ���ø�ȭ ��Ų Templete_printShape()�� �����Ѵ�. (10��)
template <typename T>
void Template_printShape(const T* s) {
    // iv. Templete_printShape()�� �Ű������ν� Ellipse, Rectangle, Triangle�� ���޵Ǿ��� ��쿡�� ���� �����Ѵ�.
    if constexpr (is_same_v<T, Ellipse> || is_same_v<T, Rectangle> || is_same_v<T, Triangle>) {
        cout << "area: " << s->getArea() << endl;
    }
    else {
        cout << "Invalid shape" << endl;
        assert(false);
    }
}


int main(void) {

    Shape* arrayShapes[3];
    arrayShapes[0] = new Ellipse(1, 2);
    arrayShapes[1] = new Rectangle(3, 4);
    arrayShapes[2] = new Triangle(5, 6);

    for (int i = 0; i < 3; i++) {
        printShape(arrayShapes[i]);
    }

    // iv ������ �����ֱ� ���� OtherShape Ŭ����
    Template_printShape(new Ellipse(1, 2));
    Template_printShape(new Rectangle(3, 4));
    Template_printShape(new Triangle(5, 6));

    for (int i = 0; i < 3; i++) {
        delete arrayShapes[i];
    }

    return 0;
}
