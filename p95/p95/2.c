#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ˮ����,һԪһƿ��ˮ,������ƿ���Ի�һƿ��ˮ,��20Ԫ,�����տ��Ը㵽����ƿ��ˮ
int main()
{
	int money = 0;
	scanf("%d", &money);

	int total = money;
	int empty = money;

	//�û�
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;//�������л��еĿ�ƿ��
	}
	if (money > 0)
		printf("%d", total);
	else if (money == 0)
		printf("%d\nûǮ�������ˮ",0);

	return 0;
}