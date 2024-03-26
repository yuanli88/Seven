//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
//#include <stdio.h>
////计算 1/1 + 1/（1-3） + 1/（1-3+5）....一直到n
//
//int p(int i)
//{
//    int pull = 0;
//    int count = 1;
//    int h = 1;
//    for (int j = 1; j <= i; j++)
//    {
//        if (count % 2 == 0)
//        {
//            h = -h;
//        }
//        else if (h < 0)
//        {
//            h = -h;
//        }
//        pull = pull + h * (2 * j - 1);
//        count++;
//    }
//    return pull;
//}
//int main()
//{
//    double sum = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        sum = sum + 1.0 / p(i);
//    }
//    printf("%.3lf", sum);
//    return 0;
//}