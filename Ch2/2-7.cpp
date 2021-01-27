/*7. ��� ��ȯ ������ ���� ����ϴ� ���α׷�*/

#include <stdio.h>

int card_conv(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0; /*��ȯ �� �ڸ���*/
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
	puts("10������ ��� ��ȯ�մϴ�.");
	do {
		printf("��ȯ�ϴ� ���� �ƴ� ���� : "); scanf_s("%d", &no);
		do {
			printf("� ������ ��ȯ�ұ��? (2 ~ 36) : "); scanf_s("%d", &cd);
		} while (cd < 2 || cd > 36);
		dno = card_conv(no, cd, cno);
		printf("%d�����δ� ", cd);
		for (i = 0; i <= dno - 1; i++) {
			printf("%c", cno[i]);
		}
		printf("�Դϴ�. \n");
		printf("�� �� �� �ұ��? (1. ��, 2. �ƴϿ�) : "); scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}