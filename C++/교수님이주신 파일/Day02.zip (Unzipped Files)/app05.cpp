//#include <iostream>
//#include <string>
//using namespace std;
//
//// ���̽� Ŭ������ ����
//class Base
//{
//public:
//	virtual void print() const { cout << "���̽� Ŭ����" << endl; }
//	virtual ~Base() {
//		cout << "���� �θ�Ŭ������ �Ҹ���!\n";
//	}
//};
//// �Ļ� Ŭ������ ����
//class Derived : public Base
//{
//public:
//	virtual void print() const { cout << "�Ļ� Ŭ����" << endl; }
//	virtual ~Derived() {
//		cout << "���� �ڽ�Ŭ������ �Ҹ���!\n";
//	}
//};
//int main()
//{
//	// ���̽� Ŭ������ ���� ������(����) ����
//	Base* ptr;
//	// ptr �����ͷ� ���̽� Ŭ������ ��ü ����Ű��
//	ptr = new Base();
//	ptr->print();
//	delete ptr;
//	// ptr �����ͷ� �Ļ� Ŭ������ ��ü ����Ű��
//	ptr = new Derived(); // Downcasting
//	ptr->print();
//	//Derived* p = new Derived(); // Ok
//	//p->print();
//	delete ptr;
//	return 0;
//}