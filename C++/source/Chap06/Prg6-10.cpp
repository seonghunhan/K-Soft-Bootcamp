﻿/************************************************************
 * 사용자로부터 양의 정수를 입력 받는 함수를 정의하고       * 
 * 가장 오른쪽 숫자를 출력하는 프로그램                     *
 ************************************************************/
#include <iostream>
using namespace std;

/************************************************************
 * getData 함수는                                           *
 * 매개변수가 없지만 리턴값이 있는 함수                     *
 * 사용자로부터 입력을 받는 부가 작용을 가지며              *
 * 이 입력을 main 함수로 리턴                               *
 ************************************************************/
int getData()
{
  int data;
  do
  {
    cout << "양의 정수를 입력하세요: ";
    cin >> data;
  } while(data <= 0);
  return data;
}

int main()
{
  int number = getData();  // 매개변수 없이 함수 호출
  cout << "가장 오른쪽의 숫자 = " << number % 10; 
  return 0;
} 