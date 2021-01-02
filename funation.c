#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "mafei niubi";
	memset(str, '*', 5);
	printf("%s\n", str);
	return 0;
}