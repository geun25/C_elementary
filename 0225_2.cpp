#include <stdio.h>
void main() {
	
	int arr[10];
	for (int i = 0; i < 10; i++) {
		printf("%d��° �����Է�:", i + 1);
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
	printf("\n������ %d\n", sum);
	printf("����� %.2lf\n", avg);

	
	double arr[3];
	int count = 0;
	for (int i = 0; i < 3; i++) {
		printf("%d��° �Ǽ��Է�:", i + 1);
		scanf("%lf", &arr[i]);
		if (arr[i] < 0) {
			count++;
		}
	}
	printf("0.0���� ���� ����� ����: %d", count);
	
}