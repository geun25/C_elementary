#include<stdio.h>
void main() {
	/*
	//홀짝 판별
	int a;
	printf("정수 입력:");
	scanf("%d", &a);

	char res = a % 2 ? 'O' : 'E'; // 2로 나누었을때 나머지가 1이면 'O', 0이면 'E'
	printf("%d는 [%c]이다", a, res);

	*/

	int b, c, d;
	printf("정수 3개 입력:");
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