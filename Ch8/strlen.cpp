/* Q4 문자열의 길이 구하기(a) */
//strlen 은 '\0' NULL 문자를 만날 때까지 문자열의 길이를 계산!
#include <stdio.h>

size_t strlen(const char *s)
{
	size_t len = 0;

	while (*(s + len) != '\0') 
		len++;
	return len;
}

int main(void)
{
	char str[256];

	printf("문자열：");
	scanf_s("%s", &str, 256); /*사용자가 입력한 문자의 개수가 메모리의 크기를 넘어서는 문제를 막기 위해 사용할 메모리의 크기를 명시*/

	printf("문자열의 길이는 %d입니다.\n", strlen(str));

	return 0;
}