#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>//����assert()��������������
#include<string.h>//����strlen�������������������ַ����ĳ���
void reverse(char* str)
{
	assert(str);//���ԣ�����������󣬳��򱨴�

	int len = strlen(str);//strlen�����ַ������ȣ������ַ������ȴ�������α���len��
	char* left = str;//����һ�� char*�� ָ�����leftָ�� str , �� left ָ�� str ����Ԫ��
	char* right = len + str - 1;//����һ�� char*�� ָ����� right, right ָ��'\0'��һ��Ԫ�� 

	//���leftС��right, left ָ���Ԫ�ؾ��� right ָ���Ԫ�ؽ�����֮��left+1��right-1 
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
	gets(arr);//gets()����:����������ݴ���()�У������ո�
	reverse(arr);//����reverse����������arr����ȥ
	printf("%s", arr);//��ӡarr

	return 0;
}