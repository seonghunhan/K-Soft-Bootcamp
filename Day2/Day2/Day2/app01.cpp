#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	cout << *a << " " << *b << '\n';
}

void repswap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << a << " " << b << '\n';
}


//int main() {
//	int a = 2;
//	int b = 5;
//	int ck = 3;
//	int dk = 6;
//	int& c = ck;
//	int& d = dk;
//
//	// ���۷��� ������ �ڷ�Ÿ�� �ڿ� &��ȣ�� ���δ�.
//	// ����� ���ÿ� �ʱ�ȭ�ؾ��ϸ�, �Ϲ� �������� �;� �Ѵ�.
//	// ���۷����� ������ �ʱ�ȭ�� ������ ���� ���ε��� �ȴ�. (�����Ϳ� �ٸ�)
//	int& pa = b; //b�� ��Ī pa�� �ȴ�, pa = b�̰��� �׳� ���� �����ϴ°��̴�.
//	int& ra = b; //b�� �Ǵٸ� ��Ī ra
//	//int& pa = 9; // �Ϲݺ������� �ƴ� ���� ���ͷ��� �ʱ�ȭ�� �Ұ�����
//	//const int& pa = 9; // const Ű���带 ����ϸ� ���ͷ��� �ʱ�ȭ �ϴ� ���� ���
//
//	//cout << pa << " " << b << '\n';
//
//	cout << a << " " << b << '\n';
//	swap(&a, &b); // �����͸� �̿��ϸ� return�� ���� void������ �޸𸮸� �̿��Ͽ� ���� �ٲ��� �� �ִ�.
//	cout << a << " " << b << '\n';
//
//
//	cout << c << " " << d << '\n';
//	repswap(c, d); // ���۷����ε� �����ϴ�. �����ʹ� �ٲ�������� ���۷����� �ٲ𿰷��� ����.
//	cout << c << " " << d << '\n';
//	//pa = &a;
//	//cout << *pa << '\n';
//	//pa = &b;
//	return 0;
//}