/**************************************************************
 * '학생은 사람이다'를 기반으로 Person 객체와                 *
 * 이를 상속하는 Student 객체를 만들고 사용하는 프로그램      *
 **************************************************************/
#include <iostream>
#include <cassert>
#include <string>
using namespace std;
/**************************************************************
 * Person 클래스의 정의                                       *
 **************************************************************/
class Person
{
private:
    long identity;
public:
    int inheittest = 20;
    void setId(long identity);
    long getId() const;
};
/**************************************************************
 * Person 클래스의 setId 함수 정의                            *
 **************************************************************/
void Person::setId(long id)
{
    identity = id;
    assert(identity >= 100000000 && identity <= 999999999);
}
/**************************************************************
 * Person 클래스의 getId 함수 정의                            *
 **************************************************************/
long Person::getId() const
{
    return identity;
}



/**************************************************************
 * Student 클래스의 정의                                      *
 **************************************************************/
class Student : public Person // 부모 Person클래스를 Student가 상속받는다.
{
private:
    double gpa;
public:
    void setGPA(double gpa);
    double getGPA() const;
    //void setId(long id);
};
/**************************************************************
 * Student 클래스의 setGPA 함수 정의                          *
 **************************************************************/
void Student::setGPA(double gp)
{
    inheittest = 20; // 부모 Person 클래스 public에 있는 변수는 여기 자식 클래스에서 재설정 가능!
    //identity = 99; // 부모라도 private는 상속 못받는다. 그러나 protect는 자식에 한해서 접근가능
    gpa = gp;
    // assert(gpa >= 0 && gpa <= 4.0);
    
    if (gp >= 0.0 || gp <= 4.5)
        gpa = gp;
    else {
        gpa = 0.0;
        cout << "평점의 입력 범위는 0에서 4.5사이이다.\n";
    }
}
/**************************************************************
 * Student 클래스의 getGPA 함수 정의                          *
 **************************************************************/
double Student::getGPA() const
{
    return gpa;
}



/**************************************************************
 * 두 클래스를 사용하는 애플리케이션 함수(main 함수)          *
 **************************************************************/
//int main()
//{
//    // Person 객체 인스턴스화하고 사용
//    Person person;
//    person.setId(111111111L);
//    cout << "Person 객체의 정보: " << endl;
//    cout << "사람의 구분 번호: " << person.getId();
//    cout << endl << endl;
//    // Student 클래스 인스턴스화하고 사용
//    Student student;
//    student.setId(222222222L);
//    student.setGPA(3.9);
//    cout << "Student 객체의 정보: " << endl;
//    cout << "학생의 구분 번호: " << student.getId() << endl;
//    cout << "학생의 학점: " << student.getGPA();
//    return 0;
//}