#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x = 3, y = 3;
	switch (x % 2)//(1)3%2=1,ѡ��case1
	{
	case 1:
		switch (y)//(2)y=3,û��case3��ѡ��default
		{
		case 0:printf("first");
		case 1:printf("sencond"); break;
		default:printf("hello");//(3)û��break������������ѡ��case2
		}
	case 2:
		printf("third");
	}
	getchar();
	return 0;
}