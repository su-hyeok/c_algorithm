/*shell 4-2-1����
���ʹ� ����غ�*/

#include <stdio.h>	
#include <stdlib.h>	

void shell(int a[], int n)
{
	int i, j, h;
	a[0] = -1;
	for (h = n / 2; h > 0; h /= 2)
		for (i = h; i < n; i++)
		{
			int tmp = a[i + 1];
			for (j = i - h; a[j + 1] >= tmp; j -= h)
			{
				a[j + h + 1] = a[j + 1];
			}
			a[j + h + 1] = tmp;
		}
}

int main(void)
{
	int i, nx;
	int* x; 						/* �迭�� ù ��° ��ҿ� ���� ������ */
	puts("shell");
	printf("��Ҽ� : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx + 1, sizeof(int)); 	/* ����� ������ nx�� int�� �迭�� ���� */

	for (i = 1; i <= nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	shell(x, nx);		/* �迭 x�� �ܼ� ���� ���� */

	puts("������������ �����߽��ϴ�.");
	for (i = 1; i <= nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);				/* �迭�� ���� */

	return 0;
}