#include <stdio.h>
void main() {
	/*

	int a, b;
	printf("���� 2�� �Է�: ");
	scanf("%d%d", &a, &b);

	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	int i = a;
	int sum = 0;
	while (i <= b) {
		sum += i;
		i++;
	}
	printf("%d���� %d���� ������ %d�Դϴ�.\n", a, b, sum);
	*/

	
	int a;
	printf("���� 1�� �Է�: ");
	scanf("%d", &a);

	int i = 0;
	while (i <= a) {
		// => �ݺ����� ���ǽ��� ����ϴ� �������� ��ȭ�� �߿�!
		if (i % 2) {
			printf("%d ", i);
		}
		i++;
	}

	
	
	/*
	char c;
	printf("���� 1�� �Է�: ");
	scanf("%c", &c);

	char i = 'a';
	while (i <= c) {
			printf("%c ", i);
			i++;
	}
	*/
	
}