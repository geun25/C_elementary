#include <stdio.h>
/*
void fun_a() {
    static int num= 0; // static Ű���尡 ���� �������� num
    // ���������� ���������� "���α׷� ����"���� �÷���
    // ���α׷��� ������ �Ҹ��(�Լ��� ������ �Ҹ� X)
    // == ��������
    int a = 0;
    num++;
    a++;
    printf("���� num= %d\n", num);
    printf("���� a= %d\n", a);
}
void fun_b() {
    int b = 0;
    b++;
    printf("���� b= %d\n", b);
}
void main() {

    int num;
    for (int i = 0; i < 5; i++) {
        printf("�����Է�: ");
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
        printf("������ �ۼ��ϼ���: ");
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
    printf("%d+%d=%d�Դϴ�. %d�� + �ϼ̽��ϴ�.\n", a, b, a + b, cnt);
}
void mul(int a, int b) {
    static int cnt = 0;
    cnt++;
    printf("%dx%d=%d�Դϴ�. %d�� x �ϼ̽��ϴ�.\n", a, b, a * b, cnt);
}


