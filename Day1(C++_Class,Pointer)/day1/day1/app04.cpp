//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Student {
//private :
//	string name;
//	//string mName; //�ؿ��� ���� ȥ���� �ǿ�� ���Ͽ� ��������� �տ� m�� ���δ�.
//	double gpa;
//
//public :
//
//	Student() {
//		count++;
//	}
//	Student(string name) {
//		this->name = name;
//		count++;
//	}
//	~Student() {
//		count--;
//	}
//	//void setName(string name) { //��������� �Ű������� �̸��� ���Ƽ� ����� ��� ����
//	//	name = name;
//	//}
//	void setName(string name) {
//		this->name = name;
//	}
//
//	string getName() {
//		return name;
//	}
//	static int count;
//	static void printCount() {
//		cout << count << '��\n';
//	}
//};
//
//int Student::count = 0;
//
//void inha(Student* t) {
//	Student s3, s4; // +2
//	cout << "�� ������ " << t->getName() << "�л�\n";
//	delete t; // -1
//	Student::printCount(); // ���� ����Լ�
//} // -2
//
//
////int main() {
////	Student* s0 = new Student("������");
////
////	Student s1; // +1
////	Student s2("������"); // +1
////	inha(s0);
////	//delete s0; // -1
////	s0 = nullptr;
////
////	s1.setName("�Ѽ���");
////	cout << s1.getName() << '\n';
////	Student::printCount(); // ���� ����Լ�
////
////	return 0;
////}