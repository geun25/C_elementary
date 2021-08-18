#include <stdio.h>
void main() {

	int age;
	int fare; // 초기화

	do {
		printf("나이입력: ");
		scanf("%d", &age);
	} while (age < 1 || age > 200);

	if (age < 9 || age > 64) {
		fare = 0;
	}
	else if (age < 20) {
		fare = 800;
	}
	else {
		fare = 1300;
	}
		printf("요금은 %d원입니다.\n", fare);
}