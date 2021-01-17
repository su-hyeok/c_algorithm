#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

int is_sorted(const int a[], int n)
{
	int i, j;
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < n - 1; j++)
			if (a[j] < a[j + 1])
				break;
			else return 0;
		return 1;
	}
}

/*--- �ܼ� ��ȯ ���� (�� 2 ���� : ��ȯ Ƚ���� ���� ����) ---*/
void bubble(int a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		int exchg = 0; /* ����� ��ȯ Ƚ�� */
		for (j = n - 1; j > i; j--)
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
				exchg++;
			}
		if (exchg == 0) break; /* ��ȯ�� �̷������ ������ ���� */
	}
}

int main(void)
{
	int i, nx;
	int* x; /* �迭�� ù ��° ��ҿ� ���� ������ */

	puts("�ܼ� ��ȯ ����");
	printf("��ڼ�: ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int)); /* ��ڼ� nx�� int �� �迭�� ���� */

	for (i = 0; i < nx; i++) {
		printf("x[%d] :", i);
		scanf_s("%d", &x[i]);
	}

	bubble(x, nx); /* �迭 x�� �ܼ� ��ȯ ���� */

	if (is_sorted(x, nx) == 1)
		printf("������ ���ƽ��ϴ�\n");

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x); /* �迭�� ���� */

	return 0;
}