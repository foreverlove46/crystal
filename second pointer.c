#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;*/
	int* arr[3] = {&a,&b,&c };
	int i = 0;
	/*printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);*/
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	return 0;
}