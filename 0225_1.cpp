#include <stdio.h>
void main() {

	/*
	int stuArr[3] = { 50, 60, 70 };

	for (int i = 0; i < 3; i++) {
		printf("학생 %d의 점수는 %d\n", i+1, stuArr[i]);

	}
	*/

	int arr1[5] = { 10,20,30,40,50 };
	int arr2[3];
	arr2[0] = 5;
	arr2[1] = 15;

	int arr3[3];
	for (int i = 0; i < 3; i++) {
		printf("%d번째 정수입력: ", i + 1);
		scanf("%d", &arr3[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d번째 데이터는 %d입니다.\n", i + 1, arr3[i]);
	}
}