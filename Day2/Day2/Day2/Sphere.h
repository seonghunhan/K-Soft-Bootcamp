///**************************************************************
// * Student Ŭ������ �������̽� ����                           *
// **************************************************************/
#ifndef SPHERE_H
#define SPHERE_H
#include "Circle.h"

class Sphere : public Circle
{
private:
    int rd;
public:
    Sphere(int Circle& radious);
    ~Sphere();
    //Sphere(const Sphere& sphere);
    void print() const;
};
#endif