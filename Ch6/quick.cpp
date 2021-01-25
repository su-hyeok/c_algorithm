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
		while (a[pl] < x) { /*pivot보다 큰 값을 찾을 때까지 오른쪽으로 이동*/
			pl++;
		}
		while (a[pr] > x) { /*pivot보다 작은 값을 찾을 때까지 왼쪽으로 이동*/
			pr--;
		}
		/*pl, pr 모두 pivot까지 이동*/
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
		/*left < pr 왼쪽 그룹*/
		if (left < pr) {
			quick(a, left, pr);
		}
		/*pl < right 오른쪽 그룹*/
		if (pl < right) {
			quick(a, pl, right);
		}
	}
}
		

int main(void)
{
	int i, nx;
	int* x; 						
	puts("quick 정렬");
	printf("요소수 : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int)); 	

	/*배열 요소 입력 받음*/
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	quick(x, 0, nx - 1);		

	/*정렬된 배열 요소 출력*/
	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);				

	return 0;
}