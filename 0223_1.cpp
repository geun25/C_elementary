#include <stdio.h>
void main() {

	int age;

	do {
		printf("�����Է�: ");
		scanf("%d", &age);
	} while (age < 1 || age > 200); 
	// do while�� ; ��������!!

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

	printf("����� %d���Դϴ�\n", fare);

	
}