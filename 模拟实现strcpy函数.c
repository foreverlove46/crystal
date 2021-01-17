#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//把src指向的字符串拷贝到dest指向的空间，包括'\0'字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "############";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;

}