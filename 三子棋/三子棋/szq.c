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
		printf("���Ӯ\n");
	}
	
	if (ret == 'O')
	{
		printf("����Ӯ\n");

	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;
	do
	{
		meun();
		printf("��ѡ���Ƿ������Ϸ:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ����������������\n");
			break;
		}
	} while (input);
	return 0;
}