// #include ��������� �����ͼ� ���ڴٰ� �˸��� ��ó����
// ����: Ŭ���� ������ �������(.h)�� ������ �ҽ�����(.cpp)�� �и�
// �����ν� Ŭ������ �ٸ� cpp ���Ͽ��� ����ϱ� ������
#include <iostream> 
using namespace std;


// ��� ������ �ߺ� ����(�ٸ� ��� : #pragma once)
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