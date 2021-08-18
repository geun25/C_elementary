#include <stdio.h>
void main() {

	/*
	int num;
	printf("정수입력: ");
	scanf("%d", &num);
	for (int a = 1; a <= num; a++) {
		for (int i = 1; i <= a; i++) {
			// 5 x 5 == 25번
			printf("*");
		}
		printf("\n");
		// 5번
	}
	*/

	/*
	for(int a = 1; a <= 5; a++) {
		// 5번
		for (int i = 1; i <= a; i++) {
			// 5 x 5 == 25번
			printf("*");
		}
		printf("\n");
		// 5번

		// * a = 1, i = 1
		// ** a = 2, i = 1   a = 2, i = 2
		// *** a = 3, i = 1   a = 3, i = 2   a = 3, i = 3
	}

	*/

	/*
	// 구구단
	for (int a = 2; a <= 9; a++ ) {
		for (int i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", a, i, a * i);
		}
		printf("-----------------\n");
	}
	*/

	
	
	//과제

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