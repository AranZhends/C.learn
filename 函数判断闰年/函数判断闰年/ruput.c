#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void ruput(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("����������\n");
	}
	else
		printf("���겻������\n");
}
int main()
{
	int year = 0;
	scanf("%d",&year);
	ruput(year);
	return 0;
}