#include <stdio.h>
/*
void fun_a() {
    static int num= 0; // static 키워드가 붙은 지역변수 num
    // 지역변수의 생존수준을 "프로그램 수준"까지 올려줌
    // 프로그램이 끝날때 소멸됨(함수가 끝날때 소멸 X)
    // == 정적변수
    int a = 0;
    num++;
    a++;
    printf("현재 num= %d\n", num);
    printf("현재 a= %d\n", a);
}
void fun_b() {
    int b = 0;
    b++;
    printf("현재 b= %d\n", b);
}
void main() {

    int num;
    for (int i = 0; i < 5; i++) {
        printf("정수입력: ");
        scanf("%d", &num);
        if (num >= 0) {
            fun_a();
        }
        else {
            fun_b();
        }
    }
}
*/


void add(int a, int b);
void mul(int a, int b);

void main() {
    int a, b;
    char c;
    while (1) {
        printf("공식을 작성하세요: ");
        scanf("%d%d %c", &a, &b, &c);
        if (c == '+') {
            add(a, b);   
        }
        else if (c == '*' || c == 'x' || c == 'X') {
            mul(a, b);        
        }
        else 
            break;
    }
}
void add(int a, int b) {
    static int cnt = 0;
    cnt++;
    printf("%d+%d=%d입니다. %d번 + 하셨습니다.\n", a, b, a + b, cnt);
}
void mul(int a, int b) {
    static int cnt = 0;
    cnt++;
    printf("%dx%d=%d입니다. %d번 x 하셨습니다.\n", a, b, a * b, cnt);
}


