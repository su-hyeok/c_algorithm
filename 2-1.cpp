///*1. 키의 최솟값을 구하는 프로그램*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int minof(const int a[], int n)
//{
//	int i;
//	int min = a[0];
//	for (i = 1; i < n; i++) {
//		if (a[i] < min) {
//			min = a[i];
//		}
//	}
//	return min;
//}
//
//int main(void)
//{
//	int i;
//	int* height;
//	int num;
//	printf("사람 수 : "); scanf_s("%d", &num);
//	height = (int*)calloc(num, sizeof(int));
//	printf("%d 사람의 키를 입력하세요.\n", num);
//	for (i = 0; i < num; i++) {
//		printf("height[%d] : ", i); scanf_s("%d", &height[i]);
//	}
//	printf("최솟값은 %d입니다.\n", minof(height, num));
//	free(height);
//
//	return 0;
//}