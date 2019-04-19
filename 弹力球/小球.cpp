// 在坐标(x,y)处输出一个小球
#include <stdio.h>
#include "iostream"
#include"stdlib.h"
using namespace std;
void seconds(double time)
{
		int x = 1;
		while (x < 1000000000*time) { x++;}
}
void main()
{
	int i, j;
	int x = 1;
	int y = 1;
	int bottom = 10;
	int right =15;
	int v1 = 1; 
	int v2 = 1;
	while (1)
	{
		x = x + v1;
		y = y + v2;
		system("cls");
		//for (i = 0; i <bottom; i++)
		//{
		//	for (j = 0; j <= right; j++)
		//	{
		//		if (j == 0 || j == right)
		//		{
		//			printf("|");
		//		}
		//		else
		//		{
		//			printf(" ");
		//		}
		//	}
		//	printf("\n");
		//}
		//seconds(0.1);
		//在第x行，第y列输出小球。
		for (i = 0; i < x; i++)// 输出小球上面的空行
		{
			printf("\n");
		}
		for (j = 0; j < y; j++)// 输出小球左边的空格
		{
			printf(" ");
		}
		printf("o");  // 输出小球o
		printf("\n");
		seconds(0.1);
		if (x == bottom) { v1 = -v1; }
		if (x == 0) { v1 = -v1; }
		if (y == right) { v2 = -v2; }
		if (y == 0) { v2 = -v2; }
		
		
			
		

	}
	system("pause");
}