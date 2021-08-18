#include <stdio.h>
void main() {

	FILE* in = fopen("input.txt", "r");
	FILE* out = fopen("output.txt", "w");

	int sum = 0;
	int count1 = 0, count2 = 0;
	while (!feof(in)) {
		// T -> 1 -> stop
		int num;
		fscanf(in, "%d", &num);
		if (num % 2) {
			count1++;
		}
		else{
			count2++;
		}
		sum += num;
	}
	double avg = sum * 1.0 / (count1 + count2);
	fprintf(out, "ÃÑÇÕÀº %dÀÔ´Ï´Ù.\nÆò±ÕÀº %.2lf\nÈ¦¼ö/Â¦¼ö =%d%d\n ", sum, avg, count1, count2);

	fclose(in);
	fclose(out);
}