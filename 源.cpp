#include<stdio.h>
#include<stdlib.h>
int calc_peaches(int monkeys)
{
	//��������
	int m = monkeys;
	//����ÿ�δ���������
	int remain;
	int i = 1;
	while (1)
	{
		//���һֻ���Ӵ������������һ���ܱ�4����
		remain = 4 * i;
		for (m = monkeys; m > 0; m--) {
			//ÿֻ���Ӵ������������remain�����㣨remain-1��%5=0
			if ((remain - 1) % 5 != 0)
				break;
			//����һֻ�����⣬�������Ӵ������������remain������remain%4=0
			if (m > 1 && remain % 4 != 0)
				break;
			//���ǵ�һֻ����ʱ���������һֻ���Ӵ������������
			if (m > 1)
				remain = remain * 5 / 4 + 1;
			else
				break;
		}
		//�����������������monkeysֻ���ӵķ���Ҫ��
		if (m == 1)
			break;
		//������ʱ����˵�����һֻ���Ӵ���������������ԣ�����������
		else
			i++
			
			;
	}
	return remain;
}
int main(void)
{
	int monkeys;
	printf("������ӵ�������");
	scanf_s("%d", &monkeys);
	printf("����������%d\n", calc_peaches(monkeys));
}