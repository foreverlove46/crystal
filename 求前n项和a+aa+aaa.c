#define _CRT_SECURE_NO_WARNINGS 
//���� a+aa+aaa+aaaa....��ǰn���
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