#include <stdio.h>
void main() {

	int age;
	int fare; // �ʱ�ȭ

	do {
		printf("�����Է�: ");
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
		printf("����� %d���Դϴ�.\n", fare);
}