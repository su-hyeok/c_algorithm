/* Q2-8 �迭b�� ��� ��� ���� ���α׷�. */

#include <stdio.h>
#include <stdlib.h>


void ary_copy(int a[], const int b[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		a[i] = b[i];
}

int main(void)
{
	int i;
	int *x, *y;			
	int n;			

	printf("��ڼ� : ");
	scanf_s("%d", &n);
	x = (int*)calloc(n, sizeof(int));		
	y = (int*)calloc(n, sizeof(int));			

	printf("%d ���� ������ �Է��ϼ���.\n", n);
	for (i = 0; i < n; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	ary_copy(y, x, n); 

	printf("�迭 x�� ��� ��Ҹ� �迭 y�� �����߽��ϴ�.\n");
	for (i = 0; i < n; i++)
		printf("y[%d] = %d\n", i, y[i]);

	free(x); 
	free(y); 

	return 0;
}