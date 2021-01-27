#include <stdio.h>
#include <stdlib.h> //seqsearch

void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*))
{
	size_t i; //unsigned int
	int* x = (int*)base; //base ����ȯ
	for (i = 0; i < nmemb; i++)
	{
		if (!(*compar)((const void*)&x[i*size], key)) //&x[i*size] ����ȯ
			return &x[i*size]; //x[i*size]�� �ּ� ��ȯ
	}
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
	p = (int*)seqsearch(&ky,
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