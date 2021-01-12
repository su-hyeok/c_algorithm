#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	IntQueue que;
	if (Initialize(&que, 5) == -1) {
		puts("ť ������ �����Ͽ����ϴ�.");
		return 1;
	}

	while (1) {
		int menu, x;
		int i;

		printf("���� ������ �� : %d / %d\n", Size(&que), Capacity(&que));
		printf("(1) ��ť (2) ��ť (3) ��ũ (4) ��� (5) �ʱ�ȭ (6) �˻� (7) ��� �ִ� (8) ���� �� (0) ���� : ");
		scanf_s("%d", &menu);
		if (menu == 0) break;

		switch (menu) {
		case 1: /*--- ��ť---*/
			printf("������ : ");
			scanf_s("%d", &x);
			if (Enque(&que, x) == -1)
				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
			break;

		case 2: /*--- ��ť ---*/
			if (Deque(&que, &x) == -1)
				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
			else
				printf("��ť �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3: /*--- ��ũ ---*/
			if (Peek(&que, &x) == -1)
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 4: /*--- ��� ---*/
			Print(&que);
			break;

		case 5: /*--- �ʱ�ȭ ---*/
			Clear(&que);
			break;

		case 6: /*--- �˻� ---*/
			printf("�˻� ������ : ");
			scanf_s("%d", &x);
			if ((i = Search2(&que, x)) == -1)
				puts("\a���� : �˻��� �����Ͽ����ϴ�.");
			else
				printf("�˻� �����ʹ� �迭 que[%d]�� �ֽ��ϴ�.\n", i);
			break;

		case 7: /*--- ��� �ִ� ---*/
			if (IsEmpty(&que) == 1)
				puts("\ať�� ��� �ֽ��ϴ�.");
			else
				printf("��� ���� �ʽ��ϴ�.\n");
			break;

		case 8: /*--- ���� �� ---*/
			if (IsFull(&que) == 1)
				puts("\ať�� ���� á���ϴ�.");
			else
				printf("���� ������ �ʽ��ϴ�.\n");
			break;
		}
	}

	Terminate(&que);

	return 0;
}