#include <stdio.h>
void main() {

	// "홀수일때에만 출력"
	// "항상 출력하는데, 짝수일때만 출력안함"
	// -> 반복문 안에 있는 수행문을 중단 하고 싶은데, 전체 반복문
	// 멈추고 싶지는 않음
	
	/*
	int num;
	printf("정수입력: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			continue;
		}
		printf("%d ", i);
	}
	printf("\n\n");
	*/
	
	
	int num;
	printf("정수입력: ");
	scanf("%d", &num);
	int i = 0;
	while (i <= num) {
		i++;
		if (i % 2 == 0) {
			continue;
		}
		printf("%d ", i);
		

		// while문의 경우, 조건식을 컨트롤하는 변수가
		// 정상작동하는지 확인이 필요함!
	}
	
}