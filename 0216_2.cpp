#include<stdio.h>
void main() {
	/*
	// [������]

	// [��� ������]
	// + - * /(INT, ��) %(MOD, ������)
	int a = 10;
	int b = 3;

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);

	// [���� ���� ������]
	a += b; // a = a + b;


	

	// [���� ������]��

	int a = 10;
	a = a + 1;
	printf("a = %d\n", a);
	a += 1;
	printf("a = %d\n", a);
	a++; // ��������������
	printf("a = %d\n", a);
	++a; // ��������������
	printf("a = %d\n", a);
	
	*/

	int a = 10;
	int b = a++; // ���Կ����� ���� ����!! b�� 10�� ���� ���Եǰ� a�� +1
	printf("a = %d b = %d\n", a, b); // a = 11, b = 10
	b = ++a; // ���������� ���� ����!! a�� +1 �ǰ� b = 12 ����
	printf("a = %d b = %d\n", a, b);// a = 12, b = 12
	// [�����ǥ]�ڡ١ڡ�


}