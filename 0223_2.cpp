#include <stdio.h>
void main() {
	// [무한루프]
	// "종료조건" -> 반복문을 탈출, 종료, 중단시키는 제어문(break)

	/*
		while (1) {
		int n;
		printf("정수입력: ");
		scanf("%d", &n);

		if (n == 0) { // "종료조건" 
			break;
		}
		printf("=> %d\n", n); // 종료조건과의 순서 고려.
	}

	*/

	/*
	
	int sum = 0;
	while (1) {
		int a;
		printf("정수입력: ");
		scanf("%d", &a);
		if (a <= 0) { // 종료조건을 가장먼저 구현!!!
			break;
		}
		sum += a;
	}
	printf("총합은 %d이다.\n", sum);
	
	*/
	
	
	int n;
	int even = 0;
	int odd = 0;
	int sum = 0;
	while (1) {
		printf("정수입력: ");
		scanf("%d", &n);

		if (n <= 0) {
			break; // while문 즉시종료
		} 
		sum += n; // 0보다 작은값을 입력받은 시점까지 입력받은 정수들의 합

		if (n % 2) {
			odd++;
		} // 입력받은 정수가 홀수일때
		else {
			even++;
		}
		
	}
	double avg = sum * 1.0 / (odd + even);
	printf("평균은 %.2lf이며, 짝수는 %d번, 홀수는 %d번\n", avg, even, odd);

	
}