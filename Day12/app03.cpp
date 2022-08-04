// p.861
#include "stack.cpp"
typedef unsigned int ui;
typedef Stack<double> dStack;
int main()
{
	ui a = 99;
	dStack d1(2);
	Stack<const char*> s2(3);
	Stack<int> stack(4);

	d1.push(4.47);

	stack.push(5);
	s2.push("�����");
	s2.push("����ȣ");
	s2.push("���ذ�");

	s2.printStack();

	stack.push(6);
	stack.push(7);
	stack.printStack();
	cout << s2.pop() << endl;
	stack.push(3);
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.peek() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	//cout << stack.ptr[1];
	return 0;
}

// ���� 10�� string (c++ style)
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string a = "abc";
//	string b("def");
//	string c{ "ghihk" };
//	
//	cout << a << "\n";
//	cout << b << "\n";
//	cout << c.size() << "\n";
//	cout << c.capacity() << "\n";
//	c.push_back('Z');
//	cout << c << "\n";
//	cout << c.size() << "\n";
//	cout << c.capacity() << "\n";
//	c = c + "1234567890";
//	cout << c << "\n";
//	cout << c.size() << "\n";
//	cout << c.capacity() << "\n";
//
//	return 0;
//}
