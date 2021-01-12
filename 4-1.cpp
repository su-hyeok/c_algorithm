#include <stdio.h>
#include "IntStack.h"

int main(void)
{
	IntStack s;
	if (Initialize(&s, 5) == -1) {
		puts("���� ������ �����Ͽ����ϴ�.");
		return 1;
	}

	while (1) {
		int menu, x;
		int idx;

		printf("���� ������ �� : %d / %d\n", Size(&s), Capacity(&s));
		printf("(1) Ǫ�� (2) �� (3) ��ũ (4) ��� (5) �ʱ�ȭ (6) �˻� (7) ��� �ִ� (8) ���� �� (0) ���� : ");
		scanf_s("%d", &menu);
		if (menu == 0) break;

		switch (menu) {
		case 1: /*--- Ǫ��---*/
			printf("������ : ");
			scanf_s("%d", &x);
			if (Push(&s, x) == -1)
				puts("\a���� : Ǫ�ÿ� �����Ͽ����ϴ�.");
			break;

		case 2: /*--- �� ---*/
			if (Pop(&s, &x) == -1)
				puts("\a���� : �˿� �����Ͽ����ϴ�.");
			else
				printf("�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3: /*--- ��ũ ---*/
			if (Peek(&s, &x) == -1)
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 4: /*--- ��� ---*/
			Print(&s);
			break;

		case 5: /*--- �ʱ�ȭ ---*/
			Clear(&s);
			break;

		case 6: /*--- �˻� ---*/
			printf("�˻��� ������ : ");
			scanf_s("%d", &x);
			if ((idx = Search(&s, x)) == -1)
				puts("\a���� : �˻��� �����Ͽ����ϴ�.");
			else
				printf("�˻� �����ʹ� %d�� �ֽ��ϴ�.\n", idx);
			break;

		case 7: /*--- ��� �ִ� ---*/
			if (IsEmpty(&s) == 1)
				puts("\a������ ��� �ֽ��ϴ�.");
			else
				printf("��� ���� �ʽ��ϴ�.\n");
			break;

		case 8: /*--- ���� �� ---*/
			if (IsFull(&s) == 1)
				puts("\a������ ���� á���ϴ�.");
			else
				printf("���� ������ �ʽ��ϴ�.\n");
			break;
		}
	}

	Terminate(&s);

	return 0;
}