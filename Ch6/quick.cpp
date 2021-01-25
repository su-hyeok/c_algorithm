#include <stdio.h>
#include <stdlib.h>

void quick(int a[], int left, int right)
{
	int pl = left;
	int pr = right;
	int tmp;
	int x = a[(pl + pr) / 2]; //pivot

	while (pl <= pr)
	{
		while (a[pl] < x) { /*pivot���� ū ���� ã�� ������ ���������� �̵�*/
			pl++;
		}
		while (a[pr] > x) { /*pivot���� ���� ���� ã�� ������ �������� �̵�*/
			pr--;
		}
		/*pl, pr ��� pivot���� �̵�*/
		if (pl <= pr)
		{
			if (pl != pr)
			{
				tmp = a[pl];
				a[pl] = a[pr];
				a[pr] = tmp;
			}
			/*pl == pr*/
			pl++; pr--;
		}
		/*left < pr ���� �׷�*/
		if (left < pr) {
			quick(a, left, pr);
		}
		/*pl < right ������ �׷�*/
		if (pl < right) {
			quick(a, pl, right);
		}
	}
}
		

int main(void)
{
	int i, nx;
	int* x; 						
	puts("quick ����");
	printf("��Ҽ� : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int)); 	

	/*�迭 ��� �Է� ����*/
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	quick(x, 0, nx - 1);		

	/*���ĵ� �迭 ��� ���*/
	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);				

	return 0;
}