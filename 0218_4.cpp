#include <stdio.h>
void main() {

	int a, b, c;
	printf("정수 3개 입력:");
	scanf("%d%d%d", &a, &b, &c);

	if (a != b && a != c) {
		if (a < b && a < c) {
			printf("가장 작은 수는 %d", a);
		}
		else if (b < a && b < c) {
			printf("가장 작은 수는 %d", b);
		}
		else {
			printf("가장 작은 수는 %d", c);
		}
	}
	else {
		printf("같은 정수가 있습니다\n");
	}
}