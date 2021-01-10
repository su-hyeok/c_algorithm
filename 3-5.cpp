#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key)
{
	int i;
	int idx = 0;
	int pl = 0; //맨 앞 인덱스
	int pr = n - 1; //맨 뒤 인덱스
	int pc; //중간 인덱스
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)//검색 성공
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
	return -1; //검색 실패
}

int main(void)
{
	int i, nx, ky, idx;
	int* x;

	printf("요소 개수 : "); scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));
	printf("오름차순으로 입력하세요.\n");
	printf("x[0] : "); scanf_s("%d", &x[0]);
	for (i = 1; i < nx; i++) 
	{
		do {
			printf("x[%d] : ", i); scanf_s("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("검색값 : "); scanf_s("%d", &ky);
	idx = bin_search2(x, nx, ky);
	if (idx == -1)
		printf("검색에 실패했습니다.\n");
	else
		printf("%d는 x[%d]에 있습니다,\n", ky, idx);
	free(x);

	return 0;
}