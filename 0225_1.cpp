#include <stdio.h>
void main() {

	/*
	int stuArr[3] = { 50, 60, 70 };

	for (int i = 0; i < 3; i++) {
		printf("�л� %d�� ������ %d\n", i+1, stuArr[i]);

	}
	*/

	int arr1[5] = { 10,20,30,40,50 };
	int arr2[3];
	arr2[0] = 5;
	arr2[1] = 15;

	int arr3[3];
	for (int i = 0; i < 3; i++) {
		printf("%d��° �����Է�: ", i + 1);
		scanf("%d", &arr3[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d��° �����ʹ� %d�Դϴ�.\n", i + 1, arr3[i]);
	}
}