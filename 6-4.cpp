/* Q4 ���� ���� ��, ��ȯ ���� �ڼ��� ��� ���α׷� �ۼ� */
#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

/*--- ���� ����(���� 2) ---*/
void bubble(int a[], int n)
{
	int i, j, m;
	int ccnt = 0;		/* �� Ƚ�� */
	int scnt = 0;		/* ��ȯ Ƚ�� */

	for (i = 0; i < n - 1; i++) {
		int exchg = 0;						
		printf("�н�%d��\n", i + 1);

		for (j = n - 1; j > i; j--) {
			for (m = 0; m < n - 1; m++)
				printf("%3d %c", a[m], (m != j - 1) ? ' ' :
				(a[j - 1] > a[j]) ? '+' : '-');
			printf("%3d\n", a[n - 1]);

			ccnt++;
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
				exchg++;
				scnt++;
			}
		}
		for (m = 0; m < n; m++)
			printf("%3d  ", a[m]);
		putchar('\n');
		if (exchg == 0) break;				/* ��ȯ���� ������ �Լ��� ����ϴ� */
	}
	printf("�񱳸� %dȸ �߽��ϴ�.\n", ccnt);
	printf("��ȯ�� %dȸ �߽��ϴ�.\n", scnt);
}

int main(void)
{
	int i, nx;
	int *x;		

	puts("���� ����");
	printf("��ڼ� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	bubble(x, nx);				

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}
