//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//typedef struct ListNode {
//	char data[4];
//	struct ListNode* link;
//} listNode;
//typedef struct {
//	listNode* head;
//} linkedList_h;
//linkedList_h* createLinkedList_h(void) {
//	linkedList_h* L;
//	L = (linkedList_h*)malloc(sizeof(linkedList_h));
//	//printf("%x\n", L);
//	L->head = NULL;		// ���� ����Ʈ�̹Ƿ� NULL�� ����
//	return L;
//}
//// ���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
//void freeLinkedList_h(linkedList_h* L) {
//	listNode* p;
//	while (L->head != NULL) {
//		p = L->head;
//		L->head = L->head->link;
//		free(p);
//		p = NULL;
//	}
//}
//// ���� ����Ʈ�� ������� ����ϴ� ����
//void printList(linkedList_h* L) {
//	listNode* p;
//	printf("L = (");
//	p = L->head;
//	while (p != NULL) {
//		printf("%s", p->data);
//		p = p->link;
//		if (p != NULL) printf(", ");
//	}
//	printf(") \n");
//}
//// ù ��° ���� �����ϴ� ����
//void insertFirstNode(linkedList_h* L, char* x) {
//	listNode* newNode;
//	newNode = (listNode*)malloc(sizeof(listNode));	// ������ �� ��� �Ҵ�
//	strcpy(newNode->data, x);						// �� ����� ������ �ʵ忡 x ����  
//	newNode->link = L->head;
//	//newNode->link = NULL;
//	L->head = newNode;
//}
//// ��带 pre �ڿ� �����ϴ� ����
//void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
//	listNode* newNode;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	if (L->head == NULL) {				// ���� ����Ʈ�� ���
//		newNode->link = NULL;		   // �� ��带 ù ��°���� ������ ���� ����
//		L->head = newNode;
//	}
//	else if (pre == NULL) {			// ���� ��ġ�� �����ϴ� ������ pre�� NULL�� ���
//		newNode->link = L->head;
//		L->head = newNode;			// �� ��带 ù ��° ���� ����
//	}
//	else {
//		newNode->link = pre->link;	// ������ pre�� ��� �ڿ� �� ��� ����
//		pre->link = newNode;
//	}
//}
//// ������ ���� �����ϴ� ���� 
//void insertLastNode(linkedList_h* L, char* x) {
//	listNode* newNode;
//	listNode* temp;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	newNode->link = NULL;
//	if (L->head == NULL) {		// ���� ����Ʈ�� ������ ���					
//		L->head = newNode;		// �� ��带 ����Ʈ�� ���� ���� ����
//		return;
//	}
//	// ���� ����Ʈ�� ������ �ƴ� ��� 	
//	temp = L->head;
//	while (temp->link != NULL) temp = temp->link;	// ���� ����Ʈ�� ������ ��带 ã��
//	temp->link = newNode;							// �� ��带 ������ ���(temp)�� ���� ���� ���� 
//}
//int main(void) {
//	linkedList_h* L;
//	L = createLinkedList_h();
//	printf("(1) ���� ����Ʈ �����ϱ�! \n");
//	printList(L);
//
//	printf("\n(2) ����Ʈ�� [��] ��� �����ϱ�! \n");
//	insertFirstNode(L, "��");
//	printList(L);
//
//	printf("\n(3) ����Ʈ �������� [��] ��� �����ϱ�! \n");
//	insertLastNode(L, "��");
//	printList(L);
//
//	//printf("\n(4) ����Ʈ ù ��°�� [��] ��� �����ϱ�! \n");
//	//insertFirstNode(L, "��");
//	//printList(L);
//
//	//printf("\n(5) ����Ʈ ������ �����Ͽ� ���� ����Ʈ�� �����! \n");
//	//freeLinkedList_h(L);
//	//printList(L);
//
//	getchar();  return 0;
//}


