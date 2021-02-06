#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
//strtokº¯Êý·Ö¸î×Ö·û´®

int main()
{
	char arr[] = "full love in jingjing";
	char* p = " ";
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}
/*
full
love
in
jingjing
*/