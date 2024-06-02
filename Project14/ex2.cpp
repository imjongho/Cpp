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
    fin.open("D:\\C++\\공주대학교\\2학년 1학기\\Project14\\Project14\\insa.dat");
    
    if (fin.fail()) {
        cout << "파일 오픈에 실패했습니다." << endl;
        return;
    }

    fin >> man.name >> man.age >> man.address;
    cout << man.name << "  " << man.age << "  " << man.address << endl;

    fin.close();

}