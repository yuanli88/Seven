#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//判断方法
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			//不是素数
//			return 0;
//	}
//	return 1;
//}
               //判断一个数是不是素数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = is_prime(n);
//	if (ret == 1)
//		printf("%d是素数", n);
//	else
//		printf("%d不是素数", n);
//	return 0;
//}
               //很多数字进行判断


//int main()
//{
//	int count = 0;
//	for (int j = 100; j <= 200; j++)
//	{
//		int ret = is_prime(j);
//		if (ret == 1)
//		{
//			printf("%d ", j);
//			count++;
//		}
//	}
//	printf("总共有%d个素数",count);
//	return 0;
//}