#include <stdio.h>
void func(int num1, int num2) {
	printf("%d\n", num1 * num2);
}
void main() {

	int a = 10;
	int b = 20;
	int c = 30;

	func(a,b); // 200
	func(b,c); // 600
	func(c,a); // 300

}