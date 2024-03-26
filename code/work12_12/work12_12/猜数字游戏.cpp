//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
// ///////////////rand()%x = y  出来的结果y 不会大于x  因为如果大于x 能再除一次////////
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
//			printf("\n猜小小了\n");			
//			printf("已经猜了%d次了！\n", count);
//			left = a;
//			printf("范围是:%d--%d\n", left, right);
//			printf("再试一次吧:");
//			scanf("%d", &a);
//		}
//		else if (res < a)
//		{
//			count++;
//			printf("\n猜大大了\n");
//			printf("已经猜了%d次了！\n", count);
//			right = a;
//			printf("范围是:%d--%d\n", left, right);
//			printf("再试一次吧:");			
//			scanf("%d", &a);
//		}
//		else
//		{
//			printf("\n猜对了！");
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
//	printf("            请选择:");
//	scanf("%d",&input );
//	return input;
//}
//int main()
//{
//	int num = menu();
//    if (num == 1)
//		printf("\n\n游戏开始\n");
//	else
//	{
//		printf("\n下次来玩呀！");
//		return 1;
//	}
//	int a = 0;
//	printf("\n范围是:%d--%d", 1, 100);
//	printf("\n请输入一个数字：");
//	scanf("%d", &a);
////引入一个时间差，来控制rand（）的起始值
//	srand((unsigned int)time(NULL));
////生成一个随机数
//	int res = rand()%100+1;
////开始比较
//	game(res,a);
//	return 0;
//}
