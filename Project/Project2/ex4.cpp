#include <iostream>
#include <limits>
using namespace std;

int main() {

    // 오버프로우 언더플로우 예제
    unsigned int num1 = numeric_limits <unsigned int> :: max();
    unsigned int num2 = numeric_limits <unsigned int> :: min();
    
    // 오버프로우
    cout << num1 << endl;
    num1 += 1;
    cout << num1 << endl;

    // 언더플로우
    cout << num2 << endl;
    num2 -= 1;
    cout << num2 << endl;

    return 0;
}