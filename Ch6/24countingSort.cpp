/* Q6-24 */
#include <stdio.h>
#include <stdlib.h>

/*--- ���� ���� �Լ�(�迭�� ��ڰ��� min �̻� max �����Դϴ�) ---*/
void fsort2(int a[], int n, int min, int max) /*����� fsort���� ã�ƺ��� counting sort�� ���� ��*/
{
	int i;
	int* f = (int*)calloc(max - min + 1, sizeof(int));		/* ���������� �������������� �ִ� �迭 */
	int* b = (int*)calloc(n, sizeof(int));			/* ���� �迭 */

	for (i = 0; i <= max - min; i++) f[i] = 0;				/* �ʱ�ȭ */
	for (i = 0; i < n; i++) f[a[i] - min]++;					/* ��������ǥ */
	for (i = 1; i <= max - min; i++) f[i] += f[i - 1];		/* ������������ǥ */
	for (i = n - 1; i >= 0; i--) b[--f[a[i] - min]] = a[i];	/* ���� �迭 ����� */
	for (i = 0; i < n; i++) a[i] = b[i];				/* �迭 �����ϱ� */

	free(b);
	free(f);
}

int main(void)
{
	int i, nx;
	int* x;					/* �迭�� ù ��° ��ҿ� ���� ������ */
	const int min = 10;
	const int max = 20;	/* ���� ū �� */

	puts("���� ����");
	printf("��� ���� : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	printf("%d ~ %d ������ �Է��ϼ���.\n", min, max);
	for (i = 0; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] < 0 || x[i] > max);
	}

	fsort(x, nx, min, max);	/* �迭 x�� ���� ���� */

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);			/* �迭�� ���� */

	return 0;
}