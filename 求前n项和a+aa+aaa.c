#define _CRT_SECURE_NO_WARNINGS 
//计算 a+aa+aaa+aaaa....的前n项和
#include<stdio.h>
int main()
{
	int n = 0;
	int j = 0;
	scanf("%d%d", &n, &j);
	int i = 0;
	int sum = 0;
	int ret = 0;
	for (i = 0; i < j; i++)
	{
		ret = ret * 10 + n;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}