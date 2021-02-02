#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50个 struct S类型的数据
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
//		//打印错误原因的一个方式
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
//	//当动态申请的空间不再使用的时候就应该还给操作系统
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
//void* malloc(size_t size)  void* calloc(num,size_t size)  初始化全部元素为零
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
//	//realloc 函数
//	//当使用realloc函数会出现两种情况
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后灭有足够的内存空间可以追加，则realloc函数会
//	//找一个新的内存区域开辟一块满足需求的空间，并把原来的内存空间中的内容
//	//拷贝到新的内存空间中，并把原来的内存空间释放掉，最后返回新开辟内存空间的地址  
//	//3.用过一个新的变量的来接受realloc函数的返回值
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	free(p);
//	return 0;
//}
//1.对NULL解引用操作
//eaxmple:
//int main()
//{
//	int* p = malloc(40);
//	*p = 0;
//	return 0;
//}
//2.对动态内存开辟的空间的越界访问
//3.对非动态内存空间进行free

