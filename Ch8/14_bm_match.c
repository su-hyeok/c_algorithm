/* Boyer-Moore법을 구현한 프로그램 */
/* KMP 알고리즘의 목적과 유사.
   뒷부분에서 불일치가 일어날 확률이 높다는 성질을 활용.
   오른쪽 끝부터 비교. */
#include <stdio.h>
#include <string.h>
#include <limits.h>

/*--- Boyer-Moore 함수 ---*/
int bm_match(const char txt[], const char pat[])
{
	int pt;										/* txt 커서 */
	int pp;										/* pat 커서 */
	int txt_len = strlen(txt);					/* txt 문자 개수 */
	int pat_len = strlen(pat);					/* pat 문자 개수 */
	int skip[UCHAR_MAX + 1];					/* 건너뛰기 표 */
	
	// 건너뛰기 테이블(skip table) 만들기
	for (pt = 0; pt <= UCHAR_MAX; pt++)			
		skip[pt] = pat_len;
	
	for (pt = 0; pt < pat_len - 1; pt++)
		skip[pat[pt]] = pat_len - pt - 1;		/* pt == pat_len - 1 */
	
	//검색
	while (pt < txt_len) {
		pp = pat_len - 1; 			/* pat의 마지막 문자부터 검사합니다. */
		
		while (txt[pt] == pat[pp]) { 
			if (pp == 0) //검색 성공
				return pt;
			pp--;
			pt--;
		}
		pt += (skip[txt[pt]] > pat_len - pp) ? skip[txt[pt]] : pat_len - pp;
	}

	return -1; //while문이 종료되면 검색 실패
}

int main(void)
{
	int idx;
	char s1[256];		/* 텍스트 */
	char s2[256];		/* 패턴 */

	puts("Boyer-Moore법");
	printf("텍스트 : ");
	scanf_s("%s", s1, 256);
	printf("패턴 : ");
	scanf_s("%s", s2, 256);

	idx = bm_match(s1, s2);	/* 문자열 s1에서 문자열 s2를 Boyer-Moore법을 사용해 검색합니다. */
	if (idx == -1)
		puts("텍스트에 패턴이 없습니다.");
	else
		printf("%d번째 문자부터 match합니다.\n", idx + 1);

	return 0;
}