#include<stdio.h>
#define SU 5 // 기호상수==사용자정의상수
void main() {

    int N = 10; // cmd창이 출력->사용자가 입력
    // 실제로 N이라고 불리는 변수공간을 할당하여 10이라는 값을 저장하는 시기==cmd창이 출력된 후

    int stu[SU]; // 프로그램시작전 -> cmd창이 출력되기전
    for (int i = 0; i < SU; i++) {
        printf("%d번째 학생성적입력: ", i + 1);
        scanf("%d", &stu[i]);
    }

}