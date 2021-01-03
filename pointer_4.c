#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>	
int test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
}
int main()
{
	int arr[10] = { 0 };
	test(arr);
	return 0;
}