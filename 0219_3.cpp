#include <stdio.h>
void main() {

    /*
    int num;
    printf("ī��޴�\n");
    printf("1.�Ƹ޸�ī�� 2. ī��� 3. ����Ǫġ��\n");
    printf("�Է�: ");
    scanf("%d", &num);
    switch (num) {
    case 1:
        printf("�Ƹ޸�ī��\n");
        break;
    case 2:
        printf("ī���\n");
        break;
    case 3:
        printf("����Ǫġ��\n");
        break;
    default:
        printf("�߸��������\n");
    }

    */
    

    /*
    int num = 1;
    switch (num) {
    case 1:
        printf("�ϳ�!\n");
        break;
    case 2:
        printf("��!\n");
        break;
    case 3:
        printf("��!\n");
        break;
    default:
        printf("�ش����...\n");
    }
    */

    /*
    int a;
    printf("�����Է�: ");
    scanf("%d", &a);

    switch (a % 2) {
    case 0:
        printf("¦���Դϴ�.\n");
        break;
    default:
        printf("Ȧ���Դϴ�.\n");
    }
    */

    
    int s;
    char g;

    printf("�����Է�: ");
    scanf("%d", &s);
    switch (s / 10) { // 10���� ���� ���̹Ƿ� 10�� ������ ���� ������ ����
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

    printf("%d���� [%c]�����Դϴ�.\n", s, g);
    

    /*

    int m;
    printf("���Է�: ");
    scanf("%d", &m);

    switch (m) {
    case 3:
    case 4:
    case 5:
        printf("��\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("����\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("����\n");
        break;
    case 12:
    case 1:
    case 2:
        printf("�ܿ�\n");
        break;
    default:
        printf("�߸��Է��ϼ̽��ϴ�.\n");
    }

    */
    
/*
    int num1, num2;
    char op;
    printf("���� ���� ����: ");
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
        printf("���� �������Դϴ�!\n");
    }

    */

/*
char c;
printf("��: ");
scanf("%c", &c);
switch (c) {
case 'R':
case 'r':
    printf("����\n");
    break;
case 'Y':
case 'y':
    printf("����\n");
    break;
case 'G':
case 'g':
    printf("���\n");
    break;
}
*/
}