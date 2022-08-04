///**************************************************************
// * Student Ŭ������ ���� ����                                 *
// **************************************************************/
//#include "Sphere.h"
//
// // �⺻ ������ �� �� ����� ���
Student::Student() : Person(), gpa(0.0)  // this -> gpa=0.0
{
}
Sphere::Sphere(int radious) //�����ȹ���� �⺻ ������
{
	Circle();
	rd = radious; 
}
//�Ű������� �ִ� ������  
Sphere::Sphere(long id, double gp)
	: Person(id), gpa(gp) // id�� PersonŬ������ �Ű����� �ִ� �����ڿ� �鰨
{

}

 //�Ű������� �ִ� ������  
Student::Student(long id, double gp)
	
{
	Person(id);
	gpa = gp;
	assert(gpa >= 0.0 && gpa <= 4.0);
}

// ���� ������ 
Sphere::Sphere(const Sphere& sphere)
	: Circle(sphere), gpa(sphere.gpa)
{
}
 //�Ҹ���
Sphere::~Sphere()
{
}
// ������ ��� �Լ�
void Sphere::print() const
{
	//Person::print(); //Person Ŭ������ print�� ����
	cout << "Sphere : " << 3.14 * rd * rd << endl;
}