#include<stdio.h>
#include<string.h>
void main() {

	
	char name[20];
	printf("이름입력: ");
	scanf("%s", name);

	char data[20];
	// 문자열끼리의 대입연산을 대신처리하는 함수
	//data = name; XXX
	strcpy(data, name);
	printf("data에 저장된 문자열 = %s\n", data);

	// 문자열 뒤에 문자열을 추가시키는 함수
	strcat(data, "님");
	printf("%s\n", data);



	char a[20];
	printf("문자열입력: ");
	scanf("%s", a);

	strcpy(a, "apple"); // 어떤 문자열을 입력하더라도 a에는 "apple"이 대입
	printf("%s\n", a);
	strcat(a, "banana"); // 문자열 "apple"뒤에 문자열 "banana"를 추가
	printf("%s\n", a);
	
}