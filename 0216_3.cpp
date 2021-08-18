#include<stdio.h>
void main() {

	// [비교 연산자]
	printf("10 > 5 = %d\n", 10 > 5);
	printf("10 >= 5 = %d\n", 10 >= 5);
	printf("10 < 5 = %d\n", 10 < 5);
	printf("10 <= 5 = %d\n", 10 <= 5);
	printf("10 == 10 = %d\n", 10 == 10);
	printf("10 != 5 = %d\n", 10 != 5); // 부정
	
	//true => 1
	//false => 0

	// [논리 연산자]
	printf("10>5 and 10>6 = %d\n", 10 > 5 && 10 > 6); //그리고
	printf("10>5 or 10>6 = %d\n", 10 > 5 || 10 > 6); //또는
	printf("not 10>5 = %d\n",  !(10 > 5)); // 부정

}