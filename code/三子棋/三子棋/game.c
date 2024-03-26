#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"

void meun()
{
	printf("*******************************\n");
	printf("*********1.play 0.exit*********\n");
	printf("*******************************\n");
	printf("请选择是否游戏!\n");
}
//打印棋盘
void Displayboard(char board[ROW][COL],int row,int col)
{
	for (int i = 0; i < col; i++)
	{
		printf(" %d  ", i + 1);
	}
	printf("\n");
	for (int i = 0;i<row;i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j<col-1)
			{
				printf(" %c |", board[i][j]);
			}
			else
			printf(" %c ", board[i][j]);
		}
		printf("\n");
		
		//打印分割线
		if (i < row - 1)
		{
			for (int r = 0; r < row ; r++)
			{	
				
				printf("---");
				
				if (r < row - 1)
					printf("|");
			}
		}
		
		printf("\n");
	}
	
	printf("\n");

}
//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Playmove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋");
	while (1)
	{
		printf("请输入坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= col && y >= 1 && y <= row)
		{
			if (board[y - 1][x - 1] == ' ')
			{
				board[y - 1][x - 1] = 'O';
				break;
			}
			else
			{
				printf("位置被占，请重新输入:");
			}
		}
		else
		{
			printf("输入非法，请重新输入:");
		}
	}
}
void Computermove(char board[ROW][COL], int row, int col)
{
	srand((unsigned int)time(NULL));
	int x = 0;
	int y = 0;
	printf("电脑下棋");
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[y][x] == ' ')
		{
			board[y][x] = 'X';
			break;
		}
	}
	printf("\n");
}
int Isfull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char Iswin(char board[ROW][COL],int row,int col)
{
	//行
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//列
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (Isfull(board,row,col) == 1)
	{
		return 'q';
	}
}
