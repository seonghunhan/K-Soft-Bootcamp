﻿/**************************************************************
 * do-while 반복문을 데이터 유효성 검사에 사용하는 프로그램   *
 **************************************************************/
#include <iostream>
using namespace std;

int main()
{
  // 선언
  int score;
  char grade;
  // 유효성 검사하면서 입력받기
  do
  {
    cout << "0~100의 범위에 있는 점수를 입력하세요: ";
    cin >> score;
  } while(score < 0 || score > 100);
  // 조건 분기
  switch(score / 10)
  {
    case 10: grade = 'A';
             break;
    case 9:  grade = 'A';
             break;
    case 8:  grade = 'B';
             break;
    case 7:  grade = 'C';
             break;
    case 6:  grade = 'D';
             break;
    default: grade = 'F'; 
  } 
  // 출력
  cout <<  "학점 = " << grade <<  endl;  
  return 0; 
} 