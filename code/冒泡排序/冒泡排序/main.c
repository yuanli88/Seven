#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>


int main()
{
	int arr[] = { 1,2,3,4,5,6};
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = sz -1; j >i; j--)
		{
			if (arr[j] > arr[j-1])
			{
				int tmp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = tmp;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
// 
//int main()
//{
//	int arr[] = { 1,2,4,3,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int j = sz-1;
//		for (j = sz - j-1; j < 0; j--)
//		{
//			if (arr[sz-j-1] < arr[sz-j])
//			{
//				int tmp = arr[sz-j-1];
//				arr[sz-j] = arr[sz-j-1];
//				arr[sz-j] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}