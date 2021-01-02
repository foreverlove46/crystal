#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int binary_search(int arr[], int k)
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			left = mid - 1;
		}
		else
		{
			return mid;
		}
	}


}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int ret =binary_search(arr, k);
	if (ret == -1)
	{
		printf("找到了");
	}
	else
	{
		printf("找到了%d\n", ret);
	}
	return 0;
}
