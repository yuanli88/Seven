#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h.>
#include <stdlib.h>
#include <time.h>
//1����������� ���������double���ͣ�
//4k = ��  k��Բ�����/�����ε����
//���ݵ������ ���������
int main()
{
	double Insidepoint = 0;
	double Allpoint = 100000000.0;
	double pi = 0;
	srand((unsigned int)time(NULL));
	double x = 0;
	double y = 0;
	double r = 1;
	double a = 0;
	
	for(int i = 0;i<=Allpoint;i++)
	{	 
	x = ((double)rand() / RAND_MAX); //��Χ�� 0-1
	y = ((double)rand() / RAND_MAX); //����   %  ���߲�����С�� ������ֻ�������ַ�����ȷ����Χ
		if (x * x + y * y <= r * r)
		{
			Insidepoint++;
		}
	}
	pi = 4.0*(Insidepoint / Allpoint);
	printf("%.10lf", pi);
	return 0;
}                  