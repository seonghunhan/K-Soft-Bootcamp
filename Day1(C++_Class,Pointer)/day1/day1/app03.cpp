#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char* reverse(char* o) { //�Ϲ� ������ �ּҸ� �������ϱ� �Ķ���͸� �����ͷ� �޾ƾ��Ѵ�!
// return�� ���� void�δ� �Ұ���

	//char r[100]; //���⼭ �̷��� �����ϸ� �Լ��� ������ r�� �������Ƿ� ������ �ϴ��� ���̰��� ȣ��ȴ�

	char* r = new char[strlen(o) + 1]; // int�� 4����Ʈ char�� 1����Ʈ�ϱ� char�� �ϱ�

	for (int i = 0; i < strlen(o); i++)
		r[i] = o[strlen(o) -i -1]; //�����ʹ� arr�� ����ȣȯ �԰���

	r[strlen(o)] = 0;

	// cout << r << '\n';

	// return &r[0];
	return r; // �迭���� 0��° �迭������ �ּҸ� ������
	// �ٵ� r�� char�̴ϱ� cout << r �ϸ� ���� �����µ� int�� ���� �ּҰ��� ��µȴ�!!!
	// �׷��� *(r + 1)�̷������� �ؾ��Ѵ�!!	

}
//
//int main() {
//	char orig[] = "inha";
//	//char orig[] = {'i', 'n', 'h', 'a', '\0'}; (NULL = 0 = '\0')
//	//char orig[] = {'i', 'n', 'h', 'a', NULL};
//	//char orig[] = {'i', 'n', 'h', 'a', 0}; �ƽ�Ű�ڵ忡�� NULL�� �ش��ϴ� ���� 0�̹Ƿ� ��ĥ������!
//	//char orig[] = { 'i', 'n', 'h', 'a' }; //cout�� �ι��ڰ� ���Ë����� ����ϴµ� �������� �ٸ� �޸� ħ��
//	
//	char* copy = reverse(orig); // reverse(&orig[0]) orig�� 0���ε��� �ּҶ�� ����
//
//	cout << orig << '\n';
//	cout << copy << '\n';
//	delete[] copy; //�����ʹ� �׾ �ּҸ� ����⿡ �̰� ���ϸ� ahni�� �ι���µȴ�. , ���⼭�� copy�� ����Ű�� �ּ��� ���� ����°�
//	copy = nullptr; // �̰� �����ؾ� �޸� �ּҵ� ���ִ°�
//
//	return 0;
//}