#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h.>
#include <stdlib.h>
#include <time.h>
//1随机数的生成 （随机数是double类型）
//4k = Π  k是圆的面积/正方形的面积
//根据点的数量 相似于面积
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
	x = ((double)rand() / RAND_MAX); //范围是 0-1
	y = ((double)rand() / RAND_MAX); //由于   %  两边不能有小数 ，导致只能用这种方法来确定范围
		if (x * x + y * y <= r * r)
		{
			Insidepoint++;
		}
	}
	pi = 4.0*(Insidepoint / Allpoint);
	printf("%.10lf", pi);
	return 0;
}                  