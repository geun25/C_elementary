#include <stdio.h>
void main() {

	/*
	
	int i;
	printf("정수 입력:");
	scanf("%d", &i);

	char c;
	printf("단일문자 입력:");
	scanf(" %c", &c); // scanf()에서 %c입력을 할때, 앞에 한칸 띄어쓰기!

	printf("c = %c, i = %d\n\n", c, i);

	*/

	char c;
	printf("문자입력:");
	scanf("%c", &c);

	printf("%c의 아스키코드값은 [%d]입니다", c, c);
}