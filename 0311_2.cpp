// �������. ��￵��. Storage Class
#include <stdio.h>
void func() {
	int a = 100;
	printf("func() ȣ���! a= %d\n", a);
	//printf("main() �Լ��Դϴ�. num = %d\n", num); XXX
}
void main() {

	int num = 10; // ��������.local
	// 1. �����ֱ�(������ ����Ŭ)
	// ������ �����ϴ� �Լ��� ����==�Լ��Ҹ��Ҷ� �Բ� �Ҹ��
	// 2. ��밡���� ����
	// ������ �����ϴ� �Լ��������� ��밡��!!!

	func();
	printf("main() �Լ��Դϴ�. num = %d\n", num);
}