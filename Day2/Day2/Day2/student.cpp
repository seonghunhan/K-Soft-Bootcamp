/**************************************************************
 * Student 클래스의 구현 파일                                 *
 **************************************************************/
#include "student.h"

// 기본 생성자 좀 더 모던한 방식
//Student::Student() : Person(), gpa(0.0)  // this -> gpa=0.0
//{
//}
Student::Student() //오래된방식의 기본 생성자
{
	//Person();
	gpa = 0.0;
}
 //매개변수가 있는 생성자  
Student::Student(long id, double gp)
: Person(id), gpa(gp) // id는 Person클래스의 매개변수 있는 생성자에 들감
{
  assert(gpa >= 0.0 && gpa <= 4.0);
}

//// 매개변수가 있는 생성자  
//Student::Student(long id, double gp)
//	
//{
//	Person(id);
//	gpa = gp;
//	assert(gpa >= 0.0 && gpa <= 4.0);
//}

// 복사 생성자 
Student::Student(const Student& student)
: Person(student), gpa(student.gpa) 
{
}
// 소멸자
Student::~Student()
{
}
// 접근자 멤버 함수
void Student::print() const
{
  Person::print(); //Person 클래스의 print를 쓴것
  cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
}