//#include <stdio.h>
//#define MAX(a,b) ((a>b)?a:b)
//#define MAX_DEGREE 50
//
//typedef struct {             // ����ü polynomial ����
//	int degree;              // ���׽��� ������ ������ ����
//	float coef[MAX_DEGREE];  // ���׽��� �� ���� ����� ������ 1���� �迭
//} polynomial;
//polynomial addPoly(polynomial A, polynomial B) {
//	polynomial C;   // ���׽� ������ ��� ���׽��� ������ polynomial ����ü ���� ����
//	int A_index = 0, B_index = 0, C_index = 0;
//	int A_degree = A.degree, B_degree = B.degree;
//	C.degree = MAX(A.degree, B.degree);
//
//	while (A_index <= A.degree && B_index <= B.degree) {
//		if (A_degree > B_degree) {
//			C.coef[C_index++] = A.coef[A_index++];
//			A_degree--;
//		}
//		else if (A_degree == B_degree) {
//			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
//			A_degree--;
//			B_degree--;
//		}
//		else {
//			C.coef[C_index++] = B.coef[B_index++];
//			B_degree--;
//		}
//	}
//	return C;    // ���׽� ������ ��� ���׽� C�� ��ȯ
//}
//void printPoly(polynomial P) {
//	int i, degree;
//	degree = P.degree;
//
//	for (i = 0; i <= P.degree; i++) {
//		printf("%3.0fx^%d", P.coef[i], degree--);
//		if (i < P.degree) printf(" +");
//	}
//	printf("\n");
//}
//int main(void) {
//	polynomial A = { 4,{ 2,0,3,0,7 } };    // ���׽� A�� �ʱ�ȭ
//	polynomial B = { 2,{ 2,0,6 } };  // ���׽� B�� �ʱ�ȭ
//
//	//polynomial A = { 3,{ 4,3,5,0 } };    // ���׽� A�� �ʱ�ȭ
//	//polynomial B = { 4,{ 3,1,0,2,1 } };  // ���׽� B�� �ʱ�ȭ
//	polynomial C;
//
//	C = addPoly(A, B);   // ���׽� A, B�� ���� ������ �����ϱ� ���� addPoly �Լ� ȣ�� 
//
//	printf("\n A(x) =");  printPoly(A);   // ���׽� A ���
//	printf("\n B(x) =");  printPoly(B);   // ���׽� B ���
//	printf("\n C(x) =");  printPoly(C);   // ���׽� C ���
//
//	getchar();  return 0;
//}
//
////#include <stdio.h>
////typedef struct { // ��� ���Ҹ� �����ϱ� ���� ����ü term ����
////	int row;
////	int col;
////	int value;
////} term;
////
////void smTranspose(term a[], term b[]) {
////	int m, n, v, i, j, p;
////	m = a[0].row;	// ��� ��� a�� �� ��
////	n = a[0].col;	// ��� ��� a�� �� ��
////	v = a[0].value; // ��� ��� a���� 0�� �ƴ� ���� ��
////	b[0].row = n;	// ��ġ ��� b�� �� ��
////	b[0].col = m;	// ��ġ ��� b�� �� ��
////	b[0].value = v;	// ��ġ ��� b�� ���� ��
////	if (v > 0) {	// 0�� �ƴ� ���Ұ� �ִ� ��쿡�� ��ġ ���� ����
////		p = 1;
////		for (i = 0; i < n; i++)			// ��� ��� a�� ������ ��ġ �ݺ� ����
////			for (j = 1; j <= v; j++)	// 0�� �ƴ� ���� ���� ���ؼ��� �ݺ� ����
////				if (a[j].col == i) {	// ������ ���� ���ϴ� ���Ұ� ������ b[]�� ����
////					b[p].row = a[j].col;
////					b[p].col = a[j].row;
////					b[p].value = a[j].value;
////					p++;
////				}
////	}
////}
////
////int main(void) {
////	term a[] = { {8,7,10}, 
////		         {0,2,2}, 
////		         {0,6,12}, 
////		         {1,4,7}, 
////		         {2,0,23}, 
////		         {3,3,31}, 
////		         {4,1,14},
////				 {4,5,25}, 
////		         {5,6,6}, 
////		         {6,0,52}, 
////		         {7,4,11} 
////	};
////	term b[sizeof(a) / sizeof(a[0])]; //�迭 ���� ���� ���
////	int i;
////
////	printf("<<��� ��� a>>");
////	for (i = 0; i <= a[0].value; i++)
////		printf("\n[%3d, %3d, %3d ] ", a[i].row, a[i].col, a[i].value);
////
////	smTranspose(a, b);
////
////	printf("\n\n<<��� ��� b>>");
////	for (i = 0; i <= b[0].value; i++)
////		printf("\n[%3d, %3d, %3d ] ", b[i].row, b[i].col, b[i].value);
////
////	getchar();  return 0;
////}
////
//////#include <stdio.h>
//////
//////int main(void) {
//////	int list[10] = { 65, 97, 50, 90, 100, 70 };
//////
//////	for (int i = 0; i < 10; i++) 
//////		printf("%3o ", list[i]);
//////
//////	return 0;
//////}