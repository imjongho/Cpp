#include "author.h"

// ������
Author::Author(string n, string e, char g) : name(n) {
    // A. Author Ŭ������ email�� @�� ���ԵǾ�߸� �Ѵ�.
    assert(e.find('@') != string::npos);
    email = e;

    // B. Author Ŭ������ gender�� m(male), f(female), u(unkown)�̿��� �Ѵ�.
    if (g == 'm' || g == 'f' || g == 'u') {
        gender = g;
    }
    else {
        cout << "gender error" << endl;
        assert(false);
    }
}


// getter
string Author::getName() {
    return name;
}

string Author::getEmail() {
    return email;
}

char Author::getGender() {
    return gender;
}


// setter
void Author::setEmail(string email) {
    assert(email.find('@') != string::npos);
    this->email = email;
}


// ���
void Author::print() {
    cout << name << " (" << gender << ") at " << email << endl;
}
