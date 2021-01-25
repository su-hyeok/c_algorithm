#include <stdio.h>
#include <stdlib.h>

static int* tmp;

void merge(int a[], int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		merge(a, start, mid); //배열의 앞부분
		merge(a, mid + 1, end); //배열의 뒷부분

		for (int i = start; i <= end; i++)
		{
			tmp[i] = a[i];
		}
		int part1 = start; //앞부분 인덱스
		int part2 = mid + 1; //뒷부분 인덱스
		int index = start; //결과배열방 인덱스
		while (part1 <= mid && part2 <= end)
		{
			if (tmp[part1] <= tmp[part2])
			{
				a[index] = tmp[part1];
				part1++;
			}
			else
			{
				a[index] = tmp[part2];
				part2++;
			}
			index++;
		}
		//뒤쪽 배열은 비어있고, 앞쪽 배열 데이터가 남을 때
		for (int i = 0; i <= mid - part1; i++)
		{
			a[index + i] = tmp[part1 + i];
		}
		//앞 배열은 비어 있고, 뒤 배열 데이터가 남을 때는 신경 안 써도 됨
		//뒤 배열은 최종 배열의 뒤쪽에 이미 자리하고 있기 때문엥
	}
}

int mergeSort(int a[], int n)
{
	if ((tmp = (int*)calloc(n, sizeof(int))) == NULL)
		return -1;
	merge(a, 0, n - 1); //배열 전체를 병합 정렬
	free(tmp);
	return 0;
}

int main(void)
{
	int i, nx;
	int* x;
	puts("merge 정렬");
	printf("요소수 : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	/*배열 요소 입력 받음*/
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	mergeSort(x, nx);

	/*정렬된 배열 요소 출력*/
	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}