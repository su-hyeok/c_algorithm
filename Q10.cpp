/*Q10. b-a�� ����ϴ� ���α׷�*/
#include <stdio.h>

int main(void)
{
	int a, b;
	int i;
	puts("1���� n������ ���� ���մϴ�.");
	/*do while(�����)��*/
	do {
		printf("a�� ��: "); scanf_s("%d", &a);
		printf("b�� ��: "); scanf_s("%d", &b);

		if (b <= a) {
			printf("a���� ū ���� �Է��ϼ���!\n");
		}
	} while (b <= a); 
	
	i = b - a;
	printf("b-a�� %d�Դϴ�." ,i);

	return 0;
}