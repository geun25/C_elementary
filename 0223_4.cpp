#include <stdio.h>
void main() {

	// "Ȧ���϶����� ���"
	// "�׻� ����ϴµ�, ¦���϶��� ��¾���"
	// -> �ݺ��� �ȿ� �ִ� ���๮�� �ߴ� �ϰ� ������, ��ü �ݺ���
	// ���߰� ������ ����
	
	/*
	int num;
	printf("�����Է�: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			continue;
		}
		printf("%d ", i);
	}
	printf("\n\n");
	*/
	
	
	int num;
	printf("�����Է�: ");
	scanf("%d", &num);
	int i = 0;
	while (i <= num) {
		i++;
		if (i % 2 == 0) {
			continue;
		}
		printf("%d ", i);
		

		// while���� ���, ���ǽ��� ��Ʈ���ϴ� ������
		// �����۵��ϴ��� Ȯ���� �ʿ���!
	}
	
}