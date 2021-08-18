#include <stdio.h>
/*
int func() {
	int b = 10;
	return b; // 함수를 즉시 종료시키며, 
	// 오른편의 값을 해당함수를 호출한 위치로 전달!!!\
	// return값은 하나만 가능
}
*/
int func(int a) {
	int b = 10;
	return a+b; 
}
void main() {
	int c = func(-10); // 변수 c를 함수 func()의 리턴값으로 초기화

	printf("리턴값은 %d입니다.\n", c);
}