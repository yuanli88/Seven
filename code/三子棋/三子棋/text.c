#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"
int row = ROW;
int col = COL;
void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, row, col);
	//打印棋盘
	Displayboard(board, row, col);
	while (1)
	{
		char ret = 0;
		Playmove(board, row, col);
		Displayboard(board, row, col);
		//判断输赢
		ret = Iswin(board,row,col);
		if (ret == 'O')
		{
			printf("***玩家胜利***\n");
			break;
		}
		else if (ret == 'q')
		{
			printf("***平局***\n");
			break;
		}
		Computermove(board, row, col);
		Displayboard(board, row, col);
		//判断输赢
		ret = Iswin(board, row, col);
		if (ret == 'X')
		{
			printf("***电脑胜利***\n");
			break;
		}
		else if (ret == 'q')
		{
			printf("***平局***\n");
			break;
		}

	}
}
int main()
{

	int slect = 0;
	//选择界面;
	do
	{
		meun();
			scanf("%d", &slect);
		switch (slect)
		{
		case 1:
			printf("游戏开始！\n");
			//游戏开始
			game();
			break;
		case 0:
			printf("游戏结束！请关闭窗口。\n");
			break;
		default:
			printf("输入错误！请重新输入\n");
			break;
		} 
	}while (slect);
	
		

	return 0;
}