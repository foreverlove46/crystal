#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>
struct s
{
	char name[20];
	int age;
};
void* mymemcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest);
	assert(src);

	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	//int arr[] = { 1, 2, 3, 4, 5 };
	//int arr1[5] = { 0 };
	//memcpy(arr1, arr, sizeof(arr1));
	struct s arr3[] = { {"bite",15},{"hello",18} };
	struct s arr4[3] = { 0 };
	mymemcpy(arr4, arr3, sizeof(arr3));

	return 0;
}
