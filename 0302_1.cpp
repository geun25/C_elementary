#include <stdio.h>
#include <stdlib.h>
void main() {

	/*
	int data[10] = { 2,3,10,9,6,1,5,8,7,4 };
	// 1) 두개씩 짝을 지어 '비교'
	// -> 비교횟수는 [데이터개수 - 1]만 진행됨.

	
	
	//데이터 개수만큼 N회전정렬을 진행함!
	for (int a = 0; a < 10; a++) {
		for (int i = 0; i < 9; i++) {
			if (data[i] > data[i + 1])
				//오름차순이 아니라면,교환 알고리즘 사용
			{
				int tmp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = tmp;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");
	}

	*/
	
	
	int data[10] = { 2,3,10,9,6,1,5,8,7,4 };

	for (int a = 0; a < 10; a++) {
		for (int i = 0; i < 9; i++) {
			if (data[i] > data[i + 1])
				//오름차순이 아니라면,교환!
			{
				int tmp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = tmp;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");

	}
	for (int i = 9; i >= 0; i--) {
		printf("%d번째로 큰데이터는 %d입니다.\n", 10 - i, data[i]);
	}
}