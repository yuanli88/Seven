#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"

void game()
{
	char mine[ROWS][COLS];//��Ų��úõ���Ϣ�����׵ģ�  ֪�������ĵ�
	char show[ROWS][COLS];//������׺����Ϣ            ��֪�����ĵ�

	Initboard(mine,ROWS,COLS,'0');//��û�з���ʱ ����'0'��
	Initboard(show, ROWS, COLS,'*');//û������ʱ����'*'
	//������
	Setmine(mine, ROW, COL);
	//��ӡ����
	Displayboard(mine,ROW,COL);
	Displayboard(show,ROW,COL);
	//��ʼ�Ų���
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
			printf("��Ϸ�˳���");
			break;
		default:
			printf("ѡ��Ƿ�������������:");
		}
			

	} while (slect);
	return 0;
}