#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void sur()
{
	printf("*********************\n");
	printf("*********************\n");
	printf("*****1.Enter*********\n");
	printf("*****0.Exit *********\n");
	printf("*********************\n");
	printf("*********************\n");
}
void game()
{
	int input = 0;
	int num = rand() % 100 + 1;
	while (1)
	{
		printf("请输入你猜的数字：");
		scanf("%d", &input);
		if (input > num)
		{
			printf("猜大了！\n");
		}
		else if (input < num)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("猜对啦！\n");
			break;
		}	
	}

}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do{
		sur();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("您输入的数字有误,请重新输入\n");
		}
	} while (input);
}