///*5. 배열 요소를 역순으로 정렬하는 과정을 출력하는 프로그램
//조건 : 실습 2-7의 ary_reverse 함수를 수정하세요.*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
///*#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)*/
//
//void ary_reverse(int a[], int n)
//{
//	int i, j;
//	for (j = 0; j < n; j++) {
//		printf("%d ", a[j]);
//	}
//	printf("\n");
//	for (i = 0; i < n / 2; i++) {
//		printf("a[%d]와 a[%d]를 교환합니다.\n", i, n - i - 1);
//		int temp = a[i];
//		a[i] = a[n - i - 1];
//		a[n - i - 1] = temp;
//		for (j = 0; j < n; j++) {
//			printf("%d ", a[j]);
//		}
//		printf("\n");
//	}
//
//}
//
//int main(void)
//{
//	int i;
//	int* x; /*배열 첫 번째 요소의 포인터*/
//	int nx; /*배열 x의 요소 개수*/
//
//	printf("요소 개수 : "); scanf_s("%d", &nx);
//	x = (int*)calloc(nx, sizeof(int)); /*요소 개수가 nx인 int형 배열 x 생성*/
//	printf("%d개의 정수를 입력하세요.\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i); scanf_s("%d", &x[i]);
//	}
//	ary_reverse(x, nx);
//	printf("역순 정렬을 종료합니다.\n");
//	free(x);
//
//	return 0;
//}