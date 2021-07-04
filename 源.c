#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x = 3, y = 3;
	switch (x % 2)//(1)3%2=1,选择case1
	{
	case 1:
		switch (y)//(2)y=3,没有case3，选择default
		{
		case 0:printf("first");
		case 1:printf("sencond"); break;
		default:printf("hello");//(3)没有break，继续解析，选择case2
		}
	case 2:
		printf("third");
	}
	getchar();
	return 0;
}