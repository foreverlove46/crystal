#include<stdio.h>
int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	}a = { 10101,"Li Min",'M',"123 Beijing Road" };
	printf("No.%ld\nname:%s\nsex:%caddress:%s\n",a.num, a.name, a.sex, a.addr);
	return 0; 
}