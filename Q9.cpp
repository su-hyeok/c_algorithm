/*Q9.���� a,b�� �����Ͽ� �� ������ ��� ���� �� ���ϴ� �Լ� �ۼ�*/
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

	puts("a,b ������ ��� ���� ���� ���մϴ�.");
	printf("a�� ��: "); scanf_s("%d", &a);
	printf("b�� ��: "); scanf_s("%d", &b);

	printf("a,b ������ ��� ���� ���� %d�Դϴ�.", sumof(a,b));
	return 0;
}