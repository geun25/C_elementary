#include <stdio.h> // 표준입출력 header
#include <string.h> // memcpy, strcpy 메모리블럭, 문자열 함수

/* 1번
int main(void)
{
	int num;
	char a = '*';
	
	printf("임의의 N을 입력하세요 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for(int j = 1; j<2*i; j++)
			printf("%c", a);
		printf("\n");
	}
}
*/

/* 2번

int main(void)
{
	int num;
	char a = '*';

	printf("임의의 N을 입력하세요 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= 7-2*i ; j++)
			printf("%c", a);
		printf("\n");
	}
}
*/

/*3번

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

//4번 패스

/*
int main(void)
{
	int num;
	int mul = 1;
	printf("N값을 입력: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		mul *= i;
	}
	printf("%d", mul);
}
*/

/*swap 함수*/
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

	printf("swap이전 i : %d, j : %d\n", i, j);
	swap(&i, &j);
	printf("swap이후 i : %d, j : %d\n", i, j);

	return 0;
}
*/

/*문자열*/

/*문자의 개수*/
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
