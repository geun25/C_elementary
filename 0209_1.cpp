#include<stdio.h> //# ��ó�����
void main() {
	printf("Hello!\n");
	printf("�����!\n");

	// [����]
	// 1.�ڷ���(data type) 2. �����Ҵ�->�޸��ּ�(����) 3. ������(�ĺ���)
	// ���� int 4byte %d
	// �Ǽ� double 8byte %lf
	// ���� char %c

	int i = 10;
	double d = 3.14;
	char c = 'a';

	printf("i = %d�Դϴ�.\n", i);
	printf("d = %.8lf�Դϴ�.\n", d);
	printf("c = %c�Դϴ�.\n", c);
}