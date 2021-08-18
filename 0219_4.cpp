#include <stdio.h>
void main() {

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
    }
    
    */

   /*
    int num;
    printf("정수입력: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        printf("%d ", i);
        i++;
    }
    printf("\n최종 i = %d\n", i); // 디버깅표 작성

    */
    

    
    

   /*
    int min = a < b ? a : b;
    int max = a > b ? a : b; // 또 다른 변수생성 -> 비효율적

    int i = min;
    while (i <= max) {
        printf("%d ", i);
        i++;
    }
    */

    
    int a, b;
    printf("정수 2개 입력: ");
    scanf("%d%d", &a, &b);

    if (a > b) {
        // 교환 알고리즘 -> "임시 저장 변수"
        int tmp = a;
        a = b;
        b = tmp;   
    }

    int i = a; // 변수 i에 a값을 대입
    while (i <= b) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
}
