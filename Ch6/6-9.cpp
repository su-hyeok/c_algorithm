/* ���� ���� + ���� */
#include <stdio.h>
#include <stdlib.h>

/*a[0]�� ���� ���� �� -1�� �����ϸ�, j > 0������ ���� �� ����!*/
void insertion(int a[], int n)
{
	int i, j;
	a[0] = -1;
	for (i = 1; i < n; i++) {
		int tmp = a[i];
		for (j = i; a[j - 1] > tmp; j--)
			a[j] = a[j - 1];
		a[j] = tmp;
	}
}

int main(void)
{
	int i, nx;
	int* x; 						/* �迭�� ù ��° ��ҿ� ���� ������ */
	puts("�ܼ� ���� ����");
	printf("��Ҽ� : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int)); 	/* ����� ������ nx�� int�� �迭�� ���� */

	for (i = 1; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	insertion(x, nx);		/* �迭 x�� �ܼ� ���� ���� */

	puts("������������ �����߽��ϴ�.");
	for (i = 1; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);				/* �迭�� ���� */

	return 0;
}