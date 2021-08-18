#include <stdio.h>
// 사용자 정의 함수
void hello() { // 함수 선언, 정의
	printf("안녕하세요!\n");
}
void main() { // 프로그램 실행 == main()을 동작하겠다!
	// 함수는 main()에서 [호출]해야만 "동작"함

	hello();
	hello();
	hello();

	//함수는 동시 실행이 되지는 않음.
	// hello() 함수 호출시 그 함수가 함수 주도권

	//함수호출(실행) => 함수소멸 => main함수 소멸(프로그램 종료) 
}