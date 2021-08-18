#include<stdio.h>
void swap(int* a, int* b) { // [포인터] * : 가리키는 주소에 있는 값
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void main() {

	int a = 10, b = 20;

	printf("교환전: %d %d\n", a, b);
	swap(&a, &b); // 주소연산자
	// call by pointer -> main문에 실질적인 영향을 줄수 있는 방식
	printf("교환후: %d %d\n", a, b);
}