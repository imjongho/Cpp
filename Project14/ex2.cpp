#include <iostream>
#include <fstream>
using namespace std;

struct insa {
    char name[20];
    int age;
    char address[20];
};

void main() {
    insa man;
    // in file stream
    ifstream fin;
    fin.open("D:\\C++\\���ִ��б�\\2�г� 1�б�\\Project14\\Project14\\insa.dat");
    
    if (fin.fail()) {
        cout << "���� ���¿� �����߽��ϴ�." << endl;
        return;
    }

    fin >> man.name >> man.age >> man.address;
    cout << man.name << "  " << man.age << "  " << man.address << endl;

    fin.close();

}