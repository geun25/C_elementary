// 재귀함수 == 순환호출 == 순환함수
// : 자기자신을 해결하기위해 자신을 한번더 호출하는 함수
// ex) fac(n) = n x fac(n-1)
#include<stdio.h>
int fac(int n) { // 무한루프 -> [종료조건]을 반드시 필요로 함!!!
	if (n == 1) { // [종료조건]
		return 1;
	}
	return n * fac(n - 1);
}
void main() {
	printf("%d", fac(5));
}