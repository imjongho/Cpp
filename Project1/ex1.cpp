#include <iostream>
using namespace std;

/*
1. 상품의 단가와 구입할 개수를 입력받아서 총 금액을 출력하는 프로그램을 구현하시오

상품의 단가를 입력하시오 --> 800
구입할 개수를 입력하시오 --> 5
총 금액 : 4,000원
*/

int main() {

    int price;  // 상품의 단가
    int num;    // 구입할 개수

    cout << "상품의 단가를 입력하시오 --> ";
    cin >> price;

    cout << "구입할 개수를 입력하시오 --> ";
    cin >> num;

    cout << "총 금액 : " << (price * num) << "원";

    return 0;
}