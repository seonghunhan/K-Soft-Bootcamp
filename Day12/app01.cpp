//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void hanoi(int n, int start, int work, int target) { // 1�� ������ C
//	if (n == 1)
//		printf(" %c���� ���� %d��(��) %c�� �ű� \n", start, n, target);
//	else {
//		hanoi(n - 1, start, target, work);
//		printf(" %c���� ���� %d��(��) %c�� �ű� \n", start, n, target);
//		hanoi(n - 1, work, start, target);
//	}
//}
//void main() {
//	hanoi(3, 'A', 'B', 'C');
//	getchar();
//}
//
//
//
////#define _CRT_SECURE_NO_WARNINGS
////#include <iostream>
////#include <cassert>
////using namespace std;
////
////long int fibo_recursion(unsigned int n) {
////	if (n == 0 || n == 1)
////		return n;
////	else
////		return fibo_recursion(n - 1) + fibo_recursion(n - 2);
////}
////
////long int fibo_iteration(unsigned int n) {
////	if(n < 0) assert(false);
////	if (n == 0 || n == 1) return n;
////	else {
////		unsigned int r = 0;
////		unsigned int temp1 = 1;
////		unsigned int temp2 = 0;
////		for (unsigned int i = 2; i <= n; i++) {
////			r = temp1 + temp2;
////			temp2 = temp1;
////			temp1 = r;
////		}
////		return r;
////	}	
////}
////
////int main() {
////	unsigned int n, result;
////	printf("\n ������ �Է��ϼ��� : ");
////	//scanf("%d", &n);
////	cin >> n;
////	//result = fibo_iteration(n);
////	result = fibo_recursion(n);
////	printf("\n\n %d�� �Ǻ���ġ ���� %ld�Դϴ�.\n", n, result);
////	return 0;
////}
////
