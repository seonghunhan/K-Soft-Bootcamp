//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//protected:
////private:
////public:
//    long identity;
//public:
//    Person() {
//        cout << this << "�θ�\n";
//    }
//    ~Person() {
//        cout << this << "�θ� ��ü RIP\n";
//    }
//
//    void setId(long identity);
//    long getId() const;
//    long getId(int any) const; // �����ε�
//};
//void Person::setId(long id)
//{
//    identity = id;
//}
//long Person::getId() const
//{
//    return identity;
//}
//long Person::getId(int any) const
//{
//    return 999;
//}
//class Student : public Person
//{
//private:
//    double gpa;
//public:
//    Student() {
//        cout << this << "�ڽ�\n";
//    }
//    ~Student() {
//        cout << this << "�ڽ� ��ü RIP\n";
//    }
//
//    void setGPA(double gpa);
//    double getGPA() const;
//    void setId(long identity);
//    void set(long identity, double gp);
//};
//void Student::set(long identity, double gp)
//{
//    Person::setId(identity); // delegation
//    gpa = gp;
//    cout << "id(����)�� ������ �����մϴ�\n";
//}
//void Student::setGPA(double gp)
//{
//    //identity = 99; // private������ �ڽ�Ŭ�������� ���� �Ұ���, protected������ ����
//    if(gp >= 0.0 && gp <= 4.5)
//        gpa = gp;
//    else {
//        gpa = 0.0;
//        cout << "������ �Է� ������ 0���� 4.5������ �� �Դϴ�\n";
//    }
//}
//double Student::getGPA() const
//{
//    return gpa;
//}
//void Student::setId(long identity)
//{
//    cout << "�������̵�� �ڽ� Ŭ������ setID�� ������Դϴ�\n";
//    //Person::setId(identity); // delegation
//   this->identity = identity;
//}
////class Professor {
////public:
////    void test() {
////        identity =
////    }
////};
//int main(){
//    Person p1;
//    //p1.identity = 99;
//    
//    // Person ��ü �ν��Ͻ�ȭ�ϰ� ���
//    Person person;
//    person.setId(1); // Person Ŭ������ setID
//    cout << "Person ��ü�� ����: " << endl;
//    cout << "����� ���� ��ȣ: " << person.getId();
//    cout << "\n����� ���� ��ȣ: " << person.getId(-9);
//    cout << endl << endl;
//    // Student Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
//    Student student;
//    //student.setId(-77); // �������̵�� setID�� ����
//    //student.setGPA(2.9);
//    student.set(-77, 2.9);
//    cout << "Student ��ü�� ����: " << endl;
//    cout << "�л��� ���� ��ȣ: " << student.getId() << endl;
//    cout << "�л��� ����: " << student.getGPA();
//    cout << '\n';
//    return 0;
//}