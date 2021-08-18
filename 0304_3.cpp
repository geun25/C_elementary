#include<stdio.h>
#include<string.h>
void main() {

	char str[10];

	printf("문자열입력: ");
	scanf("%s", str);

	int data;
	printf("이동할 칸입력: ");
	scanf("%d", &data);
	printf("이동전: %s\n", str);

	for (int i = 0; i < strlen(str); i++) {
		str[i] += data;
		if (str[i] > 'z') {
			str[i] -= 26;
		}
	}
	printf("이동후: %s\n", str);
}