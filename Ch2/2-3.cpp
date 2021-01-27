///*3. 키의 평균을 구하는 프로그램
//정수가 아닌 실수로 평균값을 구합니다.*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//double aveof(const int a[], int n)
//{
//	int i;
//	double sum;
//	sum = 0;
//	for (i = 0; i < n; i++) {
//		sum = sum + a[i];
//	}
//	double avg = sum / n;
//	return avg;
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
//	printf("평균은 %f입니다.\n", aveof(height, num));
//	free(height);
//
//	return 0;
//}