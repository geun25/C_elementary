#include <stdio.h>
void main() {

    /*
    int num;
    printf("카페메뉴\n");
    printf("1.아메리카노 2. 카페라떼 3. 프라푸치노\n");
    printf("입력: ");
    scanf("%d", &num);
    switch (num) {
    case 1:
        printf("아메리카노\n");
        break;
    case 2:
        printf("카페라떼\n");
        break;
    case 3:
        printf("프라푸치노\n");
        break;
    default:
        printf("잘못눌렀어요\n");
    }

    */
    

    /*
    int num = 1;
    switch (num) {
    case 1:
        printf("하나!\n");
        break;
    case 2:
        printf("둘!\n");
        break;
    case 3:
        printf("셋!\n");
        break;
    default:
        printf("해당없음...\n");
    }
    */

    /*
    int a;
    printf("정수입력: ");
    scanf("%d", &a);

    switch (a % 2) {
    case 0:
        printf("짝수입니다.\n");
        break;
    default:
        printf("홀수입니다.\n");
    }
    */

    
    int s;
    char g;

    printf("점수입력: ");
    scanf("%d", &s);
    switch (s / 10) { // 10으로 나눈 몫이므로 10점 단위로 범위 설정이 가능
    case 10:
    case 9:
        g = 'A';
        break;
    case 8:
        g = 'B';
        break;
    case 7:
        g = 'C';
        break;
    default:
        g = 'F';
    }

    printf("%d점은 [%c]학점입니다.\n", s, g);
    

    /*

    int m;
    printf("월입력: ");
    scanf("%d", &m);

    switch (m) {
    case 3:
    case 4:
    case 5:
        printf("봄\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("여름\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("가을\n");
        break;
    case 12:
    case 1:
    case 2:
        printf("겨울\n");
        break;
    default:
        printf("잘못입력하셨습니다.\n");
    }

    */
    
/*
    int num1, num2;
    char op;
    printf("정수 문자 정수: ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op) {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '*':
    case 'x':
    case 'X':
        printf("%d x %d = %d\n", num1, num2, num1 * num2);
        break;
    default:
        printf("없는 연산자입니다!\n");
    }

    */

/*
char c;
printf("색: ");
scanf("%c", &c);
switch (c) {
case 'R':
case 'r':
    printf("정지\n");
    break;
case 'Y':
case 'y':
    printf("주의\n");
    break;
case 'G':
case 'g':
    printf("출발\n");
    break;
}
*/
}