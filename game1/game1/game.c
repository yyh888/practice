#include"game.h"



void InitBoard(char board[ROW][COL])
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Display(char board[ROW][COL])
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			//   |   |   
			//---|---|---
			//   |   |   
			//---|---|---
			//   |   |   
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}


void PlayerMove(char board[ROW][COL])
{
	printf("玩家走\n");
	printf("请输入坐标：>");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (1 <= x && x <= ROW && 1 <= x && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	
}


void ComputerMove(char board[ROW][COL])
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


char BoardCheck(char board[ROW][COL])
{
	int flag = ' ';
	int i = 0;
	int j = 0;
	//横判断
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
		{
			flag = board[i][1];
			break;
		}
	}
	//竖判断
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
		{
			flag = board[1][i];
			break;
		}
	}
	//斜判断
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
			{
				flag = board[1][1];
				break;
			}
		}
	}
	//平局判断
	char flag1 = 'a';
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				flag1 = ' ';
				break;
			}
		}
	}
	if (flag1 == 'a')
	{
		return flag1;
	}
	return flag;
}