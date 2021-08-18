#include<stdio.h>
#include<string.h>
void main() {

	/*
	char str[10];

	printf("문자열입력: ");
	scanf("%s", str);

	int cnt = 0;
	 
	for (int i = 0; i < strlen(str); i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			cnt++; //for문으로 문자열의 길이만큼 반복하면서 조건에 맞는경우 cnt 증가
		}
	}
	printf("소문자는 %d개있습니다.\n", cnt);

	*/

	/*
	char str[10];
	char c;
	printf("문자열입력: ");
	scanf("%s", str);

	printf("문자입력: ");
	scanf(" %c", &c);

	int cnt = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == c) {
			cnt++;
		}
	}
	printf("%s에는 %c가 %d개 있습니다\n", str, c, cnt);

	*/

	
	char str[10];

	printf("문자열입력: ");
	scanf("%s", str);

	printf("변경전: %s\n", str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
		else {
			str[i] -= 32;
		}
	}
	printf("변경후: %s\n", str);

}