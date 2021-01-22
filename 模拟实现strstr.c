#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
char* mystrstr(const char* p1, const char* p2)
{
	assert(p1);
	assert(p2);

	char* s1 = NULL;
	char* s2 = NULL;
	char* cur =(char*) p1;

	if (!*p2)
	{
		return (char*)p1;
	}

	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;

		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}

		cur++;
	}
	return NULL;
}
int main()
{
	char* arr1[] = "asdf";
	char* arr2[] = "df";
	char* ret = mystrstr(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}