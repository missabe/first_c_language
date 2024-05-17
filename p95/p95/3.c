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
	printf("%d", a.a);//还可以是(*p).a,p->a;不能是*p.a
}

/*实际情况:p[地址]-->[a] [a]中包含((int a)(int b))*/