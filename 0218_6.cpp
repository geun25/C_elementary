#include <stdio.h>
void main() {
	
	/*
	int a, b;
	char op;

	printf("���� ���� ���� �� �Է��ϼ���: ");
	scanf("%d%d %c", &a, &b, &op);

	if (op == '+') {
		printf("%d + %d = %d", a, b, a + b);
	}
	else if (op == '*' || op == 'x' || op == 'X') {
		printf("%d * %d = %d", a, b, a * b);
	}
	else {
		printf("�ش� �����ڴ� �������� �ʽ��ϴ�.\n");
	}
	*/
	

	/*
	char color;
	printf("�� �Է�: ");
	scanf("%c", &color);
	
	if (color == 'R' || color == 'r') {
		printf("����");
	}
	else if (color == 'Y' || color == 'y') {
		printf("����");
	}
	else if (color == 'G' || color == 'g') {
		printf("���");
	}
	else {
		printf("�߸��� �Է�");
	}
	*/

	/*
	int h, m;
	printf("�ð��� �� �Է�: ");
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
			printf("1�ð� 20�� �� �ð��� %d�� %d���Դϴ�!\n", h, m);
		}
		else {
			if (h == 1) {
				h += 10;
			}
			else {
				h -= 2;
			}
			m += 40;
			printf("1�ð� 20�� �� �ð��� %d�� %d���Դϴ�!\n", h, m);
		}
	}

	else {
		printf("�ٽ� �Է��ϼ���!\n");
	}
	*/
	
	int h, m;
	printf("��: ");
	scanf("%d", &h);
	printf("��: ");
	scanf("%d", &m);

	printf("%d�� %d���� 1�ð� 20���� �ð��� ", h, m);

	//�Ϲ����� 1�ð� 20���� �ð�
	h--;
	m -= 20; 

	//���ܰ� ����� ���
	if (m<0) {
		m += 60;
		h--;
	}
	if (h < 1) {
		h += 12;
	}
	printf("%d�� %d���Դϴ�.\n", h, m);
}