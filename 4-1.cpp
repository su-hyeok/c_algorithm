#include <stdio.h>
#include "IntStack.h"

int main(void)
{
	IntStack s;
	if (Initialize(&s, 5) == -1) {
		puts("스택 생성에 실패하였습니다.");
		return 1;
	}

	while (1) {
		int menu, x;
		int idx;

		printf("현재 데이터 수 : %d / %d\n", Size(&s), Capacity(&s));
		printf("(1) 푸시 (2) 팝 (3) 피크 (4) 출력 (5) 초기화 (6) 검색 (7) 비어 있는 (8) 가득 찬 (0) 종료 : ");
		scanf_s("%d", &menu);
		if (menu == 0) break;

		switch (menu) {
		case 1: /*--- 푸시---*/
			printf("데이터 : ");
			scanf_s("%d", &x);
			if (Push(&s, x) == -1)
				puts("\a오류 : 푸시에 실패하였습니다.");
			break;

		case 2: /*--- 팝 ---*/
			if (Pop(&s, &x) == -1)
				puts("\a오류 : 팝에 실패하였습니다.");
			else
				printf("팝 데이터는 %d입니다.\n", x);
			break;

		case 3: /*--- 피크 ---*/
			if (Peek(&s, &x) == -1)
				puts("\a오류 : 피크에 실패하였습니다.");
			else
				printf("피크 데이터는 %d입니다.\n", x);
			break;

		case 4: /*--- 출력 ---*/
			Print(&s);
			break;

		case 5: /*--- 초기화 ---*/
			Clear(&s);
			break;

		case 6: /*--- 검색 ---*/
			printf("검색할 데이터 : ");
			scanf_s("%d", &x);
			if ((idx = Search(&s, x)) == -1)
				puts("\a오류 : 검색에 실패하였습니다.");
			else
				printf("검색 데이터는 %d에 있습니다.\n", idx);
			break;

		case 7: /*--- 비어 있는 ---*/
			if (IsEmpty(&s) == 1)
				puts("\a스택이 비어 있습니다.");
			else
				printf("비어 있지 않습니다.\n");
			break;

		case 8: /*--- 가득 찬 ---*/
			if (IsFull(&s) == 1)
				puts("\a스택이 가득 찼습니다.");
			else
				printf("가득 차있지 않습니다.\n");
			break;
		}
	}

	Terminate(&s);

	return 0;
}