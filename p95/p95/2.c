#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//喝汽水问题,一元一瓶汽水,两个空瓶可以换一瓶汽水,给20元,问最终可以搞到多少瓶汽水
int main()
{
	int money = 0;
	scanf("%d", &money);

	int total = money;
	int empty = money;

	//置换
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;//计算手中还有的空瓶数
	}
	if (money > 0)
		printf("%d", total);
	else if (money == 0)
		printf("%d\n没钱还想喝汽水",0);

	return 0;
}