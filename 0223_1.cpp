#include <stdio.h>
void main() {

	int age;

	do {
		printf("나이입력: ");
		scanf("%d", &age);
	} while (age < 1 || age > 200); 
	// do while문 ; 잊지말자!!

	int fare;

	if (age < 9 || age > 65) {
		fare = 0;
	}

	else if (age < 20) {
		fare = 800;
	}

	else {
		fare = 1300;
	}

	printf("요금은 %d원입니다\n", fare);

	
}