///**************************************************************
// * Person Ŭ������ Student Ŭ������ ����ϴ� ���ø����̼�     *
// **************************************************************/
#include "Sphere.h"

int main()
{
	// Person ��ü �ν��Ͻ�ȭ�ϰ� ���
	int circleNum;
	cout << "�������� �Է��ϼ��� : " << '\n';
	cin >> circleNum;
	Circle circle(circleNum);
	circle.print();
	cout << endl;

	// Student ��ü �ν��Ͻ�ȭ�ϰ� ���
	Sphere sphere();
	cout << "Student ��ü�� ����: " << endl;
	sphere().print();
	cout << endl;
	return 0;
}