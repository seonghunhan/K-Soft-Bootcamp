/**************************************************************
 * Person Ŭ������ ���� ����                                  *
 **************************************************************/
#include "Circle.h"

 // �⺻ ������
Circle::Circle()
	: radious(0)
{
}
// �Ű������� �ִ� ������  
Circle::Circle(int rd)
	: radious(rd)
{
	
}
// ���� ������
Circle::Circle(const Circle& circle)
	: radious(circle.radious)
{
}
// �Ҹ���      
Circle::~Circle()
{
}
// ������ ��� �Լ�
void Circle::print() const
{
	cout << "Circle : " << 2 * 3.14 * radious << endl;
}