#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int reTurn(int x)
{
	int count = 1;
	while (x / 2 != 0)
	{
		if (x % 2 != 0)
		{
			count++;
		}
		x = x / 2;
	}
	return count;
}


int main()
{
	int a = 0;
	printf("������һ��������");
	scanf("%d",&a);
	printf("ת���ɶ�������%d��1\n",reTurn(a));
	return 0;
}