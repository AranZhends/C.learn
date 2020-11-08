#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int count = 0;
	for (int i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
	}

	printf("1-100所有整数中9的个数：%d\n",count);

	return 0;
}