#include <stdio.h>
int global = 123; // ��������
// �ڵ����� �ʱ�ȭ�� �����(0����)

int arr[] = { 3,1,5,2,4,10,15,13};
int length = sizeof(arr) / sizeof(arr[0]);

void f1() {
	printf("f1ȣ�� global = %d\n", global);
}
void f2() {
	printf("f2ȣ�� global = %d\n", global);
}
void findMax() {
	int max = arr[0];
	for (int i = 1; i < length; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("����ū �����ʹ� %d�Դϴ�.\n", max);

}
void main() {
	/*
	printf("�������� global = %d\n", global);
	f1();
	f2();
	*/

	for (int i = 0; i < length; i++) {
		printf("%d\n", arr[i]);
	}
	findMax();
}