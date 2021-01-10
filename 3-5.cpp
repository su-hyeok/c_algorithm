#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key)
{
	int i;
	int idx = 0;
	int pl = 0; //�� �� �ε���
	int pr = n - 1; //�� �� �ε���
	int pc; //�߰� �ε���
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)//�˻� ����
		{
			for (pc; pc > pl; pc--)
			{
				if (a[pc - 1] == key)
					pc--;
			}
			return pc;
		}
		else if (a[pc] > key)
			pr = pc - 1;
		else
			pl = pc + 1;
	} while (pl <= pr);
	return -1; //�˻� ����
}

int main(void)
{
	int i, nx, ky, idx;
	int* x;

	printf("��� ���� : "); scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));
	printf("������������ �Է��ϼ���.\n");
	printf("x[0] : "); scanf_s("%d", &x[0]);
	for (i = 1; i < nx; i++) 
	{
		do {
			printf("x[%d] : ", i); scanf_s("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("�˻��� : "); scanf_s("%d", &ky);
	idx = bin_search2(x, nx, ky);
	if (idx == -1)
		printf("�˻��� �����߽��ϴ�.\n");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�,\n", ky, idx);
	free(x);

	return 0;
}