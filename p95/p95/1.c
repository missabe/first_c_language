#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ӡ*��
int main()
{
	int h = 0;
	scanf("%d", &h);
	//�ϰ벿��
	int hs = h/2;
	int i = 1;
	int j = 1;
	for ( i = 1; i <= hs; i++)
	{
		for (j = 1; j <= hs - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//�°벿��
	for (i = 1; i <= h - hs; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= h - (2 * i); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}