#include<stdio.h> //# 전처리기어
void main() {
	printf("Hello!\n");
	printf("가즈아!\n");

	// [변수]
	// 1.자료형(data type) 2. 공간할당->메모리주소(랜덤) 3. 변수명(식별자)
	// 정수 int 4byte %d
	// 실수 double 8byte %lf
	// 문자 char %c

	int i = 10;
	double d = 3.14;
	char c = 'a';

	printf("i = %d입니다.\n", i);
	printf("d = %.8lf입니다.\n", d);
	printf("c = %c입니다.\n", c);
}