#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<ctype.h>
int main()
{
	//char ch1 = tolower('q'); //大写转小写
	//char ch = toupper('q');	//小写转大写

	//putchar(ch);

	char arr[] = "I Am Bite";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}