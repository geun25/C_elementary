#include<stdio.h>
#define SU 30 // 사용자 정의 상수, 기호 상수
void main() {
	
	// [대입 연산자]
	// : 방향이 있음. 우선순위 낮음

	double a = 3.14, b = 2.111;
	double sum = a + b;
	printf("%.2lf + %.3lf = %.3lf\n", a, b, sum);

	// [상수]
	const double PI = 3.141592; // 상수화: symbolic 상수 

}