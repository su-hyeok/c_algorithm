///*2. 키의 합계를 구하는 프로그램*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int sumof(const int a[], int n)
//{
//	int i;
//	int sum;
//	sum = 0;
//	for (i = 0; i < n; i++) {
//		sum = sum + a[i];
//	}
//	return sum;
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
//	printf("합계는 %d입니다.\n", sumof(height, num));
//	free(height);
//
//	return 0;
//}