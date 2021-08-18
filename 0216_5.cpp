#include<stdio.h>
void main() {
	
	//1. 정수를 2개입력받아서, 몫과 나머지 출력
	//2. 정수를 3개입력받아서, 가장 큰 정수를 찾아 출력

	/*
	int a, b;
	printf("정수1입력:");
	scanf("%d%d", &a, &b); 

	printf("몫: %d, 나머지: %d", a / b, a % b);
	*/

	double a, b, c;
	printf("실수 3개 입력:");
	scanf("%lf%lf%lf", &a, &b, &c);

	// int big = a < b && a < c ? a : b < a && b < c ? b : c;

	double min = a < b ? a : b;
	min = min < c ? min : c;
	printf("가장 작은 실수는 %.2lf입니다\n", min);

}