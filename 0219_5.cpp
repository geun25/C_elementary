#include <stdio.h>
void main() {
	/*

	int a, b;
	printf("정수 2개 입력: ");
	scanf("%d%d", &a, &b);

	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	int i = a;
	int sum = 0;
	while (i <= b) {
		sum += i;
		i++;
	}
	printf("%d에서 %d까지 총합은 %d입니다.\n", a, b, sum);
	*/

	
	int a;
	printf("정수 1개 입력: ");
	scanf("%d", &a);

	int i = 0;
	while (i <= a) {
		// => 반복문의 조건식을 담당하는 변수값의 변화는 중요!
		if (i % 2) {
			printf("%d ", i);
		}
		i++;
	}

	
	
	/*
	char c;
	printf("문자 1개 입력: ");
	scanf("%c", &c);

	char i = 'a';
	while (i <= c) {
			printf("%c ", i);
			i++;
	}
	*/
	
}