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
	//��ʼ������
	InitBoard(board);
	//չʾ����
	Display(board);
	//����
	while (1)
	{
		char ret = ' ';
		PlayerMove(board);
		Display(board);
		//�ж���Ӯ
		ret = BoardCheck(board);
		if (ret != ' ')
		{
			if (ret == '*')
			{
				printf("���Ӯ\n");
				break;
			}
			else if (ret == '#')
			{
				printf("����Ӯ\n");
				break;
			}
			else
			{
				printf("ƽ��\n");
				break;
			}
		}
		ComputerMove(board);
		Display(board);
		//�ж���Ӯ
		ret = BoardCheck(board);
		if (ret != ' ')
		{
			if (ret == '*')
			{
				printf("���Ӯ\n");
				break;
			}
			else if (ret == '#')
			{
				printf("����Ӯ\n");
				break;
			}
			else
			{
				printf("ƽ��\n");
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
		printf("����������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("�����������������\n");
			break;
		}
	} while (input);
}