#include<stdio.h>
void swap(int* a, int* b) { // [������] * : ����Ű�� �ּҿ� �ִ� ��
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void main() {

	int a = 10, b = 20;

	printf("��ȯ��: %d %d\n", a, b);
	swap(&a, &b); // �ּҿ�����
	// call by pointer -> main���� �������� ������ �ټ� �ִ� ���
	printf("��ȯ��: %d %d\n", a, b);
}