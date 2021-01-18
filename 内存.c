#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//判断大小端字节序
//大端是指数据的低位保存在内存的高位，而数据的高位，保存在内存的低位中；
//大端是指数据的低位保存在内存的低位，而数据的高位，保存在内存的高位中。
int check_sys()
{
	int i = 1;
	return *((char*)&i);
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}