#include <stdio.h>
void main() {

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
    }
    
    */

   /*
    int num;
    printf("�����Է�: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        printf("%d ", i);
        i++;
    }
    printf("\n���� i = %d\n", i); // �����ǥ �ۼ�

    */
    

    
    

   /*
    int min = a < b ? a : b;
    int max = a > b ? a : b; // �� �ٸ� �������� -> ��ȿ����

    int i = min;
    while (i <= max) {
        printf("%d ", i);
        i++;
    }
    */

    
    int a, b;
    printf("���� 2�� �Է�: ");
    scanf("%d%d", &a, &b);

    if (a > b) {
        // ��ȯ �˰��� -> "�ӽ� ���� ����"
        int tmp = a;
        a = b;
        b = tmp;   
    }

    int i = a; // ���� i�� a���� ����
    while (i <= b) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
}
