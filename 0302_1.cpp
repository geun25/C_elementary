#include <stdio.h>
#include <stdlib.h>
void main() {

	/*
	int data[10] = { 2,3,10,9,6,1,5,8,7,4 };
	// 1) �ΰ��� ¦�� ���� '��'
	// -> ��Ƚ���� [�����Ͱ��� - 1]�� �����.

	
	
	//������ ������ŭ Nȸ�������� ������!
	for (int a = 0; a < 10; a++) {
		for (int i = 0; i < 9; i++) {
			if (data[i] > data[i + 1])
				//���������� �ƴ϶��,��ȯ �˰��� ���
			{
				int tmp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = tmp;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");
	}

	*/
	
	
	int data[10] = { 2,3,10,9,6,1,5,8,7,4 };

	for (int a = 0; a < 10; a++) {
		for (int i = 0; i < 9; i++) {
			if (data[i] > data[i + 1])
				//���������� �ƴ϶��,��ȯ!
			{
				int tmp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = tmp;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");

	}
	for (int i = 9; i >= 0; i--) {
		printf("%d��°�� ū�����ʹ� %d�Դϴ�.\n", 10 - i, data[i]);
	}
}