#include <stdio.h>
#include <stdlib.h>
void main() {

	/*
	int h[5];
	for (int i = 0; i < 5; i++) {
		h[i] = rand() % 10 + 1; // 1~10 중 랜덤으로 저장
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", h[i]);
    }
    printf("\n");

	int cnt = 0;
	for (int a = 0; a < 5; a++) {
		for (int i = a+1; i < 5; i++) {
			cnt++; // 적어도 한마리는 볼수 있음.
			if (h[a] < h[i]) {
				break;
			}
		}
		printf("cnt= %d\n", cnt);
	}
	printf("최종cnt= %d\n", cnt);
	
	*/
	

	

	//반복횟수가 불분명 > while문 사용!
	
	int num[10] = { 0 }; // 초기화
	for (int i = 0; i < 10; i++) {
		printf("정수입력: ");
		scanf("%d", &num[i]);
		
		if(num[i] < 0) {
			i--;
		}
		else if (num[i] == 0) {
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}

	

}