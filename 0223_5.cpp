#include <stdio.h>
void main() {

	/*
	int num;
	printf("�����Է�: ");
	scanf("%d", &num);
	for (int a = 1; a <= num; a++) {
		for (int i = 1; i <= a; i++) {
			// 5 x 5 == 25��
			printf("*");
		}
		printf("\n");
		// 5��
	}
	*/

	/*
	for(int a = 1; a <= 5; a++) {
		// 5��
		for (int i = 1; i <= a; i++) {
			// 5 x 5 == 25��
			printf("*");
		}
		printf("\n");
		// 5��

		// * a = 1, i = 1
		// ** a = 2, i = 1   a = 2, i = 2
		// *** a = 3, i = 1   a = 3, i = 2   a = 3, i = 3
	}

	*/

	/*
	// ������
	for (int a = 2; a <= 9; a++ ) {
		for (int i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", a, i, a * i);
		}
		printf("-----------------\n");
	}
	*/

	
	
	//����

	for (int a = 1; a <= 5; a++) {
		for (int i = 5; i >= a; i--) { // for (int i = 1; i <= 6-a; i++)
			printf("*");
		}
		printf("\n");
	}

		// ***** a = 1, i = 5
		// **** a = 2 i = 5   a = 2, i = 4
		// *** a = 3 i = 5   a = 3, i = 4   a = 3, i = 3
	
}