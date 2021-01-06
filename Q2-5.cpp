/* Q2-5 �迭��Ҹ� �������� �����ϴ� ���� ������ ����ϵ��� 2-7�� ������ ���α׷� */

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)


void ary_print(const int a[], int n)
{
	int i;
	for (i = 0; i  <n; i++)
		printf("%d", a[i]);
	putchar('\n');
}


void ary_reverse(int a[], int n)
{
	int i;

	for (i = 0; i < n / 2; i++) {
		ary_print(a, n);
		printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n - i - 1);
		swap(int, a[i], a[n - i - 1]);
	}
	ary_print(a, n);
	puts("���������� �������ϴ�.");
}

int main(void)
{
	int i;
	int *x;		
	int nx;			

	printf("��ڼ� : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));				

	printf("%d ���� ������ �Է��ϼ���.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	ary_reverse(x, nx);							

	printf("�迭 ��Ҹ� �������� �����߽��ϴ�.\n");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d�Դϴ�.\n", i, x[i]);

	free(x); 

	return 0;
}