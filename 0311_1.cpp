#include <stdio.h>
int isNum(int num); // 원형
void main() {
	while (1) {
		int num;
		printf("정수입력: ");
		scanf("%d", &num);
		if (isNum(num)) { // 종료조건(num이 음수일 경우)
			printf("종료!\n");
			break;
		}
	}
}

int isNum(int num) {
	if (num < 0) {
		return 1;
	}
	return 0; // num이 양수일 경우 0 반환 -> while문 탈출 X
}