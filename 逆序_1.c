#define _CRT_SECURE_NO_WARNINGS 
//×Ö·û´®ÄæÐò
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left < right)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[256] = { 0 };
	scanf("%s", arr);
	reverse(arr);
	printf("ÄæÐòºóµÄ×Ö·û´®:\n");

	printf("%s", arr);
	return 0;
}
