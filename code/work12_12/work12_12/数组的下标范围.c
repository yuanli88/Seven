#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//当要打印的下标超出了数组的范围，就会出现问题
// 在c语言中 没有-1 这种下标
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%d", arr[5]);//-858993460
//	printf("%d", arr[-1]);//-858993460
//	printf("%d", arr[6]); //-858993460
//	return 0;
//}
