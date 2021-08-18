#include <stdio.h>
void main() {
	
	/*
	int a, b;
	char op;

	printf("정수 정수 문자 를 입력하세요: ");
	scanf("%d%d %c", &a, &b, &op);

	if (op == '+') {
		printf("%d + %d = %d", a, b, a + b);
	}
	else if (op == '*' || op == 'x' || op == 'X') {
		printf("%d * %d = %d", a, b, a * b);
	}
	else {
		printf("해당 연산자는 존재하지 않습니다.\n");
	}
	*/
	

	/*
	char color;
	printf("색 입력: ");
	scanf("%c", &color);
	
	if (color == 'R' || color == 'r') {
		printf("정지");
	}
	else if (color == 'Y' || color == 'y') {
		printf("주의");
	}
	else if (color == 'G' || color == 'g') {
		printf("출발");
	}
	else {
		printf("잘못된 입력");
	}
	*/

	/*
	int h, m;
	printf("시간과 분 입력: ");
	scanf("%d%d", &h, &m);

	if ((h >= 1 && h <= 12) && (m >= 0 && m <= 59)) {
		if (m >= 20) {
			if (h == 1) {
				h += 11;
			}
			else {
				h -= 1;
			}
			m -= 20;
			printf("1시간 20분 전 시간은 %d시 %d분입니다!\n", h, m);
		}
		else {
			if (h == 1) {
				h += 10;
			}
			else {
				h -= 2;
			}
			m += 40;
			printf("1시간 20분 전 시간은 %d시 %d분입니다!\n", h, m);
		}
	}

	else {
		printf("다시 입력하세요!\n");
	}
	*/
	
	int h, m;
	printf("시: ");
	scanf("%d", &h);
	printf("분: ");
	scanf("%d", &m);

	printf("%d시 %d분의 1시간 20분전 시간은 ", h, m);

	//일반적인 1시간 20분전 시간
	h--;
	m -= 20; 

	//예외가 생기는 경우
	if (m<0) {
		m += 60;
		h--;
	}
	if (h < 1) {
		h += 12;
	}
	printf("%d시 %d분입니다.\n", h, m);
}