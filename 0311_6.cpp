//[���� �����]
#include <stdio.h>
void main() {

	FILE* in = fopen("input.txt", "r");
	// r: �б���
	// -> �о���� ������ �����ؾ߸� ��!
	// w: ������
	// -> �ۼ��� ������ �ߺ��ȴٸ�, ����Ⱑ �����!!!
	FILE* out = fopen("output.txt", "w");


	int a;
	double b;
	char c;
	char d[10];
	
	//printf("�����Է�: ");
	//scanf("%d", &num);
	
	fscanf(in, "%d%lf %c%s", &a, &b, &c, d);
	fprintf(out, "����: %d\n�Ǽ�: %lf\n����: %c\n���ڿ�: %s\n", a, b, c, d);

	fclose(in);
	fclose(out);
	

	/*
	FILE* in = fopen("input.txt", "r");
	FILE* out = fopen("output.txt", "w");

	int a, b;
	fscanf(in, "%d%d", &a, &b);

	char name[20];
	printf("�л��� �̸��� �Է��ϼ���.  ");
	scanf("%s", name);
	fprintf(out, "����� %.2lf�Դϴ�.\n", (a+b)/2.0);

	fclose(in);
	fclose(out);

	*/
}