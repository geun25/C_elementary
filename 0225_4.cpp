#include <stdio.h>
void main() {

	int a[] = { 2, 4, 1, 5, 3};
	int max = a[0]; // �ִ��� ���ʿ� �迭�� ù��° ��ҷ� ����
	int maxIndex = 0;
	for (int i = 1; i < 5; i++) { // �迭�� �ι�° ��Һ��� ���ؾ� �ϹǷ� i=1���� ����
		if (max < a[i]) {
			max = a[i]; // max�� ��ü
			maxIndex = i;
		}
	}
	printf("�ִ밪�� %d�Դϴ�. ��ġ�� [%d]\n", max, maxIndex);

	/*
	max i i<5 max<a[i]
	------------------
	2   1  T    T
	4   2  T    F
	.   3  T    T
	5   4  T    F
	.   5  F
	*/
}