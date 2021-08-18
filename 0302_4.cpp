// [다차원 배열] == [이차원 배열]
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void main() {

    
    /*
    int stu[3][2];

    for (int a = 0; a < 3; a++) {
        printf("%d번째 학생의 성적입력중...\n", a + 1);
        for (int i = 0; i < 2; i++) {
            printf("%d번째 성적입력: ", i + 1);
            scanf("%d", &stu[a][i]);
        }
        printf("\n");
    }

    for (int a = 0; a < 3; a++) {
        printf("%d번째 학생의 ", a + 1);
        for (int i = 0; i < 2; i++) {
            printf("%d번째 성적은 %d점 ", i + 1, stu[a][i]);
        }
        printf("\n");
    }
    
    */

    /*
    
    int stu[2][3];
    for (int a = 0; a < 2; a++) {
        printf("%d번 학생성적입력중...\n", a + 1);
        for (int i = 0; i < 3; i++) {
            Sleep(500);
            printf(".\n");
            stu[a][i] = rand() % 101;
        }
        Sleep(500);
        printf("처리완료!\n");
        Sleep(500);
    }

    printf("\n");

    double avg[2] = { 0.0,0.0 };
    for (int i = 0; i < 2; i++) {
        printf("%d번학생성적은...\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d점 ", stu[i][j]);
            avg[i] += stu[i][j];
        }
        printf("입니다.\n평균점수는 %.2lf점입니다.\n\n", avg[i] / 3.0);
    }

    if (avg[0] > avg[1]) {
        printf("학생1이 더 점수가 높습니다.\n");
    }
    else if (avg[0] == avg[1]) {
        printf("점수가 같습니다.\n");
    }
    else {
        printf("학생2가 더 점수가 높습니다.\n");
    }

    */

    /*

    // [문자열]
    char str[10];

    //"apple" => 문자열, 문자배열+ '\0'(null문자, 1byte)를 추가
    //{'a','p','p','l','e','\0'} => 문자열

    //{'a','p','p','l','e'} => 단일문자들이 저장된 배열, 문자배열

    'A' // 단일문자 A -> 1byte
    "A" // 문자열 A -> +'\0'가 추가되어 있어, 2byte

    */
}