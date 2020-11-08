#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int arr[11] = {2,3,6,7,8,10,11,13,45,89,96};
	int len = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = len-1;
	int mid = (right + left) / 2;
	scanf("%d",&a);
	while (left <= right)
	{
		if (a > arr[mid])
		{
			left = mid + 1;
			mid = (right + left) / 2;
		}
		else if (a < arr[mid])
		{
			right = mid - 1;
			mid = (right + left) / 2;
		}
		else
			break;
	}
	if (left>right)
	{
		printf("没有在数组中找到该数\n");

	}
	else
	{
		printf("该数字所在数组下标为:%d\n", mid);
	}
	return 0;
}