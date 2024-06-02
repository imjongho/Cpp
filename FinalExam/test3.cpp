#include "ellipse.h"
#include "rectangle.h"
#include "triangle.h"
#include "othershape.h"

// B. printShape(Shape s) 함수는 매개변수로 입력받은 객체의 넓이를 출력해줌. (15점)
void printShape(Shape* s) {
    cout << "area: " << s->getArea() << endl;
}

// C. printShape()를 템플릿화 시킨 Templete_printShape()를 구현한다. (10점)
template <typename T>
void Template_printShape(const T* s) {
    // iv. Templete_printShape()는 매개변수로써 Ellipse, Rectangle, Triangle이 전달되었을 경우에만 정상 동작한다.
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

    // iv 조건을 보여주기 위한 OtherShape 클래스
    Template_printShape(new Ellipse(1, 2));
    Template_printShape(new Rectangle(3, 4));
    Template_printShape(new Triangle(5, 6));

    for (int i = 0; i < 3; i++) {
        delete arrayShapes[i];
    }

    return 0;
}
