//int형 스택 IntStack의 사용 예 
#include <stdio.h>
#include "IntStack.h"

int main(void)
{
	IntStack s;

	if (initialize(&s, 64) == -1) {
		puts("스택의 생성에 실패했습니다.");
		return 1;
	}

	while (1) {
		int menu, x;
		int idx;

		printf("현재 데이터 수 : %d / %d\n", size(&s), capacity(&s));
		printf("1)푸시 2)팝 3)피크 4)출력 5)검색 6)초기화 7)빈 상태 / 가득 찬 상태 0) 종료：");
		scanf("%d", &menu);

		if (menu == 0) break;

		switch (menu) {
		case 1:						/*--- 푸시 ---*/
			printf("데이터 : ");
			scanf("%d", &x);
			if (push(&s, x) == -1)
				puts("\a오류 : 푸시에 실패했습니다.");
			break;

		case 2:						/*--- 팝 ---*/
			if (pop(&s, &x) == -1)
				puts("\a오류 : 팝에 실패했습니다.");
			else
				printf("팝한 데이터는 %d입니다.\n", x);
			break;

		case 3:						/*--- 피크 ---*/
			if (peek(&s, &x) == -1)
				puts("\a오류 : 피크에 실패했습니다.");
			else
				printf("피크한 데이터는 %d입니다.\n", x);
			break;

		case 4:						/*--- 출력---*/
			Print(&s);
			break;

		case 5:						/*--- 검색 ---*/
			printf("검색 데이터：");
			scanf("%d", &x);
			if ((idx = search(&s, x)) == -1)
				puts("\a오류 : 검색에 실패했습니다.");
			else
				printf("데이터는 인덱스 %d 위치에 있습니다.\n", idx);
			break;

		case 6:						/*--- 초기화 ---*/
			clear(&s);
			break;

		case 7:						/*--- 빈 상태 / 가득 찬 상태 ---*/
			printf("스택이 비어 %s.\n", isempty(&s) ? "있습니다" : "있지 않습니다");
			printf("스택이 가득 %s.\n", isfull(&s) ? "찼습니다" : "차지 않았습니다");
			break;
		}
	}

	terminate(&s);
	return 0;
}