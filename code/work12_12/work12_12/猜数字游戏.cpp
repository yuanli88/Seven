//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
// ///////////////rand()%x = y  �����Ľ��y �������x  ��Ϊ�������x ���ٳ�һ��////////
//void game(int res,int a)
//{
//	int left = 1;
//	int right = 100;
//	int count = 0;
//	while (1)
//	{
//		if (res > a)
//		{
//			count++;
//			printf("\n��СС��\n");			
//			printf("�Ѿ�����%d���ˣ�\n", count);
//			left = a;
//			printf("��Χ��:%d--%d\n", left, right);
//			printf("����һ�ΰ�:");
//			scanf("%d", &a);
//		}
//		else if (res < a)
//		{
//			count++;
//			printf("\n�´����\n");
//			printf("�Ѿ�����%d���ˣ�\n", count);
//			right = a;
//			printf("��Χ��:%d--%d\n", left, right);
//			printf("����һ�ΰ�:");			
//			scanf("%d", &a);
//		}
//		else
//		{
//			printf("\n�¶��ˣ�");
//			break;
//		}
//	}
//}
//int menu()
//{
//	int input = 0;
//	printf("#################################\n");
//	printf("#########1.play   0.exit#########\n");
//	printf("#################################\n");
//	printf("            ��ѡ��:");
//	scanf("%d",&input );
//	return input;
//}
//int main()
//{
//	int num = menu();
//    if (num == 1)
//		printf("\n\n��Ϸ��ʼ\n");
//	else
//	{
//		printf("\n�´�����ѽ��");
//		return 1;
//	}
//	int a = 0;
//	printf("\n��Χ��:%d--%d", 1, 100);
//	printf("\n������һ�����֣�");
//	scanf("%d", &a);
////����һ��ʱ��������rand��������ʼֵ
//	srand((unsigned int)time(NULL));
////����һ�������
//	int res = rand()%100+1;
////��ʼ�Ƚ�
//	game(res,a);
//	return 0;
//}
