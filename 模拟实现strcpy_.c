#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
char* mystrcpy(char* dest,const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "confucius";
	char arr2[] = "influence";
	mystrcpy(arr1, arr2);
	pritnf("%s\n", arr1);

	return 0;
}