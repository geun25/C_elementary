#include <stdio.h> // ǥ������� header
#include <string.h> // memcpy, strcpy �޸𸮺�, ���ڿ� �Լ�

/* 1��
int main(void)
{
	int num;
	char a = '*';
	
	printf("������ N�� �Է��ϼ��� : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for(int j = 1; j<2*i; j++)
			printf("%c", a);
		printf("\n");
	}
}
*/

/* 2��

int main(void)
{
	int num;
	char a = '*';

	printf("������ N�� �Է��ϼ��� : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= 7-2*i ; j++)
			printf("%c", a);
		printf("\n");
	}
}
*/

/*3��

int main(void)
{
	int sum3 = 0;
	int sum5 = 0;
	int sum15 = 0;

	for (int i = 1; i <= 10; i++)
	{
		if(i % 2 != 0)
			sum3 += i;
		if (i % 3 != 0)
			sum5 += i;
		if (i % 15 != 0)
			sum15 += i;
	}

	printf("%d", sum3+sum5-sum15);
}

*/

//4�� �н�

/*
int main(void)
{
	int num;
	int mul = 1;
	printf("N���� �Է�: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		mul *= i;
	}
	printf("%d", mul);
}
*/

/*swap �Լ�*/
/*
int swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int i, j;

	i = 3;
	j = 5;

	printf("swap���� i : %d, j : %d\n", i, j);
	swap(&i, &j);
	printf("swap���� i : %d, j : %d\n", i, j);

	return 0;
}
*/

/*���ڿ�*/

/*������ ����*/
/*
int str_length(char* str);

int main() {
	char str[] = { "What is your name?" };
	printf("%d\n", str_length(str));
	return 0;
}

int str_length(char* str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}
*/
