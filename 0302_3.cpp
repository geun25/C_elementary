#include<stdio.h>
#include <stdlib.h>
void main() {

    /*
    
    int arr[7];
    int a;
    printf("arr[]�迭�� ũ�� = %d\n", sizeof(arr));
    printf("arr[0]����� ũ��= %d\n", sizeof(arr[0]));
    printf("a���� ũ��= %d\n", sizeof(a));

    //sizeof �����ڴ� �������� ũ�⸦ ��ȯ�ϴ� ������

    int stu[5]; 
    // �迭����� ���� == size == len
    int size = sizeof(stu) / sizeof(stu[0]);
    for (int i = 0; i < size; i++) {
        printf("%d��° �л������Է�: ", i + 1);
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
    printf("\n3�� ������ %d���Դϴ�.\n", cnt);
}