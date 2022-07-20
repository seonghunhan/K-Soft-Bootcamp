#include "student.h"

Student::Student() : Person(), gpa(0.0)
{
}
//Student::Student()
//{
//	Person();
//	gpa = 0.0;
//}
// �Ű������� �ִ� ������  
Student::Student(long id, double gpa) : Person(id), gpa(gpa)
{
    //gpa = gpa;
    //this->gpa = gpa;

    //assert(gpa >= 0.0 && gpa <= 4.0);
}
//Student::Student(long id, double gp) : Person(id), gpa(gp)
//{
//  assert(gpa >= 0.0 && gpa <= 4.0);
//}
// ���� ������ 
Student::Student(const Student& student)
    : Person(student), gpa(student.gpa)
{
}
// �Ҹ���
Student::~Student()
{
}
// ������ ��� �Լ�
void Student::print() const
{
    Person::print();
    cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
}