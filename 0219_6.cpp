#include <stdio.h>
void main() {

	int score;
	do {
		printf("�����Է�: ");
		scanf("%d", &score);
	} while (score < 0 || score>100);

	if (score >= 50) {
		printf("P�Դϴ�.\n");
	}
	else {
		printf("F�Դϴ�.\n");
	}

	



}