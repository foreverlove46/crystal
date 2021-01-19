#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>//包含assert()函数，用来断言
#include<string.h>//包含strlen（）函数，用来计算字符串的长度
void reverse(char* str)
{
	assert(str);//断言，传参如果错误，程序报错

	int len = strlen(str);//strlen计算字符串长度，并把字符串长度存放在整形变量len中
	char* left = str;//创建一个 char*型 指针变量left指向 str , 既 left 指向 str 的首元素
	char* right = len + str - 1;//创建一个 char*型 指针变量 right, right 指向'\0'后一个元素 

	//如果left小于right, left 指向的元素就与 right 指向的元素交换，之后left+1，right-1 
	while (left < right)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);//gets()函数:把输入的内容存入()中，包括空格
	reverse(arr);//调用reverse函数，并把arr传过去
	printf("%s", arr);//打印arr

	return 0;
}