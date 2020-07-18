#include<stdio.h>

struct windows
{
	int ia;
	int ib;
	char ca[10];
	int *p;
};

void main()
{
	int x = 100;
	int *q;
	struct windows varx = {24,56,"hello",&x};
	struct windows vary;
	printf("*varx.p = %d\n",*varx.p);
	printf("*varx.ca = %s\n",varx.ca);
	printf("*varx.ca[2] = %c\n",varx.ca[2]);
	return;
}