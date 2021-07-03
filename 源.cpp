#include<stdio.h>
#include<stdlib.h>
int calc_peaches(int monkeys)
{
	//猴子总数
	int m = monkeys;
	//猴子每次待分桃子数
	int remain;
	int i = 1;
	while (1)
	{
		//最后一只猴子待分配的桃子数一定能被4整除
		remain = 4 * i;
		for (m = monkeys; m > 0; m--) {
			//每只猴子待分配的桃子数remain，满足（remain-1）%5=0
			if ((remain - 1) % 5 != 0)
				break;
			//除第一只猴子外，其他猴子待分配的桃子数remain，满足remain%4=0
			if (m > 1 && remain % 4 != 0)
				break;
			//不是第一只猴子时，计算出上一只猴子待分配的桃子数
			if (m > 1)
				remain = remain * 5 / 4 + 1;
			else
				break;
		}
		//待分配的桃子已满足monkeys只猴子的分配要求
		if (m == 1)
			break;
		//不满足时，则说明最后一只猴子待分配的桃子数不对，更换后再试
		else
			i++
			
			;
	}
	return remain;
}
int main(void)
{
	int monkeys;
	printf("输入猴子的数量：");
	scanf_s("%d", &monkeys);
	printf("桃子总数：%d\n", calc_peaches(monkeys));
}