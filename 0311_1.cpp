#include <stdio.h>
int isNum(int num); // ����
void main() {
	while (1) {
		int num;
		printf("�����Է�: ");
		scanf("%d", &num);
		if (isNum(num)) { // ��������(num�� ������ ���)
			printf("����!\n");
			break;
		}
	}
}

int isNum(int num) {
	if (num < 0) {
		return 1;
	}
	return 0; // num�� ����� ��� 0 ��ȯ -> while�� Ż�� X
}