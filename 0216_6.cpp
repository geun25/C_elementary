#include <stdio.h>
void main() {

	/*
	// [����ȯ], ĳ����

	int score1 = 10;
	int score2 = 11;
	int score3 = 11;

	printf("average is %lf.\n", (score1 + score2 + score3) / 3.0);

	int sum = score1 + score2 + score3;
	//double avg = sum *1.0/ 3; // �ڵ� ����ȯ
	//int i = (int)3.14; // ����� ����ȯ

	printf("average is %lf.\n", sum*1.0/3);

	

	// [�ƽ�Ű�ڵ�]
	char c = 'A';
	c++;
	printf("c = %c  %d\n", c, c);

	int i = 97;
	printf("i = %d %c\n", i, i);
	*/

	int a, b;
	printf("����1 �����Է�:");
	scanf("%d", &a);
	printf("����2 �����Է�:");
	scanf("%d", &b);

	printf("����: %d, ���: %.2lf\n", a + b, (a + b) / 2.0);
}