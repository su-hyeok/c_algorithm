/*10. 배열 a의 모든 요소의 순서를 뒤섞는 shuffle 함수*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do { type t = x; x = y; y = t;} while(0)

void shuffle(int a[], int n)
{
	int i;
	int temp = 0;
	srand(time(NULL));
	for (i = 0; i < n; i++) {
		int index = rand() % n;
		swap(int, a[i], a[index]);
	}
}

int main(void)
{
	int i;
	int size;
	int* arr;
	printf("배열의 크기를 입력하세요. : "); scanf_s("%d", &size);
	arr = (int*)calloc(size, sizeof(int));
	for (i = 0; i < size; i++) {
		printf("배열의 %d번째 요소를 입력하세요. : ", i); scanf_s("%d", &arr[i]);
	}

	shuffle(arr, size);
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}