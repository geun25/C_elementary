// ����Լ� == ��ȯȣ�� == ��ȯ�Լ�
// : �ڱ��ڽ��� �ذ��ϱ����� �ڽ��� �ѹ��� ȣ���ϴ� �Լ�
// ex) fac(n) = n x fac(n-1)
#include<stdio.h>
int fac(int n) { // ���ѷ��� -> [��������]�� �ݵ�� �ʿ�� ��!!!
	if (n == 1) { // [��������]
		return 1;
	}
	return n * fac(n - 1);
}
void main() {
	printf("%d", fac(5));
}