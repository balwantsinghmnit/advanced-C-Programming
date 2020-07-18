#include<stdio.h>

struct windows
{
	int ia;
	int ib;
	char ca;
};

void main()
{
	int x = 100;
	struct windows varx = {20,30,'c'};
	struct windows vary;

	varx.ia = x;
	++varx.ia;
	vary = varx;
	printf("vary.ib = %d\n",vary.ib);
	return;
}