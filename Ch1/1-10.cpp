///*10. 두 변수 a, b에 정수를 입력하고 b-a를 출력하는 프로그램*/
//
//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//	int sub;
//	printf("a의 값 : "); scanf_s("%d", &a);
//	printf("b의 값 : "); scanf_s("%d", &b);
//	if (b > a) {
//		sub = b - a;
//		printf("%d - %d는 %d입니다.", b, a, sub);
//	}
//	else {
//		printf("a보다 큰 값을 입력하세요!\n");
//		printf("b의 값 : "); scanf_s("%d", &b);
//		sub = b - a;
//		printf("%d - %d는 %d입니다.", b, a, sub);
//	}
//	return 0;
//}