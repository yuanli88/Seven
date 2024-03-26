#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>                                  
/////////////////////用循环的方法////////////////////
//int main()
//{
//	char arr[] = "abcdfg";
//	int len = strlen(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", len);// 6 strlen 求字符串长度时 ，会自动把\0不算入
//	printf("%d\n", sz); //7 sizeof 会把\0计算进所求的长度
//	int left = 0;
//	int right = len - 1;
//	int tmp = 0;  
//	while (left < right)  
//	{
//	 	tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n",arr);
//	return 0;
//}
//////////////////////////////////递归的方法///////////////////////////////////////////////
//int my_strlen(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
//////////最难想到的地方////////////
//void reverse(char* str)
//{
//	int len = my_strlen(str);  //7
//	char tmp = *str; //将第一个字符存到临时变量
//	*str = *(str + len - 1);//把最后一个字符放到第一个位置
//	*(str + len - 1) = '\0';//最后一个位置变成\0 来终止字符串
//	if(len > 2)
//		reverse(str+1);//把新的字符串继续进入函数
//	*(str + len - 1) = tmp;//把第一个字符放进最后一个地方
//}
// 
// 
//int main ()
//{
//	char arr[] = "放入要逆序的字符串";
//	printf("%s\n", arr);
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}
///////////////////////////////////////递归的第二种写法////////////////////////////////////
//void reverse(char arr[],int left,int right)
//{
//	int tmp = 0;
//	tmp = arr[right];
//	arr[right] = arr[left];
//	arr[left] = tmp;
//	left++;
//	right--;
//	if(left<right)
//		reverse(arr, left, right);
//
//}
//int main()
//{
//	int left = 0;
//	int right = 0;
//	char arr[] = "abcd";
//	int len = strlen(arr);
//	right = len - 1;
//	reverse(arr, left, right);
//	printf("%s\n", arr);
//
//}
//////////////////////////////////////////////////////////////////////////////////////////