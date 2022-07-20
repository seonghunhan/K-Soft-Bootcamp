#include "circle.h"
Circle::Circle(double radius) : radius(radius)
{
}

Circle::~Circle()
{
	cout << "�� �Ҹ���\n";
}

double Circle::perimeter() const
{
	const double PI = 3.141592;
	return 2.0 * PI * radius;
}

double Circle::area() const
{
	const double PI = 3.141592;
	return PI * radius * radius;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::print() const
{
	cout << "������ " << area() << "�Դϴ�\n";
}
