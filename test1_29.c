#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//struct S
//{
//	char name[20];
//	char sex;
//	int age;
//};
//�ṹ��������ã� 
//struct Node 
//{
//	int age;  //     ������
//	struct Node* next;//   !!!srtuct Node* ָ�����  ָ����
//};
//#pragma pack(4)//���õ�Ĭ�϶�����4
//typedef struct Node
//{
//	double u;
//	int age;
//	int sex;
//	//char name[20];
//	//struct Node* next;
//}Node;
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//int main()
//{
//	/*struct Node;
//	Node;*/
//	/*struct S  s1;
//	struct S s2;*/
//	//struct Node list = { 100,'c',"hello" };
//	//printf("age=%d  sex=%c  name=%s \n", list.age, list.sex, list.name);//�ṹ����� ��  ������ .  ��Ա     
//	//printf("%d\n", sizeof(Node));
//	printf("%d\n", sizeof(struct Node));
//	return 0;
//
//}
//#include<stddef.h>
//typedef struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));   //offsetof  �������ƫ����
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


//�ṹ�崫��
//typedef struct Node
//{
//	char c;
//	int i;
//	double d;
//};
//void Init(struct Node* pN)
//{
//	pN->c = 'c';
//	pN->i = 106;
//	pN->d = 106108;
//}
//void Print(const struct Node* pi)//��ַ
//{
//	printf("%c %d %lf\n", pi->c, pi->i, pi->d);
//}
//void Print1(struct Node list)//��ֵ
//{
//	printf("%c\n%d\n%lf\n", list.c, list.i, list.d);
//
//}
//int main()
//{
//	struct Node list = { 0 };
//	Init(&list);
//	Print(&list);
//	Print1(list);
//	return 0;
//}
//λ��---
//typedef struct Node
//{
//	
//	char a : 8;
//	char b : 2;
//	char c : 3;
//	char d : 4;
//}s;
//int main()
//{
//	struct Node s = { 0 };
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 30;
//	s.d = 40;
//
//
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//ö������

//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum color
//{
//	RED,//0
//	YELLOW,//1
//	BULE//2
//};
//int main()
//{
//	/*enum sex s = MALE;
//	enum color c = RED;*/
//	printf("%d %d\n", RED, BULE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//������-->  ���ÿռ�  --- >  ������
//union Un
//{
//	double c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &u);
//	return 0;
//}

//int main()
//{
//	//int a = 0x11223344;
//	//�͵�ַ--------------�ߵ�ַ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
//
//	printf("%p\n", a);
//	return 0;
//}
//
//
//int check()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = 0;
//	int a = 1;
//	ret = check();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���");
//	return 0;
//}
//
//enum sex
//{
//	male,
//	famle,
//};
//int main()
//{
//	enum sex s = male;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

