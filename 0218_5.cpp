#include <stdio.h>

void main() {

	//�����Է½� ������ ����ϴ� ���α׷�
	//0~100 --�Է� --> 
	// 80~100: A
	// 60~79 : B
	// 50 ~59 : C
	// F

	int score;
	printf("�����Է�:");
	scanf("%d", &score);
	//��ȿ�� �˻�

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
		printf("������ %c", grade);
	}
	else {
		printf("������ %c\n������ �ٽ� �Է��ϼ���!\n", grade);
	}
}