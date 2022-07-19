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
//	// 레퍼런스 변수는 자료타입 뒤에 &기호를 붙인다.
//	// 선언과 동시에 초기화해야하며, 일반 변수명이 와야 한다.
//	// 레퍼런스는 선언후 초기화된 변수와 영구 바인딩이 된다. (포인터와 다름)
//	int& pa = b; //b의 별칭 pa가 된다, pa = b이것은 그냥 값을 대입하는것이다.
//	int& ra = b; //b의 또다른 별칭 ra
//	//int& pa = 9; // 일반변수명이 아닌 정수 리터럴로 초기화가 불가능함
//	//const int& pa = 9; // const 키워드를 사용하면 리터럴로 초기화 하는 것이 허용
//
//	//cout << pa << " " << b << '\n';
//
//	cout << a << " " << b << '\n';
//	swap(&a, &b); // 포인터를 이용하면 return이 없는 void에서도 메모리를 이용하여 값을 바꿔줄 수 있다.
//	cout << a << " " << b << '\n';
//
//
//	cout << c << " " << d << '\n';
//	repswap(c, d); // 레퍼런스로도 가능하다. 포인터는 바뀔수있지만 레퍼런스는 바뀔염려가 없다.
//	cout << c << " " << d << '\n';
//	//pa = &a;
//	//cout << *pa << '\n';
//	//pa = &b;
//	return 0;
//}