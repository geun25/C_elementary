#include <stdio.h>
#include <stdlib.h>
void main() {

	/*
	int h[5];
	for (int i = 0; i < 5; i++) {
		h[i] = rand() % 10 + 1; // 1~10 �� �������� ����
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", h[i]);
    }
    printf("\n");

	int cnt = 0;
	for (int a = 0; a < 5; a++) {
		for (int i = a+1; i < 5; i++) {
			cnt++; // ��� �Ѹ����� ���� ����.
			if (h[a] < h[i]) {
				break;
			}
		}
		printf("cnt= %d\n", cnt);
	}
	printf("����cnt= %d\n", cnt);
	
	*/
	

	

	//�ݺ�Ƚ���� �Һи� > while�� ���!
	
	int num[10] = { 0 }; // �ʱ�ȭ
	for (int i = 0; i < 10; i++) {
		printf("�����Է�: ");
		scanf("%d", &num[i]);
		
		if(num[i] < 0) {
			i--;
		}
		else if (num[i] == 0) {
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}

	

}