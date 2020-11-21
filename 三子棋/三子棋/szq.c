#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void meun()
{
	printf("****************\n");
	printf("*****0.Exit*****\n");
	printf("*****1.Play*****\n");
	printf("****************\n");
}


void game()
{
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	ShowBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
	}
	if (ret == 'X')
	{
		printf("玩家赢\n");
	}
	
	if (ret == 'O')
	{
		printf("电脑赢\n");

	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	do
	{
		meun();
		printf("请选择是否进入游戏:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择有误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}