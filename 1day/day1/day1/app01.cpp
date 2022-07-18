#include <iostream> // C++ ����� ��Ʈ��
#include <string> // C++ ���ڿ� 
using namespace std;

class Human {
private:
	// data member, field, member variable
	string name;
	string bloodType;
	int age;
public:
	// constructor
	Human(); // default constructor (1. Ŭ������ �̸��� ���� 2. ����Ÿ���� ����)
	Human(string n); // parameter constructor (���ڿ� �μ� 1��)
	Human(string n, string bt); // parameter constructor (���ڿ� �μ� 2��)
	Human(const Human& h); // copy constructor

	// member function 	
	// getter, setter
	void setName(string n);
	void setBloodtype(string n);
	int getAge();
	string getName();
	void setAge(int a);

	// �Ϲ� ����Լ�
	void print();
	void eat(string food);
	void sleep();
};
Human::Human() {
	age = 0;
	name = "����";
	// this Ű����� ���� ���� ��ü�� �޸� ���� �ּҸ� ���� ������
	cout << this << " ��ü ����(�⺻ ������)!\n";
}
Human::Human(string n) {
	age = 0;
	name = n;
	cout << this << " ��ü ����(�Ű����� 1�� ������)!\n";
}
Human::Human(string n, string bt)
{
	age = 0;
	name = n;
	bloodType = bt;
	cout << this << " ��ü ����(�Ű����� 2�� ������)!\n";
}
Human::Human(const Human& h)
{
	// h4.age = h3.age;
	this->age = h.age;
	name = h.name;
	bloodType = h.bloodType;
	cout << this << " ��ü ����(���� ������)!\n";
}
void Human::eat(string food) {
	cout << name << "��(��) " << food << "�� �ȳ�~\n";
}
void Human::sleep()
{
	//cout << this->getName() << "��(��) ����\n";
	cout << getName() << "��(��) ����\n";
}
void Human::setBloodtype(string b) {
	bloodType = b;
}
void Human::setName(string n) {
	name = n;
}
int Human::getAge() {
	return age;
}
string Human::getName()
{
	return name;
}
void Human::setAge(int a) {
	age = a;
}
void Human::print() {
	cout << name << "���� ���̴� " << age << "�� �Դϴ�. �������� " << bloodType << "�� �Դϴ�\n";
}
//int main() {
//	Human h1("������"), h2;
//	Human h3("������", "A");
//	Human h4(h3); // copy constructor
//
//	h4.print();
//
//	h3.setAge(10);
//	h3.print();
//
//	h2.sleep();
//
//	cout << h1.getName() << '\n';
//	cout << h2.getName() << '\n';
//	h2.setName("������");
//
//	h1.setAge(24);
//	h1.setBloodtype("B");
//	//h1.setName("������");
//
//	h1.eat("����");
//	h2.eat("�������");
//	cout << h1.getAge() << '\n';
//	h1.eat("����");
//	h1.print();
//
//	//Human h2;
//	//h2.name = "������";
//	//h1.name = "������";
//	//h1.age = 22;
//	//cout << h1.name << '\n';
//	//cout << h2.name << '\n';
//	return 0;
//}

// �� ������ ��ü �ּ�ó���� Ctrl+k+c
// �� ������ ��ü �ּ������� Ctrl+k+u
//#include <iostream>
//using namespace std;
//
//void inha() {
//	cout << "���� �Լ� �ȿ����� ���\n";
//}
//
//int main() {
//	inha();
//	//std::cout << "ù ��° ���\n";
//	cout << "ù ��° ���\n";
//	inha();
//	return 0;
//}

// void�� ������ ���ٴ°�

