#include <stdio.h>
int global = 123; // 전역변수
// 자동으로 초기화가 진행됨(0으로)

int arr[] = { 3,1,5,2,4,10,15,13};
int length = sizeof(arr) / sizeof(arr[0]);

void f1() {
	printf("f1호출 global = %d\n", global);
}
void f2() {
	printf("f2호출 global = %d\n", global);
}
void findMax() {
	int max = arr[0];
	for (int i = 1; i < length; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("가장큰 데이터는 %d입니다.\n", max);

}
void main() {
	/*
	printf("전역변수 global = %d\n", global);
	f1();
	f2();
	*/

	for (int i = 0; i < length; i++) {
		printf("%d\n", arr[i]);
	}
	findMax();
}