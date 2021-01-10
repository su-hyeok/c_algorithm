#include <stdio.h>
#include <stdlib.h> //seqsearch

void* binsearch(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*))
{
	size_t i; //unsigned int
	int* x = (int*)base;
	size_t pl = 0; //�� �� �ε���
	size_t pr = nmemb - 1; //�� �� �ε���
	size_t pc; //�߰� �ε���
	do {
		pc = (pl + pr) / 2;
		if ((*compar)((const void*)&x[pc * size], key) < 0)
			pl = pc + 1;
		else if ((*compar)((const void*)&x[pc * size], key) > 0)
			pr = pc - 1;
		else
			return (&x[pc * size]);
	} while (pl <= pr);
	return NULL;
}

int int_cmp(const int* a, const int* b)
{
	return *a < *b ? -1 : *a > *b ? 1 : 0;
}

int main(void)
{
	int i, nx, ky;
	int* x;
	int* p;
	puts("seqsearch");
	printf("��� ���� : "); scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	printf("�迭 ��� �Է�");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i); scanf_s("%d", &x[i]);
	}
	printf("�˻��� : "); scanf_s("%d", &ky);
	p = (int*)binsearch(&ky,
		x,
		nx,
		sizeof(int),
		(int(*)(const void*, const void*)) int_cmp
	);
	if (p == NULL)
		puts("�˻� ����");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, int(p - x));
	free(x);

	return 0;
}