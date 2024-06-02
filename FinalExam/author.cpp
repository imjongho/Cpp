#include "author.h"

// 생성자
Author::Author(string n, string e, char g) : name(n) {
    // A. Author 클래스의 email은 @가 포함되어야만 한다.
    assert(e.find('@') != string::npos);
    email = e;

    // B. Author 클래스의 gender는 m(male), f(female), u(unkown)이여만 한다.
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


// 출력
void Author::print() {
    cout << name << " (" << gender << ") at " << email << endl;
}
