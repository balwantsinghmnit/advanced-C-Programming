#include<stdio.h>

extern void funca();

int g;
static int h=10;


void main()
{
	int ma =0;
	ma = ma+g;
	printf("ma=%d\n",ma);
	funca();
	return;
} 
