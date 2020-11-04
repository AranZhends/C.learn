#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int Comp(int a, int b)
{
	int d = a % b;
	if (d == 0)
	{
		return b;
	}
	else
	{
		if (a > b)
		{
			for (; d != 0; a = b, b = d)
			{
				d = a % b;


			}
			return a;
		}
		else
		{
			a = a^b;
			b = a^b;
			a = a^b;
			for (; d != 0; a = b, b = d)
			{
				d = a % b;
			}
			return a;
		}
	}
}


int main()
{
	int a, b;
	printf("请输入两个数:");
	scanf("%d%d", &a, &b);
	int d = Comp(a, b);
	printf("最大公约数为%d\n", d);
}