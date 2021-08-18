#include <stdio.h>
void printNum(int num) {
	num++;
	printf("인자로 받은 num은 %d입니다.\n", num);
}
void main() {
	printNum(10);
	// call by value(값에 의한 호출)

	int a = 11;
	printNum(a); // 함수는 실행되고 소멸
	printf("현재 a=%d\n", a);

	int num = 12;
	printNum(num);// 함수는 실행되고 소멸
	printf("현재 num=%d\n", num);
}