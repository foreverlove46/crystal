#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int mystrlen(char* str)
{
	if (*str != '\0')
		return 1 + mystrlen(str + 1);
	else
		return 0;

}
int main()
{
	char arr[] = { "bit hallo" };
	int len = mystrlen(arr);
	printf("%d", len);
	return 0;
}

