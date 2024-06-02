#include <iostream>
using namespace std;

template <typename DATATYPE>
class Test {
    DATATYPE value;
public:
    Test(DATATYPE v);
    void SetValue(DATATYPE v);
    DATATYPE GetValue();
};

template <typename DATATYPE>
Test<DATATYPE>::Test(DATATYPE v) {
    value = v;
}

template <typename DATATYPE>
void Test<DATATYPE>::SetValue(DATATYPE v) {
    value = v;
}

template <typename DATATYPE>
DATATYPE Test<DATATYPE>::GetValue() {
    return value;
}

int main() {
    Test<int> obj1(10);
    obj1.SetValue(10);
    cout << obj1.GetValue() << endl;

    Test<double> obj2(5.7);
    cout << obj2.GetValue() << endl;

    return 0;
}
