#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"
void menu()
{
	printf("********************************\n");
	printf("************ 1.Play ************\n");
	printf("************ 0.Exit ************\n");
	printf("********************************\n");
	printf("��ѡ��--�Ƿ���Ϸ>>");
}
//��������һ��  set  ��������ʼ��ֻ��һ��������� 
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
	printf("------ɨ����Ϸ------");
	printf("\n");
	//��ߵ�����
	for (int i = 0; i < row+1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1; i < row+1; i++)
	{
		//��ߵ�����
		printf("%d ", i);
		//������
		for (int j = 1; j < col+1; j++)
		{
			printf("%c ", board[i][j]);
		} 
		printf("\n");
	}
}
//��ʼ����
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
	while (Is_win(show, ROW, COL) != mine_count)//�ж��Ƿ�������ϣ��ٽ�����Ϸ��
		                                        //��û���Ų��׵ĵط�������ʱ�׵�����
	{
		printf("���б��('1'),����Ϊ('0')\n");
		printf("������ѡ������ <ѡ�� x y> :");
		scanf( "%d %d", &y, &x);
				if (show[x][y] != '*')
					printf("�������Ѿ��Ų���ˣ�����������\n");
				else
				{
					if (x >= 1 && x <= row && y >= 1 && y <= col)
					{
						if (mine[x][y] == '1')
						{
							Displayboard(mine, ROW, COL);
							printf("-----------------���������-----------------\n");
							break;
						}
						else
						{
							Seek_rule(show,mine,ROW,COL,x,y);
							//int ret = get_mine_count(mine, x, y);//��ʾ��Χ��������
							//����ascil������ ���� �ַ� ת�� ����
							Displayboard(show, ROW, COL);
						}
						
					}
					else
						printf("���볬����Χ�����������룡");
				}
				
	}
		
	
	if (Is_win(show, ROW, COL) == mine_count)
	{
		printf("��������������ʤ���ˣ�����������\n");
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
//�ж��Ƿ�Ӯ
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
		printf("�������Ѿ����Ų飬�޷����\n");
	}
	else if (show[x][y] == '@')
	{
		printf("�������Ѿ�������ˣ��޷��ظ���ǣ�\n");
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
	


	//�ж���Χ�Ƿ����ף���һ���׾Ͳ���������չ��
	//����û���� ���ܱ�ɡ� ��
	//�ٶ����ܵ����ܽ����ж��Ƿ����ף�
	//���׳����֣�������չ��
}
