/////*Q18. ���Ƕ�̵� �ﰢ�� ���*/
#include <stdio.h>

void nspira(int n) {
	int i, j,k;
    for (i = 1; i <= n; i++) {
		for (k = 1; k <=i; k++)
			printf(" ");
		for(j = n; j >= i; j--)
			printf("%d ", i % 10);
		printf("\n");
	}
}

int main(void) {
	int n;

	puts("���Ƕ�̵� �ﰢ���� ����մϴ�.");
	do {
		printf("n : "); scanf_s("%d", &n);
	} while (n <= 0);

	nspira(n);

	return 0;
}