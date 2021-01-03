#define _CRT_SECURE_NO_WARNINGS 
# include<stdio.h>

int main()
{
	char str1[] = "asdfg";
	char str2[] = "asdfg";
	const char* p1 = "asdfg";
	const char* p2 = "asdfg";
	printf("%s\n", &str1[0]);
	printf("%s\n", &str2);
	printf("%s\n", &p1);
	printf("%s\n", &p2);
	return 0;
}
