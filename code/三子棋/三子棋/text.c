#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"
int row = ROW;
int col = COL;
void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, row, col);
	//��ӡ����
	Displayboard(board, row, col);
	while (1)
	{
		char ret = 0;
		Playmove(board, row, col);
		Displayboard(board, row, col);
		//�ж���Ӯ
		ret = Iswin(board,row,col);
		if (ret == 'O')
		{
			printf("***���ʤ��***\n");
			break;
		}
		else if (ret == 'q')
		{
			printf("***ƽ��***\n");
			break;
		}
		Computermove(board, row, col);
		Displayboard(board, row, col);
		//�ж���Ӯ
		ret = Iswin(board, row, col);
		if (ret == 'X')
		{
			printf("***����ʤ��***\n");
			break;
		}
		else if (ret == 'q')
		{
			printf("***ƽ��***\n");
			break;
		}

	}
}
int main()
{

	int slect = 0;
	//ѡ�����;
	do
	{
		meun();
			scanf("%d", &slect);
		switch (slect)
		{
		case 1:
			printf("��Ϸ��ʼ��\n");
			//��Ϸ��ʼ
			game();
			break;
		case 0:
			printf("��Ϸ��������رմ��ڡ�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		} 
	}while (slect);
	
		

	return 0;
}