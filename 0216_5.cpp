#include<stdio.h>
void main() {
	
	//1. ������ 2���Է¹޾Ƽ�, ��� ������ ���
	//2. ������ 3���Է¹޾Ƽ�, ���� ū ������ ã�� ���

	/*
	int a, b;
	printf("����1�Է�:");
	scanf("%d%d", &a, &b); 

	printf("��: %d, ������: %d", a / b, a % b);
	*/

	double a, b, c;
	printf("�Ǽ� 3�� �Է�:");
	scanf("%lf%lf%lf", &a, &b, &c);

	// int big = a < b && a < c ? a : b < a && b < c ? b : c;

	double min = a < b ? a : b;
	min = min < c ? min : c;
	printf("���� ���� �Ǽ��� %.2lf�Դϴ�\n", min);

}