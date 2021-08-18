#include<stdio.h>
void main() {

	// [삼항연산자, 조건연산자]
	//조건식? T:F

	/*
	int a, b;
	printf("정수1입력: ");
	scanf("%d", &a); // & : 주소연산자
	printf("정수2입력: ");
	scanf("%d", &b);

	int big = a > b ? a : b;
	int min = a < b ? a : b;
	printf("%d와 %d중 더 큰수는 %d입니다.\n더 작은수는 %d입니다", a, b, big, min);
	*/

	int score;
	printf("점수입력:");
	scanf("%d", &score);

	char grade = score >= 50 ? 'P' : 'F';
	printf("점수는 %d, 학점은 [%c]입니다.", score, grade);

}