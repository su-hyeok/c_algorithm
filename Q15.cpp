/*Q15. ���簢�� ��ȣ ���*/
#include <stdio.h>

int main(void) {
	int i, j;
	int n,m;
	puts("���簢���� ����մϴ�.");
	printf("����: "); scanf_s("%d", &n);
	printf("�ʺ�: "); scanf_s("%d", &m);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++)
			printf("*");
		putchar('\n');
	}

	return 0;
}