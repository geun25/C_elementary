#include<stdio.h>
void main() {

	// [���׿�����, ���ǿ�����]
	//���ǽ�? T:F

	/*
	int a, b;
	printf("����1�Է�: ");
	scanf("%d", &a); // & : �ּҿ�����
	printf("����2�Է�: ");
	scanf("%d", &b);

	int big = a > b ? a : b;
	int min = a < b ? a : b;
	printf("%d�� %d�� �� ū���� %d�Դϴ�.\n�� �������� %d�Դϴ�", a, b, big, min);
	*/

	int score;
	printf("�����Է�:");
	scanf("%d", &score);

	char grade = score >= 50 ? 'P' : 'F';
	printf("������ %d, ������ [%c]�Դϴ�.", score, grade);

}