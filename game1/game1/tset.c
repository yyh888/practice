#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("**** 1.play   0. exit ****\n");
	printf("**************************\n");
}


void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board);
	//展示棋盘
	Display(board);
	//下棋
	while (1)
	{
		char ret = ' ';
		PlayerMove(board);
		Display(board);
		//判断输赢
		ret = BoardCheck(board);
		if (ret != ' ')
		{
			if (ret == '*')
			{
				printf("玩家赢\n");
				break;
			}
			else if (ret == '#')
			{
				printf("电脑赢\n");
				break;
			}
			else
			{
				printf("平局\n");
				break;
			}
		}
		ComputerMove(board);
		Display(board);
		//判断输赢
		ret = BoardCheck(board);
		if (ret != ' ')
		{
			if (ret == '*')
			{
				printf("玩家赢\n");
				break;
			}
			else if (ret == '#')
			{
				printf("电脑赢\n");
				break;
			}
			else
			{
				printf("平局\n");
				break;
			}
		}
	}

}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入数字:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}