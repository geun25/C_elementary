#include<stdio.h>
#include<string.h>
void main() {

	
	char name[20];
	printf("�̸��Է�: ");
	scanf("%s", name);

	char data[20];
	// ���ڿ������� ���Կ����� ���ó���ϴ� �Լ�
	//data = name; XXX
	strcpy(data, name);
	printf("data�� ����� ���ڿ� = %s\n", data);

	// ���ڿ� �ڿ� ���ڿ��� �߰���Ű�� �Լ�
	strcat(data, "��");
	printf("%s\n", data);



	char a[20];
	printf("���ڿ��Է�: ");
	scanf("%s", a);

	strcpy(a, "apple"); // � ���ڿ��� �Է��ϴ��� a���� "apple"�� ����
	printf("%s\n", a);
	strcat(a, "banana"); // ���ڿ� "apple"�ڿ� ���ڿ� "banana"�� �߰�
	printf("%s\n", a);
	
}