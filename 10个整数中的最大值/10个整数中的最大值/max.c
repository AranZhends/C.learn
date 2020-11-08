#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int arr[10];
	int i =0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	int a = arr[0];
	for (i = 1; i < 10; i++)
	{
		int b = arr[i];
		if (a >= b)
		{
		}
		else
		{
			a = b;
		}
	}
	printf("%d\n",a);

	return 0;
}