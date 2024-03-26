#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"

void game()
{
	char mine[ROWS][COLS];//存放布置好的信息（有雷的）  知道雷在哪的
	char show[ROWS][COLS];//存放排雷后的信息            不知雷在哪的

	Initboard(mine,ROWS,COLS,'0');//在没有放雷时 都是'0'零
	Initboard(show, ROWS, COLS,'*');//没有排雷时都是'*'
	//布置雷
	Setmine(mine, ROW, COL);
	//打印界面
	Displayboard(mine,ROW,COL);
	Displayboard(show,ROW,COL);
	//开始排查雷
	Findmine(show,mine, ROW, COL);
	
}
int main()
{
	int slect = 0;
	do
	{
		menu();
		scanf("%d", &slect);
		switch (slect)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出！");
			break;
		default:
			printf("选择非法，请重新输入:");
		}
			

	} while (slect);
	return 0;
}