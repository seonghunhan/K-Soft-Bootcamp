﻿/**************************************************************
 * 기부 내역을 임의로 만들고,                                 *
 * 큐를 사용해 금액에 따라 구분하는 프로그램                  *
 **************************************************************/
#include "queue.cpp"
#include <cstdlib>
#include <ctime>

int main()
{
  // 큐 인스턴스화하고 변수 선언
  Queue<int> queue1, queue2, queue3, queue4, queue5;
  int num;
  int donation;
  // 기부 내역 랜덤하게 생성하면서 구분
  srand(time(0));
  for(int i = 0; i < 50; i++)
  {
    num = rand();
    donation = num %(50 - 0 + 0) + 0;
    switch(donation / 10)
    {
      case 0:  queue1.push(donation);
               break;        
      case 1:  queue2.push(donation);
               break;          
      case 2:  queue3.push(donation);
               break;    
      case 3:  queue4.push(donation);
               break;      
      case 4:  queue5.push(donation);
               break;          
    }
  }
  // 구분된 결과 출력
  cout << "기부 금액 범위 $0~9: " << endl;
  queue1.print();
  cout << endl;
  cout << "기부 금액 범위 $10~19: " << endl;
  queue2.print();
  cout << endl;
  cout << "기부 금액 범위 $20~29: " << endl;
  queue3.print();
  cout << endl;
  cout << "기부 금액 범위 $30~39: " << endl;
  queue4.print();
  cout << endl;
  cout << "기부 금액 범위 $40~49: " << endl;
  queue5.print();
  cout << endl;
  return 0;
}