#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

void menu()
{
	printf("-----------�˵�--------------------\n");
	printf("----1.Add    2.Sub      -----------\n");
	printf("----3.Mul    4.div      -----------\n");
	printf("----0.exit-------------------------\n");
	printf("-----------------------------------\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}


int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int  (*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div };
	
	do
	{
		menu();
		printf("��ѡ���ܣ�");
		scanf("%d\n", &input);
		if(input >= 1 && input <= 4)
		{
			printf("����������������,�ö��Ÿ�����");
			scanf("%d,%d\n", &x, &y);
			int ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
			
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}