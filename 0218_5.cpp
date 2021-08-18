#include <stdio.h>

void main() {

	//성적입력시 학점을 출력하는 프로그램
	//0~100 --입력 --> 
	// 80~100: A
	// 60~79 : B
	// 50 ~59 : C
	// F

	int score;
	printf("성적입력:");
	scanf("%d", &score);
	//유효성 검사

	char grade = 'N';
	if (score >= 0 && score <= 100) {

		if (score >= 80) {
			grade = 'A';
		}
		else if (score >= 60) {
			grade = 'B';
		}
		else if (score >= 50) {
			grade = 'C';
		}
		else {
			grade = 'F';
		}
		printf("학점은 %c", grade);
	}
	else {
		printf("학점은 %c\n점수를 다시 입력하세요!\n", grade);
	}
}