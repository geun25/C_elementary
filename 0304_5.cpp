#include<stdio.h>
#include<string.h>
void main() {

	// ���ڿ� �� �Լ�
	
	/*
	printf("apple vs banana : %d\n", strcmp("okay", "okax")); // -1
	printf("banana vs apple : %d\n", strcmp("banana", "apple")); // 1
	printf("apple vs apple : %d\n", strcmp("apple", "apple")); // 0
	*/
	
	/*
	char str[20];
	while (1) {
		printf("�Է�: ");
		scanf("%s", str);
		if (!strcmp(str, "�׸�")) { // str == "�׸�" XXX
			break;
		}
	}

	*/


	char str[20];
	printf("�Է�: ");
	scanf("%s", str);
	
	for (char c = 'a'; c <= 'z'; c++) {
		int cnt = 0;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == c) { // a���� z���� ���� ���ڰ� ������ ���� ����
				cnt++;
			}
		}
		if (cnt == 0) {
			continue;
		}

		printf("%c : %d\n", c, cnt);
	}
	
}