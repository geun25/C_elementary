#include <stdio.h>
void main() {
	
	/*
	int i;

	for (i = 1; i < 6; i++) { // �ݺ��������� i ��� -> �ʱ�� int i;
		printf("%d\n", i);
	}
	// printf("���� i���� %d\n", i); �������� ����ϱ� ���� int�� �������� ����

	*/

	/*
	int n;
	int sum = 0;
	printf("�����Է�: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
		printf("%d ", i);
	}
	
	printf("������ %d", sum);
	*/


	/*
	int a, b;

	printf("���� 2�� �Է�: ");
	scanf("%d%d", &a, &b);
	if (a > b) { // ��ȯ �˰���
		int tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a; i <= b; i++) {
		printf("%d ", i);
	}
	
	*/

	
	char c;
	printf("�����Է�: ");
	scanf(" %c", &c);
	for (char al = 'a'; al <= c; al++) {
		printf("%c ", al);
	}
	printf("\n\n");
	
}