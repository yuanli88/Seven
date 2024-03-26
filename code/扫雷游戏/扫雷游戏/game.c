#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"
void menu()
{
	printf("********************************\n");
	printf("************ 1.Play ************\n");
	printf("************ 0.Exit ************\n");
	printf("********************************\n");
	printf("请选择--是否游戏>>");
}
//传参用了一个  set  让两个初始化只用一个函数解决 
void Initboard(char mine[ROWS][COLS], int rows, int cols,char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			mine[i][j] = set;
		}
	}               
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	printf("------扫雷游戏------");
	printf("\n");
	//侧边的坐标
	for (int i = 0; i < row+1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1; i < row+1; i++)
	{
		//横边的坐标
		printf("%d ", i);
		//放数据
		for (int j = 1; j < col+1; j++)
		{
			printf("%c ", board[i][j]);
		} 
		printf("\n");
	}
}
//开始放雷
void Setmine(char board[ROWS][COLS], int row, int col)
{
	srand((unsigned int)time(NULL));
	int count = mine_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
		}
		count--;
	}
}
void Findmine(char show[ROWS][COLS],char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int a = 0;
	while (Is_win(show, ROW, COL) != mine_count)//判断是否排雷完毕，再进入游戏，
		                                        //当没有排查雷的地方加起来时雷的数量
	{
		printf("进行标记('1'),否则为('0')\n");
		printf("亲输入选择及坐标 <选择 x y> :");
		scanf( "%d %d", &y, &x);
				if (show[x][y] != '*')
					printf("该坐标已经排查过了，请重新输入\n");
				else
				{
					if (x >= 1 && x <= row && y >= 1 && y <= col)
					{
						if (mine[x][y] == '1')
						{
							Displayboard(mine, ROW, COL);
							printf("-----------------你踩中雷了-----------------\n");
							break;
						}
						else
						{
							Seek_rule(show,mine,ROW,COL,x,y);
							//int ret = get_mine_count(mine, x, y);//显示周围的雷数量
							//利用ascil的特性 ，将 字符 转成 整形
							Displayboard(show, ROW, COL);
						}
						
					}
					else
						printf("输入超出范围，请重新输入！");
				}
				
	}
		
	
	if (Is_win(show, ROW, COL) == mine_count)
	{
		printf("！！！！！！你胜利了！！！！！！\n");
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	for (int i = x-1; i < x+2; i++)
	{
		for (int j = y-1; j < y+2; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}
//判断是否赢
int Is_win(char show[ROWS][COLS],int row,int col)
{
	int count = 0;
	for (int i = 1; i < row + 1; i++)
	{
		for (int j = 1; j < col + 1; j++)
		{
			if (show[i][j] == '*')
			{				
				count++;
			}
		}
	}
	return count;
}

void Signal(char show[ROWS][COLS],int x,int y)
{
	if (show[x][y] != '*' &&  show[x][y] == '@')
	{
		printf("该坐标已经被排查，无法标记\n");
	}
	else if (show[x][y] == '@')
	{
		printf("该坐标已经被标记了，无法重复标记！\n");
	}
	else
	{
		show[x][y] = '@';
		Displayboard(show, ROW, COL);
	}
}

int Seek_rule(char show[ROWS][COLS], char mine[ROWS][COLS],int row,int col, int x,int y)
{
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		int num = get_mine_count(mine, x, y);

		if (num == 0)
		{
			show[x][y] = ' ';

			for (int i = x - 1; i < x + 1; i++)
			{
				for (int j = y - 1; j < y + 1; j++)
				{
					if (show[i][j] != ' ')
					{
						Seek_rule(show, mine, row,col,i,j);
					}

				}
			}
		}
		else
		{
			show[x][y] = num + '0';
		}
	}
	


	//判断周围是否有雷（有一个雷就不会向外扩展）
	//四周没有雷 四周变成‘ ’
	//再多四周的四周进行判断是否有雷；
	//有雷出数字，无雷扩展；
}
