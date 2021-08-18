#include<stdio.h>
void main() {
	/*
	// [연산자]

	// [산술 연산자]
	// + - * /(INT, 몫) %(MOD, 나머지)
	int a = 10;
	int b = 3;

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);

	// [복합 대입 연산자]
	a += b; // a = a + b;


	

	// [증감 연산자]☆

	int a = 10;
	a = a + 1;
	printf("a = %d\n", a);
	a += 1;
	printf("a = %d\n", a);
	a++; // 후위증감연산자
	printf("a = %d\n", a);
	++a; // 전위증감연산자
	printf("a = %d\n", a);
	
	*/

	int a = 10;
	int b = a++; // 대입연산자 먼저 수행!! b에 10이 먼저 대입되고 a가 +1
	printf("a = %d b = %d\n", a, b); // a = 11, b = 10
	b = ++a; // 증감연산자 먼저 수행!! a가 +1 되고 b = 12 대입
	printf("a = %d b = %d\n", a, b);// a = 12, b = 12
	// [디버깅표]★☆★☆


}