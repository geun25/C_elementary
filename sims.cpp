/*
#include <stdio.h>
char copy_str(char* dest, char* src);
struct Books
{
	// 책 이름 
	char name[30]; 
	// 저자 이름 
	char auth[30]; 
	// 출판사 이름 
	char publ[30]; 
	// 빌려 졌나요? 
	int borrowed; // 구조체의 정의 내부에서는 변수 초기화 X
};
int main()
{
	struct Books Harry_Potter;

	copy_str(Harry_Potter.name, "Harry Potter");
	copy_str(Harry_Potter.auth, "J.K. Rolling");
	copy_str(Harry_Potter.publ, "Scholastic"); 
	Harry_Potter.borrowed = 0; 

	printf("책 이름 : %s \n", Harry_Potter.name); 
	printf("저자 이름 : %s \n", Harry_Potter.auth);
	printf("출판사 이름 : %s \n", Harry_Potter.publ); 

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
//헷깔림  
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
	
	//t 의 멤버 pointer 는 i 를 가리키게 된다
	t.pointer = &i;
	
	// t 의 멤버 pointer 가 가리키는 변수의 값을 3 으로 만든다
	*t.pointer = 3; 
	
	printf("i : %d \n", i); 
	
	// -> 가 * 보다 우선순위가 높으므로 먼저 해석하게 된다. 
	// 즉, (pt 가 가리키는 구조체 변수의 pointer 멤버) 가 가리키는 변수의 값을 4 로 바꾼다. 라는 뜻이다
	
	*pt->pointer = 4;
	
	printf("i : %d \n", i); 
	return 0;
}
*/

/*
// 구조체 포인터 연습

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
	
	// pt 가 가리키는 구조체 변수의 c 멤버의 값을 0 으로 한다
	pt->c = 0; 
	
	// add_one 함수의 인자에 t 구조체 변수의 멤버 c 의 주소값을 전달하고 있다. 
	add_one(&t.c);
	
	printf("t.c : %d \n", t.c); 

	// add_one 함수의 인자에 pt 가 가리키는 구조체 변수의 멤버 c 의 주소값을 전달하고 있다. 
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
// 인자로 제대로 전달하기
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

