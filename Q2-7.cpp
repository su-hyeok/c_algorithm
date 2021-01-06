///* Q2-7 기수 변환 과정 상세히 출력 프로그램 */

#include <stdio.h>


#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)


int card_conv(unsigned x, int n, char d[])
{
	int i;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0; 

	if (x == 0)										
		d[digits++] = dchar[0];						
	else {											
		while (x) {
			printf("%2d | %7d ... %c\n", n, x, dchar[x % n]);
			printf("   + ---------- \n");
			d[digits++] = dchar[x % n];				
			x /= n;
		}
		printf("%12d\n", x);
	}

	
	for (i = 0; i <digits / 2; i++)
		swap(char, d[i], d[digits - i - 1]);

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

	puts("10 진수를 기수로 변환합니다.");

	do {
		printf("변환하는 음이 아닌 정수 : ");
		scanf_s("%u", &no);

		do {
			printf("무슨 진수로 변환합니까?(2 ~ 36) : ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd > 36);

		dno = card_conv(no, cd, cno);	

		printf("%d 진수로 ", cd);
		for (i = 0; i <dno; i++)			
			printf("%c", cno[i]);
		printf("입니다.\n");

		printf("다시 한 번 할까요?(1 예 / 0 아니오): ");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}