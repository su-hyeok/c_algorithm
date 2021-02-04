///* Q23 ���� ����(���� ���� ���) */
#include <stdio.h>
#include <stdlib.h>


void fsort(int a[], int n, int max)
{
	int i;
	int *f = (int*)calloc(max + 1, sizeof(int));		
	int *b = (int*)calloc(n, sizeof(int));			

	puts("\n���� ���� �迭");
	for (i = 0; i < n; i++) printf("%3d", i);		putchar('\n');
	for (i = 0; i < n; i++) printf("---", i);		putchar('\n');
	for (i = 0; i < n; i++) printf("%3d", a[i]);	putchar('\n');

	for (i = 0; i <= max; i++) f[i] = 0;	
	for (i = 0; i < n; i++) f[a[i]]++;	

	puts("\n���� ����");
	for (i = 0; i < max; i++) printf("%3d", i);		putchar('\n');
	for (i = 0; i < max; i++) printf("---", i);		putchar('\n');
	for (i = 0; i < max; i++) printf("%3d", f[i]);	putchar('\n');

	for (i = 1; i <= max; i++) f[i] += f[i - 1];	

	puts("\n���� ���� ����");
	for (i = 0; i < max; i++) printf("%3d", i);		putchar('\n');
	for (i = 0; i < max; i++) printf("---", i);		putchar('\n');
	for (i = 0; i < max; i++) printf("%3d", f[i]);	putchar('\n');

	putchar('\n');
	for (i = n - 1; i >= 0; i--) {			
		b[--f[a[i]]] = a[i];
		printf("a[%2d]�� %2d�� b[%2d]�� ����.\n", i, a[i], f[a[i]]);
	}

	for (i = 0; i < n; i++) a[i] = b[i];	

	puts("\n���� ���� �迭");
	for (i = 0; i < n; i++) printf("%3d", i);		putchar('\n');
	for (i = 0; i < n; i++) printf("---", i);		putchar('\n');
	for (i = 0; i < n; i++) printf("%3d", a[i]);	putchar('\n');
	free(b);
	free(f);
}

int main(void)
{
	int i, nx;
	int *x;		
	const int max = 10;

	puts("���� ����");
	printf("��ڼ� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	printf("0 ~ %d�� ������ �Է��ϼ���.\n", max);
	for (i = 0; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < 0 || x[i] > max);
	}

	fsort(x, nx, max);		

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);	

	return 0;
}
