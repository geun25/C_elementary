#include <stdio.h>
/*
int func() {
	int b = 10;
	return b; // �Լ��� ��� �����Ű��, 
	// �������� ���� �ش��Լ��� ȣ���� ��ġ�� ����!!!\
	// return���� �ϳ��� ����
}
*/
int func(int a) {
	int b = 10;
	return a+b; 
}
void main() {
	int c = func(-10); // ���� c�� �Լ� func()�� ���ϰ����� �ʱ�ȭ

	printf("���ϰ��� %d�Դϴ�.\n", c);
}