#include<stdio.h>
#include<string.h>
void main() {

	char str[10];

	printf("���ڿ��Է�: ");
	scanf("%s", str);

	int data;
	printf("�̵��� ĭ�Է�: ");
	scanf("%d", &data);
	printf("�̵���: %s\n", str);

	for (int i = 0; i < strlen(str); i++) {
		str[i] += data;
		if (str[i] > 'z') {
			str[i] -= 26;
		}
	}
	printf("�̵���: %s\n", str);
}