#include<stdio.h>
void main() {
	/*
	//Ȧ¦ �Ǻ�
	int a;
	printf("���� �Է�:");
	scanf("%d", &a);

	char res = a % 2 ? 'O' : 'E'; // 2�� ���������� �������� 1�̸� 'O', 0�̸� 'E'
	printf("%d�� [%c]�̴�", a, res);

	*/

	int b, c, d;
	printf("���� 3�� �Է�:");
	scanf("%d%d%d", &b, &c, &d);
	int sum = b + c + d;
	double avg = sum / 3.0;

	/*
	int sum = 0;
	sum += b;
	sum += c;
	sum += d;
	*/

	printf("sum = %d avg = %.2lf", sum, avg);
}