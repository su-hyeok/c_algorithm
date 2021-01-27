/* �ܼ� ��ȯ ���� (�� 3 ���� : ��ĵ ������ ����) */

#include <stdio.h> 
#include <stdlib.h> 

#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

/*--- �ܼ� ��ȯ ���� (�� 3 ���� : ��ĵ ������ ����) ---*/
void bubble(int a[], int n)
{
	int k = 0; /* a[k] ���� ���� ���ĵ�. */

	while (k < n - 1) {
		int j;
		int start = 0;
		int last = n - 1; /* ���������� ��ȯ�� ��ġ */
		for (j = 0; j < last; j++)
			if (a[j] > a[j + 1]) {
				swap(int, a[j], a[j + 1]);
				start = j;
			}
		k = start;
		for (j = n - 1; j > k; j--)
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
				last = j;
			}
		k = last;
	}
}

int main(void)
{
	int i, nx;
	int* x; /* �迭�� ù ��° ��ҿ� ���� ������ */

	puts("�ܼ� ��ȯ ����");
	printf("��ڼ� :");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int)); /* ��ڼ� nx�� int �� �迭�� ���� */

	for (i = 0; i < nx; i++) {
		printf("x[%d] :", i);
		scanf_s("%d", &x[i]);
	}

	bubble(x, nx); /* �迭 x�� �ܼ� ��ȯ ���� */

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x); /* �迭�� ���� */

	return 0;
}