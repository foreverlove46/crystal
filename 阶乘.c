#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
		return n * fac(n - 1);
}
main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac(n);
	printf("%d\n", ret);
	return 0;
}