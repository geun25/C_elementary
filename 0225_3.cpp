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
		// rand()%N : N���� ������������ �������߿��� 1��

		// printf("%d��° �����Է�: ", i + 1);
		// scanf("%d", &data[i]);
	}
	for (int i = 0; i < 10; i++) {
		 printf("%d ", data[i]);
	}
	printf("\n");

	int num;
	int cnt = 0;
	printf("�����Է�: ");
	scanf("%d", &num);

	for (int i = 0; i < 10; i++) {
		if (num == data[i]) {
			printf("[%d] ", i);
			cnt++;
		}
	}
	if (cnt == 0) {
			printf("�ش� �����ʹ� �����ϴ�!\n");
		}
	else {
		printf("...�� ����Ǿ��ֽ��ϴ�!\n");
	}
}