///* Q8 �ܼ� ���� ���� ���α׷� ¥�� */
#include <stdio.h>
#include <stdlib.h>


void insertion(int a[], int n)
{
	int i, j, m;

	for (i = 1; i < n; i++) {
		int tmp = a[i];

		for (m = 0; m < n; m++)
			printf("%3d ", a[m]);
		putchar('\n');

		for (j = i; j > 0 && a[j - 1] > tmp; j--)
			a[j] = a[j - 1];
		a[j] = tmp;

		printf("%*s%s", 4 * j, "", (i != j) ? "^-" : "  ");
		for (m = 0; m < 4 * (i - j); m++)
			putchar('-');
		printf("+\n\n");
	}
	for (m = 0; m < n; m++)
		printf("%3d ", a[m]);
	putchar('\n');
}

int main(void)
{
	int i, nx;
	int *x;

	puts("�ܼ� ���� ����");
	printf("��ڼ� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	insertion(x, nx);				

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);	

	return 0;
}