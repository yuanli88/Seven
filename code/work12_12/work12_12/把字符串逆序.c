#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>                                  
/////////////////////��ѭ���ķ���////////////////////
//int main()
//{
//	char arr[] = "abcdfg";
//	int len = strlen(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", len);// 6 strlen ���ַ�������ʱ �����Զ���\0������
//	printf("%d\n", sz); //7 sizeof ���\0���������ĳ���
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
//////////////////////////////////�ݹ�ķ���///////////////////////////////////////////////
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
//////////�����뵽�ĵط�////////////
//void reverse(char* str)
//{
//	int len = my_strlen(str);  //7
//	char tmp = *str; //����һ���ַ��浽��ʱ����
//	*str = *(str + len - 1);//�����һ���ַ��ŵ���һ��λ��
//	*(str + len - 1) = '\0';//���һ��λ�ñ��\0 ����ֹ�ַ���
//	if(len > 2)
//		reverse(str+1);//���µ��ַ����������뺯��
//	*(str + len - 1) = tmp;//�ѵ�һ���ַ��Ž����һ���ط�
//}
// 
// 
//int main ()
//{
//	char arr[] = "����Ҫ������ַ���";
//	printf("%s\n", arr);
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}
///////////////////////////////////////�ݹ�ĵڶ���д��////////////////////////////////////
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