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
		printf("��������µ����֣�");
		scanf("%d", &input);
		if (input > num)
		{
			printf("�´��ˣ�\n");
		}
		else if (input < num)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("�¶�����\n");
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
			printf("���������������,����������\n");
		}
	} while (input);
}