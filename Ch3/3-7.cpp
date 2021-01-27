#include <stdio.h>
#include <stdlib.h> //seqsearch

void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*))
{
	size_t i; //unsigned int
	int* x = (int*)base; //base 형변환
	for (i = 0; i < nmemb; i++)
	{
		if (!(*compar)((const void*)&x[i*size], key)) //&x[i*size] 형변환
			return &x[i*size]; //x[i*size]의 주소 반환
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
	printf("요소 개수 : "); scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	printf("배열 요소 입력");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i); scanf_s("%d", &x[i]);
	}
	printf("검색값 : "); scanf_s("%d", &ky);
	p = (int*)seqsearch(&ky,
		x,
		nx,
		sizeof(int),
		(int(*)(const void*, const void*)) int_cmp
	);
	if (p == NULL)
		puts("검색 실패");
	else
		printf("%d는 x[%d]에 있습니다.\n", ky, int(p - x));
	free(x);

	return 0;
}