/* Q6-24 */
#include <stdio.h>
#include <stdlib.h>

/*--- 도수 정렬 함수(배열의 요솟값은 min 이상 max 이하입니다) ---*/
void fsort2(int a[], int n, int min, int max) /*교재는 fsort지만 찾아보니 counting sort로 많이 씀*/
{
	int i;
	int* f = (int*)calloc(max - min + 1, sizeof(int));		/* 도수분포와 누적도수분포를 넣는 배열 */
	int* b = (int*)calloc(n, sizeof(int));			/* 목적 배열 */

	for (i = 0; i <= max - min; i++) f[i] = 0;				/* 초기화 */
	for (i = 0; i < n; i++) f[a[i] - min]++;					/* 도수분포표 */
	for (i = 1; i <= max - min; i++) f[i] += f[i - 1];		/* 누적도수분포표 */
	for (i = n - 1; i >= 0; i--) b[--f[a[i] - min]] = a[i];	/* 목적 배열 만들기 */
	for (i = 0; i < n; i++) a[i] = b[i];				/* 배열 복사하기 */

	free(b);
	free(f);
}

int main(void)
{
	int i, nx;
	int* x;					/* 배열의 첫 번째 요소에 대한 포인터 */
	const int min = 10;
	const int max = 20;	/* 가장 큰 값 */

	puts("도수 정렬");
	printf("요소 개수 : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	printf("%d ~ %d 정수를 입력하세요.\n", min, max);
	for (i = 0; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] < 0 || x[i] > max);
	}

	fsort(x, nx, min, max);	/* 배열 x를 도수 정렬 */

	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);			/* 배열을 해제 */

	return 0;
}