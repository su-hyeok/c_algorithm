///*Q11. ���� ������ �Է��ϰ� �ڸ����� ����ϴ� ���α׷�*/
#include <stdio.h>

int main(void)
{
	int a;
	int i;
	puts("���� ������ �Է��ϸ� �ڸ����� ����մϴ�.");
	/*do while(�����)��*/
	do {
		printf("���� ������ �Է��ϼ���: "); scanf_s("%d", &a);	
	} while (a<= 0); 
	
	for (i = 0; a > 0; i++) {
		a /= 10;
	}
	printf("�Է��� ���� �ڸ����� %d�Դϴ�." ,i);

	return 0;
}

