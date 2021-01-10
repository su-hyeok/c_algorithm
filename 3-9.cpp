#include <stdio.h>
#include <stdlib.h> //seqsearch

void* bsearchx(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*))
{
	char* x = (char*)base;
	size_t pl = 0; //�� �� �ε���
	size_t pr = nmemb - 1; //�� �� �ε���
	size_t pc; //�߰� �ε���
	do {
		pc = (pl + pr) / 2;
		if ((*compar)((const void*)&x[pc * size], key) == 0)
		{
			for (pc; pc > pl; pc--)
			{
				if ((*compar)((const void*)&x[(pc - 1) * size], key) == 0)
					pc--;
					break;
			}
			return &x[pc * size];
		}
		else if (pl == pr)
			break;
		else if ((*compar)((const void*)&x[pc * size], key) > 0)
			pr = pc - 1;
		else
			pl = pc + 1;
	} while (nmemb > 0);
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
	puts("binsearch");
	printf("��� ���� : "); scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	printf("������������ �Է��ϼ���.\n");
	printf("x[0] : ");
	scanf_s("%d", &x[0]);

	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("�˻��� : "); scanf_s("%d", &ky);
	p = (int*)bsearchx(&ky,
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