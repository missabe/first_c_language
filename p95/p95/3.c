#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct S
{
	int a;
	int b;
};


int main()
{
	struct S a, * p = &a;
	a.a = 99;
	printf("%d", a.a);//��������(*p).a,p->a;������*p.a
}

/*ʵ�����:p[��ַ]-->[a] [a]�а���((int a)(int b))*/