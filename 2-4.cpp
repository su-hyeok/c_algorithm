///*키와 사람 수를 난수로 생성한 후 키의 최댓값을 구하는 프로그램
//사람 수는 5 이상 20 이하의 난수로 입력하세요.*/
//
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//int maxof(const int a[], int n)
//{
//	int i;
//	int max = a[0];
//	for (i = 1; i < n; i++) {
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	return max;
//}
//
//int main(void)
//{
//	int i;
//	int* height = NULL;
//	srand((unsigned int)time(NULL)); /*시간으로 난수의 seed 초기화*/
//	int num = (rand() % 21) + 5; /*5 ~ 20의 난수 생성 - 대입*/
//	height = (int*)calloc(num, sizeof(int)); /*요소 개수가 num인 배열 생성*/
//	for (i = 0; i < num; i++) {
//		height[i] = (rand() % 90) + 100; /*100 ~ 189의 난수 생성 - 대입*/
//		printf("height[%d] = %d\n", i, height[i]);
//	}
//	printf("최댓값은 %d입니다.\n", maxof(height, num));
//	free(height); /*배열 height를 해제*/
//
//	return 0;
//}