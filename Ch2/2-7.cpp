/*7. 기수 변환 과정을 상세히 출력하는 프로그램*/

#include <stdio.h>

int card_conv(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0; /*변환 후 자릿수*/
	int j, temp = 0;

	if (x == 0) {
		d[digits++] = dchar[0];
		printf("        0");
	}
	else
		while (x) {
			printf("%d|      %d ... %d\n", n, x, x % n);
			d[digits++] = dchar[x % n];
			x /= n;
			printf(" +--------\n");
		}
	for (j = 0; j < digits / 2; j++) {
		do {
			int temp = d[j]; d[j] = d[digits - j - 1]; d[digits - j - 1] = temp;
		} while (0);
	}
	return digits;
}

int main(void)
{
	int i;
	unsigned no;
	int cd;
	int dno;
	char cno[512];
	int retry;
	puts("10진수를 기수 변환합니다.");
	do {
		printf("변환하는 음이 아닌 정수 : "); scanf_s("%d", &no);
		do {
			printf("어떤 진수로 변환할까요? (2 ~ 36) : "); scanf_s("%d", &cd);
		} while (cd < 2 || cd > 36);
		dno = card_conv(no, cd, cno);
		printf("%d진수로는 ", cd);
		for (i = 0; i <= dno - 1; i++) {
			printf("%c", cno[i]);
		}
		printf("입니다. \n");
		printf("한 번 더 할까요? (1. 예, 2. 아니오) : "); scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}