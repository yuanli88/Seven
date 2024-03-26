//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
//#include <stdio.h>
//void MAX(int arr[])
//{
//    for (int a = 0; a < 7; a++)
//    {
//        for (int j = 0; j < 7; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = 0;
//                tmp = arr[j + 1];
//                arr[j + 1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//
//   
//    arr[0] = 0;
//}
//void MIN(int arr[])
//{
//    int j = 1;
//    for (int j = 0; j < 7; j++)
//    {
//        if (arr[j] > arr[j + 1])
//        {
//            if (arr[j] != 0 && arr[j + 1] != 0)
//            {
//                int tmp = 0;
//                tmp = arr[j + 1];
//                arr[j + 1] = arr[j];
//                arr[j] = tmp;
//            }
//
//            
//        }
//    }
//    arr[0] = 0;
//}
//int Average(int arr[])
//{
//    int sum = 0;
//    for (int j = 0; j <= 4; j++)
//    {
//        sum = sum + arr[j];
//    }
//    return sum / 7;
//}
//int main()
//{
//    int arr[7] = { 0 };
//    for (int i = 0; i < 7; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    MAX(arr);
//    //MIN(arr);
//    printf("%d", Average(arr));
//
//    return 0;
//}