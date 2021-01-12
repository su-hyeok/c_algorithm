#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	IntQueue que;
	if (Initialize(&que, 64) == -1) {
		puts("큐 생성에 실패하였습니다.");
		return 1;
	}

	while (1) {
		int menu, x;
		int idx, i;

		printf("현재 데이터 수 : %d / %d\n", Size(&que), Capacity(&que));
		printf("(1) 인큐 (2) 디큐 (3) 피크 (4) 출력 (5) 초기화 (6) 검색1 (7) 검색2 (8) 비어 있는 (9) 가득 찬 (0) 종료 : ");
		scanf_s("%d", &menu);
		if (menu == 0) break;

		switch (menu) {
		case 1: /*--- 인큐---*/
			printf("데이터 : ");
			scanf_s("%d", &x);
			if (Enque(&que, x) == -1)
				puts("\a오류 : 인큐에 실패하였습니다.");
			break;

		case 2: /*--- 디큐 ---*/
			if (Deque(&que, &x) == -1)
				puts("\a오류 : 디큐에 실패하였습니다.");
			else
				printf("디큐 데이터는 %d입니다.\n", x);
			break;

		case 3: /*--- 피크 ---*/
			if (Peek(&que, &x) == -1)
				puts("\a오류 : 피크에 실패하였습니다.");
			else
				printf("피크 데이터는 %d입니다.\n", x);
			break;

		case 4: /*--- 출력 ---*/
			Print(&que);
			break;

		case 5: /*--- 초기화 ---*/
			Clear(&que);
			break;

		case 6: /*--- 검색 ---*/
			printf("검색 데이터 : ");
			scanf_s("%d", &x);
			if ((idx = Search2(&que, x)) == -1)
				puts("\a오류 : 검색에 실패하였습니다.");
			else
				printf("검색 데이터는 %d 인덱스에 있습니다.\n", idx);
			break;

		case 7: /*--- 검색2 ---*/
			printf("검색 데이터 : ");
			scanf_s("%d", &x);
			if ((i = Search2(&que, x)) == -1)
				puts("\a오류 : 검색에 실패하였습니다.");
			else
				printf("검색 데이터는 큐의 맨 앞 요소에서 %d만큼 뒤에 있습니다.\n", i);
			break;

		case 8: /*--- 비어 있는 ---*/
			if (IsEmpty(&que) == 1)
				puts("\a큐가 비어 있습니다.");
			else
				printf("비어 있지 않습니다.\n");
			break;

		case 9: /*--- 가득 찬 ---*/
			if (IsFull(&que) == 1)
				puts("\a큐가 가득 찼습니다.");
			else
				printf("가득 차있지 않습니다.\n");
			break;
		}
	}

	Terminate(&que);

	return 0;
}