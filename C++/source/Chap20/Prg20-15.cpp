﻿/**************************************************************
 * 퍼사드 패턴을 사용하는 애플리케이션 파일                   *
 **************************************************************/
#include "facade.h"

int main()
{
  House house(1000);  // House(퍼사드) 객체 생성
  house.draw(); // draw 멤버 함수 호출
  return 0;
}