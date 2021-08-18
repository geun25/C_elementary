#include<stdio.h>
void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    //printf("+++a=%d b=%d\n", *a, *b);
}

void func(int* arr) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}
void main() {
    int arr[] = { 11,12,13,14,15 };
    func(arr); // call by pointer

    int a = 10, b = 20;
    swap(&a, &b); // call by value -> call by pointer
    printf("a=%d b=%d\n", a, b);


    char str[10];
    printf("문자열입력: ");
    scanf("%s", str); // &str xxx
    // : 모든 배열명 == &배열[0]

}