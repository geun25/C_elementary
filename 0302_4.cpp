// [������ �迭] == [������ �迭]
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void main() {

    
    /*
    int stu[3][2];

    for (int a = 0; a < 3; a++) {
        printf("%d��° �л��� �����Է���...\n", a + 1);
        for (int i = 0; i < 2; i++) {
            printf("%d��° �����Է�: ", i + 1);
            scanf("%d", &stu[a][i]);
        }
        printf("\n");
    }

    for (int a = 0; a < 3; a++) {
        printf("%d��° �л��� ", a + 1);
        for (int i = 0; i < 2; i++) {
            printf("%d��° ������ %d�� ", i + 1, stu[a][i]);
        }
        printf("\n");
    }
    
    */

    /*
    
    int stu[2][3];
    for (int a = 0; a < 2; a++) {
        printf("%d�� �л������Է���...\n", a + 1);
        for (int i = 0; i < 3; i++) {
            Sleep(500);
            printf(".\n");
            stu[a][i] = rand() % 101;
        }
        Sleep(500);
        printf("ó���Ϸ�!\n");
        Sleep(500);
    }

    printf("\n");

    double avg[2] = { 0.0,0.0 };
    for (int i = 0; i < 2; i++) {
        printf("%d���л�������...\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d�� ", stu[i][j]);
            avg[i] += stu[i][j];
        }
        printf("�Դϴ�.\n��������� %.2lf���Դϴ�.\n\n", avg[i] / 3.0);
    }

    if (avg[0] > avg[1]) {
        printf("�л�1�� �� ������ �����ϴ�.\n");
    }
    else if (avg[0] == avg[1]) {
        printf("������ �����ϴ�.\n");
    }
    else {
        printf("�л�2�� �� ������ �����ϴ�.\n");
    }

    */

    /*

    // [���ڿ�]
    char str[10];

    //"apple" => ���ڿ�, ���ڹ迭+ '\0'(null����, 1byte)�� �߰�
    //{'a','p','p','l','e','\0'} => ���ڿ�

    //{'a','p','p','l','e'} => ���Ϲ��ڵ��� ����� �迭, ���ڹ迭

    'A' // ���Ϲ��� A -> 1byte
    "A" // ���ڿ� A -> +'\0'�� �߰��Ǿ� �־�, 2byte

    */
}