//#include <iostream>
//using namespace std;
////void swap(int a, int b) {
////	int temp;
////	temp = a;
////	a = b;
////	b = temp;
////	cout << a << " " << b << '\n';
////}
//
////void swap(int* a, int* b) {
////	int temp;
////	temp = *a;
////	*a = *b;
////	*b = temp;
////	cout << *a << " " << *b << '\n';
////}
//
//void swap(int& a, int& b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	cout << a << " " << b << '\n';
//}
//
//int main() {
//	int oa = 7;
//	int ob = 3;
//	cout << oa << " " << ob << '\n';
//	//swap(oa, ob); // Call by value
//	//swap(&oa, &ob); // Call by pointer
//	swap(oa, ob); // Call by reference
//	cout << oa << " " << ob << '\n';
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 2;
//	int b = 5;
//	int& pa = b; // b�� ��Ī pa�� �ȴ�
//	int& ra = b; // b�� �Ǵٸ� ��Ī ra
//
//	//pa = a; // ���� ���� (���ε��� �ٲ�°� �ƴ�)
//	ra = 9;
//	cout << pa << " " << b << " " << ra << '\n';
//
//	// ���۷��� ������ �ڷ�Ÿ�� �ڿ� &��ȣ�� �ٿ� ����
//	// ���۷��� ������ ����� ���ÿ� �ʱ�ȭ ���Ѿ� ��
//	// �ʱ�ȭ�Ҷ� �Ϲ� �������� �;� �Ѵ�
//	// ���۷����� ������ �ʱ�ȭ�� ������ ���� ���ε��� �ȴ� (�����Ϳ� �ٸ�)
//
//	//int& pa = 9; // �Ϲݺ������� �ƴ� ���� ���ͷ��� �ʱ�ȭ�� �Ұ�����
//	//const int& pa = 9; // const Ű���带 ����ϸ� ���ͷ��� �ʱ�ȭ �ϴ� ���� ���
//
//	//'A'; // ���� ���ͷ�
//	//8; // ���� ���ͷ�
//	//3.7; // �Ǽ� ���ͷ�
//	//"univ"; // ���ڿ� ���ͷ�	
//
//	//int& pa = &b; // ���۷��������� �����Ͱ� �ƴϴ�. ���� �ּҸ� ���� �� ����.
//	
//	//int& pa; // �ʱ�ȭ �ڵ尡 ��� ����
//	//pa = b;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 2;
//	int b = 5;
//	int* const pa = &b;
//	cout << *pa << '\n'; // 5
//	pa = &a; // ����Ű�� ��� ����!!
//	cout << *pa << '\n'; // 2
//	return 0;
//}