#include<stdio.h>
int show(int num) { 
	printf("%d ", num % 10);
	if (num / 10 != 0) {
		show(num / 10);
	}
}
void main() {
	show(1234); // 4 3 2 1 ���
}

/*
8��, main()����
show(1234)�� ȣ��

2������ num=1234
4 ���
show(123)�� ȣ��

2������ num=123
3 ���
show(12)�� ȣ��

2������ num=12
2 ���
show(1)�� ȣ��

2������ num=1
1���
if(0!=0) -> F => ���ȣ�� ����
: [��������]�� �ʿ伺
*/