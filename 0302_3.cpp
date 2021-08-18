#include<stdio.h>
#include <stdlib.h>
void main() {

    /*
    
    int arr[7];
    int a;
    printf("arr[]배열의 크기 = %d\n", sizeof(arr));
    printf("arr[0]요소의 크기= %d\n", sizeof(arr[0]));
    printf("a변수 크기= %d\n", sizeof(a));

    //sizeof 연산자는 데이터의 크기를 반환하는 연산자

    int stu[5]; 
    // 배열요소의 개수 == size == len
    int size = sizeof(stu) / sizeof(stu[0]);
    for (int i = 0; i < size; i++) {
        printf("%d번째 학생성적입력: ", i + 1);
        scanf("%d", &stu[i]);
    }
    
    */


    
    int data[5];
    int size = sizeof(data) / sizeof(data[0]);
    int cnt = 0;

    for (int i = 0; i < size; i++) {
        data[i] = rand() % 3 + 1;
        printf("%d ", data[i]);
        if (data[i] == 3) {
            cnt++;
        }
    }
    printf("\n3의 개수는 %d개입니다.\n", cnt);
}