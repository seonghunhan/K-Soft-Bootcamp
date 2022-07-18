﻿/**************************************************************
 * Employee 클래스의 인터페이스 파일                          *
 **************************************************************/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "name.h"

class Employee
{
  private:
    Name name;
    double salary;
  public: 
    Employee(string first, string init, string last,
              double salary);
    ~Employee(); 
    void print() const; 
};
#endif