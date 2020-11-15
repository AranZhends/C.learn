#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Sort(int arr[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void ShowArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n",arr[i]); 
	}
}

int main()
{
	int arr[] = {12,34,23,54,65};
	int len = sizeof(arr) / sizeof(arr[0]);
	Sort(arr,len);
	ShowArr(arr,len);
	return 0;
}