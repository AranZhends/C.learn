#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void exchange(int *p, int *q,int len)
{
	int temp;
	for (int i = 0; i < len; i++)
	{
		temp = *(p + i);
		*(p + i) = *(q + i);
		*(q + i) = temp;
	}
}

ShowArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {11,12,13,14,15};
	int len = sizeof(arr1) / sizeof(arr1[0]);
	int *p = &arr1[0];
	int *q = &arr2[0];
	ShowArr(arr1, len);
	ShowArr(arr2, len);
	exchange(p,q,len);
	ShowArr(arr1, len);
	ShowArr(arr2, len);

	return 0;
}