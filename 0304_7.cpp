#include <stdio.h>
void printNum(int num) {
	num++;
	printf("���ڷ� ���� num�� %d�Դϴ�.\n", num);
}
void main() {
	printNum(10);
	// call by value(���� ���� ȣ��)

	int a = 11;
	printNum(a); // �Լ��� ����ǰ� �Ҹ�
	printf("���� a=%d\n", a);

	int num = 12;
	printNum(num);// �Լ��� ����ǰ� �Ҹ�
	printf("���� num=%d\n", num);
}