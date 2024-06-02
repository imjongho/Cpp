// #include 헤더파일을 가져와서 쓰겠다고 알리는 전처리문
// 목적: 클래스 선언은 헤더파일(.h)로 구현은 소스파일(.cpp)로 분리
// 함으로써 클래스를 다른 cpp 파일에서 사용하기 쉽게함
#include <iostream> 
using namespace std;


// 헤더 파일의 중복 방지(다른 방법 : #pragma once)
#ifndef TIME_H
#define TIME_H


class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int hours, int minutes, int seconds);
    Time();
    ~Time();
    void print() const;
    void tick();

private:
    void normalize();
};
#endif