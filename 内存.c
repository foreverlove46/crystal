#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//�жϴ�С���ֽ���
//�����ָ���ݵĵ�λ�������ڴ�ĸ�λ�������ݵĸ�λ���������ڴ�ĵ�λ�У�
//�����ָ���ݵĵ�λ�������ڴ�ĵ�λ�������ݵĸ�λ���������ڴ�ĸ�λ�С�
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}