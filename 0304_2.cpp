#include<stdio.h>
#include<string.h>
void main() {

	/*
	char str[10];

	printf("���ڿ��Է�: ");
	scanf("%s", str);

	int cnt = 0;
	 
	for (int i = 0; i < strlen(str); i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			cnt++; //for������ ���ڿ��� ���̸�ŭ �ݺ��ϸ鼭 ���ǿ� �´°�� cnt ����
		}
	}
	printf("�ҹ��ڴ� %d���ֽ��ϴ�.\n", cnt);

	*/

	/*
	char str[10];
	char c;
	printf("���ڿ��Է�: ");
	scanf("%s", str);

	printf("�����Է�: ");
	scanf(" %c", &c);

	int cnt = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == c) {
			cnt++;
		}
	}
	printf("%s���� %c�� %d�� �ֽ��ϴ�\n", str, c, cnt);

	*/

	
	char str[10];

	printf("���ڿ��Է�: ");
	scanf("%s", str);

	printf("������: %s\n", str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
		else {
			str[i] -= 32;
		}
	}
	printf("������: %s\n", str);

}