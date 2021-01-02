/*Q9.정수 a,b를 포함하여 그 사이의 모든 정수 합 구하는 함수 작성*/
#include <stdio.h>

int sumof(int a, int b) {

	int i, min, max;
	int sum=0;

	if (a < b) {
		min = a;
		max = b;
	}
	else {
		max = a; min = b;
	}
		
	for (i = min; i <= max; i++) {
		sum += i;
	}
	return sum;

}

int main(void) {
	int a, b;

	puts("a,b 사이의 모든 정수 합을 구합니다.");
	printf("a의 값: "); scanf_s("%d", &a);
	printf("b의 값: "); scanf_s("%d", &b);

	printf("a,b 사이의 모든 정수 합은 %d입니다.", sumof(a,b));
	return 0;
}