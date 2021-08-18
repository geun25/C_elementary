#include <stdio.h>
void main() {

	int a[] = { 2, 4, 1, 5, 3};
	int max = a[0]; // 최댓값을 애초에 배열의 첫번째 요소로 지정
	int maxIndex = 0;
	for (int i = 1; i < 5; i++) { // 배열의 두번째 요소부터 비교해야 하므로 i=1부터 시작
		if (max < a[i]) {
			max = a[i]; // max값 교체
			maxIndex = i;
		}
	}
	printf("최대값은 %d입니다. 위치는 [%d]\n", max, maxIndex);

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