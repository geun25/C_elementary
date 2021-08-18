#include<stdio.h>
#include<string.h>
void main() {

	char str1[10] = "apple";
	char str2[] = "apple";

	printf("str1의 크기 = %d\n", sizeof(str1)); // 전체 배열의 크기 10
	printf("str2의 크기 = %d\n", sizeof(str2)); // 널문자 포함 6

	printf("문자열 = %s\n", str1);
	printf("문자열 = %s\n", str2);
	
	// 문자가 저장된 실제 길이만큼만 for문 수행
	for (int i = 0; i < strlen(str1); i++) {
		printf("%c ", str1[i]);
	}
	printf("\nstr1의 길이 = %d\n", strlen(str1));



	char str[10];
	// str = &str[0]
	printf("문자열입력: ");
	scanf("%s", str); //배열명 == &배열[0]
	//gets(str); //띄어쓰기 허용
	printf("입력한 문자열은 [%s]입니다.\n", str);

}