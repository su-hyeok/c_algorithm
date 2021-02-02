/* Q4 문자열의 길이 구하기(a) */
//strlen 은 '\0' NULL 문자를 만날 때까지 문자열의 길이를 계산합니다.
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
	scanf_s("%s", &str, 256);

	printf("문자열의 길이는 %d입니다.\n", strlen(str));

	return 0;
}