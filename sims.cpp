/*
#include <stdio.h>
char copy_str(char* dest, char* src);
struct Books
{
	// å �̸� 
	char name[30]; 
	// ���� �̸� 
	char auth[30]; 
	// ���ǻ� �̸� 
	char publ[30]; 
	// ���� ������? 
	int borrowed; // ����ü�� ���� ���ο����� ���� �ʱ�ȭ X
};
int main()
{
	struct Books Harry_Potter;

	copy_str(Harry_Potter.name, "Harry Potter");
	copy_str(Harry_Potter.auth, "J.K. Rolling");
	copy_str(Harry_Potter.publ, "Scholastic"); 
	Harry_Potter.borrowed = 0; 

	printf("å �̸� : %s \n", Harry_Potter.name); 
	printf("���� �̸� : %s \n", Harry_Potter.auth);
	printf("���ǻ� �̸� : %s \n", Harry_Potter.publ); 

	return 0;
}

char copy_str(char* dest, char* src) 
{
	while (*src) 
	{
		*dest = *src; 
		src++; 
		dest++; 
	}

	*dest = '\0';

	return 1;
}
*/

/*
//���  
#include <stdio.h> 
struct TEST 
{
	int c; 
	int *pointer; 
};
int main()
{
	struct TEST t; 
	struct TEST *pt = &t;
	int i = 0; 
	
	//t �� ��� pointer �� i �� ����Ű�� �ȴ�
	t.pointer = &i;
	
	// t �� ��� pointer �� ����Ű�� ������ ���� 3 ���� �����
	*t.pointer = 3; 
	
	printf("i : %d \n", i); 
	
	// -> �� * ���� �켱������ �����Ƿ� ���� �ؼ��ϰ� �ȴ�. 
	// ��, (pt �� ����Ű�� ����ü ������ pointer ���) �� ����Ű�� ������ ���� 4 �� �ٲ۴�. ��� ���̴�
	
	*pt->pointer = 4;
	
	printf("i : %d \n", i); 
	return 0;
}
*/

/*
// ����ü ������ ����

#include <stdio.h> 
int add_one(int *a); 

struct TEST
{
	int c;
};

int main() 
{
	struct TEST t;
	struct TEST* pt = &t; 
	
	// pt �� ����Ű�� ����ü ������ c ����� ���� 0 ���� �Ѵ�
	pt->c = 0; 
	
	// add_one �Լ��� ���ڿ� t ����ü ������ ��� c �� �ּҰ��� �����ϰ� �ִ�. 
	add_one(&t.c);
	
	printf("t.c : %d \n", t.c); 

	// add_one �Լ��� ���ڿ� pt �� ����Ű�� ����ü ������ ��� c �� �ּҰ��� �����ϰ� �ִ�. 
	add_one(&pt->c);

	printf("t.c : %d \n", t.c); 

	return 0; 
}

int add_one(int* a) 
{
	*a += 1; 
	return 0;
}
*/

/*
// ���ڷ� ����� �����ϱ�
#include <stdio.h>
int set_human(struct TEST *a, int age, int gender); 
struct TEST
{
int age; 
int gender; 
};

int main() 
{
	struct TEST human; 

	set_human(&human, 10, 1); 
	
	printf("AGE : %d // Gender : %d ", human.age, human.gender); 
	return 0; 
}

int set_human(struct TEST *a, int age, int gender) 
{
	a->age = age;
	a->gender = gender; 
	
	return 0; 
}
*/

