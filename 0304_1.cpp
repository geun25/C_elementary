#include<stdio.h>
#include<string.h>
void main() {

	char str1[10] = "apple";
	char str2[] = "apple";

	printf("str1�� ũ�� = %d\n", sizeof(str1)); // ��ü �迭�� ũ�� 10
	printf("str2�� ũ�� = %d\n", sizeof(str2)); // �ι��� ���� 6

	printf("���ڿ� = %s\n", str1);
	printf("���ڿ� = %s\n", str2);
	
	// ���ڰ� ����� ���� ���̸�ŭ�� for�� ����
	for (int i = 0; i < strlen(str1); i++) {
		printf("%c ", str1[i]);
	}
	printf("\nstr1�� ���� = %d\n", strlen(str1));



	char str[10];
	// str = &str[0]
	printf("���ڿ��Է�: ");
	scanf("%s", str); //�迭�� == &�迭[0]
	//gets(str); //���� ���
	printf("�Է��� ���ڿ��� [%s]�Դϴ�.\n", str);

}