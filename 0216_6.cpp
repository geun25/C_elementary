#include <stdio.h>
void main() {

	/*
	// [형변환], 캐스팅

	int score1 = 10;
	int score2 = 11;
	int score3 = 11;

	printf("average is %lf.\n", (score1 + score2 + score3) / 3.0);

	int sum = score1 + score2 + score3;
	//double avg = sum *1.0/ 3; // 자동 형변환
	//int i = (int)3.14; // 명시적 형변환

	printf("average is %lf.\n", sum*1.0/3);

	

	// [아스키코드]
	char c = 'A';
	c++;
	printf("c = %c  %d\n", c, c);

	int i = 97;
	printf("i = %d %c\n", i, i);
	*/

	int a, b;
	printf("시험1 점수입력:");
	scanf("%d", &a);
	printf("시험2 점수입력:");
	scanf("%d", &b);

	printf("총점: %d, 평균: %.2lf\n", a + b, (a + b) / 2.0);
}