#include <stdio.h>
void main() {
	// [���ѷ���]
	// "��������" -> �ݺ����� Ż��, ����, �ߴܽ�Ű�� ���(break)

	/*
		while (1) {
		int n;
		printf("�����Է�: ");
		scanf("%d", &n);

		if (n == 0) { // "��������" 
			break;
		}
		printf("=> %d\n", n); // �������ǰ��� ���� ���.
	}

	*/

	/*
	
	int sum = 0;
	while (1) {
		int a;
		printf("�����Է�: ");
		scanf("%d", &a);
		if (a <= 0) { // ���������� ������� ����!!!
			break;
		}
		sum += a;
	}
	printf("������ %d�̴�.\n", sum);
	
	*/
	
	
	int n;
	int even = 0;
	int odd = 0;
	int sum = 0;
	while (1) {
		printf("�����Է�: ");
		scanf("%d", &n);

		if (n <= 0) {
			break; // while�� �������
		} 
		sum += n; // 0���� �������� �Է¹��� �������� �Է¹��� �������� ��

		if (n % 2) {
			odd++;
		} // �Է¹��� ������ Ȧ���϶�
		else {
			even++;
		}
		
	}
	double avg = sum * 1.0 / (odd + even);
	printf("����� %.2lf�̸�, ¦���� %d��, Ȧ���� %d��\n", avg, even, odd);

	
}