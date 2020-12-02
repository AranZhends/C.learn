#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int mul = 0;
	int i = 0;
	for(i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			mul = j*i;
			printf("%d*%d=%d\n",j,i,mul);
		}
	}
	return 0;
}