#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* mystrcat(char* dest,const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;

	while (*dest)
	{
		dest++;
	}

	while (*dest++ = *src++)
	{
		;
	}
	
	return ret;
}
int main()
{
	char arr1[30] = "space";
	char arr2[] = "hi";
	mystrcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}