#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//冒泡排序的本质：相邻两个元素进行大小对比，然后满足大小关系就就换位置。 
//  当一轮位置交换完成后  最后一个元素就确定位置不再变化。循环次数就会减少一次。
#include <stdio.h>
// 数组的传参 实际上传的是第一个元素的指针
//void bubble_sort(int arr[],int sz)
//{
//	
//	for (int i = sz-1; i > 0; i--)
//	{
//		for (int j = 0; j < sz-(sz - i); j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1,5,4,7,8,3,9,2,0,6,10,8,54,34,223,66,745,5,3,2,6,6,6,66 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
