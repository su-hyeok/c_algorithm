/*Q14. ���簢�� ��ȣ ���*/
#include <stdio.h>

int main(void) {
	int i, j;
	int n;
	puts("�簢���� ����մϴ�.");
	printf("�Է��� ��: "); scanf_s("%d", &n);

	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			printf("*");
		putchar('\n');
	}

	return 0;
}