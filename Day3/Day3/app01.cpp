/**************************************************************
 * typeid �����ڷ� Ŭ���� �̸��� Ȯ���ϴ� ���α׷�            *
 **************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void print() {   // virtual void �ϸ� ���� ��µȴ�. C++�� �θ� �ڽ� ������ �����ϳ� �ڹٴ� ���� virtualó���Ǿ� �ִ�.
		cout << "����\n";
	}
};

class Horse : public Animal{ // inheritance
public:
	void print() { // override
		cout << "��\n";
	}
};

class Rose {

};

//int main()
//{
//	Animal* a = new Horse; // upcast
//	a->print(); // polymorphism, virtual keyword
//	cout << a << '\n';
//	//Horse* h = (Horse*)a;
//	//Horse* h = dynamic_cast<Horse*>(a);
//	Rose* r = (Rose*)a;
//	//delete a;
//
//	cout << r << '\n';
//	delete r;
//
//	return 0;
//}