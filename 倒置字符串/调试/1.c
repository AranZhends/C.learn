#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void change(char *left,char *right)
{
	while (left < right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		right--;
		left++;
	}
}



void reserve(char *arr)
{
	int len = strlen(arr);
	if (len <= 1)
		return;
	change(arr,arr+len-1);
	char *cur = arr;
	while (*cur)
	{
		char *start = cur;
		while (*cur != ' '&&*cur != '\0')
		{
			cur++;
		}
		change(start,cur-1);
		while (*cur ==' ')
			cur++;
	}
}
int main()
{
	char arr[100] = {0};
	gets(arr);
	reserve(arr);
	printf("%s\n",arr);
	return 0;
}