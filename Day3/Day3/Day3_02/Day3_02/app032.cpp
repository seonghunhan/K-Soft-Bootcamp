#include <iostream>
using namespace std;

class MyException {
public :
	const char* information;
	int code;
	MyException(const char* information, int code) : information(information), code(code) {

	}
};

class DynamicArray {

private :
	int size;
	int* p;

public:
	DynamicArray(int size) {
		this -> size = size;
		p = new int[size]; // ���� �޸� �Ҵ�
	}

	~DynamicArray() {
		delete[] p; // ���޸� ����
		p = nullptr;
	}

	//bool setAt(int index, int data) {
	//	if (index >= size)
	//		return false;
	//	p[index] = data;
	//	return true;
	//}

	void setAt(int index, int data) {
		if (index >= size || index < 0)
			// throw "�ε��� ���� ��� set\n";
			throw MyException("�ε��� ���� ��� set\n", 4885);
		p[index] = data;

	}
	
	int getAt(int index) {
		if (index >= size || index < 0)
			// throw "�ε��� ���� ���. get\n";
			throw MyException("�ε��� ���� ��� set\n", 4886);
		return p[index];
	}
};

int main() {
	//DynamicArray d1(5), d2(10);
	//d1.setAt(0, 99); // 0�� �ε����� 99�� ���� ����
	//d1.setAt(2, 7);
	//d1.setAt(1, -91);

	// ���� ����
	//bool ok = d1.setAt(2, 100);
	//if (ok)
	//	cout << "���� �Է�\n";
	//else
	//	cout << "�ε��� ������ ������ϴ�\n";

	//cout << d1.getAt(2) << '\n';

	// ���� ����
	try {
		DynamicArray d1(3), d2(10);
		d1.setAt(4, 100);
		cout << d1.getAt(2) << '\n';
	}
	catch (const char* err) {
		cout << err;
	}

	catch (const MyException& e) {
		cout << "�����ڵ� : " << e.code << '\n';
		cout << "�����ڵ� : " << e.information << '\n';
	}

	return 0;
}