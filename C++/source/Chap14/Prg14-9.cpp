﻿/**************************************************************
 * Integer 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef INTEGER_H
#define INTEGER_H
#include "sp.h"

// Integer 클래스의 정의
class Integer
{
  private: 
    SP sp;
  public:
    Integer(int value);
    ~Integer(); 
    int getValue();
};
#endif