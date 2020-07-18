#include<stdio.h>

struct windows
{
	int ia;
	int ib;
	char ca;
	int *p;
};

void main()
{
	int x = 100;
	int *q;
	struct windows varx = {20,30,'c'};
	struct windows vary;

	q = &x;
	varx.p = &varx.ia;
	varx.p = &x;

	printf("*q = %d\n",*q);
	printf("*varx.p = %d\n",*varx.p);
	return;
}