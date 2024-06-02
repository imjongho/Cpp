#include <iostream>
#include <fstream>
using namespace std;

struct insa {
    char name[20];
    int age;
    char address[20];
};

void main() {
    insa man = {"성윤정", 20, "서울"};
    // out file stream
    ofstream fout;
    fout.open("insa.txt");

    // cout의 return 타입 ostream
    fout << man.name << "  " << man.age << "  " << man.address << endl;
    fout.close();

}