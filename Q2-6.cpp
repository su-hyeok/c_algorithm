/* Q2-6 �ǽ� 2-8�� card-connvr �Լ��� ������ �迭�� �� ���ʿ� ���ڸ��� �����ϴ� card-connvr �Լ� �ۼ� ���α׷� */

#include <stdio.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

int card_conv(unsigned x, int n, char d[])
{
	int i;
	char dchar[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int digits = 0;	

	if (x == 0)							
		d[digits++] = dchar[0];				
	else {									
		while (x) {
			d[digits++] = dchar[x % n];		
			x /= n;
		}
	}


	for (i = 0; i < digits / 2; i++)
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

	puts("10 ������ ��� ��ȯ�մϴ�.");

	do {
		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
		scanf_s("%u", &no);

		do {
			printf("���� ������ ��ȯ�մϱ�?(2 ~ 36) : ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd > 36);

		dno = card_conv(no, cd, cno);		

		printf("%d ������ ", cd);
		for (i = 0; i <dno; i++)			
			printf("%c", cno[i]);
		printf("�Դϴ�.\n");

		printf("�ٽ� �� �� �ұ��?(1 �� / 0 �ƴϿ�): ");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}