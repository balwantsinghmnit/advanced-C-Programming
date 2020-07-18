#include<stdio.h>

extern void funca();

extern int ga;
static int h=10;


void main()
{
	int ma =0;
	ma = ma+ga;
	printf("ma=%d\n",ma);
	funca();
	return;
} 
