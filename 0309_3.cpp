#include<stdio.h>
int f1() {
	int a;
	printf("��Ȳ1\n");
	printf("�����Է�: ");
	scanf("%d", &a);
	return a;
}
int f2(int num1, int num2) {
	printf("��Ȳ2\n");
	return num1 + num2; // return �� ��ȯ �� �Լ� ��� ����!!!
	printf("��Ȳ3\n"); // dead code(����X)
}

int func(int num1, int num2) {
	int result=1;
	for (int i = 0; i < num2; i++) {
		result *= num1;
	}
	return result;
}

int change(int a) {
	if (a < 0) {
		a *= (-1);
	}
	return a;
}

void main() {
	/*
	int a = f1();
	int b = f1();

	printf("��Ȳ4\n");
	printf("a+b= %d�Դϴ�.\n", f2(a, b));
	printf("��Ȳ5\n");
	*/

	int a, b;
	printf("�����Է�: ");
	scanf("%d", &a);
	a = change(a); // �Է°��� ������� ��ȣ�� �ٲپ� ��ȯ
	printf("�����Է�: ");
	scanf("%d", &b);
	b = change(b);// �Է°��� ������� ��ȣ�� �ٲپ� ��ȯ

	printf("%d�� %d���� %d�Դϴ�.\n", a, b, func(a, b));
}