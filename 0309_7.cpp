#include<stdio.h>
int show(int num) { 
	printf("%d ", num % 10);
	if (num / 10 != 0) {
		show(num / 10);
	}
}
void main() {
	show(1234); // 4 3 2 1 출력
}

/*
8번, main()에서
show(1234)를 호출

2번라인 num=1234
4 출력
show(123)를 호출

2번라인 num=123
3 출력
show(12)를 호출

2번라인 num=12
2 출력
show(1)를 호출

2번라인 num=1
1출력
if(0!=0) -> F => 재귀호출 종료
: [종료조건]의 필요성
*/