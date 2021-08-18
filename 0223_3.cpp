#include <stdio.h>
void main() {
	
	/*
	int i;

	for (i = 1; i < 6; i++) { // 반복문에서만 i 사용 -> 초기식 int i;
		printf("%d\n", i);
	}
	// printf("최종 i값은 %d\n", i); 최종값을 출력하기 위해 int값 전역변수 설정

	*/

	/*
	int n;
	int sum = 0;
	printf("정수입력: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
		printf("%d ", i);
	}
	
	printf("총합은 %d", sum);
	*/


	/*
	int a, b;

	printf("정수 2개 입력: ");
	scanf("%d%d", &a, &b);
	if (a > b) { // 교환 알고리즘
		int tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a; i <= b; i++) {
		printf("%d ", i);
	}
	
	*/

	
	char c;
	printf("문자입력: ");
	scanf(" %c", &c);
	for (char al = 'a'; al <= c; al++) {
		printf("%c ", al);
	}
	printf("\n\n");
	
}