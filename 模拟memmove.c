#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>
void* mymemmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest);
	assert(src);
	if (dest < src)
	{
		//从前向后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//从后向前拷贝
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);

		}
	}
	return ret;
}
int main()
{

	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
	mymemmove(arr3, arr3 + 2, 20);
	return 0;
}