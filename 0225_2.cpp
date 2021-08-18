#include <stdio.h>
void main() {
	
	int arr[10];
	for (int i = 0; i < 10; i++) {
		printf("%d번째 정수입력:", i + 1);
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2) {
			printf("%d", arr[i]);
		}
		sum += arr[i];
	}
	double avg = sum * 1.0 / 10;
	printf("\n총합은 %d\n", sum);
	printf("평균은 %.2lf\n", avg);

	
	double arr[3];
	int count = 0;
	for (int i = 0; i < 3; i++) {
		printf("%d번째 실수입력:", i + 1);
		scanf("%lf", &arr[i]);
		if (arr[i] < 0) {
			count++;
		}
	}
	printf("0.0보다 작은 요소의 개수: %d", count);
	
}