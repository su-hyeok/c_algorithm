/////*Q17. �Ƕ�̵� �ﰢ�� ���*/
#include <stdio.h>

void spira(int n) {
	int i, j,k;
    for (i = 1; i <= n; i++) {
		for (k = n; k >=i; k--)
			printf(" ");
		for(j = 1; j <= i; j++)
			printf("* ");
		printf("\n");
	}
}

int main(void) {
	int n;

	puts("�Ƕ�̵� �ﰢ���� ����մϴ�.");
	do {
		printf("n : "); scanf_s("%d", &n);
	} while (n <= 0);

    spira(n);

	return 0;
}

