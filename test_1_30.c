#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50�� struct S���͵�����
//	return 0;
//}

//malloc free realloc calloc
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	int* p =(int*) malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ���Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p= (int*)calloc(10, sizeof(int)); 
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//return 0;
//}
//void* malloc(size_t size)  void* calloc(num,size_t size)  ��ʼ��ȫ��Ԫ��Ϊ��
//void* realloc
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//	    int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//
//		}
//	}
//	int* ptr = realloc(p, 40);
//	//realloc ����
//	//��ʹ��realloc����������������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮�������㹻���ڴ�ռ����׷�ӣ���realloc������
//	//��һ���µ��ڴ����򿪱�һ����������Ŀռ䣬����ԭ�����ڴ�ռ��е�����
//	//�������µ��ڴ�ռ��У�����ԭ�����ڴ�ռ��ͷŵ�����󷵻��¿����ڴ�ռ�ĵ�ַ  
//	//3.�ù�һ���µı�����������realloc�����ķ���ֵ
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	free(p);
//	return 0;
//}
//1.��NULL�����ò���
//eaxmple:
//int main()
//{
//	int* p = malloc(40);
//	*p = 0;
//	return 0;
//}
//2.�Զ�̬�ڴ濪�ٵĿռ��Խ�����
//3.�ԷǶ�̬�ڴ�ռ����free

