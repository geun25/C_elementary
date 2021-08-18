// 저장공간. 기억영역. Storage Class
#include <stdio.h>
void func() {
	int a = 100;
	printf("func() 호출됨! a= %d\n", a);
	//printf("main() 함수입니다. num = %d\n", num); XXX
}
void main() {

	int num = 10; // 지역변수.local
	// 1. 생명주기(라이프 사이클)
	// 본인이 존재하는 함수와 동일==함수소멸할때 함께 소멸됨
	// 2. 사용가능한 구간
	// 본인이 존재하는 함수내에서만 사용가능!!!

	func();
	printf("main() 함수입니다. num = %d\n", num);
}