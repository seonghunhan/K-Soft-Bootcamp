/**************************************************************
 * Circle Ŭ������ �������̽� ����                            *
 **************************************************************/
#ifndef CIRCLE_H
#define CIRCLE_H
#include <cassert>
#include <iostream>
#include <iomanip>
using namespace std;

class Circle
{
private:
    int radious;
public:
    Circle(); // ������
    Circle(int rd);
    ~Circle();
    Circle(const Circle& circle);
    void print() const;
};
#endif