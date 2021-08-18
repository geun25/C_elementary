#include<stdio.h>
#include<string.h>
void main() {

	// 문자열 비교 함수
	
	/*
	printf("apple vs banana : %d\n", strcmp("okay", "okax")); // -1
	printf("banana vs apple : %d\n", strcmp("banana", "apple")); // 1
	printf("apple vs apple : %d\n", strcmp("apple", "apple")); // 0
	*/
	
	/*
	char str[20];
	while (1) {
		printf("입력: ");
		scanf("%s", str);
		if (!strcmp(str, "그만")) { // str == "그만" XXX
			break;
		}
	}

	*/


	char str[20];
	printf("입력: ");
	scanf("%s", str);
	
	for (char c = 'a'; c <= 'z'; c++) {
		int cnt = 0;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == c) { // a부터 z까지 같은 문자가 있으면 개수 증가
				cnt++;
			}
		}
		if (cnt == 0) {
			continue;
		}

		printf("%c : %d\n", c, cnt);
	}
	
}