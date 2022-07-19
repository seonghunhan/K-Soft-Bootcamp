/**************************************************************
 * '�л��� ����̴�'�� ������� Person ��ü��                 *
 * �̸� ����ϴ� Student ��ü�� ����� ����ϴ� ���α׷�      *
 **************************************************************/
#include <iostream>
#include <cassert>
#include <string>
using namespace std;
/**************************************************************
 * Person Ŭ������ ����                                       *
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
 * Person Ŭ������ setId �Լ� ����                            *
 **************************************************************/
void Person::setId(long id)
{
    identity = id;
    assert(identity >= 100000000 && identity <= 999999999);
}
/**************************************************************
 * Person Ŭ������ getId �Լ� ����                            *
 **************************************************************/
long Person::getId() const
{
    return identity;
}



/**************************************************************
 * Student Ŭ������ ����                                      *
 **************************************************************/
class Student : public Person // �θ� PersonŬ������ Student�� ��ӹ޴´�.
{
private:
    double gpa;
public:
    void setGPA(double gpa);
    double getGPA() const;
    //void setId(long id);
};
/**************************************************************
 * Student Ŭ������ setGPA �Լ� ����                          *
 **************************************************************/
void Student::setGPA(double gp)
{
    inheittest = 20; // �θ� Person Ŭ���� public�� �ִ� ������ ���� �ڽ� Ŭ�������� �缳�� ����!
    //identity = 99; // �θ�� private�� ��� ���޴´�. �׷��� protect�� �ڽĿ� ���ؼ� ���ٰ���
    gpa = gp;
    // assert(gpa >= 0 && gpa <= 4.0);
    
    if (gp >= 0.0 || gp <= 4.5)
        gpa = gp;
    else {
        gpa = 0.0;
        cout << "������ �Է� ������ 0���� 4.5�����̴�.\n";
    }
}
/**************************************************************
 * Student Ŭ������ getGPA �Լ� ����                          *
 **************************************************************/
double Student::getGPA() const
{
    return gpa;
}



/**************************************************************
 * �� Ŭ������ ����ϴ� ���ø����̼� �Լ�(main �Լ�)          *
 **************************************************************/
//int main()
//{
//    // Person ��ü �ν��Ͻ�ȭ�ϰ� ���
//    Person person;
//    person.setId(111111111L);
//    cout << "Person ��ü�� ����: " << endl;
//    cout << "����� ���� ��ȣ: " << person.getId();
//    cout << endl << endl;
//    // Student Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
//    Student student;
//    student.setId(222222222L);
//    student.setGPA(3.9);
//    cout << "Student ��ü�� ����: " << endl;
//    cout << "�л��� ���� ��ȣ: " << student.getId() << endl;
//    cout << "�л��� ����: " << student.getGPA();
//    return 0;
//}