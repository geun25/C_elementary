#include<stdio.h>
void main() {

	// [�� ������]
	printf("10 > 5 = %d\n", 10 > 5);
	printf("10 >= 5 = %d\n", 10 >= 5);
	printf("10 < 5 = %d\n", 10 < 5);
	printf("10 <= 5 = %d\n", 10 <= 5);
	printf("10 == 10 = %d\n", 10 == 10);
	printf("10 != 5 = %d\n", 10 != 5); // ����
	
	//true => 1
	//false => 0

	// [�� ������]
	printf("10>5 and 10>6 = %d\n", 10 > 5 && 10 > 6); //�׸���
	printf("10>5 or 10>6 = %d\n", 10 > 5 || 10 > 6); //�Ǵ�
	printf("not 10>5 = %d\n",  !(10 > 5)); // ����

}