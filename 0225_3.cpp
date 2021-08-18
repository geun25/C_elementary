#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
void main() {

	/*
	
	int a[] = { 10, 20, 30 };
	// [10 20 30]

	//int b[]; XXX

	int c[5] = { 0 }; // == { 0, };
	// [0 0 0 0 0]

	int d[5] = { 1, 2 };
	// [1 2 0 0 0]

	int e[7] = { 0,2,1,0 };
	// [0 2 1 0 0 0 0]

	*/


	srand(time(NULL));

	int data[10];
	for (int i = 0; i < 10; i++) {
		data[i] = rand()%6 + 1; // 0~5 -> 1~6
		// rand()%N : N으로 나누었을때의 나머지중에서 1개

		// printf("%d번째 정수입력: ", i + 1);
		// scanf("%d", &data[i]);
	}
	for (int i = 0; i < 10; i++) {
		 printf("%d ", data[i]);
	}
	printf("\n");

	int num;
	int cnt = 0;
	printf("정수입력: ");
	scanf("%d", &num);

	for (int i = 0; i < 10; i++) {
		if (num == data[i]) {
			printf("[%d] ", i);
			cnt++;
		}
	}
	if (cnt == 0) {
			printf("해당 데이터는 없습니다!\n");
		}
	else {
		printf("...에 저장되어있습니다!\n");
	}
}