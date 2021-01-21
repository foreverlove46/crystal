#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int strlen(char* str)
{
	assert(str != NULL);
	int cnt = 0;
	while (*str)
	{
		cnt++;
		str++;
	}
	return cnt;
}
int main()
{
	char arr[] = "flightspace";
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}