//[파일 입출력]
#include <stdio.h>
void main() {

	FILE* in = fopen("input.txt", "r");
	// r: 읽기모드
	// -> 읽어들일 파일이 존재해야만 함!
	// w: 쓰기모드
	// -> 작성할 파일이 중복된다면, 덮어쓰기가 진행됨!!!
	FILE* out = fopen("output.txt", "w");


	int a;
	double b;
	char c;
	char d[10];
	
	//printf("정수입력: ");
	//scanf("%d", &num);
	
	fscanf(in, "%d%lf %c%s", &a, &b, &c, d);
	fprintf(out, "정수: %d\n실수: %lf\n문자: %c\n문자열: %s\n", a, b, c, d);

	fclose(in);
	fclose(out);
	

	/*
	FILE* in = fopen("input.txt", "r");
	FILE* out = fopen("output.txt", "w");

	int a, b;
	fscanf(in, "%d%d", &a, &b);

	char name[20];
	printf("학생의 이름을 입력하세요.  ");
	scanf("%s", name);
	fprintf(out, "평균은 %.2lf입니다.\n", (a+b)/2.0);

	fclose(in);
	fclose(out);

	*/
}