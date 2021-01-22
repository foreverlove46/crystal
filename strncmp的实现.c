#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main()
{
	const char* p1 = "asdf";
	const char* p2 = "asdf";
	int ret = strncmp(p1, p2, 4);
	printf("%d\n", ret);
	return 0;
}