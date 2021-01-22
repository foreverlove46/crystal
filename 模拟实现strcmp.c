#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int mystrcmp(char* str1, char* str2)
{

	while (*str1 = *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return(*str1 - *str2);
}
int main()
{
	char* p1 = "asdfg";
	char* p2 = "qwert";
	int ret = mystrcmp(p1, p2);
	printf("%d\n", ret);
	return 0;
}