#include<stdio.h>
int f1() {
	int a;
	printf("상황1\n");
	printf("정수입력: ");
	scanf("%d", &a);
	return a;
}
int f2(int num1, int num2) {
	printf("상황2\n");
	return num1 + num2; // return 값 반환 후 함수 즉시 종료!!!
	printf("상황3\n"); // dead code(실행X)
}

int func(int num1, int num2) {
	int result=1;
	for (int i = 0; i < num2; i++) {
		result *= num1;
	}
	return result;
}

int change(int a) {
	if (a < 0) {
		a *= (-1);
	}
	return a;
}

void main() {
	/*
	int a = f1();
	int b = f1();

	printf("상황4\n");
	printf("a+b= %d입니다.\n", f2(a, b));
	printf("상황5\n");
	*/

	int a, b;
	printf("정수입력: ");
	scanf("%d", &a);
	a = change(a); // 입력값이 음수라면 부호를 바꾸어 반환
	printf("정수입력: ");
	scanf("%d", &b);
	b = change(b);// 입력값이 음수라면 부호를 바꾸어 반환

	printf("%d의 %d승은 %d입니다.\n", a, b, func(a, b));
}