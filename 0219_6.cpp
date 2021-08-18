#include <stdio.h>
void main() {

	int score;
	do {
		printf("점수입력: ");
		scanf("%d", &score);
	} while (score < 0 || score>100);

	if (score >= 50) {
		printf("P입니다.\n");
	}
	else {
		printf("F입니다.\n");
	}

	



}